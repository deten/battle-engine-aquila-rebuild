// lifted from 0051d160 (vslot5, 2299 bytes, 653 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051d160(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051d160;
L_0051d160:  // mov eax, 0x1f74
    eax = (uint32_t)(0x1f74u);
L_0051d165:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d16au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d16a:  // mov eax, dword ptr [esp + 0x1f7c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1f7cu)));
L_0051d171:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051d172:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051d173:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d174:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0051d176:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051d177:  // mov ecx, dword ptr [esp + 0x1f88]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1f88u)));
L_0051d17e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d17f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d180:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051d185:  // mov dword ptr [esp + 0x38], esi
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(esi);
L_0051d189:  // call 0x467200
    t0 = 0x00467200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d18eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d18e:  // fld dword ptr [0x5db53c]
    lpush(x, (long double)F32((uint32_t)(0x5db53cu)));
L_0051d194:  // fsub dword ptr [esi + 0x58]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x58u)));
L_0051d197:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0051d19b:  // fld dword ptr [esp + 0x1f88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f88u)));
L_0051d1a2:  // fsub dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bc4u)));
L_0051d1a8:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_0051d1ae:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051d1b4:  // fst dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
L_0051d1b8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051d1ba:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051d1bd:  // je 0x51d1c9
    if (f.zf) goto L_0051d1c9;
L_0051d1bf:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051d1c1:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0051d1c7:  // jmp 0x51d1de
    goto L_0051d1de;
L_0051d1c9:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051d1cf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051d1d1:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051d1d4:  // jne 0x51d1de
    if (!f.zf) goto L_0051d1de;
L_0051d1d6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051d1d8:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051d1de:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0051d1e4:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0051d1e6:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051d1ea:  // mov ebp, dword ptr [esp + 0x24]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0051d1ee:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0051d1f0:  // mov dword ptr [esp + 0x34], 0x43820000
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x43820000u);
L_0051d1f8:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_0051d1fc:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_0051d1ff:  // jle 0x51d20a
    if ((f.zf || f.sf != f.of)) goto L_0051d20a;
L_0051d201:  // cmp esi, 2
    t0 = lsub<32>(esi, 0x2u, f);
L_0051d204:  // je 0x51d83d
    if (f.zf) goto L_0051d83d;
L_0051d20a:  // fld dword ptr [esp + 0x1f88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f88u)));
L_0051d211:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051d217:  // mov ebx, dword ptr [esp + 0x34]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0051d21b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051d21d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051d220:  // je 0x51d507
    if (f.zf) goto L_0051d507;
L_0051d226:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0051d22a:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_0051d230:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0051d234:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0051d238:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_0051d23e:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0051d242:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d243:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0051d247:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0051d24b:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_0051d251:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0051d255:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d256:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0051d25a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0051d25e:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_0051d264:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0051d268:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d269:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0051d26d:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0051d271:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d272:  // call 0x4693d0
    t0 = 0x004693d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d277u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d277:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051d27a:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051d27c:  // je 0x51d28c
    if (f.zf) goto L_0051d28c;
L_0051d27e:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051d282:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051d286:  // mov dword ptr [eax + 0x60], edi
    M32((uint32_t)(eax + 0x60u)) = (uint32_t)(edi);
L_0051d289:  // mov dword ptr [eax + 0x64], edx
    M32((uint32_t)(eax + 0x64u)) = (uint32_t)(edx);
L_0051d28c:  // mov al, byte ptr [0x66e94e]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x66e94eu))) & 0xffu);
L_0051d291:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051d293:  // je 0x51d2a7
    if (f.zf) goto L_0051d2a7;
L_0051d295:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_0051d298:  // jne 0x51d2a7
    if (!f.zf) goto L_0051d2a7;
L_0051d29a:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051d29e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051d2a0:  // jne 0x51d2dc
    if (!f.zf) goto L_0051d2dc;
L_0051d2a2:  // jmp 0x51d507
    goto L_0051d507;
L_0051d2a7:  // cmp edi, 3
    t0 = lsub<32>(edi, 0x3u, f);
L_0051d2aa:  // jl 0x51d2dc
    if ((f.sf != f.of)) goto L_0051d2dc;
L_0051d2ac:  // push 0x320
    t0 = 0x320u; esp -= 4; M32(esp) = t0;
L_0051d2b1:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051d2b6:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d2bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d2bb:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0051d2be:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051d2c0:  // jne 0x51d2dc
    if (!f.zf) goto L_0051d2dc;
L_0051d2c2:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0051d2c7:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051d2cc:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d2d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d2d1:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0051d2d4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051d2d6:  // je 0x51d507
    if (f.zf) goto L_0051d507;
L_0051d2dc:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051d2e0:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051d2e4:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0051d2e8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d2e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d2ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d2eb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d2ec:  // call 0x469400
    t0 = 0x00469400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d2f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d2f1:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0051d2f4:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051d2f6:  // je 0x51d312
    if (f.zf) goto L_0051d312;
L_0051d2f8:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051d2fc:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051d300:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d305:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_0051d307:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0051d309:  // mov dword ptr [ecx + 0x60], edi
    M32((uint32_t)(ecx + 0x60u)) = (uint32_t)(edi);
L_0051d30c:  // mov dword ptr [ecx + 0x64], eax
    M32((uint32_t)(ecx + 0x64u)) = (uint32_t)(eax);
L_0051d30f:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d312u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d312:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051d314:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0051d316:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051d31b:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d320u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d320:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0051d322:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0051d324:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051d329:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d32eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d32e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0051d330:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051d332:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d334:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051d339:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d33eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d33e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0051d340:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0051d342:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d344:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051d349:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d34eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d34e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d350:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d352:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0051d357:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d35cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d35c:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_0051d35e:  // mov eax, dword ptr [0x89d808]
    eax = (uint32_t)(M32((uint32_t)(0x89d808u)));
L_0051d363:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_0051d366:  // sub esi, ebp
    t0 = lsub<32>(esi, ebp, f);
    esi = (uint32_t)(t0);
L_0051d368:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d36a:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051d36e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d373:  // shl esi, 0x10
    t0 = lshl<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_0051d376:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d378:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051d37a:  // or esi, 0xffffff
    t0 = llog<32>(esi | 0xffffffu, f);
    esi = (uint32_t)(t0);
L_0051d380:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d385:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d38a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d38b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d38c:  // push 0x3e9eb852
    t0 = 0x3e9eb852u; esp -= 4; M32(esp) = t0;
L_0051d391:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051d392:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d393:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d398u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d398:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051d39b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051d3a0:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0051d3a2:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0051d3a4:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d3a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d3a9:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0051d3ab:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0051d3ad:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051d3b2:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d3b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d3b7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051d3b9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051d3bb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d3bd:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051d3c2:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d3c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d3c7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051d3c9:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0051d3cb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d3cd:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0051d3d2:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d3d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d3d7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d3d9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d3db:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0051d3e0:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d3e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d3e5:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051d3e9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d3eb:  // lea edx, [eax*8]
    edx = (uint32_t)((uint32_t)(eax * 8u));
L_0051d3f2:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0051d3f4:  // lea eax, [edi + edi*4]
    eax = (uint32_t)((uint32_t)(edi + edi * 4u));
L_0051d3f7:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_0051d3fb:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_0051d3ff:  // lea ecx, [edi + eax*2]
    ecx = (uint32_t)((uint32_t)(edi + eax * 2u));
L_0051d402:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0051d406:  // fiadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_0051d40a:  // fmul dword ptr [0x5db534]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db534u)));
L_0051d410:  // fld dword ptr [0x8a9570]
    lpush(x, (long double)F32((uint32_t)(0x8a9570u)));
L_0051d416:  // fmul dword ptr [0x5d8cb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cb8u)));
L_0051d41c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0051d41e:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0051d422:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051d426:  // mov eax, dword ptr [0x89d814]
    eax = (uint32_t)(M32((uint32_t)(0x89d814u)));
L_0051d42b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d42c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051d42e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051d430:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d435:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d43a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d43b:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0051d43f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d440:  // push 0x3ea147ae
    t0 = 0x3ea147aeu; esp -= 4; M32(esp) = t0;
L_0051d445:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051d446:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d447:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d44cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d44c:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0051d450:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0051d452:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051d455:  // lea edx, [ecx + edi*2]
    edx = (uint32_t)((uint32_t)(ecx + edi * 2u));
L_0051d458:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051d45c:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0051d45e:  // fld dword ptr [ecx + eax*4 + 0x10]
    lpush(x, (long double)F32((uint32_t)(ecx + eax * 4u + 0x10u)));
L_0051d462:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0051d468:  // lea ecx, [ecx + eax*4 + 0x10]
    ecx = (uint32_t)((uint32_t)(ecx + eax * 4u + 0x10u));
L_0051d46c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051d46e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051d471:  // jne 0x51d507
    if (!f.zf) goto L_0051d507;
L_0051d477:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_0051d479:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0051d47b:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051d481:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051d483:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051d486:  // je 0x51d492
    if (f.zf) goto L_0051d492;
L_0051d488:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051d48a:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0051d490:  // jmp 0x51d4a7
    goto L_0051d4a7;
L_0051d492:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051d498:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051d49a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051d49d:  // jne 0x51d4a7
    if (!f.zf) goto L_0051d4a7;
L_0051d49f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051d4a1:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051d4a7:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0051d4ad:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0051d4b1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d4b3:  // mov eax, 0x80808081
    eax = (uint32_t)(0x80808081u);
L_0051d4b8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d4b9:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051d4bd:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0051d4c1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051d4c3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051d4c5:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d4ca:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d4cf:  // imul ecx, ebp
    t0 = limul32(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0051d4d2:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_0051d4d4:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0051d4d6:  // sar edx, 7
    t0 = lsar<32>(edx, 0x7u, f);
    edx = (uint32_t)(t0);
L_0051d4d9:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0051d4db:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_0051d4de:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0051d4e0:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0051d4e2:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0051d4e5:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0051d4e7:  // mov edx, dword ptr [0x89d818]
    edx = (uint32_t)(M32((uint32_t)(0x89d818u)));
L_0051d4ed:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0051d4f0:  // or ecx, 0xffffff
    t0 = llog<32>(ecx | 0xffffffu, f);
    ecx = (uint32_t)(t0);
L_0051d4f6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d4f7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d4f8:  // push 0x3ea147ae
    t0 = 0x3ea147aeu; esp -= 4; M32(esp) = t0;
L_0051d4fd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051d4fe:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d4ff:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d504u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d504:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051d507:  // mov al, byte ptr [0x66e94e]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x66e94eu))) & 0xffu);
L_0051d50c:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0051d513:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0051d515:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0051d51c:  // je 0x51d536
    if (f.zf) goto L_0051d536;
L_0051d51e:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_0051d521:  // jne 0x51d536
    if (!f.zf) goto L_0051d536;
L_0051d523:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051d527:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051d529:  // jne 0x51d572
    if (!f.zf) goto L_0051d572;
L_0051d52b:  // mov ecx, 0x1fffffff
    ecx = (uint32_t)(0x1fffffffu);
L_0051d530:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0051d534:  // jmp 0x51d57e
    goto L_0051d57e;
L_0051d536:  // cmp edi, 3
    t0 = lsub<32>(edi, 0x3u, f);
L_0051d539:  // jl 0x51d572
    if ((f.sf != f.of)) goto L_0051d572;
L_0051d53b:  // push 0x320
    t0 = 0x320u; esp -= 4; M32(esp) = t0;
L_0051d540:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051d545:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d54au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d54a:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0051d54d:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051d54f:  // jne 0x51d572
    if (!f.zf) goto L_0051d572;
L_0051d551:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0051d556:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051d55b:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d560u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d560:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0051d563:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051d565:  // jne 0x51d572
    if (!f.zf) goto L_0051d572;
L_0051d567:  // mov ecx, 0x1fffffff
    ecx = (uint32_t)(0x1fffffffu);
L_0051d56c:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0051d570:  // jmp 0x51d57e
    goto L_0051d57e;
L_0051d572:  // mov dword ptr [esp + 0x20], 0xffffffff
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xffffffffu);
L_0051d57a:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0051d57e:  // fld dword ptr [esp + 0x1f88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f88u)));
L_0051d585:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051d58b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051d58d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051d590:  // jne 0x51d6ac
    if (!f.zf) goto L_0051d6ac;
L_0051d596:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051d59a:  // cmp dword ptr [eax + 0x60], edi
    t0 = lsub<32>(M32((uint32_t)(eax + 0x60u)), edi, f);
L_0051d59d:  // jne 0x51d6ac
    if (!f.zf) goto L_0051d6ac;
L_0051d5a3:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051d5a7:  // mov esi, dword ptr [eax + 0x64]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x64u)));
L_0051d5aa:  // cmp esi, edx
    t0 = lsub<32>(esi, edx, f);
L_0051d5ac:  // jne 0x51d6ac
    if (!f.zf) goto L_0051d6ac;
L_0051d5b2:  // cmp dword ptr [esp + 0x1f8c], 0xf
    t0 = lsub<32>(M32((uint32_t)(esp + 0x1f8cu)), 0xfu, f);
L_0051d5ba:  // jne 0x51d6ac
    if (!f.zf) goto L_0051d6ac;
L_0051d5c0:  // fld dword ptr [esp + 0x1f88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f88u)));
L_0051d5c7:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0051d5cd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051d5cf:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051d5d2:  // jne 0x51d76f
    if (!f.zf) goto L_0051d76f;
L_0051d5d8:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051d5de:  // fsub dword ptr [esp + 0x1f88]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1f88u)));
L_0051d5e5:  // fld dword ptr [esp + 0x1f88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f88u)));
L_0051d5ec:  // fmul dword ptr [0x5db530]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db530u)));
L_0051d5f2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d5f3:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0051d5f7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051d5f9:  // fmul dword ptr [0x5d8bd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bd8u)));
L_0051d5ff:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_0051d605:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0051d609:  // fld dword ptr [0x5db52c]
    lpush(x, (long double)F32((uint32_t)(0x5db52cu)));
L_0051d60f:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_0051d613:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051d617:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0051d619:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_0051d61d:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0051d621:  // fld dword ptr [0x5d85f4]
    lpush(x, (long double)F32((uint32_t)(0x5d85f4u)));
L_0051d627:  // fsub dword ptr [esp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x38u)));
L_0051d62b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0051d62d:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_0051d631:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0051d635:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0051d639:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051d63b:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0051d63f:  // fchs 
    ST(0) = -ST(0);
L_0051d641:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051d644:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d649:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d64b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051d64d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d64e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d64f:  // mov eax, dword ptr [0x89d810]
    eax = (uint32_t)(M32((uint32_t)(0x89d810u)));
L_0051d654:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d655:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0051d659:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d65a:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_0051d65f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d660:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d661:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d666u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d666:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0051d66a:  // fmul dword ptr [0x5db528]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db528u)));
L_0051d670:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0051d674:  // mov ecx, dword ptr [0x89d80c]
    ecx = (uint32_t)(M32((uint32_t)(0x89d80cu)));
L_0051d67a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d67b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d680:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d682:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0051d686:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_0051d68a:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0051d68e:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051d690:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d691:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d692:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0051d696:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d697:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d698:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_0051d69d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d69e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d69f:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d6a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d6a4:  // add esp, 0x58
    t0 = ladd<32>(esp, 0x58u, f);
    esp = (uint32_t)(t0);
L_0051d6a7:  // jmp 0x51d76f
    goto L_0051d76f;
L_0051d6ac:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0051d6ae:  // jle 0x51d76f
    if ((f.zf || f.sf != f.of)) goto L_0051d76f;
L_0051d6b4:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0051d6b6:  // mov edx, edi
    edx = (uint32_t)(edi);
L_0051d6b8:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051d6bb:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0051d6bd:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_0051d6c2:  // and esi, 0xffff0000
    t0 = llog<32>(esi & 0xffff0000u, f);
    esi = (uint32_t)(t0);
L_0051d6c8:  // imul eax, ebp
    t0 = limul32(eax, ebp, f);
    eax = (uint32_t)(t0);
L_0051d6cb:  // imul esi, ebp
    t0 = limul32(esi, ebp, f);
    esi = (uint32_t)(t0);
L_0051d6ce:  // xor esi, ecx
    t0 = llog<32>(esi ^ ecx, f);
    esi = (uint32_t)(t0);
L_0051d6d0:  // and esi, 0xffffff
    t0 = llog<32>(esi & 0xffffffu, f);
    esi = (uint32_t)(t0);
L_0051d6d6:  // xor esi, eax
    t0 = llog<32>(esi ^ eax, f);
    esi = (uint32_t)(t0);
L_0051d6d8:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051d6dc:  // lea ecx, [eax + edi*2]
    ecx = (uint32_t)((uint32_t)(eax + edi * 2u));
L_0051d6df:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051d6e3:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0051d6e5:  // fld dword ptr [eax + edx*4 + 0x10]
    lpush(x, (long double)F32((uint32_t)(eax + edx * 4u + 0x10u)));
L_0051d6e9:  // fmul dword ptr [0x5d8de8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de8u)));
L_0051d6ef:  // lea eax, [eax + edx*4 + 0x10]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u + 0x10u));
L_0051d6f3:  // mov edx, dword ptr [0x89d804]
    edx = (uint32_t)(M32((uint32_t)(0x89d804u)));
L_0051d6f9:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0051d6fd:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051d701:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0051d703:  // fmul dword ptr [0x5d858c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d858cu)));
L_0051d709:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d70a:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051d70e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d713:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d715:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051d717:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d71c:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0051d722:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d727:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d728:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d729:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_0051d72e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051d72f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d730:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0051d734:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d739u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d739:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0051d73d:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0051d741:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0051d744:  // mov ecx, dword ptr [0x89d800]
    ecx = (uint32_t)(M32((uint32_t)(0x89d800u)));
L_0051d74a:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051d74e:  // fchs 
    ST(0) = -ST(0);
L_0051d750:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051d753:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d758:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d75a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0051d75c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d75d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d75e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d75f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d760:  // push 0x3e9c28f6
    t0 = 0x3e9c28f6u; esp -= 4; M32(esp) = t0;
L_0051d765:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051d766:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d767:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d76cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d76c:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_0051d76f:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0051d773:  // cmp edi, 4
    t0 = lsub<32>(edi, 0x4u, f);
L_0051d776:  // jg 0x51d82f
    if ((!f.zf && f.sf == f.of)) goto L_0051d82f;
L_0051d77c:  // cmp esi, 2
    t0 = lsub<32>(esi, 0x2u, f);
L_0051d77f:  // jne 0x51d78b
    if (!f.zf) goto L_0051d78b;
L_0051d781:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_0051d783:  // jge 0x51d82f
    if ((f.sf == f.of)) goto L_0051d82f;
L_0051d789:  // jmp 0x51d7c1
    goto L_0051d7c1;
L_0051d78b:  // cmp edi, 2
    t0 = lsub<32>(edi, 0x2u, f);
L_0051d78e:  // jl 0x51d7c1
    if ((f.sf != f.of)) goto L_0051d7c1;
L_0051d790:  // push 0x320
    t0 = 0x320u; esp -= 4; M32(esp) = t0;
L_0051d795:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051d79a:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d79fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d79f:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0051d7a2:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051d7a4:  // jne 0x51d7c1
    if (!f.zf) goto L_0051d7c1;
L_0051d7a6:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0051d7ab:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051d7b0:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d7b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d7b5:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0051d7b8:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0051d7bd:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051d7bf:  // je 0x51d7c6
    if (f.zf) goto L_0051d7c6;
L_0051d7c1:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_0051d7c6:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0051d7ca:  // fadd dword ptr [0x5d9640]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d9640u)));
L_0051d7d0:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0051d7d1:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_0051d7d3:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0051d7d5:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0051d7d9:  // and eax, 0x90000000
    t0 = llog<32>(eax & 0x90000000u, f);
    eax = (uint32_t)(t0);
L_0051d7de:  // add eax, 0x1fffffff
    t0 = ladd<32>(eax, 0x1fffffffu, f);
    eax = (uint32_t)(t0);
L_0051d7e3:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0051d7e5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051d7e7:  // jle 0x51d82f
    if ((f.zf || f.sf != f.of)) goto L_0051d82f;
L_0051d7e9:  // shr eax, 8
    t0 = lshr<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051d7ec:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0051d7ee:  // and eax, 0xff0000
    t0 = llog<32>(eax & 0xff0000u, f);
    eax = (uint32_t)(t0);
L_0051d7f3:  // and edx, 0xffff0000
    t0 = llog<32>(edx & 0xffff0000u, f);
    edx = (uint32_t)(t0);
L_0051d7f9:  // imul eax, ebp
    t0 = limul32(eax, ebp, f);
    eax = (uint32_t)(t0);
L_0051d7fc:  // imul edx, ebp
    t0 = limul32(edx, ebp, f);
    edx = (uint32_t)(t0);
L_0051d7ff:  // xor edx, ecx
    t0 = llog<32>(edx ^ ecx, f);
    edx = (uint32_t)(t0);
L_0051d801:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0051d805:  // and edx, 0xffffff
    t0 = llog<32>(edx & 0xffffffu, f);
    edx = (uint32_t)(t0);
L_0051d80b:  // push 0x3ecccccd
    t0 = 0x3ecccccdu; esp -= 4; M32(esp) = t0;
L_0051d810:  // push 0x3e9db22d
    t0 = 0x3e9db22du; esp -= 4; M32(esp) = t0;
L_0051d815:  // xor edx, eax
    t0 = llog<32>(edx ^ eax, f);
    edx = (uint32_t)(t0);
L_0051d817:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0051d81b:  // push 0x41200000
    t0 = 0x41200000u; esp -= 4; M32(esp) = t0;
L_0051d820:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d821:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051d822:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d823:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051d824:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d825:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051d82a:  // call 0x466de0
    t0 = 0x00466de0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d82fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d82f:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0051d833:  // fadd dword ptr [0x5db538]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db538u)));
L_0051d839:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0051d83d:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0051d83e:  // cmp esi, 3
    t0 = lsub<32>(esi, 0x3u, f);
L_0051d841:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_0051d845:  // jl 0x51d1fc
    if ((f.sf != f.of)) goto L_0051d1fc;
L_0051d84b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0051d84f:  // fadd dword ptr [0x5d9640]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d9640u)));
L_0051d855:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0051d856:  // cmp edi, 6
    t0 = lsub<32>(edi, 0x6u, f);
L_0051d859:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0051d85d:  // jl 0x51d1ee
    if ((f.sf != f.of)) goto L_0051d1ee;
L_0051d863:  // fld dword ptr [esp + 0x1f88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1f88u)));
L_0051d86a:  // fmul dword ptr [0x5d85bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85bcu)));
L_0051d870:  // fsub dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8ba0u)));
L_0051d876:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0051d87c:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0051d880:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0051d884:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0051d886:  // jge 0x51d88c
    if ((f.sf == f.of)) goto L_0051d88c;
L_0051d888:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0051d88a:  // jmp 0x51d899
    goto L_0051d899;
L_0051d88c:  // cmp edi, 0xff
    t0 = lsub<32>(edi, 0xffu, f);
L_0051d892:  // jle 0x51d899
    if ((f.zf || f.sf != f.of)) goto L_0051d899;
L_0051d894:  // mov edi, 0xff
    edi = (uint32_t)(0xffu);
L_0051d899:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051d89f:  // fsub dword ptr [esp + 0x1f88]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1f88u)));
L_0051d8a6:  // fsub dword ptr [0x5d858c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d858cu)));
L_0051d8ac:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051d8b2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051d8b4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051d8b7:  // je 0x51d8c1
    if (f.zf) goto L_0051d8c1;
L_0051d8b9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051d8bb:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0051d8c1:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0051d8c3:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051d8c7:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0051d8c9:  // mov eax, dword ptr [edx + 0x64]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x64u)));
L_0051d8cc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d8cd:  // fmul dword ptr [0x5db3fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db3fcu)));
L_0051d8d3:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0051d8d7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051d8d9:  // call 0x46a220
    t0 = 0x0046a220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d8deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d8de:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051d8e1:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0051d8e5:  // push 0x43d20000
    t0 = 0x43d20000u; esp -= 4; M32(esp) = t0;
L_0051d8ea:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d8eb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d8ec:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051d8ee:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051d8f3:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d8f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d8f8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051d8fa:  // call 0x465a20
    t0 = 0x00465a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d8ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d8ff:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051d904:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0051d906:  // mov dword ptr [esp + 0x14], 0x43230000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x43230000u);
L_0051d90e:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d913u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d913:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0051d917:  // mov eax, edi
    eax = (uint32_t)(edi);
L_0051d919:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0051d91c:  // fsub dword ptr [edx + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edx + 0xcu)));
L_0051d91f:  // sub eax, edi
    t0 = lsub<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_0051d921:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0051d924:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0051d926:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0051d92a:  // and edi, 0xff7f6f5f
    t0 = llog<32>(edi & 0xff7f6f5fu, f);
    edi = (uint32_t)(t0);
L_0051d930:  // or edi, 0x7f6f5f
    t0 = llog<32>(edi | 0x7f6f5fu, f);
    edi = (uint32_t)(t0);
L_0051d936:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0051d938:  // jle 0x51d9ca
    if ((f.zf || f.sf != f.of)) goto L_0051d9ca;
L_0051d93e:  // fld dword ptr [0x5db524]
    lpush(x, (long double)F32((uint32_t)(0x5db524u)));
L_0051d944:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_0051d948:  // lea esi, [esp + 0x44]
    esi = (uint32_t)((uint32_t)(esp + 0x44u));
L_0051d94c:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0051d950:  // mov ebp, dword ptr [esp + 0x24]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0051d954:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_0051d958:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d959:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d95a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051d95c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051d961:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d966u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d966:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051d968:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d96du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d96d:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0051d971:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d973:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d975:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0051d977:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0051d97b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051d97c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051d981:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051d984:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d985:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051d986:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d98b:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051d990:  // push 0x3c23d70a
    t0 = 0x3c23d70au; esp -= 4; M32(esp) = t0;
L_0051d995:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051d996:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051d997:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051d999:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d99eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d99e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051d9a0:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d9a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d9a5:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0051d9a9:  // fsub dword ptr [0x5d8c6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8c6cu)));
L_0051d9af:  // add esi, 0xc8
    t0 = ladd<32>(esi, 0xc8u, f);
    esi = (uint32_t)(t0);
L_0051d9b5:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0051d9b6:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0051d9ba:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051d9be:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_0051d9c4:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0051d9c8:  // jne 0x51d954
    if (!f.zf) goto L_0051d954;
L_0051d9ca:  // mov esi, dword ptr [esp + 0x1f88]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1f88u)));
L_0051d9d1:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051d9d6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d9d7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051d9d9:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d9deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d9de:  // mov edi, dword ptr [esp + 0x1f8c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1f8cu)));
L_0051d9e5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051d9e6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051d9e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051d9e9:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_0051d9eb:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d9f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d9f0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051d9f3:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051d9f8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051d9f9:  // call 0x467bd0
    t0 = 0x00467bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051d9feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051d9fe:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0051da02:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_0051da08:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051da0a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051da0d:  // je 0x51da19
    if (f.zf) goto L_0051da19;
L_0051da0f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051da11:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0051da17:  // jmp 0x51da2e
    goto L_0051da2e;
L_0051da19:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0051da1f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051da21:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051da24:  // jne 0x51da2e
    if (!f.zf) goto L_0051da2e;
L_0051da26:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051da28:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0051da2e:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0051da32:  // cmp edi, 0xf
    t0 = lsub<32>(edi, 0xfu, f);
L_0051da35:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051da36:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051da37:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0051da38:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0051da39:  // jne 0x51da43
    if (!f.zf) goto L_0051da43;
L_0051da3b:  // mov dword ptr [esp + 0xc], 0x3f800000
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x3f800000u);
L_0051da43:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0051da47:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051da4c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051da4d:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051da52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051da52:  // add esp, 0x1f74
    t0 = ladd<32>(esp, 0x1f74u, f);
    esp = (uint32_t)(t0);
L_0051da58:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0051d160, 0051d160)
