// lifted from 00460140 (FUN_00460140, 464 bytes, 141 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00460140(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00460140;
L_00460140:  // sub esp, 0x14
    t0 = lsub<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00460143:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00460144:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00460145:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00460146:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00460148:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00460149:  // mov ecx, 0x32
    ecx = (uint32_t)(0x32u);
L_0046014e:  // lea edi, [esi + 4]
    edi = (uint32_t)((uint32_t)(esi + 0x4u));
L_00460151:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00460153:  // mov dword ptr [esi], 0x5db584
    M32((uint32_t)(esi)) = (uint32_t)(0x5db584u);
L_00460159:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_0046015d:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0046015f:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_00460167:  // mov ebx, 0xfffffffa
    ebx = (uint32_t)(0xfffffffau);
L_0046016c:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0046016e:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_00460173:  // call 0x41b7b0
    t0 = 0x0041b7b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00460178u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00460178:  // mov ecx, dword ptr [eax + edi]
    ecx = (uint32_t)(M32((uint32_t)(eax + edi)));
L_0046017b:  // mov ebp, 0xa
    ebp = (uint32_t)(0xau);
L_00460180:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00460182:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00460183:  // idiv ebp
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ebp; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00460185:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00460187:  // je 0x46018e
    if (f.zf) goto L_0046018e;
L_00460189:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_0046018c:  // jne 0x46019d
    if (!f.zf) goto L_0046019d;
L_0046018e:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00460192:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_00460195:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_00460196:  // add ebx, 6
    t0 = ladd<32>(ebx, 0x6u, f);
    ebx = (uint32_t)(t0);
L_00460199:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_0046019d:  // mov ebp, dword ptr [esi]
    ebp = (uint32_t)(M32((uint32_t)(esi)));
L_0046019f:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004601a1:  // add eax, ebp
    t0 = ladd<32>(eax, ebp, f);
    eax = (uint32_t)(t0);
L_004601a3:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004601a7:  // add edi, 0x14
    t0 = ladd<32>(edi, 0x14u, f);
    edi = (uint32_t)(t0);
L_004601aa:  // mov dword ptr [ebp + eax*4 + 0xcc], ecx
    M32((uint32_t)(ebp + eax * 4u + 0xccu)) = (uint32_t)(ecx);
L_004601b1:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004601b3:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004601b4:  // cmp edi, 0x35c
    t0 = lsub<32>(edi, 0x35cu, f);
L_004601ba:  // mov dword ptr [esi], edx
    M32((uint32_t)(esi)) = (uint32_t)(edx);
L_004601bc:  // jl 0x46016e
    if ((f.sf != f.of)) goto L_0046016e;
L_004601be:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004601c2:  // lea edi, [ebp + 0xa2c]
    edi = (uint32_t)((uint32_t)(ebp + 0xa2cu));
L_004601c8:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004601c9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004601cb:  // mov dword ptr [ebp + 0x345c], ecx
    M32((uint32_t)(ebp + 0x345cu)) = (uint32_t)(ecx);
L_004601d1:  // mov ecx, 0x12c
    ecx = (uint32_t)(0x12cu);
L_004601d6:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_004601d8:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004601da:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_004601de:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_004601e3:  // call 0x41b7b0
    t0 = 0x0041b7b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004601e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004601e8:  // mov eax, dword ptr [eax + edi]
    eax = (uint32_t)(M32((uint32_t)(eax + edi)));
L_004601eb:  // or ebx, 0xffffffff
    t0 = llog<32>(ebx | 0xffffffffu, f);
    ebx = (uint32_t)(t0);
L_004601ee:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_004601f2:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_004601f6:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004601f8:  // lea edx, [ebp + 0xcc]
    edx = (uint32_t)((uint32_t)(ebp + 0xccu));
L_004601fe:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00460200:  // cmp dword ptr [edx], eax
    t0 = lsub<32>(M32((uint32_t)(edx)), eax, f);
L_00460202:  // jne 0x46020c
    if (!f.zf) goto L_0046020c;
L_00460204:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00460208:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0046020c:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0046020d:  // add edx, 4
    t0 = ladd<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_00460210:  // cmp ecx, 6
    t0 = lsub<32>(ecx, 0x6u, f);
L_00460213:  // jl 0x460200
    if ((f.sf != f.of)) goto L_00460200;
L_00460215:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00460216:  // cmp esi, 0x32
    t0 = lsub<32>(esi, 0x32u, f);
L_00460219:  // jl 0x4601fe
    if ((f.sf != f.of)) goto L_004601fe;
L_0046021b:  // cmp dword ptr [esp + 0x10], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x10u)), ebx, f);
L_0046021f:  // je 0x4602f3
    if (f.zf) goto L_004602f3;
L_00460225:  // cmp dword ptr [esp + 0x14], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x14u)), ebx, f);
L_00460229:  // je 0x4602f3
    if (f.zf) goto L_004602f3;
L_0046022f:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_00460232:  // mov dword ptr [esp + 0x1c], 2
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x2u);
L_0046023a:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_0046023e:  // jmp 0x460243
    goto L_00460243;
L_00460240:  // or ebx, 0xffffffff
    t0 = llog<32>(ebx | 0xffffffffu, f);
    ebx = (uint32_t)(t0);
L_00460243:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_00460248:  // call 0x41b7b0
    t0 = 0x0041b7b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0046024du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0046024d:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00460251:  // mov esi, dword ptr [eax + edx]
    esi = (uint32_t)(M32((uint32_t)(eax + edx)));
L_00460254:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_00460256:  // je 0x4602d5
    if (f.zf) goto L_004602d5;
L_00460258:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0046025d:  // call 0x41b7b0
    t0 = 0x0041b7b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00460262u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00460262:  // lea ecx, [esi + esi*4]
    ecx = (uint32_t)((uint32_t)(esi + esi * 4u));
L_00460265:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_00460267:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00460269:  // lea edx, [ebp + 0xcc]
    edx = (uint32_t)((uint32_t)(ebp + 0xccu));
L_0046026f:  // mov eax, dword ptr [eax + ecx*4]
    eax = (uint32_t)(M32((uint32_t)(eax + ecx * 4u)));
L_00460272:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00460274:  // cmp dword ptr [edx], eax
    t0 = lsub<32>(M32((uint32_t)(edx)), eax, f);
L_00460276:  // jne 0x46027c
    if (!f.zf) goto L_0046027c;
L_00460278:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0046027a:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0046027c:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0046027d:  // add edx, 4
    t0 = ladd<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_00460280:  // cmp ecx, 6
    t0 = lsub<32>(ecx, 0x6u, f);
L_00460283:  // jl 0x460274
    if ((f.sf != f.of)) goto L_00460274;
L_00460285:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00460286:  // cmp esi, 0x32
    t0 = lsub<32>(esi, 0x32u, f);
L_00460289:  // jl 0x460272
    if ((f.sf != f.of)) goto L_00460272;
L_0046028b:  // cmp edi, -1
    t0 = lsub<32>(edi, 0xffffffffu, f);
L_0046028e:  // je 0x4602d5
    if (f.zf) goto L_004602d5;
L_00460290:  // cmp ebx, -1
    t0 = lsub<32>(ebx, 0xffffffffu, f);
L_00460293:  // je 0x4602d5
    if (f.zf) goto L_004602d5;
L_00460295:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00460299:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0046029c:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004602a0:  // lea eax, [eax + edx*2]
    eax = (uint32_t)((uint32_t)(eax + edx * 2u));
L_004602a3:  // mov ecx, dword ptr [ebp + eax*4 + 0xa2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0xa2cu)));
L_004602aa:  // lea edx, [ecx + eax*4]
    edx = (uint32_t)((uint32_t)(ecx + eax * 4u));
L_004602ad:  // mov dword ptr [ebp + edx*8 + 0xedc], edi
    M32((uint32_t)(ebp + edx * 8u + 0xedcu)) = (uint32_t)(edi);
L_004602b4:  // mov ecx, dword ptr [ebp + eax*4 + 0xa2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0xa2cu)));
L_004602bb:  // lea edx, [ecx + eax*4 + 0x1dc]
    edx = (uint32_t)((uint32_t)(ecx + eax * 4u + 0x1dcu));
L_004602c2:  // mov dword ptr [ebp + edx*8], ebx
    M32((uint32_t)(ebp + edx * 8u)) = (uint32_t)(ebx);
L_004602c6:  // mov ecx, dword ptr [ebp + eax*4 + 0xa2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 4u + 0xa2cu)));
L_004602cd:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004602ce:  // mov dword ptr [ebp + eax*4 + 0xa2c], ecx
    M32((uint32_t)(ebp + eax * 4u + 0xa2cu)) = (uint32_t)(ecx);
L_004602d5:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004602d9:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004602dd:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004602e0:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004602e1:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004602e5:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004602e9:  // jne 0x460240
    if (!f.zf) goto L_00460240;
L_004602ef:  // mov edi, dword ptr [esp + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004602f3:  // add edi, 0x14
    t0 = ladd<32>(edi, 0x14u, f);
    edi = (uint32_t)(t0);
L_004602f6:  // cmp edi, 0x35c
    t0 = lsub<32>(edi, 0x35cu, f);
L_004602fc:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_00460300:  // jl 0x4601de
    if ((f.sf != f.of)) goto L_004601de;
L_00460306:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00460307:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_00460309:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0046030a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0046030b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0046030c:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0046030f:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00460140, 00460140)
