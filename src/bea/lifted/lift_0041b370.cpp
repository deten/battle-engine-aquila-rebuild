// lifted from 0041b370 (vslot66, 218 bytes, 68 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0041b370(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0041b370;
L_0041b370:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041b371:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0041b373:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041b374:  // mov eax, dword ptr [esi + 0x214]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x214u)));
L_0041b37a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041b37c:  // je 0x41b3ea
    if (f.zf) goto L_0041b3ea;
L_0041b37e:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_0041b384:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0041b387:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041b389:  // je 0x41b3ea
    if (f.zf) goto L_0041b3ea;
L_0041b38b:  // mov eax, dword ptr [esi + 0x260]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x260u)));
L_0041b391:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0041b393:  // je 0x41b3c7
    if (f.zf) goto L_0041b3c7;
L_0041b395:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0041b398:  // je 0x41b3c7
    if (f.zf) goto L_0041b3c7;
L_0041b39a:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0041b39d:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_0041b39f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041b3a1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0041b3a3:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0041b3a5:  // push 0x623e14
    t0 = 0x623e14u; esp -= 4; M32(esp) = t0;
L_0041b3aa:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b3adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b3ad:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041b3af:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b3b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b3b4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041b3b5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041b3b7:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b3bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b3bd:  // mov dword ptr [esi + 0x260], 3
    M32((uint32_t)(esi + 0x260u)) = (uint32_t)(0x3u);
L_0041b3c7:  // mov eax, dword ptr [esi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x13cu)));
L_0041b3cd:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0041b3d0:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0041b3d2:  // je 0x41b440
    if (f.zf) goto L_0041b440;
L_0041b3d4:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0041b3da:  // mov dword ptr [esi + 0x264], ecx
    M32((uint32_t)(esi + 0x264u)) = (uint32_t)(ecx);
L_0041b3e0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041b3e2:  // call 0x47c970
    t0 = 0x0047c970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b3e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b3e7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041b3e8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041b3e9:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0041b3ea:  // fld dword ptr [esi + 0x264]
    lpush(x, (long double)F32((uint32_t)(esi + 0x264u)));
L_0041b3f0:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_0041b3f6:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_0041b3fc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0041b3fe:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0041b401:  // je 0x41b440
    if (f.zf) goto L_0041b440;
L_0041b403:  // mov eax, dword ptr [esi + 0x260]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x260u)));
L_0041b409:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0041b40c:  // je 0x41b440
    if (f.zf) goto L_0041b440;
L_0041b40e:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0041b411:  // je 0x41b440
    if (f.zf) goto L_0041b440;
L_0041b413:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0041b416:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_0041b418:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0041b41a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0041b41c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0041b41e:  // push 0x623e08
    t0 = 0x623e08u; esp -= 4; M32(esp) = t0;
L_0041b423:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b426u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b426:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0041b428:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b42du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b42d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041b42e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041b430:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b436u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b436:  // mov dword ptr [esi + 0x260], 2
    M32((uint32_t)(esi + 0x260u)) = (uint32_t)(0x2u);
L_0041b440:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041b442:  // call 0x47c970
    t0 = 0x0047c970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b447u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b447:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041b448:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041b449:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0041b370, 0041b370)
