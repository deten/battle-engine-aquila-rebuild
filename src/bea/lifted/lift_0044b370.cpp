// lifted from 0044b370 (FUN_0044b370, 581 bytes, 198 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0044b370(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0044b370;
L_0044b370:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b373:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0044b374:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0044b375:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044b376:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0044b378:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044b379:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0044b37c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044b37e:  // jne 0x44b39c
    if (!f.zf) goto L_0044b39c;
L_0044b380:  // push 0x628d94
    t0 = 0x628d94u; esp -= 4; M32(esp) = t0;
L_0044b385:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0044b38a:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b38fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b38f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b392:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044b393:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044b394:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0044b395:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0044b396:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b399:  // ret 0x18
    c->target = M32(esp); esp += 28u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0044b39c:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0044b3a0:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0044b3a2:  // je 0x44b5ab
    if (f.zf) goto L_0044b5ab;
L_0044b3a8:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0044b3ac:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0044b3af:  // fadd dword ptr [0x5db294]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db294u)));
L_0044b3b5:  // fcomp dword ptr [ecx]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx)));
    lpop(x);
L_0044b3b7:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0044b3b9:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0044b3bd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044b3bf:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0044b3c2:  // jne 0x44b3f3
    if (!f.zf) goto L_0044b3f3;
L_0044b3c4:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_0044b3c6:  // fcomp qword ptr [0x5d87b0]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d87b0u)));
    lpop(x);
L_0044b3cc:  // mov ebx, dword ptr [esi + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_0044b3cf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044b3d1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0044b3d4:  // je 0x44b3e8
    if (f.zf) goto L_0044b3e8;
L_0044b3d6:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0044b3d9:  // fadd dword ptr [0x5d8570]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8570u)));
L_0044b3df:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0044b3e3:  // jmp 0x44b522
    goto L_0044b522;
L_0044b3e8:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_0044b3ea:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0044b3ee:  // jmp 0x44b522
    goto L_0044b522;
L_0044b3f3:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_0044b3f5:  // fcomp dword ptr [0x5db290]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db290u)));
    lpop(x);
L_0044b3fb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044b3fd:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044b400:  // je 0x44b5ab
    if (f.zf) goto L_0044b5ab;
L_0044b406:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_0044b408:  // fsub dword ptr [esi + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x8u)));
L_0044b40b:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b40e:  // fsub dword ptr [0x5d8580]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8580u)));
L_0044b414:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_0044b41a:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_0044b41d:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b422u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b422:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0044b426:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0044b42a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b42d:  // cmp ecx, 0xc6
    t0 = lsub<32>(ecx, 0xc6u, f);
L_0044b433:  // jl 0x44b513
    if ((f.sf != f.of)) goto L_0044b513;
L_0044b439:  // mov eax, dword ptr [esi + 0x25b0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x25b0u)));
L_0044b43f:  // mov edi, dword ptr [esi + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0044b442:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0044b445:  // cmp edi, ecx
    t0 = lsub<32>(edi, ecx, f);
L_0044b447:  // jge 0x44b466
    if ((f.sf == f.of)) goto L_0044b466;
L_0044b449:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0044b44b:  // lea edx, [edx + edi*4]
    edx = (uint32_t)((uint32_t)(edx + edi * 4u));
L_0044b44e:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0044b450:  // fld dword ptr [eax + 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + 0x10u)));
L_0044b453:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_0044b457:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044b459:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044b45c:  // je 0x44b466
    if (f.zf) goto L_0044b466;
L_0044b45e:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0044b45f:  // add edx, 4
    t0 = ladd<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0044b462:  // cmp edi, ecx
    t0 = lsub<32>(edi, ecx, f);
L_0044b464:  // jl 0x44b44e
    if ((f.sf != f.of)) goto L_0044b44e;
L_0044b466:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0044b46a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044b46c:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0044b46e:  // jne 0x44b4ce
    if (!f.zf) goto L_0044b4ce;
L_0044b470:  // mov ebx, dword ptr [esi + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_0044b473:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0044b475:  // je 0x44b47f
    if (f.zf) goto L_0044b47f;
L_0044b477:  // mov ecx, dword ptr [ebx + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_0044b47a:  // mov dword ptr [esi + 0x28], ecx
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(ecx);
L_0044b47d:  // jmp 0x44b491
    goto L_0044b491;
L_0044b47f:  // push 0x628d60
    t0 = 0x628d60u; esp -= 4; M32(esp) = t0;
L_0044b484:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0044b489:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b48eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b48e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b491:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0044b493:  // je 0x44b5ab
    if (f.zf) goto L_0044b5ab;
L_0044b499:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0044b49d:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0044b4a1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0044b4a2:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0044b4a6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0044b4a7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044b4a8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044b4a9:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0044b4ab:  // call 0x4de1f0
    t0 = 0x004de1f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b4b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b4b0:  // mov ecx, dword ptr [esi + 0x25b0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x25b0u)));
L_0044b4b6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0044b4b7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044b4b8:  // call 0x424260
    t0 = 0x00424260u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b4bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b4bd:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0044b4c0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044b4c1:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044b4c2:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_0044b4c5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044b4c6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0044b4c7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0044b4c8:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b4cb:  // ret 0x18
    c->target = M32(esp); esp += 28u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0044b4ce:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0044b4d2:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0044b4d6:  // mov dx, word ptr [esp + 0x1c]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x1cu))) & 0xffffu);
L_0044b4db:  // fstp dword ptr [eax + 0x10]
    F32((uint32_t)(eax + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0044b4de:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0044b4e0:  // mov word ptr [eax + 4], dx
    M16((uint32_t)(eax + 0x4u)) = (uint16_t)((edx & 0xffffu));
L_0044b4e4:  // mov word ptr [eax + 8], 1
    M16((uint32_t)(eax + 0x8u)) = (uint16_t)(0x1u);
L_0044b4ea:  // je 0x44b4f5
    if (f.zf) goto L_0044b4f5;
L_0044b4ec:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044b4ed:  // lea ecx, [eax + 0xc]
    ecx = (uint32_t)((uint32_t)(eax + 0xcu));
L_0044b4f0:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b4f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b4f5:  // mov ecx, dword ptr [esi + 0x25b0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x25b0u)));
L_0044b4fb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0044b4fc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044b4fd:  // call 0x424260
    t0 = 0x00424260u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b502u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b502:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0044b505:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044b506:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044b507:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_0044b50a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044b50b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0044b50c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0044b50d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b510:  // ret 0x18
    c->target = M32(esp); esp += 28u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0044b513:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_0044b516:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0044b518:  // mov ecx, 0xc8
    ecx = (uint32_t)(0xc8u);
L_0044b51d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0044b51e:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0044b520:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_0044b522:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0044b526:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044b528:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0044b52a:  // jne 0x44b56a
    if (!f.zf) goto L_0044b56a;
L_0044b52c:  // mov edi, dword ptr [esi + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_0044b52f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0044b531:  // je 0x44b53b
    if (f.zf) goto L_0044b53b;
L_0044b533:  // mov edx, dword ptr [edi + 0x10]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_0044b536:  // mov dword ptr [esi + 0x28], edx
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(edx);
L_0044b539:  // jmp 0x44b54d
    goto L_0044b54d;
L_0044b53b:  // push 0x628d60
    t0 = 0x628d60u; esp -= 4; M32(esp) = t0;
L_0044b540:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0044b545:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b54au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b54a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b54d:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0044b54f:  // je 0x44b5ab
    if (f.zf) goto L_0044b5ab;
L_0044b551:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0044b555:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0044b559:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044b55a:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0044b55e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0044b55f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044b560:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0044b561:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0044b563:  // call 0x4de1f0
    t0 = 0x004de1f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b568u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b568:  // jmp 0x44b591
    goto L_0044b591;
L_0044b56a:  // mov cx, word ptr [esp + 0x1c]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x1cu))) & 0xffffu);
L_0044b56f:  // mov word ptr [eax + 8], 1
    M16((uint32_t)(eax + 0x8u)) = (uint16_t)(0x1u);
L_0044b575:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0044b579:  // mov word ptr [eax + 4], cx
    M16((uint32_t)(eax + 0x4u)) = (uint16_t)((ecx & 0xffffu));
L_0044b57d:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0044b581:  // fstp dword ptr [eax + 0x10]
    F32((uint32_t)(eax + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0044b584:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0044b586:  // je 0x44b591
    if (f.zf) goto L_0044b591;
L_0044b588:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044b589:  // lea ecx, [eax + 0xc]
    ecx = (uint32_t)((uint32_t)(eax + 0xcu));
L_0044b58c:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b591u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b591:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0044b595:  // lea ecx, [ebx + 1]
    ecx = (uint32_t)((uint32_t)(ebx + 0x1u));
L_0044b598:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044b599:  // lea eax, [edx + ecx*2]
    eax = (uint32_t)((uint32_t)(edx + ecx * 2u));
L_0044b59c:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0044b59e:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0044b5a1:  // add ecx, esi
    t0 = ladd<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0044b5a3:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044b5a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044b5a8:  // inc dword ptr [esi + 0x18]
    t0 = linc<32>(M32((uint32_t)(esi + 0x18u)), f);
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(t0);
L_0044b5ab:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044b5ac:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044b5ad:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0044b5ae:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0044b5af:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044b5b2:  // ret 0x18
    c->target = M32(esp); esp += 28u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0044b370, 0044b370)
