// lifted from 004892c0 (vslot66, 910 bytes, 279 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004892c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004892c0;
L_004892c0:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004892c3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004892c4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004892c5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004892c6:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004892c8:  // call 0x47c970
    t0 = 0x0047c970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004892cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004892cd:  // mov eax, dword ptr [esi + 0x110]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x110u)));
L_004892d3:  // mov bl, 4
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
L_004892d5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004892d7:  // je 0x489346
    if (f.zf) goto L_00489346;
L_004892d9:  // test byte ptr [esi + 0x2c], bl
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & (ebx & 0xffu), f);
L_004892dc:  // jne 0x489346
    if (!f.zf) goto L_00489346;
L_004892de:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_004892e4:  // fld dword ptr [esi + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x7cu)));
L_004892e7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004892e9:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004892eb:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004892ed:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004892ef:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004892f1:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004892f3:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004892f5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004892f7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004892f9:  // fmul dword ptr [esi + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x40u)));
L_004892fc:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00489300:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00489304:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00489306:  // fmul dword ptr [esi + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x50u)));
L_00489309:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0048930d:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00489311:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_00489315:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00489319:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048931d:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00489321:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00489322:  // fmul dword ptr [esi + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x60u)));
L_00489325:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00489329:  // mov ecx, dword ptr [esi + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_0048932f:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00489333:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00489337:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0048933b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0048933d:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00489341:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00489343:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489346u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489346:  // mov eax, dword ptr [esi + 0x268]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x268u)));
L_0048934c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048934e:  // jle 0x48937b
    if ((f.zf || f.sf != f.of)) goto L_0048937b;
L_00489350:  // fld dword ptr [esi + 0x260]
    lpush(x, (long double)F32((uint32_t)(esi + 0x260u)));
L_00489356:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0048935a:  // sub eax, dword ptr [esp + 0xc]
    t0 = lsub<32>(eax, M32((uint32_t)(esp + 0xcu)), f);
    eax = (uint32_t)(t0);
L_0048935e:  // mov dword ptr [esi + 0x268], eax
    M32((uint32_t)(esi + 0x268u)) = (uint32_t)(eax);
L_00489364:  // jns 0x489647
    if (!f.sf) goto L_00489647;
L_0048936a:  // mov dword ptr [esi + 0x268], 0
    M32((uint32_t)(esi + 0x268u)) = (uint32_t)(0x0u);
L_00489374:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00489375:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00489376:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00489377:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0048937a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0048937b:  // test byte ptr [esi + 0x2c], bl
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & (ebx & 0xffu), f);
L_0048937e:  // jne 0x48942b
    if (!f.zf) goto L_0048942b;
L_00489384:  // mov eax, dword ptr [esi + 0x26c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x26cu)));
L_0048938a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048938c:  // jne 0x48942b
    if (!f.zf) goto L_0048942b;
L_00489392:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00489394:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00489396:  // call dword ptr [edx + 0x10c]
    t0 = M32((uint32_t)(edx + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048939cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048939c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048939e:  // jne 0x489414
    if (!f.zf) goto L_00489414;
L_004893a0:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004893a6:  // cmp dword ptr [eax + 0x100], 1
    t0 = lsub<32>(M32((uint32_t)(eax + 0x100u)), 0x1u, f);
L_004893ad:  // jne 0x489414
    if (!f.zf) goto L_00489414;
L_004893af:  // mov ecx, dword ptr [esi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_004893b2:  // lea edx, [esi + 0x1c]
    edx = (uint32_t)((uint32_t)(esi + 0x1cu));
L_004893b5:  // mov dword ptr [esp + 0xc], ecx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ecx);
L_004893b9:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004893be:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004893c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004893c3:  // fsubr dword ptr [esp + 0xc]
    ST(0) = ((long double)F32((uint32_t)(esp + 0xcu))) - (ST(0));
L_004893c7:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004893c9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004893cb:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004893cf:  // call dword ptr [edx + 0xc0]
    t0 = M32((uint32_t)(edx + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004893d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004893d5:  // fsubr dword ptr [esp + 0xc]
    ST(0) = ((long double)F32((uint32_t)(esp + 0xcu))) - (ST(0));
L_004893d9:  // fcomp dword ptr [0x5d95c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d95c0u)));
    lpop(x);
L_004893df:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004893e1:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004893e4:  // jne 0x4893fd
    if (!f.zf) goto L_004893fd;
L_004893e6:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004893e8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004893ea:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004893ec:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_004893ee:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004893f0:  // call dword ptr [eax + 0xf0]
    t0 = M32((uint32_t)(eax + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004893f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004893f6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004893f7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004893f8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004893f9:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004893fc:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004893fd:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004893ff:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00489401:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00489403:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00489405:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00489407:  // call dword ptr [edx + 0xf0]
    t0 = M32((uint32_t)(edx + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048940du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048940d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048940e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048940f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00489410:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00489413:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00489414:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00489416:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00489418:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048941a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048941c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048941e:  // call dword ptr [eax + 0xf0]
    t0 = M32((uint32_t)(eax + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489424u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489424:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00489425:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00489426:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00489427:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0048942a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0048942b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0048942d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048942f:  // call dword ptr [edx + 0x10c]
    t0 = M32((uint32_t)(edx + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489435u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489435:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00489437:  // je 0x4894ae
    if (f.zf) goto L_004894ae;
L_00489439:  // lea edx, [esi + 0x1c]
    edx = (uint32_t)((uint32_t)(esi + 0x1cu));
L_0048943c:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00489441:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489446u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489446:  // fcomp dword ptr [esi + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x24u)));
    lpop(x);
L_00489449:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048944b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0048944e:  // je 0x4894ae
    if (f.zf) goto L_004894ae;
L_00489450:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00489453:  // push 0x62d4ec
    t0 = 0x62d4ecu; esp -= 4; M32(esp) = t0;
L_00489458:  // lea edi, [esi + 8]
    edi = (uint32_t)((uint32_t)(esi + 0x8u));
L_0048945b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0048945d:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489460u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489460:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00489462:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489467u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489467:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00489469:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0048946b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048946d:  // mov dword ptr [esp + 0xc], edx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(edx);
L_00489471:  // call dword ptr [eax + 0x58]
    t0 = M32((uint32_t)(eax + 0x58u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489474u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489474:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00489478:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0048947a:  // jne 0x4894ae
    if (!f.zf) goto L_004894ae;
L_0048947c:  // test byte ptr [esi + 0x2c], bl
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & (ebx & 0xffu), f);
L_0048947f:  // je 0x4894a4
    if (f.zf) goto L_004894a4;
L_00489481:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00489484:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_00489486:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00489488:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048948a:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0048948c:  // push 0x62d518
    t0 = 0x62d518u; esp -= 4; M32(esp) = t0;
L_00489491:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489494u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489494:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00489496:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048949bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048949b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048949c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048949e:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004894a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004894a4:  // mov dword ptr [esi + 0x26c], 0
    M32((uint32_t)(esi + 0x26cu)) = (uint32_t)(0x0u);
L_004894ae:  // test byte ptr [esi + 0x2c], bl
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & (ebx & 0xffu), f);
L_004894b1:  // je 0x489647
    if (f.zf) goto L_00489647;
L_004894b7:  // fld dword ptr [esi + 0x264]
    lpush(x, (long double)F32((uint32_t)(esi + 0x264u)));
L_004894bd:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_004894c3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004894c5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004894c8:  // je 0x4894d1
    if (f.zf) goto L_004894d1;
L_004894ca:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004894cc:  // call 0x4f43d0
    t0 = 0x004f43d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004894d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004894d1:  // fld dword ptr [esi + 0x260]
    lpush(x, (long double)F32((uint32_t)(esi + 0x260u)));
L_004894d7:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004894db:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004894df:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004894e1:  // jle 0x489562
    if ((f.zf || f.sf != f.of)) goto L_00489562;
L_004894e3:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004894e5:  // fld dword ptr [esi + 0x14c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14cu)));
L_004894eb:  // fmul dword ptr [0x5d8bd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bd0u)));
L_004894f1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004894f3:  // fstp dword ptr [esi + 0x14c]
    F32((uint32_t)(esi + 0x14cu)) = lf32(ST(0));
    lpop(x);
L_004894f9:  // fld dword ptr [esi + 0x150]
    lpush(x, (long double)F32((uint32_t)(esi + 0x150u)));
L_004894ff:  // fmul dword ptr [0x5d8bd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bd0u)));
L_00489505:  // fstp dword ptr [esi + 0x150]
    F32((uint32_t)(esi + 0x150u)) = lf32(ST(0));
    lpop(x);
L_0048950b:  // fld dword ptr [esi + 0x154]
    lpush(x, (long double)F32((uint32_t)(esi + 0x154u)));
L_00489511:  // fmul dword ptr [0x5d8bd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bd0u)));
L_00489517:  // fstp dword ptr [esi + 0x154]
    F32((uint32_t)(esi + 0x154u)) = lf32(ST(0));
    lpop(x);
L_0048951d:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0048951f:  // call dword ptr [eax + 0x10c]
    t0 = M32((uint32_t)(eax + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00489525u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00489525:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00489527:  // je 0x48955f
    if (f.zf) goto L_0048955f;
L_00489529:  // fld dword ptr [esi + 0x14c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14cu)));
L_0048952f:  // fmul dword ptr [0x5dbf8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbf8cu)));
L_00489535:  // fstp dword ptr [esi + 0x14c]
    F32((uint32_t)(esi + 0x14cu)) = lf32(ST(0));
    lpop(x);
L_0048953b:  // fld dword ptr [esi + 0x150]
    lpush(x, (long double)F32((uint32_t)(esi + 0x150u)));
L_00489541:  // fmul dword ptr [0x5dbf8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbf8cu)));
L_00489547:  // fstp dword ptr [esi + 0x150]
    F32((uint32_t)(esi + 0x150u)) = lf32(ST(0));
    lpop(x);
L_0048954d:  // fld dword ptr [esi + 0x154]
    lpush(x, (long double)F32((uint32_t)(esi + 0x154u)));
L_00489553:  // fmul dword ptr [0x5dbf8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbf8cu)));
L_00489559:  // fstp dword ptr [esi + 0x154]
    F32((uint32_t)(esi + 0x154u)) = lf32(ST(0));
    lpop(x);
L_0048955f:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_00489560:  // jne 0x4894e5
    if (!f.zf) goto L_004894e5;
L_00489562:  // mov eax, dword ptr [esi + 0x274]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x274u)));
L_00489568:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048956a:  // je 0x489647
    if (f.zf) goto L_00489647;
L_00489570:  // lea eax, [esi + 0x1c]
    eax = (uint32_t)((uint32_t)(esi + 0x1cu));
L_00489573:  // mov esi, dword ptr [esi + 0x274]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x274u)));
L_00489579:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048957b:  // je 0x489647
    if (f.zf) goto L_00489647;
L_00489581:  // cmp dword ptr [esi + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(esi + 0x48u)), 0x461c4000u, f);
L_00489588:  // jne 0x4895fb
    if (!f.zf) goto L_004895fb;
L_0048958a:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0048958c:  // lea ecx, [esi + 0x80]
    ecx = (uint32_t)((uint32_t)(esi + 0x80u));
L_00489592:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_00489594:  // mov dword ptr [ecx], edi
    M32((uint32_t)(ecx)) = (uint32_t)(edi);
L_00489596:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00489599:  // mov dword ptr [ecx + 4], edi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edi);
L_0048959c:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0048959f:  // mov dword ptr [ecx + 8], edi
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edi);
L_004895a2:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004895a5:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004895a8:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004895aa:  // lea ecx, [esi + 0x40]
    ecx = (uint32_t)((uint32_t)(esi + 0x40u));
L_004895ad:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_004895af:  // mov dword ptr [ecx], edi
    M32((uint32_t)(ecx)) = (uint32_t)(edi);
L_004895b1:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004895b4:  // mov dword ptr [ecx + 4], edi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edi);
L_004895b7:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004895ba:  // mov dword ptr [ecx + 8], edi
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edi);
L_004895bd:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004895c0:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004895c3:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004895c5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004895c7:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004895c9:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004895cc:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004895cf:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004895d2:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004895d5:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004895d8:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004895db:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004895e1:  // cmp eax, 0xbf800000
    t0 = lsub<32>(eax, 0xbf800000u, f);
L_004895e6:  // je 0x489647
    if (f.zf) goto L_00489647;
L_004895e8:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004895ee:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004895ef:  // mov dword ptr [esi + 0xac], ecx
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(ecx);
L_004895f5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004895f6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004895f7:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004895fa:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004895fb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004895fd:  // lea edx, [esi + 0x40]
    edx = (uint32_t)((uint32_t)(esi + 0x40u));
L_00489600:  // mov edi, dword ptr [ecx]
    edi = (uint32_t)(M32((uint32_t)(ecx)));
L_00489602:  // mov dword ptr [edx], edi
    M32((uint32_t)(edx)) = (uint32_t)(edi);
L_00489604:  // mov edi, dword ptr [ecx + 4]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00489607:  // mov dword ptr [edx + 4], edi
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(edi);
L_0048960a:  // mov edi, dword ptr [ecx + 8]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0048960d:  // mov dword ptr [edx + 8], edi
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(edi);
L_00489610:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00489613:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_00489616:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00489618:  // mov edx, esi
    edx = (uint32_t)(esi);
L_0048961a:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_0048961c:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0048961f:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00489622:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00489625:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_00489628:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0048962b:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_0048962e:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_00489634:  // cmp eax, 0xbf800000
    t0 = lsub<32>(eax, 0xbf800000u, f);
L_00489639:  // je 0x489647
    if (f.zf) goto L_00489647;
L_0048963b:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00489641:  // mov dword ptr [esi + 0xac], ecx
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(ecx);
L_00489647:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00489648:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00489649:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048964a:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0048964d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004892c0, 004892c0)
