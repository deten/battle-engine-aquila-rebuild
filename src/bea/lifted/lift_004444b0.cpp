// lifted from 004444b0 (FUN_004444b0, 111 bytes, 42 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004444b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004444b0;
L_004444b0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004444b1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004444b3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004444b4:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004444b7:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_004444ba:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004444bc:  // je 0x44451a
    if (f.zf) goto L_0044451a;
L_004444be:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004444c0:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004444c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004444c3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004444c5:  // je 0x44451a
    if (f.zf) goto L_0044451a;
L_004444c7:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004444cb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004444cd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004444ce:  // call 0x4aa8a0
    t0 = 0x004aa8a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004444d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004444d3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004444d5:  // je 0x444507
    if (f.zf) goto L_00444507;
L_004444d7:  // mov eax, dword ptr [eax + 0x88]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_004444dd:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004444e0:  // mov eax, dword ptr [ecx + eax*4]
    eax = (uint32_t)(M32((uint32_t)(ecx + eax * 4u)));
L_004444e3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004444e5:  // je 0x444507
    if (f.zf) goto L_00444507;
L_004444e7:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004444eb:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004444ed:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004444f0:  // mov dword ptr [eax + 0x10], ecx
    M32((uint32_t)(eax + 0x10u)) = (uint32_t)(ecx);
L_004444f3:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004444f6:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004444f8:  // je 0x44451a
    if (f.zf) goto L_0044451a;
L_004444fa:  // call 0x442890
    t0 = 0x00442890u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004444ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004444ff:  // fstp dword ptr [esi + 0x18]
    F32((uint32_t)(esi + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00444502:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00444503:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00444504:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00444507:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00444508:  // push 0x62864c
    t0 = 0x62864cu; esp -= 4; M32(esp) = t0;
L_0044450d:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00444512:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00444517u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00444517:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0044451a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044451b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044451c:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004444b0, 004444b0)
