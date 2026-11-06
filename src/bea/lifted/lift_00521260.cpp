// lifted from 00521260 (FUN_00521260, 613 bytes, 176 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00521260(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00521260;
L_00521260:  // sub esp, 0x50
    t0 = lsub<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_00521263:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00521264:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00521265:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00521266:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00521267:  // mov edi, dword ptr [esp + 0x6c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0052126b:  // mov edx, dword ptr [0x63fd24]
    edx = (uint32_t)(M32((uint32_t)(0x63fd24u)));
L_00521271:  // fld dword ptr [0x63fd28]
    lpush(x, (long double)F32((uint32_t)(0x63fd28u)));
L_00521277:  // lea esi, [edi + edi*4]
    esi = (uint32_t)((uint32_t)(edi + edi * 4u));
L_0052127a:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0052127c:  // fadd dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00521282:  // shl esi, 0x15
    t0 = lshl<32>(esi, 0x15u, f);
    esi = (uint32_t)(t0);
L_00521285:  // mov eax, esi
    eax = (uint32_t)(esi);
L_00521287:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0052128e:  // and eax, 0xff000000
    t0 = llog<32>(eax & 0xff000000u, f);
    eax = (uint32_t)(t0);
L_00521293:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0052129a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052129b:  // mov eax, dword ptr [0x63fd1c]
    eax = (uint32_t)(M32((uint32_t)(0x63fd1cu)));
L_005212a0:  // push 0x3e051eb8
    t0 = 0x3e051eb8u; esp -= 4; M32(esp) = t0;
L_005212a5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005212a6:  // mov ecx, dword ptr [0x63fd20]
    ecx = (uint32_t)(M32((uint32_t)(0x63fd20u)));
L_005212ac:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005212af:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005212b0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005212b1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005212b2:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_005212b7:  // call 0x467010
    t0 = 0x00467010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005212bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005212bc:  // fld dword ptr [0x63fd28]
    lpush(x, (long double)F32((uint32_t)(0x63fd28u)));
L_005212c2:  // fadd dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8cc0u)));
L_005212c8:  // mov edx, dword ptr [0x63fd24]
    edx = (uint32_t)(M32((uint32_t)(0x63fd24u)));
L_005212ce:  // mov eax, dword ptr [0x63fd1c]
    eax = (uint32_t)(M32((uint32_t)(0x63fd1cu)));
L_005212d3:  // push 0x3e051eb8
    t0 = 0x3e051eb8u; esp -= 4; M32(esp) = t0;
L_005212d8:  // or esi, 0xffffff
    t0 = llog<32>(esi | 0xffffffu, f);
    esi = (uint32_t)(t0);
L_005212de:  // push 0x40000000
    t0 = 0x40000000u; esp -= 4; M32(esp) = t0;
L_005212e3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005212e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005212e5:  // mov ecx, dword ptr [0x63fd20]
    ecx = (uint32_t)(M32((uint32_t)(0x63fd20u)));
L_005212eb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005212ee:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005212ef:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005212f0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005212f1:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_005212f6:  // call 0x466e70
    t0 = 0x00466e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005212fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005212fb:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_005212ff:  // lea esi, [ebx + 4]
    esi = (uint32_t)((uint32_t)(ebx + 0x4u));
L_00521302:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00521303:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00521304:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00521306:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0052130b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00521310u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00521310:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00521312:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00521317u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00521317:  // fld dword ptr [0x63fd20]
    lpush(x, (long double)F32((uint32_t)(0x63fd20u)));
L_0052131d:  // fsub dword ptr [0x63fd1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x63fd1cu)));
L_00521323:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00521327:  // mov al, byte ptr [ebx + 0x48]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x48u))) & 0xffu);
L_0052132a:  // sar edx, 1
    t0 = lsar<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_0052132c:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00521332:  // mov dword ptr [esp + 0x6c], edx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(edx);
L_00521336:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00521338:  // fadd dword ptr [0x63fd1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x63fd1cu)));
L_0052133e:  // fisub dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) - ((long double)(int32_t)M32((uint32_t)(esp + 0x6cu)));
L_00521342:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_00521346:  // je 0x52139d
    if (f.zf) goto L_0052139d;
L_00521348:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0052134a:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0052134e:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00521351:  // sub eax, edi
    t0 = lsub<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_00521353:  // fadd dword ptr [esp + 0x64]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x64u)));
L_00521357:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0052135a:  // and eax, 0xff0080a0
    t0 = llog<32>(eax & 0xff0080a0u, f);
    eax = (uint32_t)(t0);
L_0052135f:  // or eax, 0x80a0
    t0 = llog<32>(eax | 0x80a0u, f);
    eax = (uint32_t)(t0);
L_00521364:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00521365:  // push 0x3e051eb8
    t0 = 0x3e051eb8u; esp -= 4; M32(esp) = t0;
L_0052136a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052136b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0052136e:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_00521372:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00521373:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_00521377:  // fadd dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x7cu)));
L_0052137b:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_00521381:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00521384:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_00521388:  // fsub dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8ba0u)));
L_0052138e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052138f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00521390:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00521395:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00521398:  // call 0x467010
    t0 = 0x00467010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052139du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052139d:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_0052139f:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_005213a3:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_005213a6:  // sub ebp, edi
    t0 = lsub<32>(ebp, edi, f);
    ebp = (uint32_t)(t0);
L_005213a8:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_005213ac:  // shl ebp, 0x10
    t0 = lshl<32>(ebp, 0x10u, f);
    ebp = (uint32_t)(t0);
L_005213af:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005213b1:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_005213b3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005213b5:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_005213ba:  // or edx, 0xffffff
    t0 = llog<32>(edx | 0xffffffu, f);
    edx = (uint32_t)(t0);
L_005213c0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005213c1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005213c2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_005213c7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_005213cc:  // push 0x3e051eb8
    t0 = 0x3e051eb8u; esp -= 4; M32(esp) = t0;
L_005213d1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005213d2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005213d3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005213d5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005213da:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005213dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005213df:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005213e1:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005213e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005213e6:  // mov al, byte ptr [ebx + 0x48]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x48u))) & 0xffu);
L_005213e9:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005213eb:  // jne 0x5214bb
    if (!f.zf) goto L_005214bb;
L_005213f1:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005213f6:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005213fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005213fb:  // fld dword ptr [0x5e4a2c]
    lpush(x, (long double)F32((uint32_t)(0x5e4a2cu)));
L_00521401:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00521406u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00521406:  // fld dword ptr [0x5e4a30]
    lpush(x, (long double)F32((uint32_t)(0x5e4a30u)));
L_0052140c:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_0052140e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00521410:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00521413:  // jne 0x5214bb
    if (!f.zf) goto L_005214bb;
L_00521419:  // mov ebx, dword ptr [ebx + 0x44]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x44u)));
L_0052141c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052141e:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00521420:  // mov word ptr [esp + 0x64], 0x49
    M16((uint32_t)(esp + 0x64u)) = (uint16_t)(0x49u);
L_00521427:  // mov word ptr [esp + 0x66], 0
    M16((uint32_t)(esp + 0x66u)) = (uint16_t)(0x0u);
L_0052142e:  // jle 0x521441
    if ((f.zf || f.sf != f.of)) goto L_00521441;
L_00521430:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00521432:  // lea edi, [esp + 0x20]
    edi = (uint32_t)((uint32_t)(esp + 0x20u));
L_00521436:  // shr ecx, 1
    t0 = lshr<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_00521438:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0052143a:  // adc ecx, ecx
    t0 = ladc<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_0052143c:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_0052143e:  // rep movsw word ptr es:[edi], word ptr [esi]
    while (ecx) { M16(edi) = M16(esi); esi += 2; edi += 2; ecx--; }
L_00521441:  // mov word ptr [esp + eax*2 + 0x20], 0
    M16((uint32_t)(esp + eax * 2u + 0x20u)) = (uint16_t)(0x0u);
L_00521448:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0052144c:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_00521450:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00521451:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00521452:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00521454:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00521459:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052145eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052145e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00521460:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00521465u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00521465:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00521469:  // mov edx, dword ptr [0x63fd30]
    edx = (uint32_t)(M32((uint32_t)(0x63fd30u)));
L_0052146f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00521471:  // and ebp, 0xff0080a0
    t0 = llog<32>(ebp & 0xff0080a0u, f);
    ebp = (uint32_t)(t0);
L_00521477:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00521479:  // fadd dword ptr [esp + 0x74]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x74u)));
L_0052147d:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_00521481:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00521486:  // or ebp, 0x80a0
    t0 = llog<32>(ebp | 0x80a0u, f);
    ebp = (uint32_t)(t0);
L_0052148c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052148d:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00521493:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00521494:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00521499:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0052149e:  // push 0x3e051eb8
    t0 = 0x3e051eb8u; esp -= 4; M32(esp) = t0;
L_005214a3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005214a4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005214a5:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005214aa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_005214ad:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_005214af:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005214b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005214b4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005214b6:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005214bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005214bb:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005214bc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005214bd:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005214be:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005214bf:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_005214c2:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00521260, 00521260)
