// lifted from 004583c0 (FUN_004583c0, 270 bytes, 84 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004583c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004583c0;
L_004583c0:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004583c3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004583c4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004583c5:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004583c7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004583c8:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004583ca:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004583cc:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004583cf:  // mov dword ptr [esp + 0x10], 0x42480000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x42480000u);
L_004583d7:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004583d9:  // mov dword ptr [esp + 0xc], 0x42c80000
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x42c80000u);
L_004583e1:  // jle 0x4584c7
    if ((f.zf || f.sf != f.of)) goto L_004584c7;
L_004583e7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004583e8:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_004583ec:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004583ef:  // mov ebp, 0xffffaf3f
    ebp = (uint32_t)(0xffffaf3fu);
L_004583f4:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004583f6:  // jne 0x458428
    if (!f.zf) goto L_00458428;
L_004583f8:  // fild dword ptr [esi + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0xcu)));
L_004583fb:  // fmul dword ptr [0x5d8c1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c1cu)));
L_00458401:  // fsin 
    ST(0) = lfsin(ST(0));
L_00458403:  // fmul dword ptr [0x5db3c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3c0u)));
L_00458409:  // fadd dword ptr [0x5db4d4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4d4u)));
L_0045840f:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00458413:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00458417:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00458419:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0045841c:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0045841e:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00458421:  // lea ebp, [ecx + eax - 0x1000000]
    ebp = (uint32_t)((uint32_t)(ecx + eax + 0xff000000u));
L_00458428:  // mov edx, dword ptr [esi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0045842b:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0045842f:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00458431:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00458434:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_00458438:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0045843a:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_0045843e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00458440:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00458441:  // mov ecx, dword ptr [eax + edi*4]
    ecx = (uint32_t)(M32((uint32_t)(eax + edi * 4u)));
L_00458444:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_0045844a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0045844d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045844e:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00458453u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00458453:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00458457:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045845a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045845f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00458460:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00458464:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00458465:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045846a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0045846f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00458471:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00458472:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00458473:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00458475:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045847au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045847a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0045847c:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00458481u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00458481:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00458482:  // cmp ebx, 0xf
    t0 = lsub<32>(ebx, 0xfu, f);
L_00458485:  // jne 0x4584a1
    if (!f.zf) goto L_004584a1;
L_00458487:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0045848b:  // fadd dword ptr [0x5db4d0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4d0u)));
L_00458491:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00458493:  // mov dword ptr [esp + 0x10], 0x42c80000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x42c80000u);
L_0045849b:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0045849f:  // jmp 0x4584af
    goto L_004584af;
L_004584a1:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004584a5:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_004584ab:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004584af:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004584b3:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004584b6:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004584b7:  // add ecx, 2
    t0 = ladd<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004584ba:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004584bc:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004584c0:  // jl 0x4583ec
    if ((f.sf != f.of)) goto L_004583ec;
L_004584c6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004584c7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004584c8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004584c9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004584ca:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004584cd:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004583c0, 004583c0)
