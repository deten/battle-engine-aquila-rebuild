// lifted from 00445250 (vslot9, 302 bytes, 91 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00445250(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00445250;
L_00445250:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00445256:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00445258:  // push 0x5d227c
    t0 = 0x5d227cu; esp -= 4; M32(esp) = t0;
L_0044525d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044525e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00445265:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00445266:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00445267:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0044526b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044526c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044526d:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0044526f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00445270:  // call 0x402ad0
    t0 = 0x00402ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445275u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445275:  // push 0x12
    t0 = 0x12u; esp -= 4; M32(esp) = t0;
L_00445277:  // push 0x6289c0
    t0 = 0x6289c0u; esp -= 4; M32(esp) = t0;
L_0044527c:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_0044527e:  // push 0x74
    t0 = 0x74u; esp -= 4; M32(esp) = t0;
L_00445280:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00445285:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044528au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044528a:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0044528c:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_00445290:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00445292:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_00445294:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_00445298:  // je 0x4452b7
    if (f.zf) goto L_004452b7;
L_0044529a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0044529b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044529c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0044529e:  // call 0x4fe710
    t0 = 0x004fe710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004452a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004452a3:  // mov dword ptr [edi], 0x5db1ac
    M32((uint32_t)(edi)) = (uint32_t)(0x5db1acu);
L_004452a9:  // mov dword ptr [edi + 0x60], ebx
    M32((uint32_t)(edi + 0x60u)) = (uint32_t)(ebx);
L_004452ac:  // mov dword ptr [edi + 0x68], ebx
    M32((uint32_t)(edi + 0x68u)) = (uint32_t)(ebx);
L_004452af:  // mov dword ptr [edi + 0x64], ebx
    M32((uint32_t)(edi + 0x64u)) = (uint32_t)(ebx);
L_004452b2:  // mov dword ptr [edi + 0x6c], ebx
    M32((uint32_t)(edi + 0x6cu)) = (uint32_t)(ebx);
L_004452b5:  // jmp 0x4452b9
    goto L_004452b9;
L_004452b7:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004452b9:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_004452bb:  // push 0x6289c0
    t0 = 0x6289c0u; esp -= 4; M32(esp) = t0;
L_004452c0:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_004452c2:  // push 0x30
    t0 = 0x30u; esp -= 4; M32(esp) = t0;
L_004452c4:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004452c9:  // mov dword ptr [esp + 0x28], 0xffffffff
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xffffffffu);
L_004452d1:  // mov dword ptr [esi + 0x13c], edi
    M32((uint32_t)(esi + 0x13cu)) = (uint32_t)(edi);
L_004452d7:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004452dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004452dc:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004452de:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_004452e2:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_004452e7:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004452e9:  // mov dword ptr [esp + 0x18], ebp
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebp);
L_004452ed:  // je 0x4452ff
    if (f.zf) goto L_004452ff;
L_004452ef:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004452f0:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004452f2:  // call 0x402150
    t0 = 0x00402150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004452f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004452f7:  // mov dword ptr [edi], 0x5db180
    M32((uint32_t)(edi)) = (uint32_t)(0x5db180u);
L_004452fd:  // jmp 0x445301
    goto L_00445301;
L_004452ff:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00445301:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00445304:  // mov dword ptr [esi + 0x208], edi
    M32((uint32_t)(esi + 0x208u)) = (uint32_t)(edi);
L_0044530a:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_0044530c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0044530d:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0044530f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00445310:  // push 0x62359c
    t0 = 0x62359cu; esp -= 4; M32(esp) = t0;
L_00445315:  // mov dword ptr [esp + 0x24], 0xffffffff
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xffffffffu);
L_0044531d:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445320u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445320:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00445322:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445327u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445327:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00445328:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0044532a:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445330u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445330:  // mov dword ptr [esi + 0x280], ebp
    M32((uint32_t)(esi + 0x280u)) = (uint32_t)(ebp);
L_00445336:  // mov dword ptr [esi + 0x27c], ebx
    M32((uint32_t)(esi + 0x27cu)) = (uint32_t)(ebx);
L_0044533c:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00445342:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445347u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445347:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0044534c:  // jns 0x445355
    if (!f.sf) goto L_00445355;
L_0044534e:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044534f:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00445354:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00445355:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00445359:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0044535d:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00445361:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00445362:  // fmul dword ptr [0x5db178]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db178u)));
L_00445368:  // fstp dword ptr [esi + 0x284]
    F32((uint32_t)(esi + 0x284u)) = lf32(ST(0));
    lpop(x);
L_0044536e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044536f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00445370:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00445377:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00445378:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0044537b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00445250, 00445250)
