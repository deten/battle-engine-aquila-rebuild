// lifted from 004b4250 (FUN_004b4250, 2139 bytes, 576 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b4250(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b4250;
L_004b4250:  // sub esp, 0x214
    t0 = lsub<32>(esp, 0x214u, f);
    esp = (uint32_t)(t0);
L_004b4256:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b4257:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b4258:  // mov ebp, dword ptr [esp + 0x220]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x220u)));
L_004b425f:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004b4261:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b4262:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b4263:  // lea eax, [ebx + 0xdc]
    eax = (uint32_t)((uint32_t)(ebx + 0xdcu));
L_004b4269:  // lea ecx, [ebp + 0xdc]
    ecx = (uint32_t)((uint32_t)(ebp + 0xdcu));
L_004b426f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b4270:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b4271:  // lea edx, [esp + 0x12c]
    edx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_004b4278:  // push 0x630114
    t0 = 0x630114u; esp -= 4; M32(esp) = t0;
L_004b427d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b427e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4283u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4283:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004b4286:  // lea eax, [esp + 0x124]
    eax = (uint32_t)((uint32_t)(esp + 0x124u));
L_004b428d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b428e:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4293u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4293:  // mov edi, dword ptr [ebx + 0xac]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0xacu)));
L_004b4299:  // mov esi, dword ptr [ebp + 0xac]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_004b429f:  // mov eax, dword ptr [ebx + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004b42a5:  // mov ecx, dword ptr [ebp + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_004b42ab:  // mov edx, dword ptr [ebp + 0xa8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_004b42b1:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004b42b4:  // add edi, esi
    t0 = ladd<32>(edi, esi, f);
    edi = (uint32_t)(t0);
L_004b42b6:  // mov esi, dword ptr [ebx + 0xa8]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b42bc:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b42be:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004b42c0:  // push 0xcab
    t0 = 0xcabu; esp -= 4; M32(esp) = t0;
L_004b42c5:  // push 0x62fe70
    t0 = 0x62fe70u; esp -= 4; M32(esp) = t0;
L_004b42ca:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004b42cd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b42cf:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_004b42d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b42d2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004b42d7:  // mov dword ptr [esp + 0x90], edi
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(edi);
L_004b42de:  // mov dword ptr [esp + 0x8c], esi
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(esi);
L_004b42e5:  // mov dword ptr [esp + 0x88], eax
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(eax);
L_004b42ec:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b42f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b42f1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b42f3:  // je 0x4b4300
    if (f.zf) goto L_004b4300;
L_004b42f5:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004b42f6:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_004b42fa:  // mov dword ptr [esp + 0x2c], edi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edi);
L_004b42fe:  // jmp 0x4b4308
    goto L_004b4308;
L_004b4300:  // mov dword ptr [esp + 0x60], 0
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x0u);
L_004b4308:  // lea edx, [esi + esi*2]
    edx = (uint32_t)((uint32_t)(esi + esi * 2u));
L_004b430b:  // push 0xcae
    t0 = 0xcaeu; esp -= 4; M32(esp) = t0;
L_004b4310:  // push 0x62fe70
    t0 = 0x62fe70u; esp -= 4; M32(esp) = t0;
L_004b4315:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b4317:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004b431a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b431b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004b4320:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4325u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4325:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b4327:  // je 0x4b4336
    if (f.zf) goto L_004b4336;
L_004b4329:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004b432a:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004b432c:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_004b4330:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_004b4334:  // jmp 0x4b4342
    goto L_004b4342;
L_004b4336:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004b433e:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b4342:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004b4346:  // push 0xcb1
    t0 = 0xcb1u; esp -= 4; M32(esp) = t0;
L_004b434b:  // push 0x62fe70
    t0 = 0x62fe70u; esp -= 4; M32(esp) = t0;
L_004b4350:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b4352:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b4355:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004b435a:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004b435d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b435e:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4363u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4363:  // mov ecx, dword ptr [ebx + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xacu)));
L_004b4369:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004b436d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004b436f:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004b4371:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004b4375:  // jle 0x4b43b3
    if ((f.zf || f.sf != f.of)) goto L_004b43b3;
L_004b4377:  // mov ecx, dword ptr [ebx + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x84u)));
L_004b437d:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b437f:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004b4383:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4385:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004b4387:  // add eax, 0x10
    t0 = ladd<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004b438a:  // mov esi, dword ptr [edx]
    esi = (uint32_t)(M32((uint32_t)(edx)));
L_004b438c:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_004b438e:  // mov esi, dword ptr [edx + 4]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b4391:  // mov dword ptr [ecx + 4], esi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(esi);
L_004b4394:  // mov esi, dword ptr [edx + 8]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b4397:  // mov dword ptr [ecx + 8], esi
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(esi);
L_004b439a:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b439d:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004b43a0:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b43a4:  // mov edx, dword ptr [ebx + 0xac]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xacu)));
L_004b43aa:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004b43ab:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_004b43ad:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004b43b1:  // jl 0x4b4377
    if ((f.sf != f.of)) goto L_004b4377;
L_004b43b3:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b43b9:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004b43bb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b43bd:  // jle 0x4b43e6
    if ((f.zf || f.sf != f.of)) goto L_004b43e6;
L_004b43bf:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004b43c1:  // mov ecx, dword ptr [ebx + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b43c7:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b43c9:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_004b43cb:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_004b43cd:  // mov ecx, 0x18
    ecx = (uint32_t)(0x18u);
L_004b43d2:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004b43d3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b43d5:  // mov ecx, dword ptr [ebx + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b43db:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b43df:  // add eax, 0x60
    t0 = ladd<32>(eax, 0x60u, f);
    eax = (uint32_t)(t0);
L_004b43e2:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_004b43e4:  // jl 0x4b43c1
    if ((f.sf != f.of)) goto L_004b43c1;
L_004b43e6:  // mov eax, dword ptr [ebx + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004b43ec:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004b43ee:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004b43f0:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004b43f4:  // jle 0x4b44a7
    if ((f.zf || f.sf != f.of)) goto L_004b44a7;
L_004b43fa:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b43fe:  // lea esi, [eax + 8]
    esi = (uint32_t)((uint32_t)(eax + 0x8u));
L_004b4401:  // mov edx, dword ptr [ebx + 0x80]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x80u)));
L_004b4407:  // mov eax, dword ptr [ebx + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b440d:  // add esi, 0xc
    t0 = ladd<32>(esi, 0xcu, f);
    esi = (uint32_t)(t0);
L_004b4410:  // mov edx, dword ptr [ecx + edx]
    edx = (uint32_t)(M32((uint32_t)(ecx + edx)));
L_004b4413:  // add ecx, 0xc
    t0 = ladd<32>(ecx, 0xcu, f);
    ecx = (uint32_t)(t0);
L_004b4416:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4418:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_004b441d:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004b441f:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b4422:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004b4424:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_004b4427:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4429:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004b442c:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004b442f:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_004b4431:  // mov dword ptr [esi - 0x14], edx
    M32((uint32_t)(esi + 0xffffffecu)) = (uint32_t)(edx);
L_004b4434:  // mov eax, dword ptr [ebx + 0x80]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x80u)));
L_004b443a:  // mov edx, dword ptr [ecx + eax - 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + eax + 0xfffffff8u)));
L_004b443e:  // mov eax, dword ptr [ebx + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b4444:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4446:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_004b444b:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004b444d:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b4450:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004b4452:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_004b4455:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4457:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004b445a:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004b445d:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_004b445f:  // mov dword ptr [esi - 0x10], edx
    M32((uint32_t)(esi + 0xfffffff0u)) = (uint32_t)(edx);
L_004b4462:  // mov eax, dword ptr [ebx + 0x80]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x80u)));
L_004b4468:  // mov edx, dword ptr [ecx + eax - 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + eax + 0xfffffffcu)));
L_004b446c:  // mov eax, dword ptr [ebx + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x134u)));
L_004b4472:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4474:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_004b4479:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004b447b:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b447e:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004b4480:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_004b4483:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4485:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b4489:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004b448c:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004b448f:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_004b4491:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b4492:  // mov dword ptr [esi - 0xc], edx
    M32((uint32_t)(esi + 0xfffffff4u)) = (uint32_t)(edx);
L_004b4495:  // mov edx, dword ptr [ebx + 0xb0]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004b449b:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_004b449d:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004b44a1:  // jl 0x4b4401
    if ((f.sf != f.of)) goto L_004b4401;
L_004b44a7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b44a9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44ab:  // lea eax, [esp + 0xbc]
    eax = (uint32_t)((uint32_t)(esp + 0xbcu));
L_004b44b2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b44b4:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_004b44bb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b44bc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b44bd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44bf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44c1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44c3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44c5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b44c7:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b44ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b44cc:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b44ce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44d0:  // lea edx, [esp + 0xdc]
    edx = (uint32_t)((uint32_t)(esp + 0xdcu));
L_004b44d7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b44d9:  // lea eax, [esp + 0x100]
    eax = (uint32_t)((uint32_t)(esp + 0x100u));
L_004b44e0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b44e1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b44e2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44e4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44e6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44e8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b44ea:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b44ec:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b44f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b44f1:  // mov eax, dword ptr [ebp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_004b44f7:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004b44f9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b44fb:  // jle 0x4b471b
    if ((f.zf || f.sf != f.of)) goto L_004b471b;
L_004b4501:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004b4505:  // mov ecx, dword ptr [ebp + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x84u)));
L_004b450b:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004b450f:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004b4516:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004b4518:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b451c:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b451e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b451f:  // lea ecx, [esp + 0xf8]
    ecx = (uint32_t)((uint32_t)(esp + 0xf8u));
L_004b4526:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b4529:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_004b4530:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b4533:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4535:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004b453c:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b453e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4540:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_004b4547:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b4549:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004b4550:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b4553:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4555:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004b455c:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b455f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4561:  // fstp dword ptr [esp + 0xec]
    F32((uint32_t)(esp + 0xecu)) = lf32(ST(0));
    lpop(x);
L_004b4568:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_004b456f:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b4571:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004b4578:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b457b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b457d:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b4584:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b4587:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4589:  // fstp dword ptr [esp + 0xf0]
    F32((uint32_t)(esp + 0xf0u)) = lf32(ST(0));
    lpop(x);
L_004b4590:  // fadd dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xb8u)));
L_004b4597:  // fld dword ptr [esp + 0xbc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xbcu)));
L_004b459e:  // fadd dword ptr [esp + 0xec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xecu)));
L_004b45a5:  // fstp dword ptr [esp + 0xcc]
    F32((uint32_t)(esp + 0xccu)) = lf32(ST(0));
    lpop(x);
L_004b45ac:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_004b45b3:  // fadd dword ptr [esp + 0xf0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xf0u)));
L_004b45ba:  // fstp dword ptr [esp + 0xd0]
    F32((uint32_t)(esp + 0xd0u)) = lf32(ST(0));
    lpop(x);
L_004b45c1:  // fsub dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xd8u)));
L_004b45c8:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004b45cc:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b45d3:  // fsub dword ptr [esp + 0xdc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xdcu)));
L_004b45da:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004b45de:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_004b45e5:  // fsub dword ptr [esp + 0xe0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xe0u)));
L_004b45ec:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004b45f0:  // call 0x49bc80
    t0 = 0x0049bc80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b45f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b45f5:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b45f9:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004b45fd:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004b4601:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004b4605:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b4609:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004b460d:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004b4611:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004b4615:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b4619:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_004b4620:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004b4624:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004b4628:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_004b462c:  // call 0x49bc40
    t0 = 0x0049bc40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4631u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4631:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b4635:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b4639:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_004b463d:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b4641:  // lea ecx, [esp + 0x40]
    ecx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004b4645:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b4646:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004b464a:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b464e:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b4652:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004b4656:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004b465a:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b465e:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004b4662:  // call 0x4944b0
    t0 = 0x004944b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4667u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4667:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b466b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b466c:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004b4670:  // call 0x4944b0
    t0 = 0x004944b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4675u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4675:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b4679:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004b467d:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b4681:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004b4685:  // mov edx, dword ptr [ebx + 0xac]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xacu)));
L_004b468b:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004b468f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4691:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b4695:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004b4699:  // add edx, esi
    t0 = ladd<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_004b469b:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b469e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b46a0:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b46a2:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004b46a3:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004b46a7:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004b46ab:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004b46af:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b46b3:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004b46b7:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004b46bb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b46bd:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004b46c1:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004b46c5:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004b46c7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b46c9:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_004b46cd:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b46d1:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004b46d5:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004b46d9:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004b46dd:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004b46e1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b46e3:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004b46e7:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004b46eb:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004b46ee:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004b46f2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b46f4:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_004b46f8:  // mov eax, dword ptr [esp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004b46fc:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b46ff:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004b4702:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b4706:  // mov eax, dword ptr [ebp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xacu)));
L_004b470c:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004b470f:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004b4711:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004b4715:  // jl 0x4b4505
    if ((f.sf != f.of)) goto L_004b4505;
L_004b471b:  // mov eax, dword ptr [ebp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_004b4721:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004b4723:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_004b4725:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004b4729:  // jle 0x4b495f
    if ((f.zf || f.sf != f.of)) goto L_004b495f;
L_004b472f:  // mov dword ptr [esp + 0x64], edx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edx);
L_004b4733:  // jmp 0x4b4739
    goto L_004b4739;
L_004b4735:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b4739:  // mov esi, dword ptr [ebp + 0x134]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x134u)));
L_004b473f:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004b4743:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_004b4745:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b474b:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004b474d:  // mov ecx, 0x18
    ecx = (uint32_t)(0x18u);
L_004b4752:  // lea edi, [eax + eax*2]
    edi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b4755:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b4759:  // shl edi, 5
    t0 = lshl<32>(edi, 0x5u, f);
    edi = (uint32_t)(t0);
L_004b475c:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_004b475e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b4760:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004b4767:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b476d:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b4771:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004b4773:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004b4777:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b4778:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b477b:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004b477e:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b4780:  // lea ecx, [esp + 0xf8]
    ecx = (uint32_t)((uint32_t)(esp + 0xf8u));
L_004b4787:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b478a:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004b4791:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b4793:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4795:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_004b479c:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b479f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b47a1:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004b47a5:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004b47ac:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b47af:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004b47b6:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b47b9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b47bb:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_004b47c2:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b47c4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b47c6:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004b47ca:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b47d1:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b47d4:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004b47db:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b47de:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b47e0:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_004b47e7:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b47e9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b47eb:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004b47ef:  // call 0x49bc80
    t0 = 0x0049bc80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b47f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b47f4:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b47f8:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004b47fc:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004b4800:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004b4804:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b4808:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004b480c:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004b4810:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004b4814:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b4818:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_004b481f:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004b4823:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004b4827:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_004b482b:  // call 0x49bc40
    t0 = 0x0049bc40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b4830u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b4830:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b4834:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b4838:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_004b483c:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004b4840:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b4844:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_004b4848:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004b484c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b4850:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_004b4854:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b4858:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_004b485c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b485d:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004b4861:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004b4865:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b4869:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004b486d:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b4871:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b4875:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004b4879:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b487d:  // fdiv dword ptr [esp + 0x14]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b4881:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004b4885:  // call 0x4944b0
    t0 = 0x004944b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b488au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b488a:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b488e:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004b4892:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b4896:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004b489a:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b48a0:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b48a4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b48a6:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b48aa:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004b48ae:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b48b2:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b48b4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b48b6:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b48b9:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004b48bc:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004b48c0:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004b48c4:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004b48c8:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b48cc:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004b48d0:  // mov esi, dword ptr [esp + 0x68]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004b48d4:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004b48d6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b48d8:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004b48dc:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004b48e0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b48e2:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_004b48e6:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004b48ea:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004b48ee:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004b48f2:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004b48f6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b48f8:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b48fc:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004b4900:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_004b4902:  // mov esi, dword ptr [esp + 0x6c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004b4906:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b4908:  // mov dword ptr [eax + 4], esi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(esi);
L_004b490b:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_004b490f:  // mov esi, dword ptr [esp + 0x70]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004b4913:  // mov dword ptr [eax + 8], esi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(esi);
L_004b4916:  // mov esi, dword ptr [esp + 0x74]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004b491a:  // mov dword ptr [eax + 0xc], esi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(esi);
L_004b491d:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b4923:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b4925:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b4928:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004b492b:  // mov edi, dword ptr [eax + edx + 0x20]
    edi = (uint32_t)(M32((uint32_t)(eax + edx + 0x20u)));
L_004b492f:  // lea eax, [eax + edx + 0x20]
    eax = (uint32_t)((uint32_t)(eax + edx + 0x20u));
L_004b4933:  // mov edx, dword ptr [ebx + 0xac]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xacu)));
L_004b4939:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_004b493b:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004b493c:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004b493e:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004b4942:  // mov edx, dword ptr [esp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004b4946:  // mov eax, dword ptr [ebp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xa8u)));
L_004b494c:  // add edx, 0x60
    t0 = ladd<32>(edx, 0x60u, f);
    edx = (uint32_t)(t0);
L_004b494f:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004b4951:  // mov dword ptr [esp + 0x64], edx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edx);
L_004b4955:  // jl 0x4b4735
    if ((f.sf != f.of)) goto L_004b4735;
L_004b495b:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b495f:  // mov eax, dword ptr [ebp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_004b4965:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004b4967:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004b4969:  // jle 0x4b4a61
    if ((f.zf || f.sf != f.of)) goto L_004b4a61;
L_004b496f:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004b4973:  // mov eax, dword ptr [ebp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x80u)));
L_004b4979:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b497d:  // mov esi, dword ptr [ebp + 0x134]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x134u)));
L_004b4983:  // mov edx, dword ptr [edx + eax]
    edx = (uint32_t)(M32((uint32_t)(edx + eax)));
L_004b4986:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_004b498b:  // sub edx, esi
    t0 = lsub<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_004b498d:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b4991:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004b4993:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b4996:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004b4998:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_004b499b:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b499d:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b49a3:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b49a5:  // mov eax, dword ptr [ebx + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004b49ab:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b49ad:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004b49b0:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004b49b3:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b49b6:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_004b49b8:  // mov dword ptr [esi + eax*4], edx
    M32((uint32_t)(esi + eax * 4u)) = (uint32_t)(edx);
L_004b49bb:  // mov edx, dword ptr [ebp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x80u)));
L_004b49c1:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b49c5:  // mov edx, dword ptr [eax + edx + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + edx + 0x4u)));
L_004b49c9:  // mov eax, dword ptr [ebp + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x134u)));
L_004b49cf:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b49d1:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_004b49d6:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004b49d8:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b49db:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004b49dd:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_004b49e0:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b49e2:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b49e8:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b49ea:  // mov eax, dword ptr [ebx + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004b49f0:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b49f2:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004b49f5:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004b49f8:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b49fb:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_004b49fd:  // mov dword ptr [esi + eax*4 + 4], edx
    M32((uint32_t)(esi + eax * 4u + 0x4u)) = (uint32_t)(edx);
L_004b4a01:  // mov edx, dword ptr [ebp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x80u)));
L_004b4a07:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b4a0b:  // mov edx, dword ptr [eax + edx + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + edx + 0x8u)));
L_004b4a0f:  // mov eax, dword ptr [ebp + 0x134]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x134u)));
L_004b4a15:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4a17:  // mov eax, 0x2aaaaaab
    eax = (uint32_t)(0x2aaaaaabu);
L_004b4a1c:  // imul edx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)edx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004b4a1e:  // sar edx, 4
    t0 = lsar<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b4a21:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004b4a23:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_004b4a26:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4a28:  // mov eax, dword ptr [ebx + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xa8u)));
L_004b4a2e:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004b4a30:  // mov eax, dword ptr [ebx + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004b4a36:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b4a38:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_004b4a3b:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004b4a3e:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004b4a41:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_004b4a43:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004b4a44:  // mov dword ptr [esi + eax*4 + 8], edx
    M32((uint32_t)(esi + eax * 4u + 0x8u)) = (uint32_t)(edx);
L_004b4a48:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b4a4c:  // mov eax, dword ptr [ebp + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xb0u)));
L_004b4a52:  // add edx, 0xc
    t0 = ladd<32>(edx, 0xcu, f);
    edx = (uint32_t)(t0);
L_004b4a55:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004b4a57:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004b4a5b:  // jl 0x4b4973
    if ((f.sf != f.of)) goto L_004b4973;
L_004b4a61:  // mov ecx, dword ptr [esp + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004b4a68:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004b4a6c:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004b4a70:  // mov dword ptr [ebx + 0xac], ecx
    M32((uint32_t)(ebx + 0xacu)) = (uint32_t)(ecx);
L_004b4a76:  // mov ecx, dword ptr [ebx + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x84u)));
L_004b4a7c:  // mov dword ptr [ebx + 0xa8], edx
    M32((uint32_t)(ebx + 0xa8u)) = (uint32_t)(edx);
L_004b4a82:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004b4a86:  // mov dword ptr [ebx + 0xb0], eax
    M32((uint32_t)(ebx + 0xb0u)) = (uint32_t)(eax);
L_004b4a8c:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b4a90:  // mov dword ptr [ebx + 0x134], edi
    M32((uint32_t)(ebx + 0x134u)) = (uint32_t)(edi);
L_004b4a96:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b4a97:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004b4a99:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b4a9a:  // mov dword ptr [ebx + 0x80], eax
    M32((uint32_t)(ebx + 0x80u)) = (uint32_t)(eax);
L_004b4aa0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b4aa1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b4aa2:  // add esp, 0x214
    t0 = ladd<32>(esp, 0x214u, f);
    esp = (uint32_t)(t0);
L_004b4aa8:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004b4250, 004b4250)
