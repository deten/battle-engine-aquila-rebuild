// lifted from 004081c0 (vslot66, 5522 bytes, 1487 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004081c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004081c0;
L_004081c0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004081c2:  // push 0x5d122b
    t0 = 0x5d122bu; esp -= 4; M32(esp) = t0;
L_004081c7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004081cd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004081ce:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004081d5:  // sub esp, 0x23c
    t0 = lsub<32>(esp, 0x23cu, f);
    esp = (uint32_t)(t0);
L_004081db:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004081dc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004081dd:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004081df:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004081e0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004081e1:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004081e5:  // lea edi, [ebp + 0x250]
    edi = (uint32_t)((uint32_t)(ebp + 0x250u));
L_004081eb:  // mov dword ptr [esp + 0x1c], edi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edi);
L_004081ef:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004081f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004081f4:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004081f6:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004081f8:  // je 0x408234
    if (f.zf) goto L_00408234;
L_004081fa:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004081fd:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_00408203:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00408209:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040820b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040820e:  // jne 0x408221
    if (!f.zf) goto L_00408221;
L_00408210:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00408214:  // call 0x409780
    t0 = 0x00409780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408219u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408219:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0040821b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0040821d:  // jne 0x4081fa
    if (!f.zf) goto L_004081fa;
L_0040821f:  // jmp 0x408234
    goto L_00408234;
L_00408221:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00408222:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00408224:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408229u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408229:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040822a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0040822f:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408234u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408234:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00408236:  // call 0x40ebf0
    t0 = 0x0040ebf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040823bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040823b:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0040823d:  // mov dword ptr [ebp + 0x5d4], edi
    M32((uint32_t)(ebp + 0x5d4u)) = (uint32_t)(edi);
L_00408243:  // fld dword ptr [ebp + 0x5dc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x5dcu)));
L_00408249:  // fsub dword ptr [0x5d85d8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85d8u)));
L_0040824f:  // fcomp dword ptr [ebp + 0x5d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x5d8u)));
    lpop(x);
L_00408255:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408257:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040825a:  // jne 0x408270
    if (!f.zf) goto L_00408270;
L_0040825c:  // fld dword ptr [ebp + 0x5d8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x5d8u)));
L_00408262:  // fadd dword ptr [0x5d85d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d8u)));
L_00408268:  // fstp dword ptr [ebp + 0x5d8]
    F32((uint32_t)(ebp + 0x5d8u)) = lf32(ST(0));
    lpop(x);
L_0040826e:  // jmp 0x4082a9
    goto L_004082a9;
L_00408270:  // fld dword ptr [ebp + 0x5dc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x5dcu)));
L_00408276:  // fadd dword ptr [0x5d85d8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d8u)));
L_0040827c:  // fcomp dword ptr [ebp + 0x5d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x5d8u)));
    lpop(x);
L_00408282:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408284:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408287:  // je 0x40829d
    if (f.zf) goto L_0040829d;
L_00408289:  // fld dword ptr [ebp + 0x5d8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x5d8u)));
L_0040828f:  // fsub dword ptr [0x5d85d8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85d8u)));
L_00408295:  // fstp dword ptr [ebp + 0x5d8]
    F32((uint32_t)(ebp + 0x5d8u)) = lf32(ST(0));
    lpop(x);
L_0040829b:  // jmp 0x4082a9
    goto L_004082a9;
L_0040829d:  // mov eax, dword ptr [ebp + 0x5dc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x5dcu)));
L_004082a3:  // mov dword ptr [ebp + 0x5d8], eax
    M32((uint32_t)(ebp + 0x5d8u)) = (uint32_t)(eax);
L_004082a9:  // cmp dword ptr [ebp + 0x314], 1
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x314u)), 0x1u, f);
L_004082b0:  // jne 0x408364
    if (!f.zf) goto L_00408364;
L_004082b6:  // mov eax, dword ptr [ebp + 0x4a8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4a8u)));
L_004082bc:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004082be:  // jle 0x4082ff
    if ((f.zf || f.sf != f.of)) goto L_004082ff;
L_004082c0:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004082c1:  // lea ecx, [ebp + 0x1c]
    ecx = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004082c4:  // mov dword ptr [ebp + 0x4a8], eax
    M32((uint32_t)(ebp + 0x4a8u)) = (uint32_t)(eax);
L_004082ca:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004082cd:  // lea edx, [eax + ebp + 0x318]
    edx = (uint32_t)((uint32_t)(eax + ebp + 0x318u));
L_004082d4:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004082d6:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004082d8:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004082db:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004082de:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004082e1:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004082e4:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004082e7:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004082ea:  // mov edx, dword ptr [ebp + 0x4a8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4a8u)));
L_004082f0:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004082f6:  // fstp dword ptr [ebp + edx*4 + 0x458]
    F32((uint32_t)(ebp + edx * 4u + 0x458u)) = lf32(ST(0));
    lpop(x);
L_004082fd:  // jmp 0x408364
    goto L_00408364;
L_004082ff:  // lea eax, [ebp + 0x4a4]
    eax = (uint32_t)((uint32_t)(ebp + 0x4a4u));
L_00408305:  // lea ecx, [ebp + 0x448]
    ecx = (uint32_t)((uint32_t)(ebp + 0x448u));
L_0040830b:  // mov esi, 0x13
    esi = (uint32_t)(0x13u);
L_00408310:  // lea edx, [ecx - 0x10]
    edx = (uint32_t)((uint32_t)(ecx + 0xfffffff0u));
L_00408313:  // add eax, -4
    t0 = ladd<32>(eax, 0xfffffffcu, f);
    eax = (uint32_t)(t0);
L_00408316:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00408318:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00408319:  // mov ebx, dword ptr [edi]
    ebx = (uint32_t)(M32((uint32_t)(edi)));
L_0040831b:  // mov dword ptr [ecx], ebx
    M32((uint32_t)(ecx)) = (uint32_t)(ebx);
L_0040831d:  // mov ebx, dword ptr [edi + 4]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00408320:  // mov dword ptr [ecx + 4], ebx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(ebx);
L_00408323:  // mov ebx, dword ptr [edi + 8]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00408326:  // mov dword ptr [ecx + 8], ebx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(ebx);
L_00408329:  // mov edi, dword ptr [edi + 0xc]
    edi = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0040832c:  // mov dword ptr [ecx + 0xc], edi
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edi);
L_0040832f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00408331:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_00408334:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00408336:  // jne 0x408310
    if (!f.zf) goto L_00408310;
L_00408338:  // lea edx, [ebp + 0x1c]
    edx = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_0040833b:  // lea eax, [ebp + 0x318]
    eax = (uint32_t)((uint32_t)(ebp + 0x318u));
L_00408341:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00408343:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_00408345:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00408347:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0040834a:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_0040834d:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00408350:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00408353:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00408356:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00408359:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0040835e:  // mov dword ptr [ebp + 0x458], eax
    M32((uint32_t)(ebp + 0x458u)) = (uint32_t)(eax);
L_00408364:  // mov dword ptr [ebp + 0x314], 1
    M32((uint32_t)(ebp + 0x314u)) = (uint32_t)(0x1u);
L_0040836e:  // fld dword ptr [ebp + 0x604]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x604u)));
L_00408374:  // fmul dword ptr [0x5d8bec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8becu)));
L_0040837a:  // fstp dword ptr [ebp + 0x604]
    F32((uint32_t)(ebp + 0x604u)) = lf32(ST(0));
    lpop(x);
L_00408380:  // mov eax, dword ptr [ebp + 0x574]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x574u)));
L_00408386:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00408388:  // je 0x408400
    if (f.zf) goto L_00408400;
L_0040838a:  // cmp dword ptr [0x8a9ac4], edi
    t0 = lsub<32>(M32((uint32_t)(0x8a9ac4u)), edi, f);
L_00408390:  // jne 0x408400
    if (!f.zf) goto L_00408400;
L_00408392:  // test byte ptr [ebp + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x4u, f);
L_00408396:  // jne 0x408400
    if (!f.zf) goto L_00408400;
L_00408398:  // mov eax, dword ptr [eax + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_0040839b:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004083a0:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004083a1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004083a2:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004083a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004083a7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004083a9:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004083ab:  // je 0x408400
    if (f.zf) goto L_00408400;
L_004083ad:  // mov edx, dword ptr [ebp + 0x604]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x604u)));
L_004083b3:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004083b7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004083bb:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004083c1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004083c3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004083c6:  // je 0x4083d2
    if (f.zf) goto L_004083d2;
L_004083c8:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004083d0:  // jmp 0x4083eb
    goto L_004083eb;
L_004083d2:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004083d6:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004083dc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004083de:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004083e1:  // jne 0x4083eb
    if (!f.zf) goto L_004083eb;
L_004083e3:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_004083eb:  // mov eax, dword ptr [ebp + 0x574]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x574u)));
L_004083f1:  // mov eax, dword ptr [eax + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_004083f4:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004083f5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004083f6:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004083fa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004083fb:  // call 0x42e750
    t0 = 0x0042e750u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408400u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408400:  // test byte ptr [ebp + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x4u, f);
L_00408404:  // je 0x4084a6
    if (f.zf) goto L_004084a6;
L_0040840a:  // mov ecx, dword ptr [ebp + 0x5fc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x5fcu)));
L_00408410:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00408412:  // je 0x40841d
    if (f.zf) goto L_0040841d;
L_00408414:  // lea edx, [ebp + 0x1c]
    edx = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_00408417:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00408418:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040841du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040841d:  // cmp dword ptr [ebp + 0x260], 3
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x260u)), 0x3u, f);
L_00408424:  // jne 0x408d75
    if (!f.zf) goto L_00408d75;
L_0040842a:  // mov dword ptr [ebp + 0x280], 0x3c23d70a
    M32((uint32_t)(ebp + 0x280u)) = (uint32_t)(0x3c23d70au);
L_00408434:  // fld dword ptr [ebp + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x84u)));
L_0040843a:  // fld dword ptr [ebp + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x80u)));
L_00408440:  // fld dword ptr [ebp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x7cu)));
L_00408443:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00408445:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00408447:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00408449:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0040844b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040844d:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0040844f:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00408451:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00408453:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_00408455:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408457:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408459:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0040845b:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_0040845f:  // fmul dword ptr [ebp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x60u)));
L_00408462:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00408466:  // fmul dword ptr [ebp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x50u)));
L_00408469:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040846d:  // fmul dword ptr [ebp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x40u)));
L_00408470:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00408474:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00408478:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0040847c:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00408480:  // mov dword ptr [ebp + 0x7c], eax
    M32((uint32_t)(ebp + 0x7cu)) = (uint32_t)(eax);
L_00408483:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00408487:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0040848b:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0040848f:  // mov dword ptr [ebp + 0x80], ecx
    M32((uint32_t)(ebp + 0x80u)) = (uint32_t)(ecx);
L_00408495:  // mov dword ptr [ebp + 0x84], edx
    M32((uint32_t)(ebp + 0x84u)) = (uint32_t)(edx);
L_0040849b:  // mov dword ptr [ebp + 0x88], eax
    M32((uint32_t)(ebp + 0x88u)) = (uint32_t)(eax);
L_004084a1:  // jmp 0x408d75
    goto L_00408d75;
L_004084a6:  // cmp dword ptr [0x8a9ac0], 2
    t0 = lsub<32>(M32((uint32_t)(0x8a9ac0u)), 0x2u, f);
L_004084ad:  // jle 0x4084b9
    if ((f.zf || f.sf != f.of)) goto L_004084b9;
L_004084af:  // mov eax, dword ptr [ebp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x70u)));
L_004084b2:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004084b4:  // je 0x4084b9
    if (f.zf) goto L_004084b9;
L_004084b6:  // mov dword ptr [eax + 0x2c], edi
    M32((uint32_t)(eax + 0x2cu)) = (uint32_t)(edi);
L_004084b9:  // mov eax, dword ptr [ebp + 0x2fc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2fcu)));
L_004084bf:  // mov ebx, 0x3f800000
    ebx = (uint32_t)(0x3f800000u);
L_004084c4:  // fld dword ptr [ebp + 0x2f8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2f8u)));
L_004084ca:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004084cc:  // je 0x408573
    if (f.zf) goto L_00408573;
L_004084d2:  // fsub dword ptr [0x5d8574]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8574u)));
L_004084d8:  // fst dword ptr [ebp + 0x2f8]
    F32((uint32_t)(ebp + 0x2f8u)) = lf32(ST(0));
L_004084de:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004084e4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004084e6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004084e9:  // je 0x408587
    if (f.zf) goto L_00408587;
L_004084ef:  // mov ecx, dword ptr [ebp + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x578u)));
L_004084f5:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004084f8:  // mov esi, dword ptr [ecx + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_004084fb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004084fd:  // call dword ptr [edx + 0x1d4]
    t0 = M32((uint32_t)(edx + 0x1d4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408503u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408503:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00408505:  // jne 0x408565
    if (!f.zf) goto L_00408565;
L_00408507:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0040850a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040850c:  // call dword ptr [eax + 0x1d4]
    t0 = M32((uint32_t)(eax + 0x1d4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408512u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408512:  // mov ecx, dword ptr [eax + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xa4u)));
L_00408518:  // mov esi, dword ptr [ecx + 0x34]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x34u)));
L_0040851b:  // mov dword ptr [ebp + 0x588], edi
    M32((uint32_t)(ebp + 0x588u)) = (uint32_t)(edi);
L_00408521:  // mov eax, dword ptr [ebp + 0x260]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x260u)));
L_00408527:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0040852a:  // jne 0x408539
    if (!f.zf) goto L_00408539;
L_0040852c:  // mov ecx, dword ptr [ebp + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x578u)));
L_00408532:  // call 0x414010
    t0 = 0x00414010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408537u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408537:  // jmp 0x408549
    goto L_00408549;
L_00408539:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0040853c:  // jne 0x408549
    if (!f.zf) goto L_00408549;
L_0040853e:  // mov ecx, dword ptr [ebp + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x57cu)));
L_00408544:  // call 0x412000
    t0 = 0x00412000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408549u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408549:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0040854c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040854e:  // call dword ptr [edx + 0x1d4]
    t0 = M32((uint32_t)(edx + 0x1d4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408554u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408554:  // mov eax, dword ptr [eax + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xa4u)));
L_0040855a:  // cmp esi, dword ptr [eax + 0x34]
    t0 = lsub<32>(esi, M32((uint32_t)(eax + 0x34u)), f);
L_0040855d:  // je 0x408565
    if (f.zf) goto L_00408565;
L_0040855f:  // mov dword ptr [ebp + 0x2cc], ebx
    M32((uint32_t)(ebp + 0x2ccu)) = (uint32_t)(ebx);
L_00408565:  // mov dword ptr [ebp + 0x2f8], edi
    M32((uint32_t)(ebp + 0x2f8u)) = (uint32_t)(edi);
L_0040856b:  // mov dword ptr [ebp + 0x2fc], edi
    M32((uint32_t)(ebp + 0x2fcu)) = (uint32_t)(edi);
L_00408571:  // jmp 0x408587
    goto L_00408587;
L_00408573:  // fcomp dword ptr [0x5d85cc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ccu)));
    lpop(x);
L_00408579:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040857b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040857e:  // jne 0x408587
    if (!f.zf) goto L_00408587;
L_00408580:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00408582:  // call 0x40de40
    t0 = 0x0040de40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408587u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408587:  // cmp dword ptr [ebp + 0x4ac], edi
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x4acu)), edi, f);
L_0040858d:  // je 0x4085c3
    if (f.zf) goto L_004085c3;
L_0040858f:  // mov ecx, dword ptr [ebp + 0x4b0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x4b0u)));
L_00408595:  // fld dword ptr [ebp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfcu)));
L_0040859b:  // fsub dword ptr [ecx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x8u)));
L_0040859e:  // fst dword ptr [ebp + 0xfc]
    F32((uint32_t)(ebp + 0xfcu)) = lf32(ST(0));
L_004085a4:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004085aa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004085ac:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004085af:  // je 0x4085c3
    if (f.zf) goto L_004085c3;
L_004085b1:  // mov dword ptr [ebp + 0xfc], edi
    M32((uint32_t)(ebp + 0xfcu)) = (uint32_t)(edi);
L_004085b7:  // mov dword ptr [ebp + 0x5dc], edi
    M32((uint32_t)(ebp + 0x5dcu)) = (uint32_t)(edi);
L_004085bd:  // mov dword ptr [ebp + 0x4ac], edi
    M32((uint32_t)(ebp + 0x4acu)) = (uint32_t)(edi);
L_004085c3:  // mov eax, dword ptr [ebp + 0x4b0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4b0u)));
L_004085c9:  // fld dword ptr [eax + 0x1c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x1cu)));
L_004085cc:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_004085d2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004085d6:  // fld dword ptr [eax + 0x20]
    lpush(x, (long double)F32((uint32_t)(eax + 0x20u)));
L_004085d9:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_004085df:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004085e3:  // fld dword ptr [ebp + 0x2d8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2d8u)));
L_004085e9:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004085ed:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004085ef:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004085f2:  // jne 0x408664
    if (!f.zf) goto L_00408664;
L_004085f4:  // fld dword ptr [ebp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xf8u)));
L_004085fa:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004085fe:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408600:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408603:  // je 0x408664
    if (f.zf) goto L_00408664;
L_00408605:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0040860b:  // push 0x62331c
    t0 = 0x62331cu; esp -= 4; M32(esp) = t0;
L_00408610:  // lea eax, [esp + 0x150]
    eax = (uint32_t)((uint32_t)(esp + 0x150u));
L_00408617:  // push 0x623314
    t0 = 0x623314u; esp -= 4; M32(esp) = t0;
L_0040861c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040861d:  // mov dword ptr [ebp + 0x2e0], edx
    M32((uint32_t)(ebp + 0x2e0u)) = (uint32_t)(edx);
L_00408623:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408628u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408628:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0040862b:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_00408632:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408633:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00408634:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408639:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040863eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040863e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408640:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408642:  // fld dword ptr [0x8969b8]
    lpush(x, (long double)F32((uint32_t)(0x8969b8u)));
L_00408648:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00408649:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040864a:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_0040864f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408650:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408651:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408652:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00408654:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00408655:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00408658:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00408659:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040865a:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040865f:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408664u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408664:  // fld dword ptr [ebp + 0x2dc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2dcu)));
L_0040866a:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_0040866e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408670:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408673:  // jne 0x4086e5
    if (!f.zf) goto L_004086e5;
L_00408675:  // fld dword ptr [ebp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfcu)));
L_0040867b:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_0040867f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408681:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408684:  // je 0x4086e5
    if (f.zf) goto L_004086e5;
L_00408686:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0040868c:  // push 0x623304
    t0 = 0x623304u; esp -= 4; M32(esp) = t0;
L_00408691:  // lea eax, [esp + 0x150]
    eax = (uint32_t)((uint32_t)(esp + 0x150u));
L_00408698:  // push 0x623314
    t0 = 0x623314u; esp -= 4; M32(esp) = t0;
L_0040869d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040869e:  // mov dword ptr [ebp + 0x2e4], edx
    M32((uint32_t)(ebp + 0x2e4u)) = (uint32_t)(edx);
L_004086a4:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004086a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004086a9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004086ac:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_004086b3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004086b4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004086b5:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004086ba:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004086bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004086bf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004086c1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004086c3:  // fld dword ptr [0x8969b8]
    lpush(x, (long double)F32((uint32_t)(0x8969b8u)));
L_004086c9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004086ca:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004086cb:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_004086d0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004086d1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004086d2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004086d3:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004086d5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004086d6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004086d9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004086da:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004086db:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004086e0:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004086e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004086e5:  // fld dword ptr [ebp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xf8u)));
L_004086eb:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004086ef:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004086f1:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004086f4:  // je 0x408785
    if (f.zf) goto L_00408785;
L_004086fa:  // fld dword ptr [ebp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xf8u)));
L_00408700:  // fcomp dword ptr [ebp + 0x2d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x2d8u)));
    lpop(x);
L_00408706:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408708:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040870b:  // je 0x408785
    if (f.zf) goto L_00408785;
L_0040870d:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00408713:  // fsub dword ptr [ebp + 0x2e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x2e0u)));
L_00408719:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_0040871f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408721:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408724:  // jne 0x408785
    if (!f.zf) goto L_00408785;
L_00408726:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0040872c:  // push 0x62331c
    t0 = 0x62331cu; esp -= 4; M32(esp) = t0;
L_00408731:  // lea eax, [esp + 0x150]
    eax = (uint32_t)((uint32_t)(esp + 0x150u));
L_00408738:  // push 0x623314
    t0 = 0x623314u; esp -= 4; M32(esp) = t0;
L_0040873d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040873e:  // mov dword ptr [ebp + 0x2e0], edx
    M32((uint32_t)(ebp + 0x2e0u)) = (uint32_t)(edx);
L_00408744:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408749u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408749:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0040874c:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_00408753:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408754:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00408755:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040875a:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040875fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040875f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408761:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408763:  // fld dword ptr [0x8969b8]
    lpush(x, (long double)F32((uint32_t)(0x8969b8u)));
L_00408769:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040876a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040876b:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_00408770:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408771:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408772:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408773:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00408775:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00408776:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00408779:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0040877a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040877b:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408780:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408785u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408785:  // fld dword ptr [ebp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfcu)));
L_0040878b:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_0040878f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408791:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408794:  // je 0x408825
    if (f.zf) goto L_00408825;
L_0040879a:  // fld dword ptr [ebp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfcu)));
L_004087a0:  // fcomp dword ptr [ebp + 0x2dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x2dcu)));
    lpop(x);
L_004087a6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004087a8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004087ab:  // je 0x408825
    if (f.zf) goto L_00408825;
L_004087ad:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004087b3:  // fsub dword ptr [ebp + 0x2e4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x2e4u)));
L_004087b9:  // fcomp dword ptr [0x5d85d4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d4u)));
    lpop(x);
L_004087bf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004087c1:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004087c4:  // jne 0x408825
    if (!f.zf) goto L_00408825;
L_004087c6:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004087cc:  // push 0x623304
    t0 = 0x623304u; esp -= 4; M32(esp) = t0;
L_004087d1:  // lea eax, [esp + 0x150]
    eax = (uint32_t)((uint32_t)(esp + 0x150u));
L_004087d8:  // push 0x623314
    t0 = 0x623314u; esp -= 4; M32(esp) = t0;
L_004087dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004087de:  // mov dword ptr [ebp + 0x2e4], edx
    M32((uint32_t)(ebp + 0x2e4u)) = (uint32_t)(edx);
L_004087e4:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004087e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004087e9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004087ec:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_004087f3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004087f4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004087f5:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004087fa:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004087ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004087ff:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408801:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408803:  // fld dword ptr [0x8969b8]
    lpush(x, (long double)F32((uint32_t)(0x8969b8u)));
L_00408809:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040880a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040880b:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_00408810:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408811:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408812:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408813:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00408815:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00408816:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00408819:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0040881a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040881b:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408820:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408825u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408825:  // fld dword ptr [ebp + 0x2e8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2e8u)));
L_0040882b:  // fadd dword ptr [0x5d8c44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c44u)));
L_00408831:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00408837:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408839:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040883c:  // jne 0x4088b6
    if (!f.zf) goto L_004088b6;
L_0040883e:  // fld dword ptr [ebp + 0x514]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x514u)));
L_00408844:  // fadd dword ptr [0x5d8c44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c44u)));
L_0040884a:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00408850:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408852:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408855:  // je 0x4088b6
    if (f.zf) goto L_004088b6;
L_00408857:  // push 0x6232ec
    t0 = 0x6232ecu; esp -= 4; M32(esp) = t0;
L_0040885c:  // lea edx, [esp + 0x150]
    edx = (uint32_t)((uint32_t)(esp + 0x150u));
L_00408863:  // push 0x623314
    t0 = 0x623314u; esp -= 4; M32(esp) = t0;
L_00408868:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00408869:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040886eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040886e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00408871:  // lea eax, [esp + 0x14c]
    eax = (uint32_t)((uint32_t)(esp + 0x14cu));
L_00408878:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040887d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040887e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040887f:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408884u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408884:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408886:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408888:  // fld dword ptr [0x8969b8]
    lpush(x, (long double)F32((uint32_t)(0x8969b8u)));
L_0040888e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040888f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408890:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_00408895:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408896:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408897:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408898:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0040889a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040889b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040889e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0040889f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004088a0:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004088a5:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004088aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004088aa:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004088b0:  // mov dword ptr [ebp + 0x514], ecx
    M32((uint32_t)(ebp + 0x514u)) = (uint32_t)(ecx);
L_004088b6:  // fld dword ptr [ebp + 0x608]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x608u)));
L_004088bc:  // fadd dword ptr [0x5d8c44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c44u)));
L_004088c2:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_004088c8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004088ca:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004088cd:  // jne 0x408947
    if (!f.zf) goto L_00408947;
L_004088cf:  // fld dword ptr [ebp + 0x518]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x518u)));
L_004088d5:  // fadd dword ptr [0x5d8c44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c44u)));
L_004088db:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_004088e1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004088e3:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004088e6:  // je 0x408947
    if (f.zf) goto L_00408947;
L_004088e8:  // push 0x6232d4
    t0 = 0x6232d4u; esp -= 4; M32(esp) = t0;
L_004088ed:  // lea edx, [esp + 0x150]
    edx = (uint32_t)((uint32_t)(esp + 0x150u));
L_004088f4:  // push 0x623314
    t0 = 0x623314u; esp -= 4; M32(esp) = t0;
L_004088f9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004088fa:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004088ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004088ff:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00408902:  // lea eax, [esp + 0x14c]
    eax = (uint32_t)((uint32_t)(esp + 0x14cu));
L_00408909:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040890e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040890f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00408910:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408915u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408915:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408917:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408919:  // fld dword ptr [0x8969b8]
    lpush(x, (long double)F32((uint32_t)(0x8969b8u)));
L_0040891f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00408920:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408921:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_00408926:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408927:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408928:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408929:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0040892b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040892c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0040892f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00408930:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00408931:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408936:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040893bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040893b:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00408941:  // mov dword ptr [ebp + 0x518], ecx
    M32((uint32_t)(ebp + 0x518u)) = (uint32_t)(ecx);
L_00408947:  // fld dword ptr [ebp + 0x60c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60cu)));
L_0040894d:  // fadd dword ptr [0x5d8c44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c44u)));
L_00408953:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00408959:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040895b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040895e:  // jne 0x4089d8
    if (!f.zf) goto L_004089d8;
L_00408960:  // fld dword ptr [ebp + 0x51c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x51cu)));
L_00408966:  // fadd dword ptr [0x5d8c44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c44u)));
L_0040896c:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00408972:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408974:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408977:  // je 0x4089d8
    if (f.zf) goto L_004089d8;
L_00408979:  // push 0x6232bc
    t0 = 0x6232bcu; esp -= 4; M32(esp) = t0;
L_0040897e:  // lea edx, [esp + 0x150]
    edx = (uint32_t)((uint32_t)(esp + 0x150u));
L_00408985:  // push 0x623314
    t0 = 0x623314u; esp -= 4; M32(esp) = t0;
L_0040898a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040898b:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408990u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408990:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00408993:  // lea eax, [esp + 0x14c]
    eax = (uint32_t)((uint32_t)(esp + 0x14cu));
L_0040899a:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_0040899f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004089a0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004089a1:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004089a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004089a6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004089a8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004089aa:  // fld dword ptr [0x8969b8]
    lpush(x, (long double)F32((uint32_t)(0x8969b8u)));
L_004089b0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004089b1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004089b2:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_004089b7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004089b8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004089b9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004089ba:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004089bc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004089bd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004089c0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004089c1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004089c2:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004089c7:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004089ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004089cc:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004089d2:  // mov dword ptr [ebp + 0x51c], ecx
    M32((uint32_t)(ebp + 0x51cu)) = (uint32_t)(ecx);
L_004089d8:  // mov edx, dword ptr [ebp + 0xf8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf8u)));
L_004089de:  // mov ecx, dword ptr [ebp + 0x2c8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2c8u)));
L_004089e4:  // mov eax, dword ptr [ebp + 0xfc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xfcu)));
L_004089ea:  // mov dword ptr [ebp + 0x2d8], edx
    M32((uint32_t)(ebp + 0x2d8u)) = (uint32_t)(edx);
L_004089f0:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004089f3:  // mov dword ptr [ebp + 0x2d0], ecx
    M32((uint32_t)(ebp + 0x2d0u)) = (uint32_t)(ecx);
L_004089f9:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004089fb:  // mov dword ptr [ebp + 0x2dc], eax
    M32((uint32_t)(ebp + 0x2dcu)) = (uint32_t)(eax);
L_00408a01:  // call dword ptr [edx + 0x1d4]
    t0 = M32((uint32_t)(edx + 0x1d4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408a07u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408a07:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00408a09:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_00408a0b:  // je 0x408b13
    if (f.zf) goto L_00408b13;
L_00408a11:  // mov ecx, dword ptr [esi + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_00408a17:  // mov eax, dword ptr [ecx + 0x34]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x34u)));
L_00408a1a:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00408a1b:  // je 0x408adb
    if (f.zf) goto L_00408adb;
L_00408a21:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00408a22:  // jne 0x408b13
    if (!f.zf) goto L_00408b13;
L_00408a28:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00408a2a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00408a2c:  // add ecx, 0xc
    t0 = ladd<32>(ecx, 0xcu, f);
    ecx = (uint32_t)(t0);
L_00408a2f:  // cmp dword ptr [ecx], -1
    t0 = lsub<32>(M32((uint32_t)(ecx)), 0xffffffffu, f);
L_00408a32:  // je 0x408a36
    if (f.zf) goto L_00408a36;
L_00408a34:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00408a36:  // add eax, 0x64
    t0 = ladd<32>(eax, 0x64u, f);
    eax = (uint32_t)(t0);
L_00408a39:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_00408a3c:  // cmp eax, 0x1f4
    t0 = lsub<32>(eax, 0x1f4u, f);
L_00408a41:  // jl 0x408a2f
    if ((f.sf != f.of)) goto L_00408a2f;
L_00408a43:  // cmp edx, edi
    t0 = lsub<32>(edx, edi, f);
L_00408a45:  // je 0x408a5b
    if (f.zf) goto L_00408a5b;
L_00408a47:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00408a49:  // call 0x409880
    t0 = 0x00409880u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408a4eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408a4e:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00408a52:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00408a56:  // fdivr dword ptr [esi + 0x60]
    ST(0) = ((long double)F32((uint32_t)(esi + 0x60u))) / (ST(0));
L_00408a59:  // jmp 0x408a61
    goto L_00408a61;
L_00408a5b:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00408a61:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00408a67:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00408a69:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_00408a6f:  // fadd dword ptr [0x5d8604]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8604u)));
L_00408a75:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00408a79:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00408a7f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408a81:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408a84:  // jne 0x408a98
    if (!f.zf) goto L_00408a98;
L_00408a86:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00408a8c:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00408a92:  // fstp dword ptr [ebp + 0x2ec]
    F32((uint32_t)(ebp + 0x2ecu)) = lf32(ST(0));
    lpop(x);
L_00408a98:  // fld dword ptr [ebp + 0x2cc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2ccu)));
L_00408a9e:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00408aa2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408aa4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408aa7:  // jne 0x408ab5
    if (!f.zf) goto L_00408ab5;
L_00408aa9:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00408aad:  // mov dword ptr [ebp + 0x2cc], eax
    M32((uint32_t)(ebp + 0x2ccu)) = (uint32_t)(eax);
L_00408ab3:  // jmp 0x408b13
    goto L_00408b13;
L_00408ab5:  // fld dword ptr [ebp + 0x2cc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2ccu)));
L_00408abb:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00408abf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408ac1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408ac4:  // je 0x408b13
    if (f.zf) goto L_00408b13;
L_00408ac6:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00408acc:  // fcomp dword ptr [ebp + 0x2ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x2ecu)));
    lpop(x);
L_00408ad2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408ad4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408ad7:  // jne 0x408b13
    if (!f.zf) goto L_00408b13;
L_00408ad9:  // jmp 0x408b0d
    goto L_00408b0d;
L_00408adb:  // fld dword ptr [ebp + 0x2cc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2ccu)));
L_00408ae1:  // fcomp dword ptr [0x5d8c40]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c40u)));
    lpop(x);
L_00408ae7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408ae9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408aec:  // je 0x408b13
    if (f.zf) goto L_00408b13;
L_00408aee:  // fld dword ptr [ebp + 0x2cc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2ccu)));
L_00408af4:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_00408afa:  // fst dword ptr [ebp + 0x2cc]
    F32((uint32_t)(ebp + 0x2ccu)) = lf32(ST(0));
L_00408b00:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_00408b06:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408b08:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408b0b:  // jne 0x408b13
    if (!f.zf) goto L_00408b13;
L_00408b0d:  // mov dword ptr [ebp + 0x2cc], ebx
    M32((uint32_t)(ebp + 0x2ccu)) = (uint32_t)(ebx);
L_00408b13:  // fld dword ptr [ebp + 0x2cc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2ccu)));
L_00408b19:  // fsub dword ptr [ebp + 0x2c8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x2c8u)));
L_00408b1f:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00408b21:  // fcomp qword ptr [0x5d8c38]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d8c38u)));
    lpop(x);
L_00408b27:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408b29:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408b2c:  // je 0x408b3c
    if (f.zf) goto L_00408b3c;
L_00408b2e:  // mov ecx, dword ptr [ebp + 0x2cc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2ccu)));
L_00408b34:  // mov dword ptr [ebp + 0x2c8], ecx
    M32((uint32_t)(ebp + 0x2c8u)) = (uint32_t)(ecx);
L_00408b3a:  // jmp 0x408b82
    goto L_00408b82;
L_00408b3c:  // fld dword ptr [ebp + 0x2cc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2ccu)));
L_00408b42:  // fcomp dword ptr [ebp + 0x2c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x2c8u)));
    lpop(x);
L_00408b48:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408b4a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408b4d:  // jne 0x408b5d
    if (!f.zf) goto L_00408b5d;
L_00408b4f:  // fld dword ptr [ebp + 0x2c8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2c8u)));
L_00408b55:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_00408b5b:  // jmp 0x408b7c
    goto L_00408b7c;
L_00408b5d:  // fld dword ptr [ebp + 0x2cc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2ccu)));
L_00408b63:  // fcomp dword ptr [ebp + 0x2c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x2c8u)));
    lpop(x);
L_00408b69:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408b6b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408b6e:  // je 0x408b82
    if (f.zf) goto L_00408b82;
L_00408b70:  // fld dword ptr [ebp + 0x2c8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2c8u)));
L_00408b76:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_00408b7c:  // fstp dword ptr [ebp + 0x2c8]
    F32((uint32_t)(ebp + 0x2c8u)) = lf32(ST(0));
    lpop(x);
L_00408b82:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00408b84:  // call 0x406560
    t0 = 0x00406560u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408b89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408b89:  // mov eax, dword ptr [ebp + 0x260]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x260u)));
L_00408b8f:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00408b92:  // je 0x408ba5
    if (f.zf) goto L_00408ba5;
L_00408b94:  // mov edx, dword ptr [ebp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x34u)));
L_00408b97:  // and dh, 0xfb
    t0 = llog<8>(((edx >> 8) & 0xffu) & 0xfbu, f);
    edx = (edx & 0xffff00ffu) | (((uint32_t)(t0) & 0xffu) << 8);
L_00408b9a:  // or edx, 0x20200
    t0 = llog<32>(edx | 0x20200u, f);
    edx = (uint32_t)(t0);
L_00408ba0:  // mov dword ptr [ebp + 0x34], edx
    M32((uint32_t)(ebp + 0x34u)) = (uint32_t)(edx);
L_00408ba3:  // jmp 0x408bb4
    goto L_00408bb4;
L_00408ba5:  // mov ecx, dword ptr [ebp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x34u)));
L_00408ba8:  // and ecx, 0xfffdfdff
    t0 = llog<32>(ecx & 0xfffdfdffu, f);
    ecx = (uint32_t)(t0);
L_00408bae:  // or ch, 4
    t0 = llog<8>(((ecx >> 8) & 0xffu) | 0x4u, f);
    ecx = (ecx & 0xffff00ffu) | (((uint32_t)(t0) & 0xffu) << 8);
L_00408bb1:  // mov dword ptr [ebp + 0x34], ecx
    M32((uint32_t)(ebp + 0x34u)) = (uint32_t)(ecx);
L_00408bb4:  // mov ecx, dword ptr [ebp + 0x574]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x574u)));
L_00408bba:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00408bbd:  // je 0x408c8d
    if (f.zf) goto L_00408c8d;
L_00408bc3:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00408bc5:  // je 0x408bd2
    if (f.zf) goto L_00408bd2;
L_00408bc7:  // cmp dword ptr [ecx + 0x28], 2
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x28u)), 0x2u, f);
L_00408bcb:  // jne 0x408bd2
    if (!f.zf) goto L_00408bd2;
L_00408bcd:  // call 0x4d2a50
    t0 = 0x004d2a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408bd2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408bd2:  // cmp dword ptr [ebp + 0x260], 1
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x260u)), 0x1u, f);
L_00408bd9:  // jne 0x408c7d
    if (!f.zf) goto L_00408c7d;
L_00408bdf:  // fld dword ptr [ebp + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x118u)));
L_00408be5:  // fcomp dword ptr [0x5d8c30]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c30u)));
    lpop(x);
L_00408beb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408bed:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408bf0:  // jne 0x408c04
    if (!f.zf) goto L_00408c04;
L_00408bf2:  // fld dword ptr [ebp + 0x280]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x280u)));
L_00408bf8:  // fsub dword ptr [0x5d8c2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8c2cu)));
L_00408bfe:  // fstp dword ptr [ebp + 0x280]
    F32((uint32_t)(ebp + 0x280u)) = lf32(ST(0));
    lpop(x);
L_00408c04:  // fld dword ptr [ebp + 0x2f0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2f0u)));
L_00408c0a:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_00408c10:  // fcomp dword ptr [ebp + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x24u)));
    lpop(x);
L_00408c13:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408c15:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408c18:  // je 0x408c55
    if (f.zf) goto L_00408c55;
L_00408c1a:  // fld dword ptr [ebp + 0x2f4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x2f4u)));
L_00408c20:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_00408c26:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00408c2c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408c2e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408c31:  // jne 0x408c55
    if (!f.zf) goto L_00408c55;
L_00408c33:  // fld dword ptr [ebp + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x84u)));
L_00408c39:  // fsub dword ptr [0x5d8bec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8becu)));
L_00408c3f:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00408c45:  // mov ecx, dword ptr [ebp + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x578u)));
L_00408c4b:  // call 0x413760
    t0 = 0x00413760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408c50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408c50:  // jmp 0x408d75
    goto L_00408d75;
L_00408c55:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00408c5b:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00408c61:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408c62:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408c63:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00408c67:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408c68:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00408c69:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00408c6a:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00408c6e:  // push 0x1770
    t0 = 0x1770u; esp -= 4; M32(esp) = t0;
L_00408c73:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_00408c78:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408c7du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408c7d:  // mov ecx, dword ptr [ebp + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x578u)));
L_00408c83:  // call 0x413760
    t0 = 0x00413760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408c88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408c88:  // jmp 0x408d75
    goto L_00408d75;
L_00408c8d:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00408c8f:  // je 0x408c9c
    if (f.zf) goto L_00408c9c;
L_00408c91:  // cmp dword ptr [ecx + 0x28], 2
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x28u)), 0x2u, f);
L_00408c95:  // jne 0x408c9c
    if (!f.zf) goto L_00408c9c;
L_00408c97:  // call 0x4d28c0
    t0 = 0x004d28c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408c9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408c9c:  // fld dword ptr [ebp + 0xfc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfcu)));
L_00408ca2:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00408ca8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408caa:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00408cad:  // jne 0x408d29
    if (!f.zf) goto L_00408d29;
L_00408caf:  // mov eax, dword ptr [ebp + 0x59c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x59cu)));
L_00408cb5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00408cb6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00408cb7:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408cbc:  // call 0x4e1ab0
    t0 = 0x004e1ab0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408cc1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408cc1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00408cc3:  // jne 0x408ced
    if (!f.zf) goto L_00408ced;
L_00408cc5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408cc6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408cc8:  // mov ecx, dword ptr [ebp + 0x59c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x59cu)));
L_00408cce:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00408ccf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408cd1:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_00408cd6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408cd7:  // push 0x3e4ccccd
    t0 = 0x3e4ccccdu; esp -= 4; M32(esp) = t0;
L_00408cdc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00408cde:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_00408ce0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00408ce1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00408ce2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00408ce3:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408ce8:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408cedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408ced:  // mov edx, dword ptr [ebp + 0x59c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x59cu)));
L_00408cf3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00408cf4:  // add edx, 0x40
    t0 = ladd<32>(edx, 0x40u, f);
    edx = (uint32_t)(t0);
L_00408cf7:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408cfc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00408cfd:  // call 0x4e1880
    t0 = 0x004e1880u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408d02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408d02:  // mov ecx, dword ptr [ebp + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x57cu)));
L_00408d08:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408d09:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00408d0a:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_00408d0d:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_00408d13:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408d18:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00408d1e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00408d21:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00408d22:  // call 0x4e18d0
    t0 = 0x004e18d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408d27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408d27:  // jmp 0x408d5b
    goto L_00408d5b;
L_00408d29:  // mov eax, dword ptr [ebp + 0x59c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x59cu)));
L_00408d2f:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00408d31:  // je 0x408d5b
    if (f.zf) goto L_00408d5b;
L_00408d33:  // add eax, 0x40
    t0 = ladd<32>(eax, 0x40u, f);
    eax = (uint32_t)(t0);
L_00408d36:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00408d37:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00408d38:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408d3d:  // call 0x4e1880
    t0 = 0x004e1880u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408d42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408d42:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00408d44:  // je 0x408d5b
    if (f.zf) goto L_00408d5b;
L_00408d46:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00408d49:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00408d4a:  // push 0x3ca3d70a
    t0 = 0x3ca3d70au; esp -= 4; M32(esp) = t0;
L_00408d4f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00408d50:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00408d51:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00408d56:  // call 0x4e1260
    t0 = 0x004e1260u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408d5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408d5b:  // mov ecx, dword ptr [ebp + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x57cu)));
L_00408d61:  // call 0x410c50
    t0 = 0x00410c50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408d66u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408d66:  // cmp dword ptr [ebp + 0x580], edi
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x580u)), edi, f);
L_00408d6c:  // jne 0x408d75
    if (!f.zf) goto L_00408d75;
L_00408d6e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00408d70:  // call 0x40a580
    t0 = 0x0040a580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408d75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408d75:  // fld dword ptr [ebp + 0x84]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x84u)));
L_00408d7b:  // fld dword ptr [ebp + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x80u)));
L_00408d81:  // fld dword ptr [ebp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x7cu)));
L_00408d84:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00408d86:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00408d88:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00408d8a:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00408d8c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00408d8e:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00408d90:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00408d92:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00408d94:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_00408d96:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408d98:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408d9a:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00408d9c:  // fcomp dword ptr [0x5d8570]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8570u)));
    lpop(x);
L_00408da2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408da4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408da7:  // je 0x408dca
    if (f.zf) goto L_00408dca;
L_00408da9:  // mov ecx, dword ptr [ebp + 0x310]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x310u)));
L_00408daf:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00408db0:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00408db2:  // mov dword ptr [ebp + 0x310], ecx
    M32((uint32_t)(ebp + 0x310u)) = (uint32_t)(ecx);
L_00408db8:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_00408dbb:  // jle 0x408dd0
    if ((f.zf || f.sf != f.of)) goto L_00408dd0;
L_00408dbd:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00408dc0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00408dc2:  // call dword ptr [edx + 0x110]
    t0 = M32((uint32_t)(edx + 0x110u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408dc8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408dc8:  // jmp 0x408dd0
    goto L_00408dd0;
L_00408dca:  // mov dword ptr [ebp + 0x310], edi
    M32((uint32_t)(ebp + 0x310u)) = (uint32_t)(edi);
L_00408dd0:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_00408dd3:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00408dd5:  // call dword ptr [eax + 0xb4]
    t0 = M32((uint32_t)(eax + 0xb4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408ddbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408ddb:  // fadd dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x84u)));
L_00408de1:  // lea ebx, [ebp + 0x1c]
    ebx = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_00408de4:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00408de8:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_00408dea:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00408df0:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00408df4:  // mov dword ptr [ebp + 0x84], ecx
    M32((uint32_t)(ebp + 0x84u)) = (uint32_t)(ecx);
L_00408dfa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408dfc:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408dff:  // je 0x408e2e
    if (f.zf) goto L_00408e2e;
L_00408e01:  // fld dword ptr [ebp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x7cu)));
L_00408e04:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00408e0a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408e0c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408e0f:  // je 0x408e7c
    if (f.zf) goto L_00408e7c;
L_00408e11:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_00408e13:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_00408e19:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00408e1f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00408e25:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408e27:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408e2a:  // je 0x408e76
    if (f.zf) goto L_00408e76;
L_00408e2c:  // jmp 0x408e6e
    goto L_00408e6e;
L_00408e2e:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_00408e30:  // fcomp dword ptr [0x5d8c28]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c28u)));
    lpop(x);
L_00408e36:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408e38:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408e3b:  // jne 0x408e7c
    if (!f.zf) goto L_00408e7c;
L_00408e3d:  // fld dword ptr [ebp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x7cu)));
L_00408e40:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00408e46:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408e48:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408e4b:  // jne 0x408e7c
    if (!f.zf) goto L_00408e7c;
L_00408e4d:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_00408e4f:  // fsub dword ptr [0x5d8c28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8c28u)));
L_00408e55:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00408e5b:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00408e61:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00408e67:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408e69:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408e6c:  // je 0x408e76
    if (f.zf) goto L_00408e76;
L_00408e6e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408e70:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00408e76:  // fmul dword ptr [ebp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x7cu)));
L_00408e79:  // fstp dword ptr [ebp + 0x7c]
    F32((uint32_t)(ebp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_00408e7c:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00408e7f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00408e85:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408e87:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408e8a:  // je 0x408ebd
    if (f.zf) goto L_00408ebd;
L_00408e8c:  // fld dword ptr [ebp + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x80u)));
L_00408e92:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00408e98:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408e9a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408e9d:  // je 0x408f16
    if (f.zf) goto L_00408f16;
L_00408e9f:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00408ea2:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_00408ea8:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00408eae:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00408eb4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408eb6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408eb9:  // je 0x408f0a
    if (f.zf) goto L_00408f0a;
L_00408ebb:  // jmp 0x408f02
    goto L_00408f02;
L_00408ebd:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00408ec0:  // fcomp dword ptr [0x5d8c28]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c28u)));
    lpop(x);
L_00408ec6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408ec8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408ecb:  // jne 0x408f16
    if (!f.zf) goto L_00408f16;
L_00408ecd:  // fld dword ptr [ebp + 0x80]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x80u)));
L_00408ed3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00408ed9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408edb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408ede:  // jne 0x408f16
    if (!f.zf) goto L_00408f16;
L_00408ee0:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_00408ee3:  // fsub dword ptr [0x5d8c28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8c28u)));
L_00408ee9:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_00408eef:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00408ef5:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00408efb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408efd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408f00:  // je 0x408f0a
    if (f.zf) goto L_00408f0a;
L_00408f02:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408f04:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00408f0a:  // fmul dword ptr [ebp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x80u)));
L_00408f10:  // fstp dword ptr [ebp + 0x80]
    F32((uint32_t)(ebp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_00408f16:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_00408f19:  // fcomp dword ptr [0x5d8c24]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c24u)));
    lpop(x);
L_00408f1f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408f21:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408f24:  // je 0x408f69
    if (f.zf) goto L_00408f69;
L_00408f26:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00408f2a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00408f30:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408f32:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408f35:  // je 0x408f69
    if (f.zf) goto L_00408f69;
L_00408f37:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_00408f3a:  // fadd dword ptr [0x5d8c20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c20u)));
L_00408f40:  // fmul dword ptr [0x5d8c1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c1cu)));
L_00408f46:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00408f4c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408f4e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00408f51:  // je 0x408f5b
    if (f.zf) goto L_00408f5b;
L_00408f53:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408f55:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00408f5b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00408f5f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00408f61:  // fstp dword ptr [ebp + 0x84]
    F32((uint32_t)(ebp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00408f67:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408f69:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00408f6b:  // call 0x4015e0
    t0 = 0x004015e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408f70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408f70:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_00408f72:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00408f74:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_00408f78:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00408f7b:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_00408f7f:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00408f82:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_00408f86:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00408f89:  // mov dword ptr [esp + 0x74], ecx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(ecx);
L_00408f8d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00408f8f:  // call 0x401fd0
    t0 = 0x00401fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408f94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408f94:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00408f96:  // je 0x4093e2
    if (f.zf) goto L_004093e2;
L_00408f9c:  // mov ecx, dword ptr [ebp + 0x264]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x264u)));
L_00408fa2:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_00408fa4:  // je 0x4093e2
    if (f.zf) goto L_004093e2;
L_00408faa:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00408fac:  // lea eax, [esp + 0xb8]
    eax = (uint32_t)((uint32_t)(esp + 0xb8u));
L_00408fb3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00408fb4:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408fb7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408fb7:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_00408fba:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00408fbd:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00408fbf:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00408fc1:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00408fc3:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00408fc5:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00408fc7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00408fc9:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_00408fcb:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00408fcd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00408fcf:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00408fd5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408fd7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408fd9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408fdb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408fde:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00408fe0:  // jne 0x4093e2
    if (!f.zf) goto L_004093e2;
L_00408fe6:  // mov ecx, dword ptr [ebp + 0x264]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x264u)));
L_00408fec:  // lea eax, [esp + 0xb8]
    eax = (uint32_t)((uint32_t)(esp + 0xb8u));
L_00408ff3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00408ff4:  // lea esi, [ebp + 0x268]
    esi = (uint32_t)((uint32_t)(ebp + 0x268u));
L_00408ffa:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00408ffc:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408fffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408fff:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00409001:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00409003:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00409005:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00409008:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_0040900b:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0040900e:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00409011:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00409014:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00409017:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_0040901b:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_0040901d:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_0040901f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00409020:  // fstp dword ptr [ebx]
    F32((uint32_t)(ebx)) = lf32(ST(0));
    lpop(x);
L_00409022:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_00409025:  // fadd dword ptr [ebx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x4u)));
L_00409028:  // fstp dword ptr [ebx + 4]
    F32((uint32_t)(ebx + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0040902b:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_0040902e:  // fadd dword ptr [ebx + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x8u)));
L_00409031:  // fstp dword ptr [ebx + 8]
    F32((uint32_t)(ebx + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00409034:  // mov ecx, dword ptr [ebp + 0x264]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x264u)));
L_0040903a:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0040903c:  // call dword ptr [edx + 0x7c]
    t0 = M32((uint32_t)(edx + 0x7cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040903fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040903f:  // mov eax, dword ptr [ebp + 0x264]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x264u)));
L_00409045:  // mov ecx, dword ptr [eax + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x34u)));
L_00409048:  // lea esi, [eax + 0x3c]
    esi = (uint32_t)((uint32_t)(eax + 0x3cu));
L_0040904b:  // test ecx, 0x80000000
    t0 = llog<32>(ecx & 0x80000000u, f);
L_00409051:  // jne 0x409058
    if (!f.zf) goto L_00409058;
L_00409053:  // mov esi, 0x83d9c0
    esi = (uint32_t)(0x83d9c0u);
L_00409058:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0040905c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00409061:  // lea edi, [esp + 0x78]
    edi = (uint32_t)((uint32_t)(esp + 0x78u));
L_00409065:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00409067:  // fcomp dword ptr [esp + 0x78]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x78u)));
    lpop(x);
L_0040906b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040906d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00409070:  // je 0x40910b
    if (f.zf) goto L_0040910b;
L_00409076:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0040907a:  // fcomp dword ptr [esp + 0x7c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x7cu)));
    lpop(x);
L_0040907e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00409080:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00409083:  // je 0x40910b
    if (f.zf) goto L_0040910b;
L_00409089:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0040908d:  // fcomp dword ptr [esp + 0x80]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x80u)));
    lpop(x);
L_00409094:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00409096:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00409099:  // je 0x40910b
    if (f.zf) goto L_0040910b;
L_0040909b:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0040909f:  // fcomp dword ptr [esp + 0x88]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x88u)));
    lpop(x);
L_004090a6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004090a8:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004090ab:  // je 0x40910b
    if (f.zf) goto L_0040910b;
L_004090ad:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004090b1:  // fcomp dword ptr [esp + 0x8c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x8cu)));
    lpop(x);
L_004090b8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004090ba:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004090bd:  // je 0x40910b
    if (f.zf) goto L_0040910b;
L_004090bf:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004090c3:  // fcomp dword ptr [esp + 0x90]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x90u)));
    lpop(x);
L_004090ca:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004090cc:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004090cf:  // je 0x40910b
    if (f.zf) goto L_0040910b;
L_004090d1:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004090d5:  // fcomp dword ptr [esp + 0x98]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x98u)));
    lpop(x);
L_004090dc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004090de:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004090e1:  // je 0x40910b
    if (f.zf) goto L_0040910b;
L_004090e3:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004090e7:  // fcomp dword ptr [esp + 0x9c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x9cu)));
    lpop(x);
L_004090ee:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004090f0:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004090f3:  // je 0x40910b
    if (f.zf) goto L_0040910b;
L_004090f5:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004090f9:  // fcomp dword ptr [esp + 0xa0]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0xa0u)));
    lpop(x);
L_00409100:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00409102:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00409105:  // jne 0x40941b
    if (!f.zf) goto L_0040941b;
L_0040910b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0040910f:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00409113:  // mov edx, dword ptr [esp + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00409117:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0040911b:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0040911f:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00409123:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_00409127:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_0040912b:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0040912f:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_00409133:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_00409137:  // fst dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
L_0040913b:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00409142:  // fmul dword ptr [esp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x60u)));
L_00409146:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_0040914d:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_00409151:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409153:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_0040915a:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_0040915e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409160:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_00409167:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_0040916b:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_00409172:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00409176:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409178:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_0040917f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00409181:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409183:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_0040918a:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_0040918e:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_00409195:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_00409199:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040919b:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_004091a2:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004091a6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004091a8:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004091ac:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004091b0:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004091b4:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_004091bb:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_004091bf:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004091c6:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004091ca:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004091cc:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004091d3:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_004091d7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004091d9:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004091e0:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004091e4:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004091eb:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004091ef:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004091f1:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_004091f8:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004091fa:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004091fc:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00409200:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_00409207:  // fmul dword ptr [esp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x60u)));
L_0040920b:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_00409212:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_00409216:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0040921a:  // mov dword ptr [esp + 0xcc], ecx
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(ecx);
L_00409221:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409223:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_0040922a:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_0040922e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409230:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00409234:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00409238:  // fstp dword ptr [esp + 0xc8]
    F32((uint32_t)(esp + 0xc8u)) = lf32(ST(0));
    lpop(x);
L_0040923f:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_00409243:  // fmul dword ptr [esp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x80u)));
L_0040924a:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0040924e:  // fmul dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x7cu)));
L_00409252:  // mov dword ptr [esp + 0xd0], edx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(edx);
L_00409259:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040925b:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_0040925f:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_00409263:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409265:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00409269:  // fmul dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x7cu)));
L_0040926d:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00409271:  // fmul dword ptr [esp + 0x78]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x78u)));
L_00409275:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_00409279:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040927a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040927c:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_00409283:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00409285:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409287:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040928b:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_0040928f:  // fmul dword ptr [esp + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x84u)));
L_00409296:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_0040929a:  // fmul dword ptr [esp + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x80u)));
L_004092a1:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004092a5:  // mov dword ptr [esp + 0xc0], eax
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(eax);
L_004092ac:  // lea eax, [esp + 0xcc]
    eax = (uint32_t)((uint32_t)(esp + 0xccu));
L_004092b3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004092b5:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004092b9:  // fmul dword ptr [esp + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x7cu)));
L_004092bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004092be:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004092c0:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004092c4:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004092c8:  // fstp dword ptr [esp + 0xc0]
    F32((uint32_t)(esp + 0xc0u)) = lf32(ST(0));
    lpop(x);
L_004092cf:  // mov dword ptr [esp + 0xc8], ecx
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(ecx);
L_004092d6:  // lea ecx, [esp + 0xc0]
    ecx = (uint32_t)((uint32_t)(esp + 0xc0u));
L_004092dd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004092de:  // lea ecx, [esp + 0x128]
    ecx = (uint32_t)((uint32_t)(esp + 0x128u));
L_004092e5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004092e7:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004092ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004092ec:  // mov eax, dword ptr [ebp + 0x264]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x264u)));
L_004092f2:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004092f7:  // fld dword ptr [ebx + 8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x8u)));
L_004092fa:  // lea esi, [esp + 0x11c]
    esi = (uint32_t)((uint32_t)(esp + 0x11cu));
L_00409301:  // lea edi, [esp + 0x78]
    edi = (uint32_t)((uint32_t)(esp + 0x78u));
L_00409305:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00409307:  // fsub dword ptr [eax + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x24u)));
L_0040930a:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_0040930d:  // fsub dword ptr [eax + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x20u)));
L_00409310:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_00409312:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_00409315:  // fld dword ptr [esp + 0x13c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x13cu)));
L_0040931c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0040931e:  // fld dword ptr [esp + 0x140]
    lpush(x, (long double)F32((uint32_t)(esp + 0x140u)));
L_00409325:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00409327:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409329:  // fld dword ptr [esp + 0x144]
    lpush(x, (long double)F32((uint32_t)(esp + 0x144u)));
L_00409330:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00409332:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409334:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00409338:  // fld dword ptr [esp + 0x130]
    lpush(x, (long double)F32((uint32_t)(esp + 0x130u)));
L_0040933f:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00409341:  // fld dword ptr [esp + 0x134]
    lpush(x, (long double)F32((uint32_t)(esp + 0x134u)));
L_00409348:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0040934a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040934c:  // fld dword ptr [esp + 0x12c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x12cu)));
L_00409353:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00409355:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00409357:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0040935b:  // fld dword ptr [esp + 0x11c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x11cu)));
L_00409362:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00409364:  // fld dword ptr [esp + 0x120]
    lpush(x, (long double)F32((uint32_t)(esp + 0x120u)));
L_0040936b:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0040936d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040936f:  // fld dword ptr [esp + 0x124]
    lpush(x, (long double)F32((uint32_t)(esp + 0x124u)));
L_00409376:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00409378:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0040937a:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0040937e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00409380:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00409382:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00409384:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00409388:  // fadd dword ptr [eax + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x24u)));
L_0040938b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040938f:  // fadd dword ptr [eax + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x20u)));
L_00409392:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00409396:  // fadd dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x1cu)));
L_00409399:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_0040939b:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0040939f:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004093a3:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004093a7:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004093ab:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004093ad:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004093b1:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004093b5:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004093b8:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004093bc:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004093bf:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004093c2:  // lea edx, [esp + 0x78]
    edx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004093c6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004093c7:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004093cb:  // call 0x44adb0
    t0 = 0x0044adb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004093d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004093d0:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004093d4:  // fadd dword ptr [ebp + 0x114]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x114u)));
L_004093da:  // fstp dword ptr [ebp + 0x114]
    F32((uint32_t)(ebp + 0x114u)) = lf32(ST(0));
    lpop(x);
L_004093e0:  // jmp 0x40941b
    goto L_0040941b;
L_004093e2:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_004093ea:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004093ee:  // lea eax, [ebp + 0x268]
    eax = (uint32_t)((uint32_t)(ebp + 0x268u));
L_004093f4:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_004093fc:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00409400:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00409408:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0040940a:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0040940e:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00409411:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00409415:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00409418:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0040941b:  // fld dword ptr [ebx + 8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x8u)));
L_0040941e:  // fsub dword ptr [esp + 0x70]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x70u)));
L_00409422:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_00409425:  // fsub dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00409429:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_0040942b:  // fsub dword ptr [esp + 0x68]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x68u)));
L_0040942f:  // mov ecx, dword ptr [ebp + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x70u)));
L_00409432:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00409434:  // fstp dword ptr [esp + 0x10c]
    F32((uint32_t)(esp + 0x10cu)) = lf32(ST(0));
    lpop(x);
L_0040943b:  // fstp dword ptr [esp + 0x110]
    F32((uint32_t)(esp + 0x110u)) = lf32(ST(0));
    lpop(x);
L_00409442:  // fstp dword ptr [esp + 0x114]
    F32((uint32_t)(esp + 0x114u)) = lf32(ST(0));
    lpop(x);
L_00409449:  // je 0x409458
    if (f.zf) goto L_00409458;
L_0040944b:  // lea eax, [esp + 0x10c]
    eax = (uint32_t)((uint32_t)(esp + 0x10cu));
L_00409452:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00409453:  // call 0x499d60
    t0 = 0x00499d60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00409458u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00409458:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_0040945a:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_0040945c:  // fld dword ptr [ebx + 8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x8u)));
L_0040945f:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_00409461:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_00409465:  // fadd dword ptr [0x5d8c18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c18u)));
L_0040946b:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0040946e:  // mov dword ptr [esp + 0xec], eax
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(eax);
L_00409475:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_00409478:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0040947b:  // mov dword ptr [esp + 0xf0], ecx
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(ecx);
L_00409482:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_00409486:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00409489:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0040948d:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_00409491:  // mov dword ptr [esp + 0xf4], eax
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(eax);
L_00409498:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0040949c:  // mov dword ptr [esp + 0xf8], ecx
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(ecx);
L_004094a3:  // mov ecx, dword ptr [esp + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004094a7:  // mov dword ptr [esp + 0xfc], edx
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(edx);
L_004094ae:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004094b2:  // mov dword ptr [esp + 0xdc], 0
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(0x0u);
L_004094bd:  // mov dword ptr [esp + 0xe0], 0
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(0x0u);
L_004094c8:  // mov dword ptr [esp + 0xe4], 0
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(0x0u);
L_004094d3:  // mov dword ptr [esp + 0x100], eax
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(eax);
L_004094da:  // mov dword ptr [esp + 0x104], ecx
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(ecx);
L_004094e1:  // mov dword ptr [esp + 0x108], edx
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(edx);
L_004094e8:  // mov dword ptr [esp + 0xd8], 0x5d8bfc
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(0x5d8bfcu);
L_004094f3:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004094f5:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004094f7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004094f8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004094fa:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004094fc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004094fe:  // lea eax, [esp + 0xbc]
    eax = (uint32_t)((uint32_t)(esp + 0xbcu));
L_00409505:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00409506:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00409507:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00409508:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_0040950b:  // lea edx, [esp + 0x12c]
    edx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_00409512:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00409514:  // mov dword ptr [esp + 0x6c], esp
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(esp);
L_00409518:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00409519:  // mov dword ptr [esp + 0x2ac], edi
    M32((uint32_t)(esp + 0x2acu)) = (uint32_t)(edi);
L_00409520:  // mov dword ptr [esp + 0x100], edi
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(edi);
L_00409527:  // mov dword ptr [esp + 0x104], 0xffffffff
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(0xffffffffu);
L_00409532:  // mov dword ptr [esp + 0x108], edi
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(edi);
L_00409539:  // mov dword ptr [esp + 0x10c], 0xbf800000
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(0xbf800000u);
L_00409544:  // call 0x4098e0
    t0 = 0x004098e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00409549u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00409549:  // mov ecx, 0x855090
    ecx = (uint32_t)(0x855090u);
L_0040954e:  // call 0x50b030
    t0 = 0x0050b030u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00409553u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00409553:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_0040955a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00409560:  // mov eax, dword ptr [esp + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_00409567:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0040956b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040956d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00409570:  // jne 0x4095cf
    if (!f.zf) goto L_004095cf;
L_00409572:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00409575:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00409577:  // call dword ptr [edx + 0xc0]
    t0 = M32((uint32_t)(edx + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040957du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040957d:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00409581:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00409583:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00409586:  // jne 0x4095cf
    if (!f.zf) goto L_004095cf;
L_00409588:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_0040958f:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00409591:  // je 0x4095cf
    if (f.zf) goto L_004095cf;
L_00409593:  // test dword ptr [eax + 0x34], 0x100000
    t0 = llog<32>(M32((uint32_t)(eax + 0x34u)) & 0x100000u, f);
L_0040959a:  // je 0x4095cf
    if (f.zf) goto L_004095cf;
L_0040959c:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0040959f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004095a1:  // call dword ptr [eax + 0xc0]
    t0 = M32((uint32_t)(eax + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004095a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004095a7:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_004095ab:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_004095b2:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004095b4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004095b5:  // fadd dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004095b8:  // fstp dword ptr [ebp + 0x24]
    F32((uint32_t)(ebp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004095bb:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004095be:  // call dword ptr [edx + 0x118]
    t0 = M32((uint32_t)(edx + 0x118u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004095c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004095c4:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004095c7:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004095c9:  // call dword ptr [edx + 0x110]
    t0 = M32((uint32_t)(edx + 0x110u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004095cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004095cf:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004095d1:  // call 0x407a50
    t0 = 0x00407a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004095d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004095d6:  // mov edx, 0xfffffb5c
    edx = (uint32_t)(0xfffffb5cu);
L_004095db:  // lea ecx, [ebp + 0x52c]
    ecx = (uint32_t)((uint32_t)(ebp + 0x52cu));
L_004095e1:  // sub edx, ebp
    t0 = lsub<32>(edx, ebp, f);
    edx = (uint32_t)(t0);
L_004095e3:  // mov esi, 6
    esi = (uint32_t)(0x6u);
L_004095e8:  // cmp dword ptr [ecx + 0x30], edi
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x30u)), edi, f);
L_004095eb:  // je 0x40962f
    if (f.zf) goto L_0040962f;
L_004095ed:  // fild dword ptr [0x622f08]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x622f08u)));
L_004095f3:  // fsubr dword ptr [ecx]
    ST(0) = ((long double)F32((uint32_t)(ecx))) - (ST(0));
L_004095f5:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004095f9:  // fstp dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
    lpop(x);
L_004095fb:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004095ff:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00409605:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00409607:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0040960a:  // je 0x409610
    if (f.zf) goto L_00409610;
L_0040960c:  // mov dword ptr [ecx], edi
    M32((uint32_t)(ecx)) = (uint32_t)(edi);
L_0040960e:  // jmp 0x40962f
    goto L_0040962f;
L_00409610:  // mov eax, dword ptr [ebp + 0x4b0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4b0u)));
L_00409616:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00409618:  // fld dword ptr [eax + ecx]
    lpush(x, (long double)F32((uint32_t)(eax + ecx)));
L_0040961b:  // fmul dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00409621:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_00409625:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00409627:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040962a:  // jne 0x40962f
    if (!f.zf) goto L_0040962f;
L_0040962c:  // mov dword ptr [ecx + 0x18], edi
    M32((uint32_t)(ecx + 0x18u)) = (uint32_t)(edi);
L_0040962f:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_00409632:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00409633:  // jne 0x4095e8
    if (!f.zf) goto L_004095e8;
L_00409635:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00409637:  // call 0x40b120
    t0 = 0x0040b120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040963cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040963c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040963e:  // call 0x409950
    t0 = 0x00409950u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00409643u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00409643:  // cmp dword ptr [ebp + 0x638], edi
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x638u)), edi, f);
L_00409649:  // je 0x40972c
    if (f.zf) goto L_0040972c;
L_0040964f:  // push 0x40800000
    t0 = 0x40800000u; esp -= 4; M32(esp) = t0;
L_00409654:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00409656:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00409659:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0040965b:  // mov edx, esp
    edx = (uint32_t)(esp);
L_0040965d:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0040965f:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00409662:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_00409665:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00409668:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0040966b:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0040966e:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00409671:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_00409676:  // call 0x491ea0
    t0 = 0x00491ea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040967bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040967b:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0040967d:  // je 0x40971c
    if (f.zf) goto L_0040971c;
L_00409683:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00409685:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040968au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040968a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0040968c:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0040968e:  // je 0x40970a
    if (f.zf) goto L_0040970a;
L_00409690:  // test byte ptr [ecx + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x10u, f);
L_00409694:  // je 0x40970a
    if (f.zf) goto L_0040970a;
L_00409696:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_00409698:  // je 0x40970a
    if (f.zf) goto L_0040970a;
L_0040969a:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_0040969d:  // fsub dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8ba0u)));
L_004096a3:  // fcomp dword ptr [ecx + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x24u)));
    lpop(x);
L_004096a6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004096a8:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004096ab:  // je 0x40970a
    if (f.zf) goto L_0040970a;
L_004096ad:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_004096b0:  // fsub dword ptr [ebx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx)));
L_004096b2:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_004096b5:  // fsub dword ptr [ebx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004096b8:  // fld dword ptr [ecx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x24u)));
L_004096bb:  // fsub dword ptr [ebx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004096be:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004096c2:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004096c4:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_004096c6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004096c8:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004096ca:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_004096cc:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004096d0:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004096d4:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_004096d6:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004096d8:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004096da:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004096dc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004096de:  // fcom dword ptr [0x5d8bf4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bf4u)));
L_004096e4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004096e6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004096e9:  // je 0x409708
    if (f.zf) goto L_00409708;
L_004096eb:  // fld dword ptr [0x5d8604]
    lpush(x, (long double)F32((uint32_t)(0x5d8604u)));
L_004096f1:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004096f3:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004096f5:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004096f7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004096f9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004096fa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004096fb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004096fe:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00409700:  // call dword ptr [edx + 0xa0]
    t0 = M32((uint32_t)(edx + 0xa0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00409706u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00409706:  // jmp 0x40970a
    goto L_0040970a;
L_00409708:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0040970a:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0040970f:  // call 0x492020
    t0 = 0x00492020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00409714u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00409714:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00409716:  // jne 0x409683
    if (!f.zf) goto L_00409683;
L_0040971c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040971e:  // call 0x40ef20
    t0 = 0x0040ef20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00409723u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00409723:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00409725:  // call 0x40e940
    t0 = 0x0040e940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040972au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040972a:  // jmp 0x409733
    goto L_00409733;
L_0040972c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040972e:  // call 0x40eb50
    t0 = 0x0040eb50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00409733u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00409733:  // mov ecx, dword ptr [esp + 0x24c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24cu)));
L_0040973a:  // mov dword ptr [ebp + 0x638], edi
    M32((uint32_t)(ebp + 0x638u)) = (uint32_t)(edi);
L_00409740:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00409741:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00409742:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00409743:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0040974a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0040974b:  // add esp, 0x248
    t0 = ladd<32>(esp, 0x248u, f);
    esp = (uint32_t)(t0);
L_00409751:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004081c0, 004081c0)
