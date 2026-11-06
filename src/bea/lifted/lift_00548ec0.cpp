// lifted from 00548ec0 (FUN_00548ec0, 202 bytes, 57 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00548ec0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00548ec0;
L_00548ec0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00548ec2:  // push 0x5d7af2
    t0 = 0x5d7af2u; esp -= 4; M32(esp) = t0;
L_00548ec7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00548ecd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00548ece:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00548ed5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00548ed6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00548ed7:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00548ed9:  // mov dword ptr [esp + 4], edi
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(edi);
L_00548edd:  // lea ecx, [edi + 0x1c78]
    ecx = (uint32_t)((uint32_t)(edi + 0x1c78u));
L_00548ee3:  // mov dword ptr [esp + 0x10], 3
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3u);
L_00548eeb:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00548ef0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00548ef0:  // lea ecx, [edi + 0x13ac]
    ecx = (uint32_t)((uint32_t)(edi + 0x13acu));
L_00548ef6:  // mov byte ptr [esp + 0x10], 2
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x2u);
L_00548efb:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00548f00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00548f00:  // lea ecx, [edi + 0xae0]
    ecx = (uint32_t)((uint32_t)(edi + 0xae0u));
L_00548f06:  // mov byte ptr [esp + 0x10], 1
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x1u);
L_00548f0b:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00548f10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00548f10:  // lea ecx, [edi + 0x214]
    ecx = (uint32_t)((uint32_t)(edi + 0x214u));
L_00548f16:  // mov byte ptr [esp + 0x10], 0
    M8((uint32_t)(esp + 0x10u)) = (uint8_t)(0x0u);
L_00548f1b:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00548f20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00548f20:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00548f23:  // mov dword ptr [esp + 0x10], 0xffffffff
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xffffffffu);
L_00548f2b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00548f2d:  // je 0x548f7a
    if (f.zf) goto L_00548f7a;
L_00548f2f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00548f30:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00548f31:  // mov eax, dword ptr [edi + 4]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00548f34:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00548f36:  // mov ebx, dword ptr [eax + 0x208]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x208u)));
L_00548f3c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00548f3e:  // je 0x548f71
    if (f.zf) goto L_00548f71;
L_00548f40:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00548f41:  // mov ecx, 0x9c4004
    ecx = (uint32_t)(0x9c4004u);
L_00548f46:  // call 0x4a1570
    t0 = 0x004a1570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00548f4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00548f4b:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00548f4d:  // jne 0x548f71
    if (!f.zf) goto L_00548f71;
L_00548f4f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00548f50:  // mov ecx, 0x9c519c
    ecx = (uint32_t)(0x9c519cu);
L_00548f55:  // call 0x4a1570
    t0 = 0x004a1570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00548f5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00548f5a:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00548f5c:  // jne 0x548f71
    if (!f.zf) goto L_00548f71;
L_00548f5e:  // mov ecx, dword ptr [esi - 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xfffffff8u)));
L_00548f61:  // add esi, -0x10
    t0 = ladd<32>(esi, 0xfffffff0u, f);
    esi = (uint32_t)(t0);
L_00548f64:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00548f65:  // mov ecx, dword ptr [ecx*4 + 0x9c3e00]
    ecx = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x9c3e00u)));
L_00548f6c:  // call 0x4a1ca0
    t0 = 0x004a1ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00548f71u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00548f71:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00548f73:  // mov dword ptr [edi + 4], ebx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebx);
L_00548f76:  // jne 0x548f31
    if (!f.zf) goto L_00548f31;
L_00548f78:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00548f79:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00548f7a:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00548f7e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00548f7f:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00548f86:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00548f89:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00548ec0, 00548ec0)
