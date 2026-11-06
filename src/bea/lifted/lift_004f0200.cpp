// lifted from 004f0200 (FUN_004f0200, 299 bytes, 79 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004f0200(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004f0200;
L_004f0200:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004f0204:  // sub esp, 0x200
    t0 = lsub<32>(esp, 0x200u, f);
    esp = (uint32_t)(t0);
L_004f020a:  // mov dword ptr [0x83d454], eax
    M32((uint32_t)(0x83d454u)) = (uint32_t)(eax);
L_004f020f:  // mov eax, dword ptr [0x632b04]
    eax = (uint32_t)(M32((uint32_t)(0x632b04u)));
L_004f0214:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f0215:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004f0216:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004f0218:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004f021b:  // mov dword ptr [0x83d458], edi
    M32((uint32_t)(0x83d458u)) = (uint32_t)(edi);
L_004f0221:  // je 0x4f0233
    if (f.zf) goto L_004f0233;
L_004f0223:  // mov eax, 0x632b04
    eax = (uint32_t)(0x632b04u);
L_004f0228:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004f022b:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004f022e:  // cmp ecx, -1
    t0 = lsub<32>(ecx, 0xffffffffu, f);
L_004f0231:  // jne 0x4f0228
    if (!f.zf) goto L_004f0228;
L_004f0233:  // mov eax, dword ptr [0x83d458]
    eax = (uint32_t)(M32((uint32_t)(0x83d458u)));
L_004f0238:  // lea ecx, [esp + 0x108]
    ecx = (uint32_t)((uint32_t)(esp + 0x108u));
L_004f023f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004f0240:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f0241:  // push 0x632c8c
    t0 = 0x632c8cu; esp -= 4; M32(esp) = t0;
L_004f0246:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f0247:  // mov dword ptr [0x83d458], eax
    M32((uint32_t)(0x83d458u)) = (uint32_t)(eax);
L_004f024c:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f0251u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f0251:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004f0254:  // lea edx, [esp + 0x108]
    edx = (uint32_t)((uint32_t)(esp + 0x108u));
L_004f025b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f025c:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f0261u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f0261:  // mov esi, dword ptr [edi*4 + 0x632b04]
    esi = (uint32_t)(M32((uint32_t)(edi * 4u + 0x632b04u)));
L_004f0268:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f026b:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_004f0270:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f0272:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004f0274:  // call 0x4684d0
    t0 = 0x004684d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f0279u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f0279:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f027e:  // call 0x549310
    t0 = 0x00549310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f0283u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f0283:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f0284:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_004f0288:  // push 0x632c7c
    t0 = 0x632c7cu; esp -= 4; M32(esp) = t0;
L_004f028d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f028e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f0293u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f0293:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004f0296:  // lea ecx, [esp + 8]
    ecx = (uint32_t)((uint32_t)(esp + 0x8u));
L_004f029a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f029b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f02a0:  // call 0x4a2a80
    t0 = 0x004a2a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f02a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f02a5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f02a6:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004f02ab:  // mov byte ptr [0x8a1815], 1
    M8((uint32_t)(0x8a1815u)) = (uint8_t)(0x1u);
L_004f02b2:  // call 0x46e240
    t0 = 0x0046e240u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f02b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f02b7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f02b8:  // lea edx, [esp + 0xc]
    edx = (uint32_t)((uint32_t)(esp + 0xcu));
L_004f02bc:  // push 0x632c6c
    t0 = 0x632c6cu; esp -= 4; M32(esp) = t0;
L_004f02c1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f02c2:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f02c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f02c7:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004f02ca:  // lea eax, [esp + 8]
    eax = (uint32_t)((uint32_t)(esp + 0x8u));
L_004f02ce:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f02d3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004f02d4:  // call 0x4a2a80
    t0 = 0x004a2a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f02d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f02d9:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f02de:  // call 0x549310
    t0 = 0x00549310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f02e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f02e3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004f02e4:  // lea ecx, [esp + 0x10c]
    ecx = (uint32_t)((uint32_t)(esp + 0x10cu));
L_004f02eb:  // push 0x632c54
    t0 = 0x632c54u; esp -= 4; M32(esp) = t0;
L_004f02f0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004f02f1:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f02f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f02f6:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004f02f9:  // lea edx, [esp + 0x108]
    edx = (uint32_t)((uint32_t)(esp + 0x108u));
L_004f0300:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004f0301:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f0306u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f0306:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004f0309:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f030e:  // call 0x5492d0
    t0 = 0x005492d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004f0313u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004f0313:  // mov eax, dword ptr [edi*4 + 0x632b08]
    eax = (uint32_t)(M32((uint32_t)(edi * 4u + 0x632b08u)));
L_004f031a:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004f031b:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004f031e:  // jne 0x4f0233
    if (!f.zf) goto L_004f0233;
L_004f0324:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004f0326:  // jmp 0x4f0233
    goto L_004f0233;
}

LIFT_FUNCTION_NF(0x004f0200, 004f0200)
