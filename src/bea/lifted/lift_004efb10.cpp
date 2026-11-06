// lifted from 004efb10 (FUN_004efb10, 1468 bytes, 384 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004efb10(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004efb10;
L_004efb10:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004efb16:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004efb18:  // push 0x5d503b
    t0 = 0x5d503bu; esp -= 4; M32(esp) = t0;
L_004efb1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004efb1e:  // mov eax, dword ptr [0x82b4a4]
    eax = (uint32_t)(M32((uint32_t)(0x82b4a4u)));
L_004efb23:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004efb2a:  // sub esp, 0x2f8
    t0 = lsub<32>(esp, 0x2f8u, f);
    esp = (uint32_t)(t0);
L_004efb30:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efb31:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004efb33:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004efb34:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004efb36:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004efb38:  // jne 0x4efb45
    if (!f.zf) goto L_004efb45;
L_004efb3a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efb3b:  // mov ecx, 0x9c6480
    ecx = (uint32_t)(0x9c6480u);
L_004efb40:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efb45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efb45:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004efb4a:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efb4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efb4f:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004efb53:  // push 0x9c40
    t0 = 0x9c40u; esp -= 4; M32(esp) = t0;
L_004efb58:  // call 0x4e59f0
    t0 = 0x004e59f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efb5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efb5d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004efb60:  // mov ecx, 0x66f580
    ecx = (uint32_t)(0x66f580u);
L_004efb65:  // call 0x4416e0
    t0 = 0x004416e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efb6au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efb6a:  // mov ecx, 0x66eb90
    ecx = (uint32_t)(0x66eb90u);
L_004efb6f:  // call 0x4416e0
    t0 = 0x004416e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efb74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efb74:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efb76:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efb78:  // push 0x89be50
    t0 = 0x89be50u; esp -= 4; M32(esp) = t0;
L_004efb7d:  // lea ecx, [esp + 0x194]
    ecx = (uint32_t)((uint32_t)(esp + 0x194u));
L_004efb84:  // call 0x5145f0
    t0 = 0x005145f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efb89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efb89:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efb8b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efb8d:  // push 0x89be5c
    t0 = 0x89be5cu; esp -= 4; M32(esp) = t0;
L_004efb92:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004efb96:  // mov dword ptr [esp + 0x314], ebx
    M32((uint32_t)(esp + 0x314u)) = (uint32_t)(ebx);
L_004efb9d:  // call 0x5145f0
    t0 = 0x005145f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efba2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efba2:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004efba6:  // call 0x42d8e0
    t0 = 0x0042d8e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efbabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efbab:  // lea ecx, [esp + 0x188]
    ecx = (uint32_t)((uint32_t)(esp + 0x188u));
L_004efbb2:  // mov dword ptr [esp + 0x308], 0xffffffff
    M32((uint32_t)(esp + 0x308u)) = (uint32_t)(0xffffffffu);
L_004efbbd:  // call 0x42d8e0
    t0 = 0x0042d8e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efbc2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efbc2:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004efbc7:  // call 0x429bc0
    t0 = 0x00429bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efbccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efbcc:  // push 0x632c40
    t0 = 0x632c40u; esp -= 4; M32(esp) = t0;
L_004efbd1:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_004efbd6:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efbdbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efbdb:  // mov al, byte ptr [0x8554a4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x8554a4u))) & 0xffu);
L_004efbe0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004efbe3:  // cmp al, bl
    t0 = lsub<8>((eax & 0xffu), (ebx & 0xffu), f);
L_004efbe5:  // jne 0x4efbf1
    if (!f.zf) goto L_004efbf1;
L_004efbe7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efbe9:  // call 0x453780
    t0 = 0x00453780u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efbeeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efbee:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004efbf1:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004efbf6:  // call 0x5154e0
    t0 = 0x005154e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efbfbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efbfb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004efbfd:  // jne 0x4efc16
    if (!f.zf) goto L_004efc16;
L_004efbff:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004efc00:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004efc01:  // mov ecx, dword ptr [esp + 0x2f8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2f8u)));
L_004efc08:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004efc0f:  // add esp, 0x304
    t0 = ladd<32>(esp, 0x304u, f);
    esp = (uint32_t)(t0);
L_004efc15:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004efc16:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004efc1b:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efc20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efc20:  // fsub dword ptr [esp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xcu)));
L_004efc24:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004efc27:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004efc2a:  // push 0x632c28
    t0 = 0x632c28u; esp -= 4; M32(esp) = t0;
L_004efc2f:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efc34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efc34:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004efc37:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004efc3c:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efc41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efc41:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004efc45:  // call 0x42d7a0
    t0 = 0x0042d7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efc4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efc4a:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efc4f:  // call 0x53f180
    t0 = 0x0053f180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efc54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efc54:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004efc59:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efc5eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efc5e:  // fsub dword ptr [esp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xcu)));
L_004efc62:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004efc65:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004efc68:  // push 0x632c14
    t0 = 0x632c14u; esp -= 4; M32(esp) = t0;
L_004efc6d:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efc72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efc72:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004efc75:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004efc7a:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efc7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efc7f:  // cmp dword ptr [0x662f40], ebx
    t0 = lsub<32>(M32((uint32_t)(0x662f40u)), ebx, f);
L_004efc85:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004efc87:  // je 0x4efce3
    if (f.zf) goto L_004efce3;
L_004efc89:  // push 0x632c04
    t0 = 0x632c04u; esp -= 4; M32(esp) = t0;
L_004efc8e:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_004efc93:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efc98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efc98:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004efc9b:  // push 0x632bf4
    t0 = 0x632bf4u; esp -= 4; M32(esp) = t0;
L_004efca0:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_004efca5:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efcaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efcaa:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004efcad:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004efcb2:  // call 0x4e00d0
    t0 = 0x004e00d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efcb7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efcb7:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004efcb9:  // jne 0x4efcc7
    if (!f.zf) goto L_004efcc7;
L_004efcbb:  // mov dword ptr [0x662f40], ebx
    M32((uint32_t)(0x662f40u)) = (uint32_t)(ebx);
L_004efcc1:  // mov dword ptr [0x662dcc], ebx
    M32((uint32_t)(0x662dccu)) = (uint32_t)(ebx);
L_004efcc7:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_004efccc:  // call 0x4bb380
    t0 = 0x004bb380u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efcd1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efcd1:  // push 0x62b13c
    t0 = 0x62b13cu; esp -= 4; M32(esp) = t0;
L_004efcd6:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_004efcdb:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efce0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efce0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004efce3:  // cmp dword ptr [0x662dc8], -1
    t0 = lsub<32>(M32((uint32_t)(0x662dc8u)), 0xffffffffu, f);
L_004efcea:  // jne 0x4efeea
    if (!f.zf) goto L_004efeea;
L_004efcf0:  // cmp dword ptr [0x66304c], -1
    t0 = lsub<32>(M32((uint32_t)(0x66304cu)), 0xffffffffu, f);
L_004efcf7:  // jne 0x4efeea
    if (!f.zf) goto L_004efeea;
L_004efcfd:  // cmp dword ptr [0x663050], ebx
    t0 = lsub<32>(M32((uint32_t)(0x663050u)), ebx, f);
L_004efd03:  // jne 0x4efeea
    if (!f.zf) goto L_004efeea;
L_004efd09:  // mov ecx, dword ptr [0x6630cc]
    ecx = (uint32_t)(M32((uint32_t)(0x6630ccu)));
L_004efd0f:  // mov al, byte ptr [0x66e94e]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x66e94eu))) & 0xffu);
L_004efd14:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004efd16:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efd18:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efd1a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efd1c:  // setne byte ptr [esp + 0x17]
    M8((uint32_t)(esp + 0x17u)) = (uint8_t)(!f.zf);
L_004efd21:  // cmp al, bl
    t0 = lsub<8>((eax & 0xffu), (ebx & 0xffu), f);
L_004efd23:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efd24:  // mov byte ptr [0x662f3c], 1
    M8((uint32_t)(0x662f3cu)) = (uint8_t)(0x1u);
L_004efd2b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efd2c:  // je 0x4efd42
    if (f.zf) goto L_004efd42;
L_004efd2e:  // push 0x632bd8
    t0 = 0x632bd8u; esp -= 4; M32(esp) = t0;
L_004efd33:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efd38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efd38:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004efd3b:  // mov dword ptr [0x83d3ec], eax
    M32((uint32_t)(0x83d3ecu)) = (uint32_t)(eax);
L_004efd40:  // jmp 0x4efd5a
    goto L_004efd5a;
L_004efd42:  // push 0x632bcc
    t0 = 0x632bccu; esp -= 4; M32(esp) = t0;
L_004efd47:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efd4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efd4c:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004efd4f:  // mov dword ptr [0x83d3ec], eax
    M32((uint32_t)(0x83d3ecu)) = (uint32_t)(eax);
L_004efd54:  // mov byte ptr [0x662f3c], bl
    M8((uint32_t)(0x662f3cu)) = (uint8_t)((ebx & 0xffu));
L_004efd5a:  // push 0x632bb0
    t0 = 0x632bb0u; esp -= 4; M32(esp) = t0;
L_004efd5f:  // mov dword ptr [0x83d450], ebx
    M32((uint32_t)(0x83d450u)) = (uint32_t)(ebx);
L_004efd65:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efd6au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efd6a:  // mov al, byte ptr [esp + 0xf]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0xfu))) & 0xffu);
L_004efd6e:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004efd71:  // cmp al, bl
    t0 = lsub<8>((eax & 0xffu), (ebx & 0xffu), f);
L_004efd73:  // je 0x4efdf1
    if (f.zf) goto L_004efdf1;
L_004efd75:  // push 0x632b98
    t0 = 0x632b98u; esp -= 4; M32(esp) = t0;
L_004efd7a:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efd7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efd7f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004efd82:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efd87:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efd89:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efd8a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efd8b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efd8d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efd8e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efd90:  // push 0x632b90
    t0 = 0x632b90u; esp -= 4; M32(esp) = t0;
L_004efd95:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efd9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efd9a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004efd9c:  // jne 0x4efece
    if (!f.zf) goto L_004efece;
L_004efda2:  // cmp dword ptr [0x83d404], ebx
    t0 = lsub<32>(M32((uint32_t)(0x83d404u)), ebx, f);
L_004efda8:  // je 0x4efdca
    if (f.zf) goto L_004efdca;
L_004efdaa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efdac:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efdad:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efdae:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efdb0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efdb1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efdb3:  // push 0x632b74
    t0 = 0x632b74u; esp -= 4; M32(esp) = t0;
L_004efdb8:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efdbd:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efdc2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efdc2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004efdc4:  // jne 0x4efece
    if (!f.zf) goto L_004efece;
L_004efdca:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efdcc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efdcd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efdce:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efdd0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efdd1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efdd3:  // push 0x632b68
    t0 = 0x632b68u; esp -= 4; M32(esp) = t0;
L_004efdd8:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efddd:  // mov dword ptr [0x650610], 0x78e
    M32((uint32_t)(0x650610u)) = (uint32_t)(0x78eu);
L_004efde7:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efdecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efdec:  // jmp 0x4efec4
    goto L_004efec4;
L_004efdf1:  // cmp dword ptr [0x662f28], ebx
    t0 = lsub<32>(M32((uint32_t)(0x662f28u)), ebx, f);
L_004efdf7:  // jne 0x4efe5c
    if (!f.zf) goto L_004efe5c;
L_004efdf9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efdfa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efdfc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efdfd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efdff:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe00:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe01:  // push 0x632b5c
    t0 = 0x632b5cu; esp -= 4; M32(esp) = t0;
L_004efe06:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efe0b:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efe10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efe10:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe12:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe14:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe16:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe18:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe19:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe1a:  // push 0x632b54
    t0 = 0x632b54u; esp -= 4; M32(esp) = t0;
L_004efe1f:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efe24:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efe29u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efe29:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe2b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe2d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe2f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe31:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe32:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe33:  // push 0x632b48
    t0 = 0x632b48u; esp -= 4; M32(esp) = t0;
L_004efe38:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efe3d:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efe42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efe42:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe44:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe45:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe47:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe49:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe4a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe4b:  // push 0x632b3c
    t0 = 0x632b3cu; esp -= 4; M32(esp) = t0;
L_004efe50:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efe55:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efe5au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efe5a:  // jmp 0x4efece
    goto L_004efece;
L_004efe5c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe5e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe60:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe62:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe64:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe65:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe66:  // push 0x632b90
    t0 = 0x632b90u; esp -= 4; M32(esp) = t0;
L_004efe6b:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efe70:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efe75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efe75:  // cmp dword ptr [0x662df4], ebx
    t0 = lsub<32>(M32((uint32_t)(0x662df4u)), ebx, f);
L_004efe7b:  // jne 0x4efece
    if (!f.zf) goto L_004efece;
L_004efe7d:  // cmp dword ptr [0x83d404], ebx
    t0 = lsub<32>(M32((uint32_t)(0x83d404u)), ebx, f);
L_004efe83:  // je 0x4efe9d
    if (f.zf) goto L_004efe9d;
L_004efe85:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe87:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe88:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe8a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe8c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe8d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efe8e:  // push 0x632b74
    t0 = 0x632b74u; esp -= 4; M32(esp) = t0;
L_004efe93:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efe98:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efe9du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efe9d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efe9f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efea0:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efea2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004efea4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efea5:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efea6:  // push 0x632b68
    t0 = 0x632b68u; esp -= 4; M32(esp) = t0;
L_004efeab:  // mov ecx, 0x89d690
    ecx = (uint32_t)(0x89d690u);
L_004efeb0:  // mov dword ptr [0x650610], 0x78e
    M32((uint32_t)(0x650610u)) = (uint32_t)(0x78eu);
L_004efeba:  // call 0x465640
    t0 = 0x00465640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efebfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efebf:  // mov dword ptr [0x83d450], eax
    M32((uint32_t)(0x83d450u)) = (uint32_t)(eax);
L_004efec4:  // mov dword ptr [0x650610], 0x7fffffff
    M32((uint32_t)(0x650610u)) = (uint32_t)(0x7fffffffu);
L_004efece:  // mov eax, dword ptr [0x83d3ec]
    eax = (uint32_t)(M32((uint32_t)(0x83d3ecu)));
L_004efed3:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004efed5:  // je 0x4efeea
    if (f.zf) goto L_004efeea;
L_004efed7:  // lea ecx, [eax + 8]
    ecx = (uint32_t)((uint32_t)(eax + 0x8u));
L_004efeda:  // call 0x4f27e0
    t0 = 0x004f27e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efedfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efedf:  // mov ecx, dword ptr [0x83d3ec]
    ecx = (uint32_t)(M32((uint32_t)(0x83d3ecu)));
L_004efee5:  // call 0x556f50
    t0 = 0x00556f50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efeeau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efeea:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004efeef:  // call 0x4f2150
    t0 = 0x004f2150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efef4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efef4:  // cmp dword ptr [0x83d990], ebx
    t0 = lsub<32>(M32((uint32_t)(0x83d990u)), ebx, f);
L_004efefa:  // je 0x4efeff
    if (f.zf) goto L_004efeff;
L_004efefc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004efefd:  // jmp 0x4eff05
    goto L_004eff05;
L_004efeff:  // mov eax, dword ptr [0x66305c]
    eax = (uint32_t)(M32((uint32_t)(0x66305cu)));
L_004eff04:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004eff05:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004eff0a:  // call 0x4f21f0
    t0 = 0x004f21f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff0f:  // call 0x4fdc10
    t0 = 0x004fdc10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff14:  // cmp dword ptr [0x662dd4], ebx
    t0 = lsub<32>(M32((uint32_t)(0x662dd4u)), ebx, f);
L_004eff1a:  // jne 0x4eff28
    if (!f.zf) goto L_004eff28;
L_004eff1c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004eff1d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004eff1e:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004eff20:  // call 0x4d7200
    t0 = 0x004d7200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff25:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004eff28:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004eff2d:  // call 0x5155e0
    t0 = 0x005155e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff32:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004eff37:  // call 0x42a410
    t0 = 0x0042a410u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff3c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004eff3d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004eff3f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004eff41:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004eff46:  // call 0x42bbc0
    t0 = 0x0042bbc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff4b:  // push 0x42200000
    t0 = 0x42200000u; esp -= 4; M32(esp) = t0;
L_004eff50:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004eff51:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004eff56:  // call 0x42cf40
    t0 = 0x0042cf40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff5b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004eff5c:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004eff61:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff66u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff66:  // push 0x42480000
    t0 = 0x42480000u; esp -= 4; M32(esp) = t0;
L_004eff6b:  // push 0x42200000
    t0 = 0x42200000u; esp -= 4; M32(esp) = t0;
L_004eff70:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004eff75:  // call 0x42cf40
    t0 = 0x0042cf40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff7a:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004eff7f:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004eff84:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff89:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_004eff8e:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff93:  // call 0x515fb0
    t0 = 0x00515fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004eff98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004eff98:  // push 0x3e4ccccd
    t0 = 0x3e4ccccdu; esp -= 4; M32(esp) = t0;
L_004eff9d:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004effa2:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004effa7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004effa7:  // push 0x3e99999a
    t0 = 0x3e99999au; esp -= 4; M32(esp) = t0;
L_004effac:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004effb1:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004effb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004effb6:  // mov eax, dword ptr [0x83d3e8]
    eax = (uint32_t)(M32((uint32_t)(0x83d3e8u)));
L_004effbb:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004effbd:  // je 0x4effd2
    if (f.zf) goto L_004effd2;
L_004effbf:  // mov ecx, dword ptr [eax + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x170u)));
L_004effc5:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004effc6:  // mov dword ptr [eax + 0x170], ecx
    M32((uint32_t)(eax + 0x170u)) = (uint32_t)(ecx);
L_004effcc:  // mov dword ptr [0x83d3e8], ebx
    M32((uint32_t)(0x83d3e8u)) = (uint32_t)(ebx);
L_004effd2:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004effd4:  // push 0x632b30
    t0 = 0x632b30u; esp -= 4; M32(esp) = t0;
L_004effd9:  // call 0x4aa6e0
    t0 = 0x004aa6e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004effdeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004effde:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004effe1:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004effe6:  // mov dword ptr [0x83d3e8], eax
    M32((uint32_t)(0x83d3e8u)) = (uint32_t)(eax);
L_004effeb:  // push 0x3ecccccd
    t0 = 0x3ecccccdu; esp -= 4; M32(esp) = t0;
L_004efff0:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004efff5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004efff5:  // mov eax, dword ptr [0x83d3e4]
    eax = (uint32_t)(M32((uint32_t)(0x83d3e4u)));
L_004efffa:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004efffc:  // je 0x4f000c
    if (f.zf) goto L_004f000c;
L_004efffe:  // lea ecx, [eax + 8]
    ecx = (uint32_t)((uint32_t)(eax + 0x8u));
L_004f0001:  // call 0x4f27e0
    t0 = 0x004f27e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f0006u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f0006:  // mov dword ptr [0x83d3e4], ebx
    M32((uint32_t)(0x83d3e4u)) = (uint32_t)(ebx);
L_004f000c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f000e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f0010:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f0012:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f0013:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f0014:  // push 0x629f68
    t0 = 0x629f68u; esp -= 4; M32(esp) = t0;
L_004f0019:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f001eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f001e:  // mov dword ptr [0x83d3e4], eax
    M32((uint32_t)(0x83d3e4u)) = (uint32_t)(eax);
L_004f0023:  // mov eax, dword ptr [0x83d3e0]
    eax = (uint32_t)(M32((uint32_t)(0x83d3e0u)));
L_004f0028:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004f002b:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004f002d:  // je 0x4f003d
    if (f.zf) goto L_004f003d;
L_004f002f:  // lea ecx, [eax + 8]
    ecx = (uint32_t)((uint32_t)(eax + 0x8u));
L_004f0032:  // call 0x4f27e0
    t0 = 0x004f27e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f0037u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f0037:  // mov dword ptr [0x83d3e0], ebx
    M32((uint32_t)(0x83d3e0u)) = (uint32_t)(ebx);
L_004f003d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f003f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f0041:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004f0043:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f0044:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004f0045:  // push 0x625338
    t0 = 0x625338u; esp -= 4; M32(esp) = t0;
L_004f004a:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f004fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f004f:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004f0052:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004f0057:  // mov dword ptr [0x83d3e0], eax
    M32((uint32_t)(0x83d3e0u)) = (uint32_t)(eax);
L_004f005c:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_004f0061:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f0066u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f0066:  // cmp dword ptr [0x83d448], ebx
    t0 = lsub<32>(M32((uint32_t)(0x83d448u)), ebx, f);
L_004f006c:  // jne 0x4f0078
    if (!f.zf) goto L_004f0078;
L_004f006e:  // mov ecx, 0x704858
    ecx = (uint32_t)(0x704858u);
L_004f0073:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f0078u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f0078:  // call 0x4a5200
    t0 = 0x004a5200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f007du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f007d:  // push 0x3f19999a
    t0 = 0x3f19999au; esp -= 4; M32(esp) = t0;
L_004f0082:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004f0087:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f008cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f008c:  // mov dword ptr [edi], 0xffffffff
    M32((uint32_t)(edi)) = (uint32_t)(0xffffffffu);
L_004f0092:  // call 0x510800
    t0 = 0x00510800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f0097u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f0097:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004f009c:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004f00a1:  // call 0x42cf70
    t0 = 0x0042cf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f00a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f00a6:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004f00ab:  // call 0x4a2a20
    t0 = 0x004a2a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004f00b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004f00b0:  // mov ecx, dword ptr [esp + 0x300]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x300u)));
L_004f00b7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004f00b8:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004f00bd:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004f00be:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004f00c5:  // add esp, 0x304
    t0 = ladd<32>(esp, 0x304u, f);
    esp = (uint32_t)(t0);
L_004f00cb:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004efb10, 004efb10)
