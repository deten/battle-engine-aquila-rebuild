// lifted from 00426150 (vslot3, 389 bytes, 133 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00426150(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00426150;
L_00426150:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00426153:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00426154:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00426155:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00426156:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0042615a:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0042615c:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0042615e:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00426160:  // mov dword ptr [esi + 8], eax
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(eax);
L_00426163:  // mov dword ptr [esi + 0xc], ebx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ebx);
L_00426166:  // mov ecx, dword ptr [edi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_00426169:  // mov dword ptr [esi + 0xc], ecx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ecx);
L_0042616c:  // mov eax, dword ptr [edi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x14u)));
L_0042616f:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00426172:  // or eax, ecx
    t0 = llog<32>(eax | ecx, f);
    eax = (uint32_t)(t0);
L_00426174:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_00426177:  // mov ecx, dword ptr [edi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_0042617a:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0042617d:  // or ecx, eax
    t0 = llog<32>(ecx | eax, f);
    ecx = (uint32_t)(t0);
L_0042617f:  // mov dword ptr [esi + 0xc], ecx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ecx);
L_00426182:  // mov eax, dword ptr [edi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x1cu)));
L_00426185:  // or al, 0x10
    t0 = llog<8>((eax & 0xffu) | 0x10u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00426187:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0042618a:  // or eax, ecx
    t0 = llog<32>(eax | ecx, f);
    eax = (uint32_t)(t0);
L_0042618c:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_0042618f:  // mov ecx, dword ptr [edi + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x28u)));
L_00426192:  // shl ecx, 9
    t0 = lshl<32>(ecx, 0x9u, f);
    ecx = (uint32_t)(t0);
L_00426195:  // or ecx, eax
    t0 = llog<32>(ecx | eax, f);
    ecx = (uint32_t)(t0);
L_00426197:  // mov dword ptr [esi + 0xc], ecx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ecx);
L_0042619a:  // mov edx, dword ptr [edi + 4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_0042619d:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004261a0:  // mov dword ptr [esi + 0x20], edx
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(edx);
L_004261a3:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_004261a6:  // mov dword ptr [esi + 0x18], ebx
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(ebx);
L_004261a9:  // mov dword ptr [esi + 0x10], eax
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(eax);
L_004261ac:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004261ae:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004261b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004261b1:  // mov eax, dword ptr [edi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_004261b4:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004261b8:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004261ba:  // jne 0x42620e
    if (!f.zf) goto L_0042620e;
L_004261bc:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004261be:  // push 0x6246d8
    t0 = 0x6246d8u; esp -= 4; M32(esp) = t0;
L_004261c3:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_004261c5:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_004261c7:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004261cc:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004261d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004261d1:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004261d3:  // je 0x426200
    if (f.zf) goto L_00426200;
L_004261d5:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004261d9:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004261dd:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004261e1:  // mov dword ptr [eax + 4], ebx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebx);
L_004261e4:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004261e7:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004261ea:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004261ec:  // mov dword ptr [eax + 0x14], ecx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(ecx);
L_004261ef:  // fstp dword ptr [eax + 0x18]
    F32((uint32_t)(eax + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004261f2:  // mov dword ptr [eax], 0x5d95e8
    M32((uint32_t)(eax)) = (uint32_t)(0x5d95e8u);
L_004261f8:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_004261fb:  // mov dword ptr [esi + 0x1c], edx
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(edx);
L_004261fe:  // jmp 0x426218
    goto L_00426218;
L_00426200:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00426204:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00426206:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_00426209:  // mov dword ptr [esi + 0x1c], edx
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(edx);
L_0042620c:  // jmp 0x426218
    goto L_00426218;
L_0042620e:  // mov dword ptr [esi + 0x14], eax
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(eax);
L_00426211:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00426215:  // mov dword ptr [esi + 0x1c], eax
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(eax);
L_00426218:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0042621c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042621d:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00426220:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00426225u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00426225:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00426228:  // mov edx, dword ptr [esi + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0042622b:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0042622f:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_00426232:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00426235:  // add edx, 4
    t0 = ladd<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_00426238:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0042623c:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00426240:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_00426243:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00426247:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0042624b:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_0042624e:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00426252:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00426256:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00426258:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0042625c:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00426260:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00426263:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00426267:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0042626a:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0042626d:  // mov edx, dword ptr [esi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00426270:  // and edx, 0x30
    t0 = llog<32>(edx & 0x30u, f);
    edx = (uint32_t)(t0);
L_00426273:  // cmp dl, 0x20
    t0 = lsub<8>((edx & 0xffu), 0x20u, f);
L_00426276:  // jne 0x4262cc
    if (!f.zf) goto L_004262cc;
L_00426278:  // push 0x39
    t0 = 0x39u; esp -= 4; M32(esp) = t0;
L_0042627a:  // push 0x6246d8
    t0 = 0x6246d8u; esp -= 4; M32(esp) = t0;
L_0042627f:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_00426281:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_00426283:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00426288:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042628du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042628d:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0042628f:  // je 0x4262c7
    if (f.zf) goto L_004262c7;
L_00426291:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00426294:  // mov edx, dword ptr [edi + 0x30]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_00426297:  // mov edi, dword ptr [edi + 0x24]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x24u)));
L_0042629a:  // mov ecx, dword ptr [ecx + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x30u)));
L_0042629d:  // mov dword ptr [eax + 4], ebx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebx);
L_004262a0:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004262a3:  // mov dword ptr [eax + 0xc], ebx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebx);
L_004262a6:  // mov dword ptr [eax + 0x14], ecx
    M32((uint32_t)(eax + 0x14u)) = (uint32_t)(ecx);
L_004262a9:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_004262ac:  // mov dword ptr [eax + 0x1c], edx
    M32((uint32_t)(eax + 0x1cu)) = (uint32_t)(edx);
L_004262af:  // mov dword ptr [eax + 0x20], edi
    M32((uint32_t)(eax + 0x20u)) = (uint32_t)(edi);
L_004262b2:  // mov dword ptr [eax + 0x24], ebx
    M32((uint32_t)(eax + 0x24u)) = (uint32_t)(ebx);
L_004262b5:  // mov dword ptr [eax], 0x5d95c8
    M32((uint32_t)(eax)) = (uint32_t)(0x5d95c8u);
L_004262bb:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_004262be:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004262bf:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004262c0:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004262c1:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004262c4:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004262c7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004262c9:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_004262cc:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004262cd:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004262ce:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004262cf:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004262d2:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00426150, 00426150)
