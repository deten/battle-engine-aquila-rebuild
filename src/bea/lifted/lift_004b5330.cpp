// lifted from 004b5330 (FUN_004b5330, 1942 bytes, 583 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b5330(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b5330;
L_004b5330:  // sub esp, 0x174
    t0 = lsub<32>(esp, 0x174u, f);
    esp = (uint32_t)(t0);
L_004b5336:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b5337:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b5338:  // mov ebp, dword ptr [esp + 0x180]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b533f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b5340:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004b5342:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b5343:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004b5345:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_004b5349:  // je 0x4b5359
    if (f.zf) goto L_004b5359;
L_004b534b:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004b534e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b5350:  // call dword ptr [eax + 0x70]
    t0 = M32((uint32_t)(eax + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5353u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5353:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004b5357:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b5359:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004b535c:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004b5364:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004b5366:  // je 0x4b5370
    if (f.zf) goto L_004b5370;
L_004b5368:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004b536b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b536d:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5370u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5370:  // mov ecx, dword ptr [esp + 0x19c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x19cu)));
L_004b5377:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b5379:  // and edx, 8
    t0 = llog<32>(edx & 0x8u, f);
    edx = (uint32_t)(t0);
L_004b537c:  // cmp dl, 8
    t0 = lsub<8>((edx & 0xffu), 0x8u, f);
L_004b537f:  // jne 0x4b5386
    if (!f.zf) goto L_004b5386;
L_004b5381:  // mov eax, dword ptr [0x704e5c]
    eax = (uint32_t)(M32((uint32_t)(0x704e5cu)));
L_004b5386:  // mov edi, dword ptr [esp + 0x194]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b538d:  // cmp dword ptr [edi + 0xb8], 1
    t0 = lsub<32>(M32((uint32_t)(edi + 0xb8u)), 0x1u, f);
L_004b5394:  // jle 0x4b5465
    if ((f.zf || f.sf != f.of)) goto L_004b5465;
L_004b539a:  // mov ecx, dword ptr [edi + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x128u)));
L_004b53a0:  // mov edx, dword ptr [ecx + 0x14]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x14u)));
L_004b53a3:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004b53a5:  // je 0x4b5465
    if (f.zf) goto L_004b5465;
L_004b53ab:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b53ad:  // jl 0x4b5465
    if ((f.sf != f.of)) goto L_004b5465;
L_004b53b3:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_004b53b6:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_004b53b9:  // lea ebx, [edx + eax*4]
    ebx = (uint32_t)((uint32_t)(edx + eax * 4u));
L_004b53bc:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b53be:  // je 0x4b542a
    if (f.zf) goto L_004b542a;
L_004b53c0:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004b53c2:  // je 0x4b53d0
    if (f.zf) goto L_004b53d0;
L_004b53c4:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004b53c7:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004b53c9:  // call dword ptr [eax + 0x18]
    t0 = M32((uint32_t)(eax + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b53ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b53cc:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b53d0:  // mov ecx, dword ptr [esp + 0x19c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x19cu)));
L_004b53d7:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b53d9:  // and edx, 8
    t0 = llog<32>(edx & 0x8u, f);
    edx = (uint32_t)(t0);
L_004b53dc:  // cmp dl, 8
    t0 = lsub<8>((edx & 0xffu), 0x8u, f);
L_004b53df:  // jne 0x4b53ea
    if (!f.zf) goto L_004b53ea;
L_004b53e1:  // mov eax, dword ptr [0x704e58]
    eax = (uint32_t)(M32((uint32_t)(0x704e58u)));
L_004b53e6:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004b53ea:  // fild dword ptr [ebx + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x1cu)));
L_004b53ed:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004b53ef:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004b53f3:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b53f7:  // fild dword ptr [ebx + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x14u)));
L_004b53fa:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_004b53fe:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b5402:  // je 0x4b5411
    if (f.zf) goto L_004b5411;
L_004b5404:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b5406:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004b540a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b540b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b540c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b540e:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5411u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5411:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004b5415:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004b5418:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004b541b:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5420u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5420:  // fistp qword ptr [esp + 0x34]
    M64((uint32_t)(esp + 0x34u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004b5424:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004b5428:  // jmp 0x4b548d
    goto L_004b548d;
L_004b542a:  // add ecx, 0x24
    t0 = ladd<32>(ecx, 0x24u, f);
    ecx = (uint32_t)(t0);
L_004b542d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b542e:  // push 0x630138
    t0 = 0x630138u; esp -= 4; M32(esp) = t0;
L_004b5433:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5438u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5438:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004b543b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004b543d:  // je 0x4b544c
    if (f.zf) goto L_004b544c;
L_004b543f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b5441:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004b5445:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5446:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b5447:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b5449:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b544cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b544c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004b5450:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004b5453:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004b5456:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b545bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b545b:  // fistp qword ptr [esp + 0x34]
    M64((uint32_t)(esp + 0x34u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004b545f:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004b5463:  // jmp 0x4b548d
    goto L_004b548d;
L_004b5465:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004b5467:  // je 0x4b5476
    if (f.zf) goto L_004b5476;
L_004b5469:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b546b:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004b546f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5470:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b5471:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b5473:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5476u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5476:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004b547a:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004b547d:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004b5480:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5485u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5485:  // fistp qword ptr [esp + 0x34]
    M64((uint32_t)(esp + 0x34u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004b5489:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004b548d:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004b5491:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004b5495:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004b5498:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b549du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b549d:  // mov eax, dword ptr [edi + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xb8u)));
L_004b54a3:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b54a7:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_004b54ab:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004b54ae:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004b54b0:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004b54b4:  // jl 0x4b54bb
    if ((f.sf != f.of)) goto L_004b54bb;
L_004b54b6:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b54b7:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004b54bb:  // mov ebp, dword ptr [esp + 0x190]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_004b54c2:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004b54c4:  // je 0x4b54d9
    if (f.zf) goto L_004b54d9;
L_004b54c6:  // mov eax, dword ptr [esp + 0x18c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_004b54cd:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b54cf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b54d1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b54d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b54d3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b54d4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b54d6:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b54d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b54d9:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004b54db:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004b54e0:  // je 0x4b54e9
    if (f.zf) goto L_004b54e9;
L_004b54e2:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b54e4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b54e6:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b54e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b54e9:  // mov edx, dword ptr [edi + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xc4u)));
L_004b54ef:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b54f3:  // mov cl, byte ptr [edx + esi]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + esi))) & 0xffu);
L_004b54f6:  // mov byte ptr [esp + 0x2c], cl
    M8((uint32_t)(esp + 0x2cu)) = (uint8_t)((ecx & 0xffu));
L_004b54fa:  // lea ecx, [esi + 1]
    ecx = (uint32_t)((uint32_t)(esi + 0x1u));
L_004b54fd:  // mov esi, dword ptr [edi + 0xb8]
    esi = (uint32_t)(M32((uint32_t)(edi + 0xb8u)));
L_004b5503:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_004b5505:  // jl 0x4b5512
    if ((f.sf != f.of)) goto L_004b5512;
L_004b5507:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b5509:  // je 0x4b550f
    if (f.zf) goto L_004b550f;
L_004b550b:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004b550d:  // jmp 0x4b5512
    goto L_004b5512;
L_004b550f:  // lea ecx, [esi - 1]
    ecx = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_004b5512:  // mov dl, byte ptr [edx + ecx]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + ecx))) & 0xffu);
L_004b5515:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b5519:  // mov byte ptr [esp + 0x80], dl
    M8((uint32_t)(esp + 0x80u)) = (uint8_t)((edx & 0xffu));
L_004b5520:  // mov ecx, dword ptr [edi + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xc8u)));
L_004b5526:  // mov esi, dword ptr [esp + 0x80]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004b552d:  // and ebx, 0xff
    t0 = llog<32>(ebx & 0xffu, f);
    ebx = (uint32_t)(t0);
L_004b5533:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_004b5539:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_004b553b:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004b553d:  // lea ebx, [ebx + ebx*2]
    ebx = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_004b5540:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004b5543:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b5545:  // lea esi, [esi + esi*2]
    esi = (uint32_t)((uint32_t)(esi + esi * 2u));
L_004b5548:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004b554b:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004b554d:  // fsub dword ptr [ecx + edx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + edx)));
L_004b5550:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004b5553:  // fsub dword ptr [ecx + edx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + edx + 0x4u)));
L_004b5557:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_004b5559:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004b555c:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004b5560:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004b5563:  // fsub dword ptr [ecx + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x8u)));
L_004b5566:  // shl ebx, 4
    t0 = lshl<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_004b5569:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004b556d:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b5571:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b5575:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b5579:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_004b557d:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004b5581:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b5585:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_004b5589:  // fadd dword ptr [ecx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx)));
L_004b558b:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004b558f:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004b5593:  // fadd dword ptr [ecx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x4u)));
L_004b5596:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b559a:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004b559e:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004b55a2:  // fadd dword ptr [ecx + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x8u)));
L_004b55a5:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004b55a9:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004b55ad:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004b55b1:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004b55b5:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004b55b9:  // mov eax, dword ptr [edi + 0x10c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x10cu)));
L_004b55bf:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004b55c3:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004b55c7:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_004b55c9:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004b55cd:  // lea edi, [ebx + eax]
    edi = (uint32_t)((uint32_t)(ebx + eax));
L_004b55d0:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_004b55d3:  // fsub dword ptr [edi + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x28u)));
L_004b55d6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b55d7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b55da:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004b55dd:  // fsub dword ptr [edi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x24u)));
L_004b55e0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b55e1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b55e4:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004b55e7:  // fsub dword ptr [edi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x20u)));
L_004b55ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b55eb:  // lea ecx, [esp + 0x7c]
    ecx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_004b55ef:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b55f2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b55f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b55f7:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_004b55fa:  // fsub dword ptr [edi + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x18u)));
L_004b55fd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b55fe:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5601:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_004b5604:  // fsub dword ptr [edi + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x14u)));
L_004b5607:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5608:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b560b:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_004b560e:  // fsub dword ptr [edi + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x10u)));
L_004b5611:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5612:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004b5616:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5619:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b561eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b561e:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_004b5622:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004b5626:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5627:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5628:  // lea eax, [esp + 0x10c]
    eax = (uint32_t)((uint32_t)(esp + 0x10cu));
L_004b562f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b5630:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5631:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b5633:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5638u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5638:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5639:  // lea ecx, [esp + 0xc0]
    ecx = (uint32_t)((uint32_t)(esp + 0xc0u));
L_004b5640:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5645u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5645:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b564c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b5650:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5651:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5654:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b565b:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004b565f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5660:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5663:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b566a:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004b566e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b566f:  // lea ecx, [esp + 0x100]
    ecx = (uint32_t)((uint32_t)(esp + 0x100u));
L_004b5676:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5679:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b567eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b567e:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b5685:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004b5689:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b568a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b568d:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b5694:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004b5698:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5699:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b569c:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b56a3:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004b56a7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b56a8:  // lea ecx, [esp + 0xf0]
    ecx = (uint32_t)((uint32_t)(esp + 0xf0u));
L_004b56af:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b56b2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b56b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b56b7:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b56bb:  // lea ecx, [esp + 0xf4]
    ecx = (uint32_t)((uint32_t)(esp + 0xf4u));
L_004b56c2:  // lea edx, [esp + 0xe4]
    edx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_004b56c9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b56ca:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b56cb:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_004b56d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b56d3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b56d4:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_004b56db:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b56e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b56e0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b56e1:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_004b56e8:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b56edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b56ed:  // mov edx, dword ptr [esp + 0x194]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b56f4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b56f5:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004b56fc:  // add ebx, dword ptr [edx + 0x10c]
    t0 = ladd<32>(ebx, M32((uint32_t)(edx + 0x10cu)), f);
    ebx = (uint32_t)(t0);
L_004b5702:  // mov esi, ebx
    esi = (uint32_t)(ebx);
L_004b5704:  // fadd dword ptr [esi + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x28u)));
L_004b5707:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b570a:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b5711:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_004b5714:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5715:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5718:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b571f:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_004b5722:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5723:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004b572a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b572d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5732u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5732:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004b5739:  // fadd dword ptr [esi + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x18u)));
L_004b573c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b573d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5740:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004b5747:  // fadd dword ptr [esi + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x14u)));
L_004b574a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b574b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b574e:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004b5755:  // fadd dword ptr [esi + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x10u)));
L_004b5758:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5759:  // lea ecx, [esp + 0x140]
    ecx = (uint32_t)((uint32_t)(esp + 0x140u));
L_004b5760:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5763:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5768u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5768:  // lea eax, [esp + 0x114]
    eax = (uint32_t)((uint32_t)(esp + 0x114u));
L_004b576f:  // lea ecx, [esp + 0x134]
    ecx = (uint32_t)((uint32_t)(esp + 0x134u));
L_004b5776:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5777:  // lea edx, [esp + 0x88]
    edx = (uint32_t)((uint32_t)(esp + 0x88u));
L_004b577e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b577f:  // lea eax, [esp + 0x12c]
    eax = (uint32_t)((uint32_t)(esp + 0x12cu));
L_004b5786:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5787:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5788:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b578a:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b578fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b578f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5790:  // lea ecx, [esp + 0x160]
    ecx = (uint32_t)((uint32_t)(esp + 0x160u));
L_004b5797:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b579cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b579c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b57a1:  // lea esi, [esp + 0x154]
    esi = (uint32_t)((uint32_t)(esp + 0x154u));
L_004b57a8:  // lea edi, [esp + 0x40]
    edi = (uint32_t)((uint32_t)(esp + 0x40u));
L_004b57ac:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b57ae:  // mov ecx, dword ptr [esp + 0x188]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x188u)));
L_004b57b5:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b57b7:  // je 0x4b57ef
    if (f.zf) goto L_004b57ef;
L_004b57b9:  // mov eax, dword ptr [esp + 0x194]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b57c0:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b57c2:  // mov eax, dword ptr [eax + 0x88]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_004b57c8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b57c9:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b57ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b57cc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b57ce:  // jne 0x4b57ef
    if (!f.zf) goto L_004b57ef;
L_004b57d0:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004b57d4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b57d5:  // mov ecx, dword ptr [esp + 0x190]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_004b57dc:  // call 0x41ad10
    t0 = 0x0041ad10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b57e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b57e1:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b57e6:  // lea esi, [esp + 0x40]
    esi = (uint32_t)((uint32_t)(esp + 0x40u));
L_004b57ea:  // jmp 0x4b59a5
    goto L_004b59a5;
L_004b57ef:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004b57f3:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b57f6:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004b57fa:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b57fd:  // mov eax, dword ptr [esp + 0x18c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_004b5804:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5805:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5807:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004b580b:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b580e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5810:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004b5814:  // fmul dword ptr [ebp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x14u)));
L_004b5817:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b581b:  // fmul dword ptr [ebp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x18u)));
L_004b581e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5820:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004b5824:  // fmul dword ptr [ebp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x10u)));
L_004b5827:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5829:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_004b582d:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004b5831:  // fmul dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004b5834:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004b5838:  // fmul dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004b583b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b583d:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b5841:  // fmul dword ptr [ebp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x28u)));
L_004b5844:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5846:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_004b584a:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004b584c:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004b584e:  // fld dword ptr [esp + 0x78]
    lpush(x, (long double)F32((uint32_t)(esp + 0x78u)));
L_004b5852:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b5855:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004b5858:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004b585c:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b585f:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004b5862:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b5866:  // fmul dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004b5869:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b586d:  // fmul dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004b5870:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5872:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004b5876:  // fmul dword ptr [ebp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x28u)));
L_004b5879:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b587b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b587e:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b5882:  // fmul dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004b5885:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004b5889:  // fmul dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004b588c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b588d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b588f:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004b5893:  // fmul dword ptr [ebp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x28u)));
L_004b5896:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5898:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b589b:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b589f:  // fmul dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004b58a2:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004b58a6:  // fmul dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004b58a9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b58aa:  // lea ecx, [esp + 0x130]
    ecx = (uint32_t)((uint32_t)(esp + 0x130u));
L_004b58b1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b58b3:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004b58b7:  // fmul dword ptr [ebp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x28u)));
L_004b58ba:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b58bc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b58bf:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b58c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b58c4:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004b58c8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b58c9:  // fmul dword ptr [ebp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x14u)));
L_004b58cc:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b58d0:  // fmul dword ptr [ebp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x10u)));
L_004b58d3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b58d4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b58d6:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004b58da:  // fmul dword ptr [ebp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x18u)));
L_004b58dd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b58df:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b58e2:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b58e6:  // fmul dword ptr [ebp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x14u)));
L_004b58e9:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b58ed:  // fmul dword ptr [ebp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x10u)));
L_004b58f0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b58f1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b58f3:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004b58f7:  // fmul dword ptr [ebp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x18u)));
L_004b58fa:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b58fc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b58ff:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b5903:  // fmul dword ptr [ebp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x14u)));
L_004b5906:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004b590a:  // fmul dword ptr [ebp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x18u)));
L_004b590d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b590e:  // lea ecx, [esp + 0x154]
    ecx = (uint32_t)((uint32_t)(esp + 0x154u));
L_004b5915:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5917:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b591b:  // fmul dword ptr [ebp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x10u)));
L_004b591e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5920:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5923:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5928u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5928:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004b592c:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b592f:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b5933:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b5936:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5937:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5938:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b593a:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004b593e:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b5941:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5943:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5946:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004b594a:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b594d:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004b5951:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b5954:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5955:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5957:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004b595b:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b595e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5960:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5963:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b5967:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b596a:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004b596e:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b5971:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5972:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004b5979:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b597b:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004b597f:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b5982:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5984:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5987:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b598cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b598c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b598d:  // lea ecx, [esp + 0x160]
    ecx = (uint32_t)((uint32_t)(esp + 0x160u));
L_004b5994:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5999u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5999:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b599e:  // lea esi, [esp + 0x154]
    esi = (uint32_t)((uint32_t)(esp + 0x154u));
L_004b59a5:  // mov ebx, dword ptr [esp + 0x3c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004b59a9:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004b59ab:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b59ad:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b59af:  // je 0x4b59dd
    if (f.zf) goto L_004b59dd;
L_004b59b1:  // mov eax, dword ptr [esp + 0x18c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_004b59b8:  // mov esi, dword ptr [esp + 0x194]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b59bf:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b59c1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b59c3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b59c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b59c5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b59c6:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b59c8:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b59cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b59cb:  // mov eax, dword ptr [esp + 0x19c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x19cu)));
L_004b59d2:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b59d4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b59d5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b59d6:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b59d8:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b59dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b59db:  // jmp 0x4b59e4
    goto L_004b59e4;
L_004b59dd:  // mov esi, dword ptr [esp + 0x194]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b59e4:  // mov ecx, dword ptr [esp + 0x198]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004b59eb:  // mov edx, dword ptr [esp + 0x18c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_004b59f2:  // lea edi, [esp + 0x40]
    edi = (uint32_t)((uint32_t)(esp + 0x40u));
L_004b59f6:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_004b59f8:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004b59fa:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004b59fe:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_004b5a00:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004b5a03:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004b5a07:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004b5a0a:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b5a0c:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004b5a0f:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004b5a13:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004b5a17:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b5a1c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b5a1e:  // je 0x4b5a8c
    if (f.zf) goto L_004b5a8c;
L_004b5a20:  // mov eax, dword ptr [esp + 0x194]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b5a27:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b5a29:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5a2a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b5a2c:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5a2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5a2f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b5a31:  // je 0x4b5a8c
    if (f.zf) goto L_004b5a8c;
L_004b5a33:  // jle 0x4b5a49
    if ((f.zf || f.sf != f.of)) goto L_004b5a49;
L_004b5a35:  // mov ecx, dword ptr [esp + 0x198]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004b5a3c:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b5a3d:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b5a3f:  // mov edx, dword ptr [edx + 0x9c]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x9cu)));
L_004b5a45:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004b5a47:  // jne 0x4b5a35
    if (!f.zf) goto L_004b5a35;
L_004b5a49:  // mov ecx, dword ptr [esp + 0x198]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004b5a50:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b5a54:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004b5a55:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_004b5a57:  // mov edx, dword ptr [ecx + 0xb8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xb8u)));
L_004b5a5d:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_004b5a5f:  // jl 0x4b5a64
    if ((f.sf != f.of)) goto L_004b5a64;
L_004b5a61:  // lea eax, [edx - 1]
    eax = (uint32_t)((uint32_t)(edx + 0xffffffffu));
L_004b5a64:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b5a66:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b5a68:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004b5a6c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004b5a6e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5a6f:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_004b5a73:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5a74:  // mov edx, dword ptr [esp + 0x19c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x19cu)));
L_004b5a7b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5a7c:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b5a80:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b5a81:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5a82:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004b5a86:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5a87:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5a8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5a8c:  // mov eax, dword ptr [esp + 0x18c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_004b5a93:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b5a97:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b5a9b:  // lea esi, [esp + 0x40]
    esi = (uint32_t)((uint32_t)(esp + 0x40u));
L_004b5a9f:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b5aa1:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b5aa5:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004b5aa8:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004b5aac:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b5aaf:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b5ab4:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004b5ab6:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b5ab9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b5abb:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b5abc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b5abd:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b5abe:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b5abf:  // add esp, 0x174
    t0 = ladd<32>(esp, 0x174u, f);
    esp = (uint32_t)(t0);
L_004b5ac5:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004b5330, 004b5330)
