// lifted from 004742a0 (FUN_004742a0, 10112 bytes, 2797 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004742a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004742a0;
L_004742a0:  // sub esp, 0x168
    t0 = lsub<32>(esp, 0x168u, f);
    esp = (uint32_t)(t0);
L_004742a6:  // mov eax, dword ptr [esp + 0x16c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x16cu)));
L_004742ad:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004742ae:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004742b0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004742b1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004742b2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004742b3:  // mov esi, dword ptr [edx]
    esi = (uint32_t)(M32((uint32_t)(edx)));
L_004742b5:  // mov dword ptr [esp + 0x70], esi
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(esi);
L_004742b9:  // mov esi, dword ptr [edx + 4]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004742bc:  // mov dword ptr [esp + 0x74], esi
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(esi);
L_004742c0:  // mov esi, dword ptr [edx + 8]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004742c3:  // mov dword ptr [esp + 0x78], esi
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(esi);
L_004742c7:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004742ca:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_004742ce:  // lea edx, [eax + 0x20]
    edx = (uint32_t)((uint32_t)(eax + 0x20u));
L_004742d1:  // mov esi, edx
    esi = (uint32_t)(edx);
L_004742d3:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_004742d5:  // mov dword ptr [esp + 0x118], edi
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(edi);
L_004742dc:  // mov edi, dword ptr [esi + 4]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004742df:  // mov dword ptr [esp + 0x11c], edi
    M32((uint32_t)(esp + 0x11cu)) = (uint32_t)(edi);
L_004742e6:  // mov edi, dword ptr [esi + 8]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004742e9:  // mov dword ptr [esp + 0x120], edi
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(edi);
L_004742f0:  // mov esi, dword ptr [esi + 0xc]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004742f3:  // mov dword ptr [esp + 0x124], esi
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(esi);
L_004742fa:  // lea esi, [eax + 0x10]
    esi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004742fd:  // mov edi, esi
    edi = (uint32_t)(esi);
L_004742ff:  // mov ebx, dword ptr [edi]
    ebx = (uint32_t)(M32((uint32_t)(edi)));
L_00474301:  // mov dword ptr [esp + 0x138], ebx
    M32((uint32_t)(esp + 0x138u)) = (uint32_t)(ebx);
L_00474308:  // mov ebx, dword ptr [edi + 4]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0047430b:  // mov dword ptr [esp + 0x13c], ebx
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(ebx);
L_00474312:  // mov ebx, dword ptr [edi + 8]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00474315:  // mov dword ptr [esp + 0x140], ebx
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(ebx);
L_0047431c:  // mov edi, dword ptr [edi + 0xc]
    edi = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0047431f:  // mov dword ptr [esp + 0x144], edi
    M32((uint32_t)(esp + 0x144u)) = (uint32_t)(edi);
L_00474326:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00474328:  // mov ebx, dword ptr [edi]
    ebx = (uint32_t)(M32((uint32_t)(edi)));
L_0047432a:  // mov dword ptr [esp + 0xa0], ebx
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(ebx);
L_00474331:  // mov ebx, dword ptr [edi + 4]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00474334:  // mov dword ptr [esp + 0xa4], ebx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(ebx);
L_0047433b:  // mov ebx, dword ptr [edi + 8]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0047433e:  // mov dword ptr [esp + 0xa8], ebx
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(ebx);
L_00474345:  // mov edi, dword ptr [edi + 0xc]
    edi = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_00474348:  // mov dword ptr [esp + 0xac], edi
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(edi);
L_0047434f:  // lea edi, [eax + 0x30]
    edi = (uint32_t)((uint32_t)(eax + 0x30u));
L_00474352:  // mov ebx, edi
    ebx = (uint32_t)(edi);
L_00474354:  // mov ebp, dword ptr [ebx]
    ebp = (uint32_t)(M32((uint32_t)(ebx)));
L_00474356:  // mov dword ptr [esp + 0x158], ebp
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(ebp);
L_0047435d:  // mov ebp, dword ptr [ebx + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_00474360:  // mov dword ptr [esp + 0x15c], ebp
    M32((uint32_t)(esp + 0x15cu)) = (uint32_t)(ebp);
L_00474367:  // mov ebp, dword ptr [ebx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0047436a:  // mov dword ptr [esp + 0x160], ebp
    M32((uint32_t)(esp + 0x160u)) = (uint32_t)(ebp);
L_00474371:  // mov ebx, dword ptr [ebx + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00474374:  // mov dword ptr [esp + 0x164], ebx
    M32((uint32_t)(esp + 0x164u)) = (uint32_t)(ebx);
L_0047437b:  // mov ebx, dword ptr [edx]
    ebx = (uint32_t)(M32((uint32_t)(edx)));
L_0047437d:  // mov dword ptr [esp + 0x128], ebx
    M32((uint32_t)(esp + 0x128u)) = (uint32_t)(ebx);
L_00474384:  // mov ebx, dword ptr [edx + 4]
    ebx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00474387:  // mov dword ptr [esp + 0x12c], ebx
    M32((uint32_t)(esp + 0x12cu)) = (uint32_t)(ebx);
L_0047438e:  // mov ebx, dword ptr [edx + 8]
    ebx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00474391:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00474394:  // mov dword ptr [esp + 0x130], ebx
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(ebx);
L_0047439b:  // mov dword ptr [esp + 0x134], edx
    M32((uint32_t)(esp + 0x134u)) = (uint32_t)(edx);
L_004743a2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004743a4:  // mov ebx, dword ptr [edx]
    ebx = (uint32_t)(M32((uint32_t)(edx)));
L_004743a6:  // mov dword ptr [esp + 0xb0], ebx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(ebx);
L_004743ad:  // mov ebx, dword ptr [edx + 4]
    ebx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004743b0:  // mov dword ptr [esp + 0xb4], ebx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(ebx);
L_004743b7:  // mov ebx, dword ptr [edx + 8]
    ebx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004743ba:  // mov dword ptr [esp + 0xb8], ebx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(ebx);
L_004743c1:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004743c4:  // mov dword ptr [esp + 0xbc], edx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(edx);
L_004743cb:  // lea edx, [eax + 0x40]
    edx = (uint32_t)((uint32_t)(eax + 0x40u));
L_004743ce:  // mov ebx, edx
    ebx = (uint32_t)(edx);
L_004743d0:  // mov ebp, dword ptr [ebx]
    ebp = (uint32_t)(M32((uint32_t)(ebx)));
L_004743d2:  // mov dword ptr [esp + 0x148], ebp
    M32((uint32_t)(esp + 0x148u)) = (uint32_t)(ebp);
L_004743d9:  // mov ebp, dword ptr [ebx + 4]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004743dc:  // mov dword ptr [esp + 0x14c], ebp
    M32((uint32_t)(esp + 0x14cu)) = (uint32_t)(ebp);
L_004743e3:  // mov ebp, dword ptr [ebx + 8]
    ebp = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004743e6:  // mov dword ptr [esp + 0x150], ebp
    M32((uint32_t)(esp + 0x150u)) = (uint32_t)(ebp);
L_004743ed:  // mov ebx, dword ptr [ebx + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004743f0:  // mov dword ptr [esp + 0x154], ebx
    M32((uint32_t)(esp + 0x154u)) = (uint32_t)(ebx);
L_004743f7:  // mov ebx, dword ptr [edi]
    ebx = (uint32_t)(M32((uint32_t)(edi)));
L_004743f9:  // fld dword ptr [esp + 0x118]
    lpush(x, (long double)F32((uint32_t)(esp + 0x118u)));
L_00474400:  // fsub dword ptr [esp + 0x70]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x70u)));
L_00474404:  // mov dword ptr [esp + 0x168], ebx
    M32((uint32_t)(esp + 0x168u)) = (uint32_t)(ebx);
L_0047440b:  // mov ebx, dword ptr [edi + 4]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0047440e:  // mov dword ptr [esp + 0x16c], ebx
    M32((uint32_t)(esp + 0x16cu)) = (uint32_t)(ebx);
L_00474415:  // mov ebx, dword ptr [edi + 8]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00474418:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047441a:  // fld dword ptr [esp + 0x11c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x11cu)));
L_00474421:  // fsub dword ptr [esp + 0x74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x74u)));
L_00474425:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_0047442c:  // fsub dword ptr [esp + 0x78]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x78u)));
L_00474430:  // fld dword ptr [esp + 0x138]
    lpush(x, (long double)F32((uint32_t)(esp + 0x138u)));
L_00474437:  // fsub dword ptr [esp + 0x70]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x70u)));
L_0047443b:  // mov edi, dword ptr [edi + 0xc]
    edi = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0047443e:  // mov dword ptr [esp + 0x170], ebx
    M32((uint32_t)(esp + 0x170u)) = (uint32_t)(ebx);
L_00474445:  // mov dword ptr [esp + 0x174], edi
    M32((uint32_t)(esp + 0x174u)) = (uint32_t)(edi);
L_0047444c:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_0047444e:  // mov dword ptr [esp + 0xc0], edi
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(edi);
L_00474455:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00474458:  // fst dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
L_0047445c:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_00474460:  // fld dword ptr [esp + 0x13c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x13cu)));
L_00474467:  // fsub dword ptr [esp + 0x74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x74u)));
L_0047446b:  // mov dword ptr [esp + 0xc4], edi
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(edi);
L_00474472:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00474475:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00474478:  // mov dword ptr [esp + 0xc8], edi
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(edi);
L_0047447f:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00474483:  // fld dword ptr [esp + 0x140]
    lpush(x, (long double)F32((uint32_t)(esp + 0x140u)));
L_0047448a:  // fsub dword ptr [esp + 0x78]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x78u)));
L_0047448e:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00474492:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00474494:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474496:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00474498:  // mov dword ptr [esp + 0xcc], eax
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(eax);
L_0047449f:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004744a1:  // mov dword ptr [esp + 0xf8], eax
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(eax);
L_004744a8:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004744ab:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004744ad:  // mov dword ptr [esp + 0xfc], eax
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(eax);
L_004744b4:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004744b7:  // mov dword ptr [esp + 0x100], eax
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(eax);
L_004744be:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004744c1:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004744c5:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004744c7:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004744c9:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004744cd:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004744cf:  // mov dword ptr [esp + 0x104], eax
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(eax);
L_004744d6:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004744d8:  // mov dword ptr [esp + 0x108], eax
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(eax);
L_004744df:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004744e2:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004744e4:  // mov dword ptr [esp + 0x10c], eax
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(eax);
L_004744eb:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004744ee:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004744f1:  // mov dword ptr [esp + 0x110], eax
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(eax);
L_004744f8:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004744fc:  // mov dword ptr [esp + 0x114], edx
    M32((uint32_t)(esp + 0x114u)) = (uint32_t)(edx);
L_00474503:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474505:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474507:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0047450b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047450d:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0047450f:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_00474513:  // fsubp st(2)
    ST(2) = (ST(2)) - (ST(0));
    lpop(x);
L_00474515:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474517:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0047451b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047451d:  // fld dword ptr [esp + 0x158]
    lpush(x, (long double)F32((uint32_t)(esp + 0x158u)));
L_00474524:  // fsub dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa0u)));
L_0047452b:  // fst dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
L_0047452f:  // fld dword ptr [esp + 0x15c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x15cu)));
L_00474536:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_0047453d:  // fld dword ptr [esp + 0x160]
    lpush(x, (long double)F32((uint32_t)(esp + 0x160u)));
L_00474544:  // fsub dword ptr [esp + 0xa8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa8u)));
L_0047454b:  // fld dword ptr [esp + 0x128]
    lpush(x, (long double)F32((uint32_t)(esp + 0x128u)));
L_00474552:  // fsub dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa0u)));
L_00474559:  // fst dword ptr [esp + 0xf4]
    F32((uint32_t)(esp + 0xf4u)) = lf32(ST(0));
L_00474560:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_00474564:  // fld dword ptr [esp + 0x12c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x12cu)));
L_0047456b:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_00474572:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00474576:  // fld dword ptr [esp + 0x130]
    lpush(x, (long double)F32((uint32_t)(esp + 0x130u)));
L_0047457d:  // fsub dword ptr [esp + 0xa8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa8u)));
L_00474584:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00474588:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0047458a:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047458c:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0047458e:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474590:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00474594:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00474596:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00474598:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0047459c:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0047459e:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004745a0:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004745a4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004745a6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004745a8:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004745ac:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004745ae:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004745b0:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_004745b4:  // fsubp st(2)
    ST(2) = (ST(2)) - (ST(0));
    lpop(x);
L_004745b6:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004745b8:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004745bc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004745be:  // fld dword ptr [esp + 0x148]
    lpush(x, (long double)F32((uint32_t)(esp + 0x148u)));
L_004745c5:  // fsub dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb0u)));
L_004745cc:  // fst dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
L_004745d0:  // fld dword ptr [esp + 0x14c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14cu)));
L_004745d7:  // fsub dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb4u)));
L_004745de:  // fld dword ptr [esp + 0x150]
    lpush(x, (long double)F32((uint32_t)(esp + 0x150u)));
L_004745e5:  // fsub dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb8u)));
L_004745ec:  // fld dword ptr [esp + 0x168]
    lpush(x, (long double)F32((uint32_t)(esp + 0x168u)));
L_004745f3:  // fsub dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb0u)));
L_004745fa:  // fst dword ptr [esp + 0xe8]
    F32((uint32_t)(esp + 0xe8u)) = lf32(ST(0));
L_00474601:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_00474605:  // fld dword ptr [esp + 0x16c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x16cu)));
L_0047460c:  // fsub dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb4u)));
L_00474613:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00474617:  // fld dword ptr [esp + 0x170]
    lpush(x, (long double)F32((uint32_t)(esp + 0x170u)));
L_0047461e:  // fsub dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb8u)));
L_00474625:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00474629:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0047462b:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047462d:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0047462f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474631:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_00474638:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0047463a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047463c:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00474640:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00474642:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474644:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_0047464b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047464d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047464f:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00474653:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00474655:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00474657:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_0047465b:  // fsubp st(2)
    ST(2) = (ST(2)) - (ST(0));
    lpop(x);
L_0047465d:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047465f:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_00474666:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474668:  // fld dword ptr [esp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf8u)));
L_0047466f:  // fsub dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc0u)));
L_00474676:  // fstp dword ptr [esp + 0xd0]
    F32((uint32_t)(esp + 0xd0u)) = lf32(ST(0));
    lpop(x);
L_0047467d:  // fld dword ptr [esp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xfcu)));
L_00474684:  // fsub dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc4u)));
L_0047468b:  // mov eax, dword ptr [esp + 0xd0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_00474692:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_00474699:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004746a0:  // fld dword ptr [esp + 0x100]
    lpush(x, (long double)F32((uint32_t)(esp + 0x100u)));
L_004746a7:  // fsub dword ptr [esp + 0xc8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc8u)));
L_004746ae:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_004746b5:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_004746bc:  // fsub dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc0u)));
L_004746c3:  // fstp dword ptr [esp + 0xe4]
    F32((uint32_t)(esp + 0xe4u)) = lf32(ST(0));
    lpop(x);
L_004746ca:  // fld dword ptr [esp + 0x10c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10cu)));
L_004746d1:  // fsub dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc4u)));
L_004746d8:  // mov edx, dword ptr [esp + 0xe4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xe4u)));
L_004746df:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_004746e3:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_004746e7:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_004746ee:  // fsub dword ptr [esp + 0xc8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc8u)));
L_004746f5:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004746f9:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004746fd:  // fmul dword ptr [esp + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x88u)));
L_00474704:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00474708:  // fmul dword ptr [esp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x84u)));
L_0047470f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474711:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_00474718:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_0047471c:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00474720:  // fmul dword ptr [esp + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x88u)));
L_00474727:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474729:  // fstp dword ptr [esp + 0xd8]
    F32((uint32_t)(esp + 0xd8u)) = lf32(ST(0));
    lpop(x);
L_00474730:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00474734:  // fmul dword ptr [esp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x84u)));
L_0047473b:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_00474742:  // fmul dword ptr [esp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x64u)));
L_00474746:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474748:  // fstp dword ptr [esp + 0xdc]
    F32((uint32_t)(esp + 0xdcu)) = lf32(ST(0));
    lpop(x);
L_0047474f:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00474753:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00474757:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00474759:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047475b:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047475d:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0047475f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00474761:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00474765:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_00474769:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047476b:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0047476d:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0047476f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474771:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00474777:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474779:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0047477c:  // jne 0x4747a2
    if (!f.zf) goto L_004747a2;
L_0047477e:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00474784:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00474788:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047478a:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0047478e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00474790:  // fmul dword ptr [esp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x44u)));
L_00474794:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_00474798:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_0047479c:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004747a0:  // jmp 0x4747a4
    goto L_004747a4;
L_004747a2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004747a4:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004747a8:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004747ac:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004747ae:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004747b0:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004747b2:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004747b4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004747b6:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004747ba:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_004747be:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004747c0:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004747c2:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004747c4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004747c6:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004747cc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004747ce:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004747d1:  // jne 0x4747f7
    if (!f.zf) goto L_004747f7;
L_004747d3:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004747d9:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004747dd:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004747df:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004747e3:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004747e5:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_004747e9:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004747ed:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_004747f1:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004747f5:  // jmp 0x4747f9
    goto L_004747f9;
L_004747f7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004747f9:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_00474800:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00474802:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00474809:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047480b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0047480d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047480f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00474811:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00474813:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_0047481a:  // fmul dword ptr [esp + 0x90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x90u)));
L_00474821:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00474823:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00474825:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00474827:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474829:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0047482f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474831:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00474834:  // jne 0x474860
    if (!f.zf) goto L_00474860;
L_00474836:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_0047483c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047483e:  // fmul dword ptr [esp + 0x90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x90u)));
L_00474845:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_0047484c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047484e:  // fmul dword ptr [esp + 0x94]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x94u)));
L_00474855:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_0047485c:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0047485e:  // jmp 0x474862
    goto L_00474862;
L_00474860:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474862:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_00474869:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_00474870:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00474872:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00474874:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474876:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00474878:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0047487a:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047487c:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0047487e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00474880:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00474882:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00474884:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474886:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0047488c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047488e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00474891:  // jne 0x4748bd
    if (!f.zf) goto L_004748bd;
L_00474893:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00474899:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047489b:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_0047489d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047489f:  // fmul dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd8u)));
L_004748a6:  // fstp dword ptr [esp + 0xd8]
    F32((uint32_t)(esp + 0xd8u)) = lf32(ST(0));
    lpop(x);
L_004748ad:  // fmul dword ptr [esp + 0xdc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xdcu)));
L_004748b4:  // fstp dword ptr [esp + 0xdc]
    F32((uint32_t)(esp + 0xdcu)) = lf32(ST(0));
    lpop(x);
L_004748bb:  // jmp 0x4748bf
    goto L_004748bf;
L_004748bd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004748bf:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004748c3:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_004748c9:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004748cd:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_004748d3:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004748da:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004748de:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_004748e4:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_004748eb:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004748f1:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004748f5:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004748fc:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00474902:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_00474906:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_0047490d:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00474913:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_00474917:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0047491b:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_00474921:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00474925:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_0047492b:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0047492f:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00474933:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_00474939:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0047493d:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00474943:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0047494a:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_0047494e:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00474954:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0047495b:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0047495f:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00474965:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_0047496c:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_00474973:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_00474979:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00474980:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_00474986:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0047498a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047498c:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_00474992:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_00474996:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0047499c:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_004749a3:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004749a7:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004749ad:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_004749b4:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004749b8:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004749be:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_004749c5:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_004749cb:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_004749d2:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_004749d8:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004749dc:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004749e3:  // fmul dword ptr [0x5dbc50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc50u)));
L_004749e9:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004749ed:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004749f3:  // fstp dword ptr [esp + 0xd4]
    F32((uint32_t)(esp + 0xd4u)) = lf32(ST(0));
    lpop(x);
L_004749fa:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004749fe:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00474a04:  // fstp dword ptr [esp + 0xd8]
    F32((uint32_t)(esp + 0xd8u)) = lf32(ST(0));
    lpop(x);
L_00474a0b:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_00474a0f:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00474a15:  // fstp dword ptr [esp + 0xdc]
    F32((uint32_t)(esp + 0xdcu)) = lf32(ST(0));
    lpop(x);
L_00474a1c:  // fld dword ptr [esp + 0x13c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x13cu)));
L_00474a23:  // fsub dword ptr [esp + 0x74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x74u)));
L_00474a27:  // fld dword ptr [esp + 0x11c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x11cu)));
L_00474a2e:  // fsub dword ptr [esp + 0x74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x74u)));
L_00474a32:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00474a36:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00474a38:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00474a3a:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00474a3e:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_00474a42:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474a44:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00474a48:  // fld dword ptr [esp + 0x12c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x12cu)));
L_00474a4f:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_00474a56:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00474a5a:  // fld dword ptr [esp + 0x15c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x15cu)));
L_00474a61:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_00474a68:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00474a6c:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00474a70:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_00474a74:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00474a78:  // fmul dword ptr [esp + 0xf4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf4u)));
L_00474a7f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474a81:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00474a85:  // fld dword ptr [esp + 0x16c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x16cu)));
L_00474a8c:  // fsub dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb4u)));
L_00474a93:  // fstp dword ptr [esp + 0xf0]
    F32((uint32_t)(esp + 0xf0u)) = lf32(ST(0));
    lpop(x);
L_00474a9a:  // fld dword ptr [esp + 0x14c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14cu)));
L_00474aa1:  // fsub dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb4u)));
L_00474aa8:  // fstp dword ptr [esp + 0xec]
    F32((uint32_t)(esp + 0xecu)) = lf32(ST(0));
    lpop(x);
L_00474aaf:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_00474ab6:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00474aba:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_00474ac1:  // fmul dword ptr [esp + 0xe8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe8u)));
L_00474ac8:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474aca:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00474ace:  // fld dword ptr [esp + 0x10c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10cu)));
L_00474ad5:  // fsub dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc4u)));
L_00474adc:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00474ae0:  // fld dword ptr [esp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xfcu)));
L_00474ae7:  // fsub dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc4u)));
L_00474aee:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00474af2:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00474af6:  // fmul dword ptr [esp + 0xd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd0u)));
L_00474afd:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00474b01:  // fmul dword ptr [esp + 0xe4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe4u)));
L_00474b08:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474b0a:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00474b0e:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00474b12:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474b18:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474b1a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00474b1d:  // jne 0x474b9e
    if (!f.zf) goto L_00474b9e;
L_00474b1f:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_00474b26:  // fsub dword ptr [esp + 0x78]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x78u)));
L_00474b2a:  // fld dword ptr [esp + 0x140]
    lpush(x, (long double)F32((uint32_t)(esp + 0x140u)));
L_00474b31:  // fsub dword ptr [esp + 0x78]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x78u)));
L_00474b35:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474b37:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00474b39:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474b3b:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_00474b3f:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474b41:  // fdiv dword ptr [esp + 0x20]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x20u)));
L_00474b45:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00474b49:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00474b4b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474b4d:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_00474b51:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474b53:  // fdiv dword ptr [esp + 0x20]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x20u)));
L_00474b57:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00474b5b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474b5d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474b5f:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00474b63:  // fadd dword ptr [esp + 0x70]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x70u)));
L_00474b67:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00474b6b:  // fadd dword ptr [esp + 0x74]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x74u)));
L_00474b6f:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_00474b73:  // fadd dword ptr [esp + 0x78]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x78u)));
L_00474b77:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_00474b7b:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00474b7f:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_00474b81:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474b83:  // fsubr dword ptr [esp + 0x78]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x78u))) - (ST(0));
L_00474b87:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00474b8b:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00474b8d:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474b8f:  // fild dword ptr [ecx + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ecx + 0x1cu)));
L_00474b92:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_00474b96:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00474b98:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474b9a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474b9c:  // jmp 0x474bc0
    goto L_00474bc0;
L_00474b9e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474ba0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474ba2:  // fld dword ptr [0x5dbc5c]
    lpush(x, (long double)F32((uint32_t)(0x5dbc5cu)));
L_00474ba8:  // mov dword ptr [esp + 0x24], 0
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x0u);
L_00474bb0:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_00474bb8:  // mov dword ptr [esp + 0x20], 0x3f800000
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x3f800000u);
L_00474bc0:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00474bc4:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474bca:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474bcc:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00474bcf:  // jne 0x474c6b
    if (!f.zf) goto L_00474c6b;
L_00474bd5:  // fld dword ptr [esp + 0x160]
    lpush(x, (long double)F32((uint32_t)(esp + 0x160u)));
L_00474bdc:  // fsub dword ptr [esp + 0xa8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa8u)));
L_00474be3:  // fld dword ptr [esp + 0x130]
    lpush(x, (long double)F32((uint32_t)(esp + 0x130u)));
L_00474bea:  // fsub dword ptr [esp + 0xa8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa8u)));
L_00474bf1:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474bf3:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00474bf7:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474bf9:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00474bfd:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474bff:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_00474c03:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00474c07:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_00474c0b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474c0d:  // fmul dword ptr [esp + 0xf4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf4u)));
L_00474c14:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474c16:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_00474c1a:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00474c1e:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_00474c25:  // fadd dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa0u)));
L_00474c2c:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_00474c33:  // fadd dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa4u)));
L_00474c3a:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_00474c41:  // fadd dword ptr [esp + 0x88]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x88u)));
L_00474c48:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00474c4c:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_00474c4e:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00474c50:  // fsubr st(2)
    ST(0) = (ST(2)) - (ST(0));
L_00474c52:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00474c56:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00474c58:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474c5a:  // fild dword ptr [ecx + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ecx + 0x1cu)));
L_00474c5d:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_00474c61:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00474c63:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00474c65:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474c67:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474c69:  // jmp 0x474c89
    goto L_00474c89;
L_00474c6b:  // fld dword ptr [0x5dbc5c]
    lpush(x, (long double)F32((uint32_t)(0x5dbc5cu)));
L_00474c71:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_00474c79:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_00474c81:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_00474c89:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00474c8d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474c93:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474c95:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00474c98:  // jne 0x474d3a
    if (!f.zf) goto L_00474d3a;
L_00474c9e:  // fld dword ptr [esp + 0x150]
    lpush(x, (long double)F32((uint32_t)(esp + 0x150u)));
L_00474ca5:  // fsub dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb8u)));
L_00474cac:  // fld dword ptr [esp + 0x170]
    lpush(x, (long double)F32((uint32_t)(esp + 0x170u)));
L_00474cb3:  // fsub dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb8u)));
L_00474cba:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474cbc:  // fmul dword ptr [esp + 0xf0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf0u)));
L_00474cc3:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474cc5:  // fmul dword ptr [esp + 0xec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xecu)));
L_00474ccc:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474cce:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_00474cd2:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00474cd6:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00474cda:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474cdc:  // fmul dword ptr [esp + 0xe8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe8u)));
L_00474ce3:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474ce5:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_00474ce9:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00474ced:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_00474cf4:  // fadd dword ptr [esp + 0xb0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xb0u)));
L_00474cfb:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00474d02:  // fadd dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xb4u)));
L_00474d09:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_00474d10:  // fadd dword ptr [esp + 0x98]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x98u)));
L_00474d17:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00474d1b:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_00474d1d:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00474d1f:  // fsubr st(2)
    ST(0) = (ST(2)) - (ST(0));
L_00474d21:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00474d25:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00474d27:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474d29:  // fild dword ptr [ecx + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ecx + 0x1cu)));
L_00474d2c:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00474d30:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00474d32:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00474d34:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474d36:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474d38:  // jmp 0x474d58
    goto L_00474d58;
L_00474d3a:  // fld dword ptr [0x5dbc5c]
    lpush(x, (long double)F32((uint32_t)(0x5dbc5cu)));
L_00474d40:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00474d48:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_00474d50:  // mov dword ptr [esp + 0x10], 0x3f800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f800000u);
L_00474d58:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00474d5c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474d62:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474d64:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00474d67:  // jne 0x474e16
    if (!f.zf) goto L_00474e16;
L_00474d6d:  // fld dword ptr [esp + 0x100]
    lpush(x, (long double)F32((uint32_t)(esp + 0x100u)));
L_00474d74:  // fsub dword ptr [esp + 0x78]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x78u)));
L_00474d78:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_00474d7c:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_00474d83:  // fsub dword ptr [esp + 0xc8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc8u)));
L_00474d8a:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_00474d8e:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474d90:  // fdiv dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00474d94:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00474d98:  // fld dword ptr [esp + 0x110]
    lpush(x, (long double)F32((uint32_t)(esp + 0x110u)));
L_00474d9f:  // fsub dword ptr [esp + 0x78]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x78u)));
L_00474da3:  // fmul dword ptr [esp + 0xd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd0u)));
L_00474daa:  // fld dword ptr [esp + 0x100]
    lpush(x, (long double)F32((uint32_t)(esp + 0x100u)));
L_00474db1:  // fsub dword ptr [esp + 0xc8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xc8u)));
L_00474db8:  // fmul dword ptr [esp + 0xe4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe4u)));
L_00474dbf:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474dc1:  // fdiv dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00474dc5:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00474dc9:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_00474dd0:  // fadd dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xc0u)));
L_00474dd7:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_00474dde:  // fadd dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xc4u)));
L_00474de5:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_00474dec:  // fadd dword ptr [esp + 0xdc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xdcu)));
L_00474df3:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00474df7:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_00474df9:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00474dfb:  // fsubr st(2)
    ST(0) = (ST(2)) - (ST(0));
L_00474dfd:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00474e01:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00474e03:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00474e05:  // fild dword ptr [ecx + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ecx + 0x1cu)));
L_00474e08:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_00474e0c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00474e0e:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00474e10:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474e12:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474e14:  // jmp 0x474e34
    goto L_00474e34;
L_00474e16:  // fld dword ptr [0x5dbc5c]
    lpush(x, (long double)F32((uint32_t)(0x5dbc5cu)));
L_00474e1c:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00474e24:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00474e2c:  // mov dword ptr [esp + 0x3c], 0x3f800000
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x3f800000u);
L_00474e34:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00474e38:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474e3e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474e40:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474e43:  // jne 0x475c22
    if (!f.zf) goto L_00475c22;
L_00474e49:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00474e4d:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474e53:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474e55:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474e58:  // jne 0x474fcf
    if (!f.zf) goto L_00474fcf;
L_00474e5e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00474e62:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474e68:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474e6a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474e6d:  // jne 0x474fcf
    if (!f.zf) goto L_00474fcf;
L_00474e73:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00474e77:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474e7d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474e7f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474e82:  // jne 0x474fcf
    if (!f.zf) goto L_00474fcf;
L_00474e88:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00474e8b:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00474e8e:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00474e90:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_00474e94:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00474e97:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00474e98:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00474e9a:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_00474e9d:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00474ea3:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00474ea5:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00474ea8:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_00474eab:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00474eaf:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00474eb1:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00474eb5:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00474eb6:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00474eb9:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00474ebd:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00474ec1:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00474ec3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00474ec7:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00474ecb:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00474ecd:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00474ed1:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00474ed5:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00474ed7:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00474edb:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00474edf:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00474ee3:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_00474ee5:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00474ee9:  // je 0x474f9d
    if (f.zf) goto L_00474f9d;
L_00474eef:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00474ef1:  // fld dword ptr [0x5dbc58]
    lpush(x, (long double)F32((uint32_t)(0x5dbc58u)));
L_00474ef7:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00474ef9:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00474eff:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474f01:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474f04:  // jne 0x474f0a
    if (!f.zf) goto L_00474f0a;
L_00474f06:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474f08:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474f0a:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00474f0c:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00474f0e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474f10:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474f13:  // jne 0x474f19
    if (!f.zf) goto L_00474f19;
L_00474f15:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474f17:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00474f19:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00474f1d:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00474f1f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474f21:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474f24:  // jne 0x474f2c
    if (!f.zf) goto L_00474f2c;
L_00474f26:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474f28:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00474f2c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00474f30:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00474f32:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474f34:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474f37:  // jne 0x474f3f
    if (!f.zf) goto L_00474f3f;
L_00474f39:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474f3b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00474f3f:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00474f45:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00474f4b:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00474f4f:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00474f53:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00474f56:  // jge 0x474f5f
    if ((f.sf == f.of)) goto L_00474f5f;
L_00474f58:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00474f5d:  // jmp 0x474f69
    goto L_00474f69;
L_00474f5f:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00474f62:  // jle 0x474f69
    if ((f.zf || f.sf != f.of)) goto L_00474f69;
L_00474f64:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00474f69:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474f6b:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_00474f6f:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474f71:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_00474f75:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00474f79:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00474f7d:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00474f80:  // mov byte ptr [edx], 0x7f
    M8((uint32_t)(edx)) = (uint8_t)(0x7fu);
L_00474f83:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00474f86:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00474f87:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00474f8b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00474f8f:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00474f93:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00474f97:  // jne 0x474ef1
    if (!f.zf) goto L_00474ef1;
L_00474f9d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474f9f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00474fa1:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00474fa3:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00474fa7:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00474fa9:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00474fab:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00474faf:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00474fb1:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474fb3:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00474fb7:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00474fb9:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00474fbd:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00474fc0:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00474fc1:  // lea edi, [edi + eax*2]
    edi = (uint32_t)((uint32_t)(edi + eax * 2u));
L_00474fc4:  // jne 0x474ea5
    if (!f.zf) goto L_00474ea5;
L_00474fca:  // jmp 0x476a0b
    goto L_00476a0b;
L_00474fcf:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00474fd3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474fd9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474fdb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474fde:  // jne 0x475190
    if (!f.zf) goto L_00475190;
L_00474fe4:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00474fe8:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00474fee:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00474ff0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00474ff3:  // jne 0x475190
    if (!f.zf) goto L_00475190;
L_00474ff9:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00474ffd:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475003:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475005:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475008:  // je 0x475190
    if (f.zf) goto L_00475190;
L_0047500e:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00475011:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00475014:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475016:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_0047501a:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0047501d:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047501e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00475020:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_00475023:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00475029:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0047502b:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_0047502e:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_00475031:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00475035:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475037:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0047503b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047503c:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_0047503f:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00475043:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475047:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475049:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047504d:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475051:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475053:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475057:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0047505b:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047505d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475061:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475065:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475069:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_0047506b:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047506f:  // je 0x47515e
    if (f.zf) goto L_0047515e;
L_00475075:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00475077:  // fld dword ptr [0x5dbc58]
    lpush(x, (long double)F32((uint32_t)(0x5dbc58u)));
L_0047507d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047507f:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00475085:  // mov dword ptr [esp + 0x40], 0x461c3c00
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x461c3c00u);
L_0047508d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047508f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475092:  // jne 0x475098
    if (!f.zf) goto L_00475098;
L_00475094:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475096:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475098:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047509a:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0047509c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047509e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004750a1:  // jne 0x4750a7
    if (!f.zf) goto L_004750a7;
L_004750a3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004750a5:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004750a7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004750ab:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004750ad:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004750af:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004750b2:  // jne 0x4750ba
    if (!f.zf) goto L_004750ba;
L_004750b4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004750b6:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004750ba:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004750be:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_004750c4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004750c6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004750c9:  // je 0x4750d3
    if (f.zf) goto L_004750d3;
L_004750cb:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004750cf:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_004750d3:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004750d9:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_004750df:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004750e3:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004750e7:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004750ea:  // jge 0x4750f3
    if ((f.sf == f.of)) goto L_004750f3;
L_004750ec:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004750f1:  // jmp 0x4750fd
    goto L_004750fd;
L_004750f3:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004750f6:  // jle 0x4750fd
    if ((f.zf || f.sf != f.of)) goto L_004750fd;
L_004750f8:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004750fd:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00475101:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475107:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_0047510a:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475110:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00475114:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00475118:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_0047511b:  // jge 0x475124
    if ((f.sf == f.of)) goto L_00475124;
L_0047511d:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475122:  // jmp 0x47512e
    goto L_0047512e;
L_00475124:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475127:  // jle 0x47512e
    if ((f.zf || f.sf != f.of)) goto L_0047512e;
L_00475129:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_0047512e:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475130:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475134:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475136:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_0047513a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047513e:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475142:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_00475144:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00475147:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00475148:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047514c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475150:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475154:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475158:  // jne 0x475077
    if (!f.zf) goto L_00475077;
L_0047515e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475160:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475162:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475164:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00475168:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0047516a:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0047516c:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00475170:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475172:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475174:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00475178:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047517a:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_0047517e:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00475181:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00475182:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475185:  // jne 0x47502b
    if (!f.zf) goto L_0047502b;
L_0047518b:  // jmp 0x476a0b
    goto L_00476a0b;
L_00475190:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475194:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0047519a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047519c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047519f:  // jne 0x475351
    if (!f.zf) goto L_00475351;
L_004751a5:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004751a9:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004751af:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004751b1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004751b4:  // je 0x475351
    if (f.zf) goto L_00475351;
L_004751ba:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004751be:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004751c4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004751c6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004751c9:  // jne 0x475351
    if (!f.zf) goto L_00475351;
L_004751cf:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_004751d2:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_004751d5:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004751d7:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_004751db:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004751de:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004751df:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004751e1:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_004751e4:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_004751ea:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004751ec:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_004751ef:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_004751f2:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004751f6:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004751f8:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004751fc:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004751fd:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475200:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00475204:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475208:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047520a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047520e:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475212:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475214:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475218:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0047521c:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047521e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475222:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475226:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0047522a:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_0047522c:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475230:  // je 0x47531f
    if (f.zf) goto L_0047531f;
L_00475236:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00475238:  // fld dword ptr [0x5dbc58]
    lpush(x, (long double)F32((uint32_t)(0x5dbc58u)));
L_0047523e:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00475240:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00475246:  // mov dword ptr [esp + 0x40], 0x461c3c00
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x461c3c00u);
L_0047524e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475250:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475253:  // jne 0x475259
    if (!f.zf) goto L_00475259;
L_00475255:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475257:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475259:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047525b:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0047525d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047525f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475262:  // jne 0x475268
    if (!f.zf) goto L_00475268;
L_00475264:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475266:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00475268:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047526c:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_00475272:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475274:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475277:  // je 0x475281
    if (f.zf) goto L_00475281;
L_00475279:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047527d:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_00475281:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475285:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00475287:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475289:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047528c:  // jne 0x475294
    if (!f.zf) goto L_00475294;
L_0047528e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475290:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475294:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_0047529a:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_004752a0:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004752a4:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004752a8:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004752ab:  // jge 0x4752b4
    if ((f.sf == f.of)) goto L_004752b4;
L_004752ad:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004752b2:  // jmp 0x4752be
    goto L_004752be;
L_004752b4:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004752b7:  // jle 0x4752be
    if ((f.zf || f.sf != f.of)) goto L_004752be;
L_004752b9:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004752be:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004752c2:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004752c8:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_004752cb:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_004752d1:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004752d5:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004752d9:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004752dc:  // jge 0x4752e5
    if ((f.sf == f.of)) goto L_004752e5;
L_004752de:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004752e3:  // jmp 0x4752ef
    goto L_004752ef;
L_004752e5:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004752e8:  // jle 0x4752ef
    if ((f.zf || f.sf != f.of)) goto L_004752ef;
L_004752ea:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004752ef:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004752f1:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004752f5:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004752f7:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004752fb:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004752ff:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475303:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_00475305:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00475308:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00475309:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047530d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475311:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475315:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475319:  // jne 0x475238
    if (!f.zf) goto L_00475238;
L_0047531f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475321:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475323:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475325:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00475329:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0047532b:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0047532d:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00475331:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475333:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475335:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00475339:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047533b:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_0047533f:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00475342:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00475343:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475346:  // jne 0x4751ec
    if (!f.zf) goto L_004751ec;
L_0047534c:  // jmp 0x476a0b
    goto L_00476a0b;
L_00475351:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475355:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0047535b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047535d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475360:  // jne 0x475516
    if (!f.zf) goto L_00475516;
L_00475366:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047536a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475370:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475372:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475375:  // je 0x475516
    if (f.zf) goto L_00475516;
L_0047537b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0047537f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475385:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475387:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047538a:  // je 0x475516
    if (f.zf) goto L_00475516;
L_00475390:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00475393:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00475396:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475398:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_0047539c:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0047539f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004753a0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004753a2:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_004753a5:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_004753ab:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004753ad:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_004753b0:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_004753b3:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004753b7:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004753b9:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004753bd:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004753be:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_004753c1:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004753c5:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004753c9:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_004753cb:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004753cf:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004753d3:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_004753d5:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004753d9:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004753dd:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_004753df:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004753e3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004753e7:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004753eb:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_004753ed:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004753f1:  // je 0x4754e4
    if (f.zf) goto L_004754e4;
L_004753f7:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004753f9:  // fld dword ptr [0x5dbc54]
    lpush(x, (long double)F32((uint32_t)(0x5dbc54u)));
L_004753ff:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00475401:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00475407:  // mov dword ptr [esp + 0x20], 0xc61c3c00
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xc61c3c00u);
L_0047540f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475411:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475414:  // jne 0x47541c
    if (!f.zf) goto L_0047541c;
L_00475416:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00475418:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0047541c:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047541e:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_00475422:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475424:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475427:  // jne 0x47542f
    if (!f.zf) goto L_0047542f;
L_00475429:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047542b:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0047542f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475433:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_00475439:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047543b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047543e:  // je 0x475446
    if (f.zf) goto L_00475446;
L_00475440:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475442:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475446:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047544a:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0047544c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047544e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475451:  // je 0x475459
    if (f.zf) goto L_00475459;
L_00475453:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475455:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475459:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0047545d:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475463:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475469:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047546d:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00475471:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475474:  // jge 0x47547d
    if ((f.sf == f.of)) goto L_0047547d;
L_00475476:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_0047547b:  // jmp 0x475487
    goto L_00475487;
L_0047547d:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475480:  // jle 0x475487
    if ((f.zf || f.sf != f.of)) goto L_00475487;
L_00475482:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00475487:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_0047548d:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00475490:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475496:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047549a:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047549e:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004754a1:  // jge 0x4754aa
    if ((f.sf == f.of)) goto L_004754aa;
L_004754a3:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004754a8:  // jmp 0x4754b4
    goto L_004754b4;
L_004754aa:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004754ad:  // jle 0x4754b4
    if ((f.zf || f.sf != f.of)) goto L_004754b4;
L_004754af:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004754b4:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004754b6:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004754ba:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004754bc:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004754c0:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004754c4:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_004754c8:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_004754ca:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_004754cd:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004754ce:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004754d2:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004754d6:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004754da:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004754de:  // jne 0x4753f9
    if (!f.zf) goto L_004753f9;
L_004754e4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004754e6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004754e8:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004754ea:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004754ee:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004754f0:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004754f2:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_004754f6:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004754f8:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004754fa:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004754fe:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475500:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00475504:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00475507:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00475508:  // lea edi, [edi + eax*2]
    edi = (uint32_t)((uint32_t)(edi + eax * 2u));
L_0047550b:  // jne 0x4753ad
    if (!f.zf) goto L_004753ad;
L_00475511:  // jmp 0x476a0b
    goto L_00476a0b;
L_00475516:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047551a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475520:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475522:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475525:  // je 0x4756d7
    if (f.zf) goto L_004756d7;
L_0047552b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047552f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475535:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475537:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047553a:  // jne 0x4756d7
    if (!f.zf) goto L_004756d7;
L_00475540:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00475544:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0047554a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047554c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047554f:  // jne 0x4756d7
    if (!f.zf) goto L_004756d7;
L_00475555:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00475558:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_0047555b:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047555d:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_00475561:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00475564:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475565:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00475567:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_0047556a:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00475570:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00475572:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00475575:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_00475578:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0047557c:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047557e:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00475582:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475583:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475586:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0047558a:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_0047558e:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475590:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475594:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475598:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047559a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047559e:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004755a2:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_004755a4:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004755a8:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004755ac:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004755b0:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_004755b2:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004755b6:  // je 0x4756a5
    if (f.zf) goto L_004756a5;
L_004755bc:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004755be:  // fld dword ptr [0x5dbc58]
    lpush(x, (long double)F32((uint32_t)(0x5dbc58u)));
L_004755c4:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004755c6:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_004755cc:  // mov dword ptr [esp + 0x40], 0x461c3c00
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x461c3c00u);
L_004755d4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004755d6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004755d9:  // jne 0x4755df
    if (!f.zf) goto L_004755df;
L_004755db:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004755dd:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004755df:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004755e1:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_004755e7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004755e9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004755ec:  // je 0x4755f4
    if (f.zf) goto L_004755f4;
L_004755ee:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004755f0:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004755f4:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004755f8:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004755fa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004755fc:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004755ff:  // jne 0x475607
    if (!f.zf) goto L_00475607;
L_00475601:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475603:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475607:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047560b:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0047560d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047560f:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475612:  // jne 0x47561a
    if (!f.zf) goto L_0047561a;
L_00475614:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475616:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047561a:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475620:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475626:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047562a:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0047562e:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475631:  // jge 0x47563a
    if ((f.sf == f.of)) goto L_0047563a;
L_00475633:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475638:  // jmp 0x475644
    goto L_00475644;
L_0047563a:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_0047563d:  // jle 0x475644
    if ((f.zf || f.sf != f.of)) goto L_00475644;
L_0047563f:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00475644:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00475648:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_0047564e:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00475651:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475657:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047565b:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0047565f:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475662:  // jge 0x47566b
    if ((f.sf == f.of)) goto L_0047566b;
L_00475664:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475669:  // jmp 0x475675
    goto L_00475675;
L_0047566b:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_0047566e:  // jle 0x475675
    if ((f.zf || f.sf != f.of)) goto L_00475675;
L_00475670:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00475675:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475677:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_0047567b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047567d:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475681:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475685:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475689:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_0047568b:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_0047568e:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0047568f:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475693:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475697:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0047569b:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047569f:  // jne 0x4755be
    if (!f.zf) goto L_004755be;
L_004756a5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004756a7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004756a9:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004756ab:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004756af:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004756b1:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004756b3:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_004756b7:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004756b9:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004756bb:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004756bf:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004756c1:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004756c5:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004756c8:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004756c9:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_004756cc:  // jne 0x475572
    if (!f.zf) goto L_00475572;
L_004756d2:  // jmp 0x476a0b
    goto L_00476a0b;
L_004756d7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004756db:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004756e1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004756e3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004756e6:  // je 0x47589c
    if (f.zf) goto L_0047589c;
L_004756ec:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004756f0:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004756f6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004756f8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004756fb:  // jne 0x47589c
    if (!f.zf) goto L_0047589c;
L_00475701:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00475705:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0047570b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047570d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475710:  // je 0x47589c
    if (f.zf) goto L_0047589c;
L_00475716:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00475719:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_0047571c:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047571e:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_00475722:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00475725:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475726:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00475728:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_0047572b:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00475731:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00475733:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00475736:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_00475739:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0047573d:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047573f:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00475743:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475744:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475747:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0047574b:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_0047574f:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475751:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475755:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475759:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047575b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047575f:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475763:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475765:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475769:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047576d:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475771:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_00475773:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475777:  // je 0x47586a
    if (f.zf) goto L_0047586a;
L_0047577d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0047577f:  // fld dword ptr [0x5dbc54]
    lpush(x, (long double)F32((uint32_t)(0x5dbc54u)));
L_00475785:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00475787:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_0047578d:  // mov dword ptr [esp + 0x20], 0xc61c3c00
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xc61c3c00u);
L_00475795:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475797:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047579a:  // jne 0x4757a2
    if (!f.zf) goto L_004757a2;
L_0047579c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047579e:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004757a2:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004757a4:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_004757aa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004757ac:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004757af:  // je 0x4757b5
    if (f.zf) goto L_004757b5;
L_004757b1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004757b3:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004757b5:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004757b9:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_004757bd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004757bf:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004757c2:  // jne 0x4757cc
    if (!f.zf) goto L_004757cc;
L_004757c4:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004757c8:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004757cc:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004757d0:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004757d2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004757d4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004757d7:  // je 0x4757df
    if (f.zf) goto L_004757df;
L_004757d9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004757db:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004757df:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004757e3:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004757e9:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_004757ef:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004757f3:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004757f7:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004757fa:  // jge 0x475803
    if ((f.sf == f.of)) goto L_00475803;
L_004757fc:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475801:  // jmp 0x47580d
    goto L_0047580d;
L_00475803:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475806:  // jle 0x47580d
    if ((f.zf || f.sf != f.of)) goto L_0047580d;
L_00475808:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_0047580d:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475813:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00475816:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_0047581c:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00475820:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00475824:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475827:  // jge 0x475830
    if ((f.sf == f.of)) goto L_00475830;
L_00475829:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_0047582e:  // jmp 0x47583a
    goto L_0047583a;
L_00475830:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475833:  // jle 0x47583a
    if ((f.zf || f.sf != f.of)) goto L_0047583a;
L_00475835:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_0047583a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047583c:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475840:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475842:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475846:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047584a:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0047584e:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_00475850:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00475853:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00475854:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475858:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047585c:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475860:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475864:  // jne 0x47577f
    if (!f.zf) goto L_0047577f;
L_0047586a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047586c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047586e:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475870:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00475874:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475876:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475878:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_0047587c:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0047587e:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475880:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00475884:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475886:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_0047588a:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0047588d:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0047588e:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475891:  // jne 0x475733
    if (!f.zf) goto L_00475733;
L_00475897:  // jmp 0x476a0b
    goto L_00476a0b;
L_0047589c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004758a0:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004758a6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004758a8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004758ab:  // je 0x475a61
    if (f.zf) goto L_00475a61;
L_004758b1:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004758b5:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004758bb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004758bd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004758c0:  // je 0x475a61
    if (f.zf) goto L_00475a61;
L_004758c6:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004758ca:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004758d0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004758d2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004758d5:  // jne 0x475a61
    if (!f.zf) goto L_00475a61;
L_004758db:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_004758de:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_004758e1:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004758e3:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_004758e7:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004758ea:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004758eb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004758ed:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_004758f0:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_004758f6:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004758f8:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_004758fb:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_004758fe:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00475902:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475904:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00475908:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475909:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_0047590c:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00475910:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475914:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475916:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047591a:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0047591e:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475920:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475924:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475928:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047592a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047592e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475932:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475936:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_00475938:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047593c:  // je 0x475a2f
    if (f.zf) goto L_00475a2f;
L_00475942:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00475944:  // fld dword ptr [0x5dbc58]
    lpush(x, (long double)F32((uint32_t)(0x5dbc58u)));
L_0047594a:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047594c:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00475952:  // mov dword ptr [esp + 0x20], 0x461c3c00
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x461c3c00u);
L_0047595a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047595c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047595f:  // jne 0x475965
    if (!f.zf) goto L_00475965;
L_00475961:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475963:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475965:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475967:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_0047596d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047596f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475972:  // je 0x47597a
    if (f.zf) goto L_0047597a;
L_00475974:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475976:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0047597a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047597e:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_00475982:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475984:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475987:  // je 0x475991
    if (f.zf) goto L_00475991;
L_00475989:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047598d:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00475991:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475995:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00475997:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475999:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047599c:  // jne 0x4759a4
    if (!f.zf) goto L_004759a4;
L_0047599e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004759a0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004759a4:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004759aa:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_004759b0:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004759b4:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004759b8:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004759bb:  // jge 0x4759c4
    if ((f.sf == f.of)) goto L_004759c4;
L_004759bd:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004759c2:  // jmp 0x4759ce
    goto L_004759ce;
L_004759c4:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004759c7:  // jle 0x4759ce
    if ((f.zf || f.sf != f.of)) goto L_004759ce;
L_004759c9:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004759ce:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004759d2:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004759d8:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_004759db:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_004759e1:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004759e5:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004759e9:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004759ec:  // jge 0x4759f5
    if ((f.sf == f.of)) goto L_004759f5;
L_004759ee:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004759f3:  // jmp 0x4759ff
    goto L_004759ff;
L_004759f5:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004759f8:  // jle 0x4759ff
    if ((f.zf || f.sf != f.of)) goto L_004759ff;
L_004759fa:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004759ff:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475a01:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475a05:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475a07:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475a0b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475a0f:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475a13:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_00475a15:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00475a18:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00475a19:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475a1d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475a21:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475a25:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475a29:  // jne 0x475944
    if (!f.zf) goto L_00475944;
L_00475a2f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475a31:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475a33:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475a35:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00475a39:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475a3b:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475a3d:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00475a41:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475a43:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475a45:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00475a49:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475a4b:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00475a4f:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00475a52:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00475a53:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475a56:  // jne 0x4758f8
    if (!f.zf) goto L_004758f8;
L_00475a5c:  // jmp 0x476a0b
    goto L_00476a0b;
L_00475a61:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475a65:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475a6b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475a6d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475a70:  // je 0x475c22
    if (f.zf) goto L_00475c22;
L_00475a76:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475a7a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475a80:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475a82:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475a85:  // je 0x475c22
    if (f.zf) goto L_00475c22;
L_00475a8b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00475a8f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475a95:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475a97:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475a9a:  // je 0x475c22
    if (f.zf) goto L_00475c22;
L_00475aa0:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00475aa3:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00475aa6:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475aa8:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_00475aac:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00475aaf:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475ab0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00475ab2:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_00475ab5:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00475abb:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00475abd:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00475ac0:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_00475ac3:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00475ac7:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475ac9:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00475acd:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475ace:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475ad1:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00475ad5:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475ad9:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475adb:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475adf:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475ae3:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475ae5:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475ae9:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475aed:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475aef:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475af3:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475af7:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475afb:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_00475afd:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475b01:  // je 0x475bf0
    if (f.zf) goto L_00475bf0;
L_00475b07:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00475b09:  // fld dword ptr [0x5dbc54]
    lpush(x, (long double)F32((uint32_t)(0x5dbc54u)));
L_00475b0f:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00475b11:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00475b17:  // mov dword ptr [esp + 0x40], 0xc61c3c00
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0xc61c3c00u);
L_00475b1f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475b21:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475b24:  // jne 0x475b2c
    if (!f.zf) goto L_00475b2c;
L_00475b26:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00475b28:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00475b2c:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475b2e:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_00475b34:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475b36:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475b39:  // je 0x475b3f
    if (f.zf) goto L_00475b3f;
L_00475b3b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475b3d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00475b3f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475b43:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00475b45:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475b47:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475b4a:  // je 0x475b52
    if (f.zf) goto L_00475b52;
L_00475b4c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475b4e:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475b52:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475b56:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00475b58:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475b5a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475b5d:  // je 0x475b65
    if (f.zf) goto L_00475b65;
L_00475b5f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475b61:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475b65:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00475b69:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475b6f:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475b75:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00475b79:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00475b7d:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475b80:  // jge 0x475b89
    if ((f.sf == f.of)) goto L_00475b89;
L_00475b82:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475b87:  // jmp 0x475b93
    goto L_00475b93;
L_00475b89:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475b8c:  // jle 0x475b93
    if ((f.zf || f.sf != f.of)) goto L_00475b93;
L_00475b8e:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00475b93:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475b99:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00475b9c:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475ba2:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00475ba6:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00475baa:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475bad:  // jge 0x475bb6
    if ((f.sf == f.of)) goto L_00475bb6;
L_00475baf:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475bb4:  // jmp 0x475bc0
    goto L_00475bc0;
L_00475bb6:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475bb9:  // jle 0x475bc0
    if ((f.zf || f.sf != f.of)) goto L_00475bc0;
L_00475bbb:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00475bc0:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475bc2:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475bc6:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475bc8:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475bcc:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475bd0:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475bd4:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_00475bd6:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00475bd9:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00475bda:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475bde:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475be2:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475be6:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475bea:  // jne 0x475b09
    if (!f.zf) goto L_00475b09;
L_00475bf0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475bf2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475bf4:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475bf6:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00475bfa:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475bfc:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475bfe:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00475c02:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475c04:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475c06:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00475c0a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475c0c:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00475c10:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00475c13:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00475c14:  // lea edi, [edi + eax*2]
    edi = (uint32_t)((uint32_t)(edi + eax * 2u));
L_00475c17:  // jne 0x475abd
    if (!f.zf) goto L_00475abd;
L_00475c1d:  // jmp 0x476a0b
    goto L_00476a0b;
L_00475c22:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00475c26:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475c2c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475c2e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475c31:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00475c37:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475c3b:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475c41:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475c43:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475c46:  // jne 0x475df8
    if (!f.zf) goto L_00475df8;
L_00475c4c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475c50:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475c56:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475c58:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475c5b:  // jne 0x475df8
    if (!f.zf) goto L_00475df8;
L_00475c61:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00475c65:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475c6b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475c6d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475c70:  // jne 0x475df8
    if (!f.zf) goto L_00475df8;
L_00475c76:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00475c79:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00475c7c:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475c7e:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_00475c82:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00475c85:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475c86:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00475c88:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_00475c8b:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00475c91:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00475c93:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00475c96:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_00475c99:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00475c9d:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475c9f:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00475ca3:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475ca4:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475ca7:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00475cab:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475caf:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475cb1:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475cb5:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475cb9:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475cbb:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475cbf:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475cc3:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475cc5:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475cc9:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475ccd:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475cd1:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_00475cd3:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475cd7:  // je 0x475dc6
    if (f.zf) goto L_00475dc6;
L_00475cdd:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00475cdf:  // fld dword ptr [0x5dbc58]
    lpush(x, (long double)F32((uint32_t)(0x5dbc58u)));
L_00475ce5:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00475ce7:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_00475ced:  // mov dword ptr [esp + 0x40], 0x461c3c00
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0x461c3c00u);
L_00475cf5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475cf7:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475cfa:  // je 0x475d02
    if (f.zf) goto L_00475d02;
L_00475cfc:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00475cfe:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00475d02:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475d04:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00475d0a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475d0c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475d0f:  // jne 0x475d15
    if (!f.zf) goto L_00475d15;
L_00475d11:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475d13:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00475d15:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475d19:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00475d1b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475d1d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475d20:  // jne 0x475d28
    if (!f.zf) goto L_00475d28;
L_00475d22:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475d24:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475d28:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475d2c:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00475d2e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475d30:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475d33:  // jne 0x475d3b
    if (!f.zf) goto L_00475d3b;
L_00475d35:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475d37:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475d3b:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475d41:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475d47:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00475d4b:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00475d4f:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475d52:  // jge 0x475d5b
    if ((f.sf == f.of)) goto L_00475d5b;
L_00475d54:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475d59:  // jmp 0x475d65
    goto L_00475d65;
L_00475d5b:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475d5e:  // jle 0x475d65
    if ((f.zf || f.sf != f.of)) goto L_00475d65;
L_00475d60:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00475d65:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00475d69:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475d6f:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00475d72:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475d78:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00475d7c:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00475d80:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475d83:  // jge 0x475d8c
    if ((f.sf == f.of)) goto L_00475d8c;
L_00475d85:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475d8a:  // jmp 0x475d96
    goto L_00475d96;
L_00475d8c:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475d8f:  // jle 0x475d96
    if ((f.zf || f.sf != f.of)) goto L_00475d96;
L_00475d91:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00475d96:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475d98:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475d9c:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475d9e:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475da2:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475da6:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475daa:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_00475dac:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00475daf:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00475db0:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475db4:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475db8:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475dbc:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475dc0:  // jne 0x475cdf
    if (!f.zf) goto L_00475cdf;
L_00475dc6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475dc8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475dca:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475dcc:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00475dd0:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475dd2:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475dd4:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00475dd8:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475dda:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475ddc:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00475de0:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475de2:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00475de6:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00475de9:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00475dea:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475ded:  // jne 0x475c93
    if (!f.zf) goto L_00475c93;
L_00475df3:  // jmp 0x476a0b
    goto L_00476a0b;
L_00475df8:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475dfc:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475e02:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475e04:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475e07:  // jne 0x475fbd
    if (!f.zf) goto L_00475fbd;
L_00475e0d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475e11:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475e17:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475e19:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475e1c:  // jne 0x475fbd
    if (!f.zf) goto L_00475fbd;
L_00475e22:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00475e26:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475e2c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475e2e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475e31:  // je 0x475fbd
    if (f.zf) goto L_00475fbd;
L_00475e37:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00475e3a:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00475e3d:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475e3f:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_00475e43:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00475e46:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475e47:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00475e49:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_00475e4c:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00475e52:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00475e54:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00475e57:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_00475e5a:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00475e5e:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00475e60:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00475e64:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00475e65:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475e68:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00475e6c:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475e70:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475e72:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475e76:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475e7a:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475e7c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475e80:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475e84:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00475e86:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475e8a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475e8e:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475e92:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_00475e94:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475e98:  // je 0x475f8b
    if (f.zf) goto L_00475f8b;
L_00475e9e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00475ea0:  // fld dword ptr [0x5dbc54]
    lpush(x, (long double)F32((uint32_t)(0x5dbc54u)));
L_00475ea6:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00475ea8:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_00475eae:  // mov dword ptr [esp + 0x20], 0xc61c3c00
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xc61c3c00u);
L_00475eb6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475eb8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475ebb:  // je 0x475ec1
    if (f.zf) goto L_00475ec1;
L_00475ebd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475ebf:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475ec1:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475ec3:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00475ec9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475ecb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475ece:  // jne 0x475ed6
    if (!f.zf) goto L_00475ed6;
L_00475ed0:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00475ed2:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00475ed6:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475eda:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_00475ede:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475ee0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475ee3:  // jne 0x475eed
    if (!f.zf) goto L_00475eed;
L_00475ee5:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00475ee9:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00475eed:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475ef1:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00475ef3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475ef5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475ef8:  // je 0x475f00
    if (f.zf) goto L_00475f00;
L_00475efa:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475efc:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475f00:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00475f04:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475f0a:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475f10:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00475f14:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00475f18:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475f1b:  // jge 0x475f24
    if ((f.sf == f.of)) goto L_00475f24;
L_00475f1d:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475f22:  // jmp 0x475f2e
    goto L_00475f2e;
L_00475f24:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475f27:  // jle 0x475f2e
    if ((f.zf || f.sf != f.of)) goto L_00475f2e;
L_00475f29:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00475f2e:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00475f34:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00475f37:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00475f3d:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00475f41:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00475f45:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00475f48:  // jge 0x475f51
    if ((f.sf == f.of)) goto L_00475f51;
L_00475f4a:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00475f4f:  // jmp 0x475f5b
    goto L_00475f5b;
L_00475f51:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00475f54:  // jle 0x475f5b
    if ((f.zf || f.sf != f.of)) goto L_00475f5b;
L_00475f56:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00475f5b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475f5d:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_00475f61:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475f63:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_00475f67:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475f6b:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00475f6f:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_00475f71:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00475f74:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00475f75:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00475f79:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475f7d:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00475f81:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00475f85:  // jne 0x475ea0
    if (!f.zf) goto L_00475ea0;
L_00475f8b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475f8d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00475f8f:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475f91:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00475f95:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00475f97:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475f99:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00475f9d:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00475f9f:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475fa1:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00475fa5:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00475fa7:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00475fab:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00475fae:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00475faf:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00475fb2:  // jne 0x475e54
    if (!f.zf) goto L_00475e54;
L_00475fb8:  // jmp 0x476a0b
    goto L_00476a0b;
L_00475fbd:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00475fc1:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475fc7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475fc9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475fcc:  // jne 0x476182
    if (!f.zf) goto L_00476182;
L_00475fd2:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00475fd6:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475fdc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475fde:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00475fe1:  // je 0x476182
    if (f.zf) goto L_00476182;
L_00475fe7:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00475feb:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00475ff1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00475ff3:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00475ff6:  // jne 0x476182
    if (!f.zf) goto L_00476182;
L_00475ffc:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00475fff:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00476002:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00476004:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_00476008:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0047600b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047600c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047600e:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_00476011:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00476017:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00476019:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_0047601c:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_0047601f:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00476023:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00476025:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00476029:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047602a:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_0047602d:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00476031:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00476035:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476037:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047603b:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0047603f:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476041:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476045:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00476049:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047604b:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047604f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476053:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00476057:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_00476059:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047605d:  // je 0x476150
    if (f.zf) goto L_00476150;
L_00476063:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00476065:  // fld dword ptr [0x5dbc58]
    lpush(x, (long double)F32((uint32_t)(0x5dbc58u)));
L_0047606b:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047606d:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_00476073:  // mov dword ptr [esp + 0x20], 0x461c3c00
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x461c3c00u);
L_0047607b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047607d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476080:  // je 0x476088
    if (f.zf) goto L_00476088;
L_00476082:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00476084:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00476088:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047608a:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00476090:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476092:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00476095:  // jne 0x47609b
    if (!f.zf) goto L_0047609b;
L_00476097:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476099:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047609b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047609f:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_004760a3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004760a5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004760a8:  // je 0x4760b2
    if (f.zf) goto L_004760b2;
L_004760aa:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004760ae:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004760b2:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004760b6:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004760b8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004760ba:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004760bd:  // jne 0x4760c5
    if (!f.zf) goto L_004760c5;
L_004760bf:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004760c1:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004760c5:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004760cb:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_004760d1:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004760d5:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004760d9:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004760dc:  // jge 0x4760e5
    if ((f.sf == f.of)) goto L_004760e5;
L_004760de:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004760e3:  // jmp 0x4760ef
    goto L_004760ef;
L_004760e5:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004760e8:  // jle 0x4760ef
    if ((f.zf || f.sf != f.of)) goto L_004760ef;
L_004760ea:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004760ef:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004760f3:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004760f9:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_004760fc:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00476102:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00476106:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047610a:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_0047610d:  // jge 0x476116
    if ((f.sf == f.of)) goto L_00476116;
L_0047610f:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00476114:  // jmp 0x476120
    goto L_00476120;
L_00476116:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00476119:  // jle 0x476120
    if ((f.zf || f.sf != f.of)) goto L_00476120;
L_0047611b:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00476120:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00476122:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_00476126:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00476128:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_0047612c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00476130:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_00476134:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_00476136:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00476139:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0047613a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047613e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476142:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00476146:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047614a:  // jne 0x476065
    if (!f.zf) goto L_00476065;
L_00476150:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476152:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476154:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00476156:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_0047615a:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0047615c:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0047615e:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00476162:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00476164:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00476166:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0047616a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047616c:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00476170:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00476173:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00476174:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00476177:  // jne 0x476019
    if (!f.zf) goto L_00476019;
L_0047617d:  // jmp 0x476a0b
    goto L_00476a0b;
L_00476182:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00476186:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0047618c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047618e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00476191:  // jne 0x476343
    if (!f.zf) goto L_00476343;
L_00476197:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047619b:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004761a1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004761a3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004761a6:  // je 0x476343
    if (f.zf) goto L_00476343;
L_004761ac:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004761b0:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004761b6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004761b8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004761bb:  // je 0x476343
    if (f.zf) goto L_00476343;
L_004761c1:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_004761c4:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_004761c7:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004761c9:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_004761cd:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004761d0:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004761d1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004761d3:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_004761d6:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_004761dc:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004761de:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_004761e1:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_004761e4:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004761e8:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004761ea:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004761ee:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004761ef:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_004761f2:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004761f6:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004761fa:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_004761fc:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476200:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00476204:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476206:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047620a:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0047620e:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476210:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00476214:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476218:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0047621c:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_0047621e:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00476222:  // je 0x476311
    if (f.zf) goto L_00476311;
L_00476228:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0047622a:  // fld dword ptr [0x5dbc54]
    lpush(x, (long double)F32((uint32_t)(0x5dbc54u)));
L_00476230:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00476232:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_00476238:  // mov dword ptr [esp + 0x40], 0xc61c3c00
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0xc61c3c00u);
L_00476240:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476242:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476245:  // je 0x47624b
    if (f.zf) goto L_0047624b;
L_00476247:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476249:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047624b:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047624d:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_00476253:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476255:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00476258:  // jne 0x476260
    if (!f.zf) goto L_00476260;
L_0047625a:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047625c:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00476260:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00476264:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00476266:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476268:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047626b:  // je 0x476273
    if (f.zf) goto L_00476273;
L_0047626d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047626f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00476273:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476277:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00476279:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047627b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047627e:  // je 0x476286
    if (f.zf) goto L_00476286;
L_00476280:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476282:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476286:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0047628a:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00476290:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00476296:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047629a:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0047629e:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004762a1:  // jge 0x4762aa
    if ((f.sf == f.of)) goto L_004762aa;
L_004762a3:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004762a8:  // jmp 0x4762b4
    goto L_004762b4;
L_004762aa:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004762ad:  // jle 0x4762b4
    if ((f.zf || f.sf != f.of)) goto L_004762b4;
L_004762af:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004762b4:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004762ba:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_004762bd:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_004762c3:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004762c7:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004762cb:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004762ce:  // jge 0x4762d7
    if ((f.sf == f.of)) goto L_004762d7;
L_004762d0:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004762d5:  // jmp 0x4762e1
    goto L_004762e1;
L_004762d7:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004762da:  // jle 0x4762e1
    if ((f.zf || f.sf != f.of)) goto L_004762e1;
L_004762dc:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004762e1:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004762e3:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004762e7:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004762e9:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004762ed:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004762f1:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_004762f5:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_004762f7:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_004762fa:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004762fb:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004762ff:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476303:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00476307:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047630b:  // jne 0x47622a
    if (!f.zf) goto L_0047622a;
L_00476311:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476313:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476315:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00476317:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_0047631b:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0047631d:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0047631f:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00476323:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00476325:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00476327:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0047632b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047632d:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00476331:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00476334:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00476335:  // lea edi, [edi + eax*2]
    edi = (uint32_t)((uint32_t)(edi + eax * 2u));
L_00476338:  // jne 0x4761de
    if (!f.zf) goto L_004761de;
L_0047633e:  // jmp 0x476a0b
    goto L_00476a0b;
L_00476343:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00476347:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0047634d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047634f:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476352:  // je 0x476508
    if (f.zf) goto L_00476508;
L_00476358:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047635c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00476362:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476364:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00476367:  // jne 0x476508
    if (!f.zf) goto L_00476508;
L_0047636d:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00476371:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00476377:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476379:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047637c:  // jne 0x476508
    if (!f.zf) goto L_00476508;
L_00476382:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00476385:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_00476388:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047638a:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_0047638e:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00476391:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00476392:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00476394:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_00476397:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_0047639d:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0047639f:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_004763a2:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_004763a5:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004763a9:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004763ab:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004763af:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004763b0:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_004763b3:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004763b7:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004763bb:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_004763bd:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004763c1:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004763c5:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_004763c7:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004763cb:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004763cf:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_004763d1:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004763d5:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004763d9:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004763dd:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_004763df:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004763e3:  // je 0x4764d6
    if (f.zf) goto L_004764d6;
L_004763e9:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004763eb:  // fld dword ptr [0x5dbc58]
    lpush(x, (long double)F32((uint32_t)(0x5dbc58u)));
L_004763f1:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004763f3:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_004763f9:  // mov dword ptr [esp + 0x20], 0x461c3c00
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x461c3c00u);
L_00476401:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476403:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476406:  // je 0x47640e
    if (f.zf) goto L_0047640e;
L_00476408:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047640a:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0047640e:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00476410:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_00476414:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476416:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476419:  // je 0x476421
    if (f.zf) goto L_00476421;
L_0047641b:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047641d:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00476421:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00476425:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_0047642b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047642d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00476430:  // jne 0x476438
    if (!f.zf) goto L_00476438;
L_00476432:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476434:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00476438:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047643c:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0047643e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476440:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00476443:  // jne 0x47644b
    if (!f.zf) goto L_0047644b;
L_00476445:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476447:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047644b:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00476451:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00476457:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047645b:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047645f:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00476462:  // jge 0x47646b
    if ((f.sf == f.of)) goto L_0047646b;
L_00476464:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00476469:  // jmp 0x476475
    goto L_00476475;
L_0047646b:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_0047646e:  // jle 0x476475
    if ((f.zf || f.sf != f.of)) goto L_00476475;
L_00476470:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00476475:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00476479:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_0047647f:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00476482:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00476488:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047648c:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00476490:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00476493:  // jge 0x47649c
    if ((f.sf == f.of)) goto L_0047649c;
L_00476495:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_0047649a:  // jmp 0x4764a6
    goto L_004764a6;
L_0047649c:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_0047649f:  // jle 0x4764a6
    if ((f.zf || f.sf != f.of)) goto L_004764a6;
L_004764a1:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004764a6:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004764a8:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004764ac:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004764ae:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004764b2:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004764b6:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_004764ba:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_004764bc:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_004764bf:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004764c0:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004764c4:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004764c8:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004764cc:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004764d0:  // jne 0x4763eb
    if (!f.zf) goto L_004763eb;
L_004764d6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004764d8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004764da:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004764dc:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004764e0:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004764e2:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004764e4:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_004764e8:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004764ea:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004764ec:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004764f0:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004764f2:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004764f6:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004764f9:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004764fa:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_004764fd:  // jne 0x47639f
    if (!f.zf) goto L_0047639f;
L_00476503:  // jmp 0x476a0b
    goto L_00476a0b;
L_00476508:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047650c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00476512:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476514:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476517:  // je 0x4766c9
    if (f.zf) goto L_004766c9;
L_0047651d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476521:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00476527:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476529:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0047652c:  // jne 0x4766c9
    if (!f.zf) goto L_004766c9;
L_00476532:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00476536:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0047653c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0047653e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476541:  // je 0x4766c9
    if (f.zf) goto L_004766c9;
L_00476547:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_0047654a:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_0047654d:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047654f:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_00476553:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00476556:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00476557:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00476559:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_0047655c:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00476562:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00476564:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00476567:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_0047656a:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0047656e:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00476570:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00476574:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00476575:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00476578:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0047657c:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00476580:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476582:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476586:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0047658a:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047658c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476590:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00476594:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476596:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047659a:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047659e:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004765a2:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_004765a4:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004765a8:  // je 0x476697
    if (f.zf) goto L_00476697;
L_004765ae:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004765b0:  // fld dword ptr [0x5dbc54]
    lpush(x, (long double)F32((uint32_t)(0x5dbc54u)));
L_004765b6:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004765b8:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_004765be:  // mov dword ptr [esp + 0x40], 0xc61c3c00
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0xc61c3c00u);
L_004765c6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004765c8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004765cb:  // je 0x4765d1
    if (f.zf) goto L_004765d1;
L_004765cd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004765cf:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004765d1:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004765d3:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004765d5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004765d7:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004765da:  // je 0x4765e0
    if (f.zf) goto L_004765e0;
L_004765dc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004765de:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004765e0:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004765e4:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_004765ea:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004765ec:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004765ef:  // jne 0x4765f9
    if (!f.zf) goto L_004765f9;
L_004765f1:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004765f5:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_004765f9:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004765fd:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004765ff:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476601:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476604:  // je 0x47660c
    if (f.zf) goto L_0047660c;
L_00476606:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476608:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047660c:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00476610:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00476616:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_0047661c:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00476620:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00476624:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00476627:  // jge 0x476630
    if ((f.sf == f.of)) goto L_00476630;
L_00476629:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_0047662e:  // jmp 0x47663a
    goto L_0047663a;
L_00476630:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00476633:  // jle 0x47663a
    if ((f.zf || f.sf != f.of)) goto L_0047663a;
L_00476635:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_0047663a:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00476640:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00476643:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00476649:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047664d:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00476651:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00476654:  // jge 0x47665d
    if ((f.sf == f.of)) goto L_0047665d;
L_00476656:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_0047665b:  // jmp 0x476667
    goto L_00476667;
L_0047665d:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00476660:  // jle 0x476667
    if ((f.zf || f.sf != f.of)) goto L_00476667;
L_00476662:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00476667:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00476669:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_0047666d:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047666f:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_00476673:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00476677:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0047667b:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_0047667d:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00476680:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00476681:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00476685:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476689:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0047668d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00476691:  // jne 0x4765b0
    if (!f.zf) goto L_004765b0;
L_00476697:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476699:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047669b:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0047669d:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004766a1:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004766a3:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004766a5:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_004766a9:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004766ab:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004766ad:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004766b1:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004766b3:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004766b7:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004766ba:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004766bb:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_004766be:  // jne 0x476564
    if (!f.zf) goto L_00476564;
L_004766c4:  // jmp 0x476a0b
    goto L_00476a0b;
L_004766c9:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004766cd:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004766d3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004766d5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004766d8:  // je 0x47688a
    if (f.zf) goto L_0047688a;
L_004766de:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004766e2:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004766e8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004766ea:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004766ed:  // je 0x47688a
    if (f.zf) goto L_0047688a;
L_004766f3:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004766f7:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004766fd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004766ff:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00476702:  // jne 0x47688a
    if (!f.zf) goto L_0047688a;
L_00476708:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_0047670b:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_0047670e:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00476710:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_00476714:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00476717:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00476718:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047671a:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_0047671d:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_00476723:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00476725:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_00476728:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_0047672b:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0047672f:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00476731:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00476735:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00476736:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_00476739:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0047673d:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00476741:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476743:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476747:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0047674b:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047674d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476751:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00476755:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476757:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047675b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047675f:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00476763:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_00476765:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00476769:  // je 0x476858
    if (f.zf) goto L_00476858;
L_0047676f:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00476771:  // fld dword ptr [0x5dbc54]
    lpush(x, (long double)F32((uint32_t)(0x5dbc54u)));
L_00476777:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00476779:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_0047677f:  // mov dword ptr [esp + 0x40], 0xc61c3c00
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0xc61c3c00u);
L_00476787:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476789:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047678c:  // je 0x476792
    if (f.zf) goto L_00476792;
L_0047678e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476790:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00476792:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00476794:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00476796:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476798:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0047679b:  // je 0x4767a1
    if (f.zf) goto L_004767a1;
L_0047679d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047679f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004767a1:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004767a5:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004767a7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004767a9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004767ac:  // je 0x4767b4
    if (f.zf) goto L_004767b4;
L_004767ae:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004767b0:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004767b4:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004767b8:  // fcomp dword ptr [0x5dbc58]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc58u)));
    lpop(x);
L_004767be:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004767c0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004767c3:  // jne 0x4767cd
    if (!f.zf) goto L_004767cd;
L_004767c5:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004767c9:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_004767cd:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004767d1:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004767d7:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_004767dd:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004767e1:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004767e5:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_004767e8:  // jge 0x4767f1
    if ((f.sf == f.of)) goto L_004767f1;
L_004767ea:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004767ef:  // jmp 0x4767fb
    goto L_004767fb;
L_004767f1:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004767f4:  // jle 0x4767fb
    if ((f.zf || f.sf != f.of)) goto L_004767fb;
L_004767f6:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004767fb:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00476801:  // mov byte ptr [edx + 1], al
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)((eax & 0xffu));
L_00476804:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_0047680a:  // fistp qword ptr [esp + 0x50]
    M64((uint32_t)(esp + 0x50u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047680e:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00476812:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_00476815:  // jge 0x47681e
    if ((f.sf == f.of)) goto L_0047681e;
L_00476817:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_0047681c:  // jmp 0x476828
    goto L_00476828;
L_0047681e:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00476821:  // jle 0x476828
    if ((f.zf || f.sf != f.of)) goto L_00476828;
L_00476823:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_00476828:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047682a:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_0047682e:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00476830:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_00476834:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00476838:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_0047683c:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_0047683e:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00476841:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00476842:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00476846:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0047684a:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0047684e:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00476852:  // jne 0x476771
    if (!f.zf) goto L_00476771;
L_00476858:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047685a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047685c:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_0047685e:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_00476862:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_00476864:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_00476866:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_0047686a:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0047686c:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0047686e:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00476872:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_00476874:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_00476878:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0047687b:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0047687c:  // lea edi, [edi + edx*2]
    edi = (uint32_t)((uint32_t)(edi + edx * 2u));
L_0047687f:  // jne 0x476725
    if (!f.zf) goto L_00476725;
L_00476885:  // jmp 0x476a0b
    goto L_00476a0b;
L_0047688a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047688e:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00476894:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476896:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476899:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_0047689f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004768a3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004768a9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004768ab:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004768ae:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_004768b4:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004768b8:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004768be:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004768c0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004768c3:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_004768c9:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_004768cc:  // mov eax, dword ptr [ecx + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x24u)));
L_004768cf:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004768d1:  // imul edx, dword ptr [ecx + 8]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x8u)), f);
    edx = (uint32_t)(t0);
L_004768d5:  // mov esi, dword ptr [ecx + 0xc]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004768d8:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004768d9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004768db:  // lea edi, [esi + edx*2]
    edi = (uint32_t)((uint32_t)(esi + edx * 2u));
L_004768de:  // je 0x476a0b
    if (f.zf) goto L_00476a0b;
L_004768e4:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004768e6:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_004768e9:  // mov eax, dword ptr [ecx + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x20u)));
L_004768ec:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004768f0:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004768f2:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004768f6:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004768f7:  // lea edx, [edi + edx*2]
    edx = (uint32_t)((uint32_t)(edi + edx * 2u));
L_004768fa:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004768fe:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00476902:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476904:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476908:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0047690c:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_0047690e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476912:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00476916:  // fadd st(4)
    ST(0) = (ST(0)) + (ST(4));
L_00476918:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0047691c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476920:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00476924:  // fadd st(3)
    ST(0) = (ST(0)) + (ST(3));
L_00476926:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0047692a:  // je 0x4769de
    if (f.zf) goto L_004769de;
L_00476930:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00476932:  // fld dword ptr [0x5dbc54]
    lpush(x, (long double)F32((uint32_t)(0x5dbc54u)));
L_00476938:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0047693a:  // fcomp dword ptr [0x5dbc54]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbc54u)));
    lpop(x);
L_00476940:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476942:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476945:  // je 0x47694b
    if (f.zf) goto L_0047694b;
L_00476947:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476949:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047694b:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0047694d:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_0047694f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476951:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476954:  // je 0x47695a
    if (f.zf) goto L_0047695a;
L_00476956:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476958:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047695a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047695e:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00476960:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476962:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476965:  // je 0x47696d
    if (f.zf) goto L_0047696d;
L_00476967:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476969:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0047696d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476971:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00476973:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00476975:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00476978:  // je 0x476980
    if (f.zf) goto L_00476980;
L_0047697a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047697c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00476980:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00476986:  // mov byte ptr [edx + 1], 0x81
    M8((uint32_t)(edx + 0x1u)) = (uint8_t)(0x81u);
L_0047698a:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00476990:  // fistp qword ptr [esp + 0x40]
    M64((uint32_t)(esp + 0x40u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00476994:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00476998:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_0047699b:  // jge 0x4769a4
    if ((f.sf == f.of)) goto L_004769a4;
L_0047699d:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_004769a2:  // jmp 0x4769ae
    goto L_004769ae;
L_004769a4:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_004769a7:  // jle 0x4769ae
    if ((f.zf || f.sf != f.of)) goto L_004769ae;
L_004769a9:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004769ae:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004769b0:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004769b4:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004769b6:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004769ba:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004769be:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_004769c2:  // mov byte ptr [edx], al
    M8((uint32_t)(edx)) = (uint8_t)((eax & 0xffu));
L_004769c4:  // add edx, 2
    t0 = ladd<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_004769c7:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004769c8:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004769cc:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004769d0:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004769d4:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004769d8:  // jne 0x476932
    if (!f.zf) goto L_00476932;
L_004769de:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004769e0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004769e2:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004769e4:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004769e8:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004769ea:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004769ec:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_004769f0:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004769f2:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004769f4:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004769f8:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004769fa:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004769fe:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00476a01:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00476a02:  // lea edi, [edi + eax*2]
    edi = (uint32_t)((uint32_t)(edi + eax * 2u));
L_00476a05:  // jne 0x4768e6
    if (!f.zf) goto L_004768e6;
L_00476a0b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476a0d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476a0f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00476a10:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00476a11:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476a13:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00476a14:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00476a15:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00476a17:  // add esp, 0x168
    t0 = ladd<32>(esp, 0x168u, f);
    esp = (uint32_t)(t0);
L_00476a1d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004742a0, 004742a0)
