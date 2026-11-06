// lifted from 0051ca70 (vslot0, 246 bytes, 80 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051ca70(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051ca70;
L_0051ca70:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051ca71:  // mov ebx, dword ptr [0x89d94c]
    ebx = (uint32_t)(M32((uint32_t)(0x89d94cu)));
L_0051ca77:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0051ca78:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051ca79:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051ca7a:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0051ca7c:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0051ca7e:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0051ca80:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0051ca82:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0051ca84:  // cmp ecx, 0xe
    t0 = lsub<32>(ecx, 0xeu, f);
L_0051ca87:  // ja 0x51caf9
    if ((!f.cf && !f.zf)) goto L_0051caf9;
L_0051ca89:  // jmp dword ptr [ecx*4 + 0x51cb68]
    t0 = M32((uint32_t)(ecx * 4u + 0x51cb68u));
    switch (t0) {
    case 0x0051ca90u: goto L_0051ca90;
    case 0x0051ca97u: goto L_0051ca97;
    case 0x0051ca9eu: goto L_0051ca9e;
    case 0x0051caa5u: goto L_0051caa5;
    case 0x0051caacu: goto L_0051caac;
    case 0x0051cab3u: goto L_0051cab3;
    case 0x0051cabau: goto L_0051caba;
    case 0x0051cac1u: goto L_0051cac1;
    case 0x0051cac8u: goto L_0051cac8;
    case 0x0051cacfu: goto L_0051cacf;
    case 0x0051cad6u: goto L_0051cad6;
    case 0x0051caddu: goto L_0051cadd;
    case 0x0051cae4u: goto L_0051cae4;
    case 0x0051caebu: goto L_0051caeb;
    case 0x0051caf2u: goto L_0051caf2;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_0051ca90:  // mov eax, 0x352
    eax = (uint32_t)(0x352u);
L_0051ca95:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051ca97:  // mov eax, 0x355
    eax = (uint32_t)(0x355u);
L_0051ca9c:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051ca9e:  // mov eax, 0x35b
    eax = (uint32_t)(0x35bu);
L_0051caa3:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051caa5:  // mov eax, 0x360
    eax = (uint32_t)(0x360u);
L_0051caaa:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051caac:  // mov eax, 0x361
    eax = (uint32_t)(0x361u);
L_0051cab1:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051cab3:  // mov eax, 0x362
    eax = (uint32_t)(0x362u);
L_0051cab8:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051caba:  // mov eax, 0x353
    eax = (uint32_t)(0x353u);
L_0051cabf:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051cac1:  // mov eax, 0x357
    eax = (uint32_t)(0x357u);
L_0051cac6:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051cac8:  // mov eax, 0x35c
    eax = (uint32_t)(0x35cu);
L_0051cacd:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051cacf:  // mov eax, 0x35d
    eax = (uint32_t)(0x35du);
L_0051cad4:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051cad6:  // mov eax, 0x35e
    eax = (uint32_t)(0x35eu);
L_0051cadb:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051cadd:  // mov eax, 0x35f
    eax = (uint32_t)(0x35fu);
L_0051cae2:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051cae4:  // mov eax, 0x354
    eax = (uint32_t)(0x354u);
L_0051cae9:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051caeb:  // mov eax, 0x356
    eax = (uint32_t)(0x356u);
L_0051caf0:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051caf2:  // mov eax, 0x359
    eax = (uint32_t)(0x359u);
L_0051caf7:  // jmp 0x51cafe
    goto L_0051cafe;
L_0051caf9:  // mov eax, 0xfffffffe
    eax = (uint32_t)(0xfffffffeu);
L_0051cafe:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0051cb00:  // je 0x51cb5c
    if (f.zf) goto L_0051cb5c;
L_0051cb02:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0051cb03:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0051cb04:  // cmp edx, 6
    t0 = lsub<32>(edx, 0x6u, f);
L_0051cb07:  // jl 0x51ca84
    if ((f.sf != f.of)) goto L_0051ca84;
L_0051cb0d:  // add esi, 6
    t0 = ladd<32>(esi, 0x6u, f);
    esi = (uint32_t)(t0);
L_0051cb10:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0051cb11:  // cmp esi, 0x12
    t0 = lsub<32>(esi, 0x12u, f);
L_0051cb14:  // jl 0x51ca80
    if ((f.sf != f.of)) goto L_0051ca80;
L_0051cb1a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0051cb1c:  // mov dword ptr [edi + 0x64], esi
    M32((uint32_t)(edi + 0x64u)) = (uint32_t)(esi);
L_0051cb1f:  // mov dword ptr [edi + 0x60], esi
    M32((uint32_t)(edi + 0x60u)) = (uint32_t)(esi);
L_0051cb22:  // push 0x40490000
    t0 = 0x40490000u; esp -= 4; M32(esp) = t0;
L_0051cb27:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051cb28:  // mov dword ptr [edi + 0x58], esi
    M32((uint32_t)(edi + 0x58u)) = (uint32_t)(esi);
L_0051cb2b:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cb30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cb30:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051cb32:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051cb35:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051cb3a:  // mov dword ptr [edi + 0x5c], esi
    M32((uint32_t)(edi + 0x5cu)) = (uint32_t)(esi);
L_0051cb3d:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cb42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cb42:  // fstp dword ptr [edi + 8]
    F32((uint32_t)(edi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0051cb45:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051cb4a:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cb4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cb4f:  // fstp dword ptr [edi + 0xc]
    F32((uint32_t)(edi + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0051cb52:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051cb53:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051cb54:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0051cb55:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0051cb5a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0051cb5b:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0051cb5c:  // mov dword ptr [edi + 0x60], edx
    M32((uint32_t)(edi + 0x60u)) = (uint32_t)(edx);
L_0051cb5f:  // mov dword ptr [edi + 0x64], ebp
    M32((uint32_t)(edi + 0x64u)) = (uint32_t)(ebp);
L_0051cb62:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0051cb64:  // jmp 0x51cb22
    goto L_0051cb22;
}

LIFT_FUNCTION(0x0051ca70, 0051ca70)
