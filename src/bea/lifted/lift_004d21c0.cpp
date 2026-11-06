// lifted from 004d21c0 (vslot9, 716 bytes, 230 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d21c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d21c0;
L_004d21c0:  // sub esp, 0x34
    t0 = lsub<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_004d21c3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d21c4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d21c5:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d21c7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d21c8:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d21cb:  // test byte ptr [eax + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(eax + 0x2cu)) & 0x4u, f);
L_004d21cf:  // jne 0x4d2483
    if (!f.zf) goto L_004d2483;
L_004d21d5:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004d21d7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d21d9:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d21dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d21dc:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d21df:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d21e1:  // call 0x4fda10
    t0 = 0x004fda10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d21e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d21e6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d21e8:  // je 0x4d2291
    if (f.zf) goto L_004d2291;
L_004d21ee:  // mov eax, dword ptr [0x8a9d3c]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d3cu)));
L_004d21f3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d21f5:  // je 0x4d2291
    if (f.zf) goto L_004d2291;
L_004d21fb:  // mov eax, dword ptr [eax + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x1cu)));
L_004d21fe:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d2200:  // je 0x4d2291
    if (f.zf) goto L_004d2291;
L_004d2206:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d2209:  // lea edx, [eax + 0x1c]
    edx = (uint32_t)((uint32_t)(eax + 0x1cu));
L_004d220c:  // fld dword ptr [edx]
    lpush(x, (long double)F32((uint32_t)(edx)));
L_004d220e:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_004d2211:  // fld dword ptr [edx + 4]
    lpush(x, (long double)F32((uint32_t)(edx + 0x4u)));
L_004d2214:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_004d2217:  // fld dword ptr [edx + 8]
    lpush(x, (long double)F32((uint32_t)(edx + 0x8u)));
L_004d221a:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_004d221d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d221f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d2221:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d2223:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d2225:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d2227:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004d2229:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004d222b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d222d:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d222f:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004d2231:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d2233:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d2235:  // fcom dword ptr [0x5db4d0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db4d0u)));
L_004d223b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d223d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d2240:  // jne 0x4d2275
    if (!f.zf) goto L_004d2275;
L_004d2242:  // mov ebp, dword ptr [edx]
    ebp = (uint32_t)(M32((uint32_t)(edx)));
L_004d2244:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d2246:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d2249:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d224b:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004d224d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d224f:  // mov dword ptr [edi], ebp
    M32((uint32_t)(edi)) = (uint32_t)(ebp);
L_004d2251:  // mov ebp, dword ptr [edx + 4]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004d2254:  // mov dword ptr [edi + 4], ebp
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebp);
L_004d2257:  // mov ebp, dword ptr [edx + 8]
    ebp = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004d225a:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004d225d:  // mov dword ptr [edi + 8], ebp
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebp);
L_004d2260:  // mov dword ptr [edi + 0xc], edx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(edx);
L_004d2263:  // call dword ptr [eax + 0xf4]
    t0 = M32((uint32_t)(eax + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d2269u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d2269:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d226b:  // lea ecx, [esi + 0xc]
    ecx = (uint32_t)((uint32_t)(esi + 0xcu));
L_004d226e:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d2273u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d2273:  // jmp 0x4d2291
    goto L_004d2291;
L_004d2275:  // fcomp dword ptr [0x5db1e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db1e4u)));
    lpop(x);
L_004d227b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d227d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d2280:  // je 0x4d2291
    if (f.zf) goto L_004d2291;
L_004d2282:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004d2285:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d2287:  // jne 0x4d229c
    if (!f.zf) goto L_004d229c;
L_004d2289:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d228b:  // call dword ptr [eax + 0x100]
    t0 = M32((uint32_t)(eax + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d2291u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d2291:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004d2294:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d2296:  // je 0x4d23fd
    if (f.zf) goto L_004d23fd;
L_004d229c:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d229f:  // call 0x4d1f90
    t0 = 0x004d1f90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d22a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d22a4:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004d22a7:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004d22ab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d22ac:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d22ae:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d22b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d22b4:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d22b7:  // mov edi, dword ptr [esi + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004d22ba:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004d22be:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_004d22c1:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004d22c5:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_004d22c8:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d22cc:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_004d22cf:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004d22d3:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d22d5:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d22d7:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004d22d9:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004d22dd:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004d22e1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d22e3:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004d22e5:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004d22e7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004d22e9:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004d22eb:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004d22ed:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d22ef:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004d22f3:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d22f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d22f6:  // fsubr dword ptr [esp + 0xc]
    ST(0) = ((long double)F32((uint32_t)(esp + 0xcu))) - (ST(0));
L_004d22fa:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004d22fc:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004d22fe:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004d2302:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d2305u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d2305:  // mov eax, dword ptr [esi + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_004d2308:  // fsubr dword ptr [esp + 0xc]
    ST(0) = ((long double)F32((uint32_t)(esp + 0xcu))) - (ST(0));
L_004d230c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d230e:  // je 0x4d2339
    if (f.zf) goto L_004d2339;
L_004d2310:  // fcomp dword ptr [0x5db254]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db254u)));
    lpop(x);
L_004d2316:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d2318:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d231b:  // je 0x4d232b
    if (f.zf) goto L_004d232b;
L_004d231d:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_004d2322:  // mov dword ptr [esi + 0x60], 0
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x0u);
L_004d2329:  // jmp 0x4d2352
    goto L_004d2352;
L_004d232b:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004d232e:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d2331:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d2332:  // call 0x4fb670
    t0 = 0x004fb670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d2337u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d2337:  // jmp 0x4d2352
    goto L_004d2352;
L_004d2339:  // fcomp dword ptr [0x5dc648]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dc648u)));
    lpop(x);
L_004d233f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d2341:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d2344:  // jne 0x4d234d
    if (!f.zf) goto L_004d234d;
L_004d2346:  // mov dword ptr [esi + 0x60], 1
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x1u);
L_004d234d:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_004d2352:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004d2355:  // je 0x4d23ce
    if (f.zf) goto L_004d23ce;
L_004d2357:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d2358:  // je 0x4d23ce
    if (f.zf) goto L_004d23ce;
L_004d235a:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d235b:  // jne 0x4d242e
    if (!f.zf) goto L_004d242e;
L_004d2361:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d2364:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d2366:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004d236a:  // fsub dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_004d236d:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d2371:  // fsub dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x20u)));
L_004d2374:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d2377:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d2379:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004d237b:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004d237f:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004d2383:  // fsub dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x24u)));
L_004d2386:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004d238a:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_004d238d:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004d238f:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004d2393:  // mov edi, dword ptr [esp + 0x34]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004d2397:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d2399:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_004d239c:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_004d23a0:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004d23a2:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004d23a6:  // fld dword ptr [ecx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x24u)));
L_004d23a9:  // fsub dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004d23ad:  // mov edi, dword ptr [esp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004d23b1:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004d23b4:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004d23b8:  // mov edi, dword ptr [esp + 0x3c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004d23bc:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004d23bf:  // mov edi, dword ptr [esp + 0x40]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004d23c3:  // mov dword ptr [eax + 0xc], edi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edi);
L_004d23c6:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d23ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d23cc:  // jmp 0x4d242e
    goto L_004d242e;
L_004d23ce:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d23d2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d23d4:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d23d7:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d23da:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004d23dc:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d23de:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004d23e0:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004d23e4:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004d23e7:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004d23eb:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004d23ee:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004d23f2:  // mov dword ptr [eax + 0xc], edi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edi);
L_004d23f5:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d23fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d23fb:  // jmp 0x4d242e
    goto L_004d242e;
L_004d23fd:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d2400:  // call 0x4d1fd0
    t0 = 0x004d1fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d2405u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d2405:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004d2407:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d2409:  // mov dword ptr [esi + 0x60], 0
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x0u);
L_004d2410:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d2413u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d2413:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d2415:  // jne 0x4d2483
    if (!f.zf) goto L_004d2483;
L_004d2417:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d241a:  // call 0x4fda10
    t0 = 0x004fda10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d241fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d241f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d2421:  // jne 0x4d242e
    if (!f.zf) goto L_004d242e;
L_004d2423:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d2426:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d2428:  // call dword ptr [eax + 0x100]
    t0 = M32((uint32_t)(eax + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d242eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d242e:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004d2434:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d2439u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d2439:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004d243e:  // jns 0x4d2447
    if (!f.sf) goto L_004d2447;
L_004d2440:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d2441:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004d2446:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d2447:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004d244b:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004d244f:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_004d2453:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d2454:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d2456:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004d245a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d245c:  // fmul dword ptr [0x5d8d50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d50u)));
L_004d2462:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d2463:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d2464:  // push 0xbb8
    t0 = 0xbb8u; esp -= 4; M32(esp) = t0;
L_004d2469:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004d246e:  // fadd dword ptr [0x5d858c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d858cu)));
L_004d2474:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_004d247a:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004d247e:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d2483u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d2483:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d2484:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d2485:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d2486:  // add esp, 0x34
    t0 = ladd<32>(esp, 0x34u, f);
    esp = (uint32_t)(t0);
L_004d2489:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d21c0, 004d21c0)
