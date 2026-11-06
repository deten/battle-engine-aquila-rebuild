// lifted from 004d1110 (vslot6, 177 bytes, 47 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d1110(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d1110;
L_004d1110:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004d1114:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004d1117:  // cmp eax, 0x939ef4
    t0 = lsub<32>(eax, 0x939ef4u, f);
L_004d111c:  // jg 0x4d1186
    if ((!f.zf && f.sf == f.of)) goto L_004d1186;
L_004d111e:  // je 0x4d1152
    if (f.zf) goto L_004d1152;
L_004d1120:  // cmp eax, 0x148fe9
    t0 = lsub<32>(eax, 0x148fe9u, f);
L_004d1125:  // je 0x4d1142
    if (f.zf) goto L_004d1142;
L_004d1127:  // cmp eax, 0x226f16
    t0 = lsub<32>(eax, 0x226f16u, f);
L_004d112c:  // jne 0x4d11be
    if (!f.zf) goto L_004d11be;
L_004d1132:  // mov ecx, dword ptr [0x8a9d3c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d3cu)));
L_004d1138:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004d113a:  // call 0x4d3020
    t0 = 0x004d3020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d113fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d113f:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d1142:  // mov ecx, dword ptr [0x8a9d3c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d3cu)));
L_004d1148:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d114a:  // call 0x4d3020
    t0 = 0x004d3020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d114fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d114f:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d1152:  // fild dword ptr [ecx + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ecx + 0x24u)));
L_004d1155:  // fidiv dword ptr [ecx + 0x2c]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(ecx + 0x2cu)));
L_004d1158:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004d115b:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_004d115f:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004d1162:  // push 0x6315f0
    t0 = 0x6315f0u; esp -= 4; M32(esp) = t0;
L_004d1167:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_004d116c:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1171u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1171:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d1175:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d1178:  // mov ecx, 0x889a48
    ecx = (uint32_t)(0x889a48u);
L_004d117d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d117e:  // call 0x4bba10
    t0 = 0x004bba10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d1183u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d1183:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d1186:  // cmp eax, 0x9d5a3f
    t0 = lsub<32>(eax, 0x9d5a3fu, f);
L_004d118b:  // jne 0x4d11be
    if (!f.zf) goto L_004d11be;
L_004d118d:  // fild dword ptr [ecx + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ecx + 0x24u)));
L_004d1190:  // fidiv dword ptr [ecx + 0x2c]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(ecx + 0x2cu)));
L_004d1193:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004d1196:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_004d119a:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004d119d:  // push 0x6315d0
    t0 = 0x6315d0u; esp -= 4; M32(esp) = t0;
L_004d11a2:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_004d11a7:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d11acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d11ac:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d11b0:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004d11b3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d11b4:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004d11b9:  // call 0x4e04c0
    t0 = 0x004e04c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d11beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d11be:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d1110, 004d1110)
