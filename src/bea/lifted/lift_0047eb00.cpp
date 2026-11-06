// lifted from 0047eb00 (FUN_0047eb00, 127 bytes, 46 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047eb00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047eb00;
L_0047eb00:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047eb01:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047eb02:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0047eb03:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047eb07:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0047eb09:  // mov ebx, edi
    ebx = (uint32_t)(edi);
L_0047eb0b:  // sar eax, 0xb
    t0 = lsar<32>(eax, 0xbu, f);
    eax = (uint32_t)(t0);
L_0047eb0e:  // and eax, 0x3f
    t0 = llog<32>(eax & 0x3fu, f);
    eax = (uint32_t)(t0);
L_0047eb11:  // mov ecx, dword ptr [ecx + 0x1028]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x1028u)));
L_0047eb17:  // sar ebx, 0xb
    t0 = lsar<32>(ebx, 0xbu, f);
    ebx = (uint32_t)(t0);
L_0047eb1a:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0047eb1d:  // and ebx, 0x3f
    t0 = llog<32>(ebx & 0x3fu, f);
    ebx = (uint32_t)(t0);
L_0047eb20:  // mov esi, edx
    esi = (uint32_t)(edx);
L_0047eb22:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0047eb24:  // mov ebx, edi
    ebx = (uint32_t)(edi);
L_0047eb26:  // sar ebx, 8
    t0 = lsar<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_0047eb29:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0047eb2c:  // and ebx, 7
    t0 = llog<32>(ebx & 0x7u, f);
    ebx = (uint32_t)(t0);
L_0047eb2f:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0047eb31:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_0047eb37:  // sar edx, 8
    t0 = lsar<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0047eb3a:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0047eb3d:  // and edx, 7
    t0 = llog<32>(edx & 0x7u, f);
    edx = (uint32_t)(t0);
L_0047eb40:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047eb42:  // and edi, 0xff
    t0 = llog<32>(edi & 0xffu, f);
    edi = (uint32_t)(t0);
L_0047eb48:  // movsx edx, word ptr [ecx + eax*2]
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ecx + eax * 2u))));
L_0047eb4c:  // lea eax, [ecx + eax*2]
    eax = (uint32_t)((uint32_t)(ecx + eax * 2u));
L_0047eb4f:  // movsx ecx, word ptr [eax + 2]
    ecx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(eax + 0x2u))));
L_0047eb53:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0047eb55:  // imul ecx, esi
    t0 = limul32(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0047eb58:  // sar ecx, 8
    t0 = lsar<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0047eb5b:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0047eb5d:  // movsx edx, word ptr [eax + 0x12]
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(eax + 0x12u))));
L_0047eb61:  // movsx eax, word ptr [eax + 0x14]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(eax + 0x14u))));
L_0047eb65:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047eb67:  // imul eax, esi
    t0 = limul32(eax, esi, f);
    eax = (uint32_t)(t0);
L_0047eb6a:  // sar eax, 8
    t0 = lsar<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0047eb6d:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0047eb6f:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047eb71:  // imul eax, edi
    t0 = limul32(eax, edi, f);
    eax = (uint32_t)(t0);
L_0047eb74:  // sar eax, 8
    t0 = lsar<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0047eb77:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047eb78:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047eb79:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0047eb7b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047eb7c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0047eb00, 0047eb00)
