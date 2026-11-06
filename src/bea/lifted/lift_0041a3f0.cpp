// lifted from 0041a3f0 (vslot0, 318 bytes, 113 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0041a3f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0041a3f0;
L_0041a3f0:  // sub esp, 0x44
    t0 = lsub<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a3f3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0041a3f4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041a3f5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041a3f6:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0041a3f8:  // fld dword ptr [edi + 8]
    lpush(x, (long double)F32((uint32_t)(edi + 0x8u)));
L_0041a3fb:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_0041a401:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041a403:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0041a406:  // je 0x41a430
    if (f.zf) goto L_0041a430;
L_0041a408:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0041a40c:  // add edi, 0xc
    t0 = ladd<32>(edi, 0xcu, f);
    edi = (uint32_t)(t0);
L_0041a40f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041a411:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0041a413:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0041a415:  // mov edx, dword ptr [edi + 4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0041a418:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_0041a41b:  // mov edx, dword ptr [edi + 8]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0041a41e:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0041a421:  // mov edx, dword ptr [edi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0041a424:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a425:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a426:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_0041a429:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a42a:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a42d:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a430:  // lea esi, [edi + 0xc]
    esi = (uint32_t)((uint32_t)(edi + 0xcu));
L_0041a433:  // lea eax, [edi + 0x88]
    eax = (uint32_t)((uint32_t)(edi + 0x88u));
L_0041a439:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041a43b:  // mov ebx, dword ptr [edi + 4]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0041a43e:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0041a440:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0041a442:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_0041a444:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0041a447:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0041a44a:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0041a44d:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0041a450:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0041a453:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_0041a456:  // je 0x41a4ef
    if (f.zf) goto L_0041a4ef;
L_0041a45c:  // mov ecx, dword ptr [ebx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x30u)));
L_0041a45f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041a461:  // je 0x41a4ba
    if (f.zf) goto L_0041a4ba;
L_0041a463:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0041a465:  // add ebx, 8
    t0 = ladd<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_0041a468:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0041a469:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_0041a46d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0041a46e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a46f:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0041a473:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a474:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_0041a478:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041a479:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041a47cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041a47c:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0041a480:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0041a484:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0041a488:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0041a48c:  // mov dword ptr [esi], ecx
    M32((uint32_t)(esi)) = (uint32_t)(ecx);
L_0041a48e:  // mov dword ptr [esi + 4], edx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edx);
L_0041a491:  // mov dword ptr [esi + 8], ebx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ebx);
L_0041a494:  // mov dword ptr [esi + 0xc], ebp
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ebp);
L_0041a497:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0041a49c:  // mov dword ptr [edi + 8], eax
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(eax);
L_0041a49f:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0041a4a3:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0041a4a5:  // mov dword ptr [esi], ecx
    M32((uint32_t)(esi)) = (uint32_t)(ecx);
L_0041a4a7:  // mov dword ptr [esi + 4], edx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edx);
L_0041a4aa:  // mov dword ptr [esi + 8], ebx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ebx);
L_0041a4ad:  // mov dword ptr [esi + 0xc], ebp
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ebp);
L_0041a4b0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041a4b1:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a4b2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a4b3:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a4b4:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a4b7:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a4ba:  // push 0x623d34
    t0 = 0x623d34u; esp -= 4; M32(esp) = t0;
L_0041a4bf:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041a4c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041a4c4:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0041a4c8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0041a4cb:  // add ebx, 0x1c
    t0 = ladd<32>(ebx, 0x1cu, f);
    ebx = (uint32_t)(t0);
L_0041a4ce:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041a4d0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a4d1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a4d2:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0041a4d4:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0041a4d6:  // mov edx, dword ptr [ebx + 4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_0041a4d9:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_0041a4dc:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_0041a4df:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0041a4e2:  // mov edx, dword ptr [ebx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_0041a4e5:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a4e6:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_0041a4e9:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a4ec:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041a4ef:  // push 0x623d0c
    t0 = 0x623d0cu; esp -= 4; M32(esp) = t0;
L_0041a4f4:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041a4f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041a4f9:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0041a4fd:  // mov edx, dword ptr [0x6605b8]
    edx = (uint32_t)(M32((uint32_t)(0x6605b8u)));
L_0041a503:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041a505:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0041a508:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0041a50a:  // mov edx, dword ptr [0x6605bc]
    edx = (uint32_t)(M32((uint32_t)(0x6605bcu)));
L_0041a510:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041a511:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041a512:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_0041a515:  // mov edx, dword ptr [0x6605c0]
    edx = (uint32_t)(M32((uint32_t)(0x6605c0u)));
L_0041a51b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041a51c:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0041a51f:  // mov edx, dword ptr [0x6605c4]
    edx = (uint32_t)(M32((uint32_t)(0x6605c4u)));
L_0041a525:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_0041a528:  // add esp, 0x44
    t0 = ladd<32>(esp, 0x44u, f);
    esp = (uint32_t)(t0);
L_0041a52b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0041a3f0, 0041a3f0)
