// lifted from 004f6430 (FUN_004f6430, 80 bytes, 29 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f6430(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f6430;
L_004f6430:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f6433:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004f6436:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f6437:  // lea esi, [ecx + 8]
    esi = (uint32_t)((uint32_t)(ecx + 0x8u));
L_004f643a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f643c:  // call dword ptr [eax + 0x54]
    t0 = M32((uint32_t)(eax + 0x54u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f643fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f643f:  // mov ecx, dword ptr [eax + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_004f6442:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004f6444:  // mov dword ptr [esp + 4], ecx
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(ecx);
L_004f6448:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004f644a:  // call dword ptr [edx + 0x54]
    t0 = M32((uint32_t)(edx + 0x54u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f644du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f644d:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_004f6450:  // fcom dword ptr [esp + 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x4u)));
L_004f6454:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004f6455:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004f6457:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004f645a:  // jne 0x4f6462
    if (!f.zf) goto L_004f6462;
L_004f645c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004f6460:  // jmp 0x4f6464
    goto L_004f6464;
L_004f6462:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004f6464:  // fld dword ptr [esp]
    lpush(x, (long double)F32((uint32_t)(esp)));
L_004f6468:  // fmul dword ptr [0x5d8be8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be8u)));
L_004f646e:  // fistp qword ptr [esp]
    M64((uint32_t)(esp)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004f6472:  // mov al, byte ptr [esp]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp))) & 0xffu);
L_004f6476:  // cmp al, 6
    t0 = lsub<8>((eax & 0xffu), 0x6u, f);
L_004f6478:  // jbe 0x4f647c
    if ((f.cf || f.zf)) goto L_004f647c;
L_004f647a:  // mov al, 6
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x6u) & 0xffu);
L_004f647c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004f647f:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004f6430, 004f6430)
