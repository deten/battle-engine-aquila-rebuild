// lifted from 004bb380 (FUN_004bb380, 125 bytes, 33 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004bb380(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004bb380;
L_004bb380:  // sub esp, 0xc
    t0 = lsub<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004bb383:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bb384:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004bb386:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004bb388:  // mov byte ptr [esi + 8], 0
    M8((uint32_t)(esi + 0x8u)) = (uint8_t)(0x0u);
L_004bb38c:  // mov dword ptr [esi + 0xc], 0
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(0x0u);
L_004bb393:  // mov dword ptr [esi + 4], 1
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(0x1u);
L_004bb39a:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bb39cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bb39c:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_004bb3a1:  // mov dword ptr [esi + 0x34], eax
    M32((uint32_t)(esi + 0x34u)) = (uint32_t)(eax);
L_004bb3a4:  // mov dword ptr [esi + 0x28], eax
    M32((uint32_t)(esi + 0x28u)) = (uint32_t)(eax);
L_004bb3a7:  // mov ecx, dword ptr [0x662ab0]
    ecx = (uint32_t)(M32((uint32_t)(0x662ab0u)));
L_004bb3ad:  // mov dword ptr [esp + 4], ecx
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(ecx);
L_004bb3b1:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004bb3b5:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_004bb3bb:  // fistp qword ptr [esp + 8]
    M64((uint32_t)(esp + 0x8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bb3bf:  // mov eax, dword ptr [esp + 8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004bb3c3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bb3c4:  // mov dword ptr [esi + 0x2c], eax
    M32((uint32_t)(esi + 0x2cu)) = (uint32_t)(eax);
L_004bb3c7:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bb3ca:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004bb3ce:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bb3d1:  // push 0x630a08
    t0 = 0x630a08u; esp -= 4; M32(esp) = t0;
L_004bb3d6:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_004bb3db:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bb3e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bb3e0:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004bb3e4:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004bb3e7:  // mov dword ptr [0x662ab0], edx
    M32((uint32_t)(0x662ab0u)) = (uint32_t)(edx);
L_004bb3ed:  // mov dword ptr [esi + 0x30], 0
    M32((uint32_t)(esi + 0x30u)) = (uint32_t)(0x0u);
L_004bb3f4:  // mov byte ptr [esi + 0x38], 1
    M8((uint32_t)(esi + 0x38u)) = (uint8_t)(0x1u);
L_004bb3f8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004bb3f9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004bb3fc:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004bb380, 004bb380)
