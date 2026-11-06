// lifted from 004445b0 (FUN_004445b0, 106 bytes, 40 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004445b0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004445b0;
L_004445b0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004445b1:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004445b3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004445b4:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004445b7:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_004445ba:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004445bc:  // je 0x444615
    if (f.zf) goto L_00444615;
L_004445be:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004445c0:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004445c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004445c3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004445c5:  // je 0x444615
    if (f.zf) goto L_00444615;
L_004445c7:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004445cb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004445cd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004445ce:  // call 0x4aa8a0
    t0 = 0x004aa8a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004445d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004445d3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004445d5:  // je 0x444602
    if (f.zf) goto L_00444602;
L_004445d7:  // mov eax, dword ptr [eax + 0x88]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_004445dd:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004445e0:  // mov eax, dword ptr [ecx + eax*4]
    eax = (uint32_t)(M32((uint32_t)(ecx + eax * 4u)));
L_004445e3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004445e5:  // je 0x444602
    if (f.zf) goto L_00444602;
L_004445e7:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004445eb:  // mov dword ptr [eax + 0x1c], edx
    M32((uint32_t)(eax + 0x1cu)) = (uint32_t)(edx);
L_004445ee:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004445f1:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004445f3:  // je 0x444615
    if (f.zf) goto L_00444615;
L_004445f5:  // call 0x442890
    t0 = 0x00442890u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004445fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004445fa:  // fstp dword ptr [esi + 0x18]
    F32((uint32_t)(esi + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004445fd:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004445fe:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004445ff:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00444602:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00444603:  // push 0x62864c
    t0 = 0x62864cu; esp -= 4; M32(esp) = t0;
L_00444608:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0044460d:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00444612u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00444612:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00444615:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00444616:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00444617:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004445b0, 004445b0)
