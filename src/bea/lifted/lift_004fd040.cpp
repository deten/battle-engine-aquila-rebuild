// lifted from 004fd040 (FUN_004fd040, 250 bytes, 89 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004fd040(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004fd040;
L_004fd040:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004fd043:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004fd044:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fd045:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fd046:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004fd047:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004fd049:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004fd04d:  // lea ebp, [edi + 0x19c]
    ebp = (uint32_t)((uint32_t)(edi + 0x19cu));
L_004fd053:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_004fd057:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd05cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd05c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004fd05e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fd060:  // je 0x4fd0ab
    if (f.zf) goto L_004fd0ab;
L_004fd062:  // mov bl, 4
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x4u) & 0xffu);
L_004fd064:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004fd066:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fd068:  // je 0x4fd07e
    if (f.zf) goto L_004fd07e;
L_004fd06a:  // test byte ptr [edi + 0x2c], bl
    t0 = llog<8>(M8((uint32_t)(edi + 0x2cu)) & (ebx & 0xffu), f);
L_004fd06d:  // je 0x4fd079
    if (f.zf) goto L_004fd079;
L_004fd06f:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004fd071:  // call dword ptr [eax + 0xc8]
    t0 = M32((uint32_t)(eax + 0xc8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd077u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd077:  // jmp 0x4fd07e
    goto L_004fd07e;
L_004fd079:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004fd07b:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd07eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd07e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fd07f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fd081:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd086u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd086:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fd088:  // je 0x4fd09c
    if (f.zf) goto L_004fd09c;
L_004fd08a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fd08c:  // call 0x44b1d0
    t0 = 0x0044b1d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd091u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd091:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fd092:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004fd097:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd09cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd09c:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004fd0a0:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd0a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd0a5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004fd0a7:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fd0a9:  // jne 0x4fd064
    if (!f.zf) goto L_004fd064;
L_004fd0ab:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fd0ad:  // lea ecx, [edi + 0x144]
    ecx = (uint32_t)((uint32_t)(edi + 0x144u));
L_004fd0b3:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd0b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd0b8:  // lea ebx, [edi + 0x18c]
    ebx = (uint32_t)((uint32_t)(edi + 0x18cu));
L_004fd0be:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004fd0c0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fd0c2:  // je 0x4fd0db
    if (f.zf) goto L_004fd0db;
L_004fd0c4:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004fd0c6:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fd0c8:  // je 0x4fd0db
    if (f.zf) goto L_004fd0db;
L_004fd0ca:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fd0cb:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004fd0cd:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd0d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd0d2:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004fd0d4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fd0d6:  // call dword ptr [eax + 8]
    t0 = M32((uint32_t)(eax + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd0d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd0d9:  // jmp 0x4fd0be
    goto L_004fd0be;
L_004fd0db:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004fd0dd:  // call 0x4fd230
    t0 = 0x004fd230u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd0e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd0e2:  // mov ecx, dword ptr [edi + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x74u)));
L_004fd0e5:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fd0e7:  // je 0x4fd103
    if (f.zf) goto L_004fd103;
L_004fd0e9:  // call 0x5337e0
    t0 = 0x005337e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd0eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd0ee:  // mov ecx, dword ptr [edi + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x74u)));
L_004fd0f1:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fd0f3:  // je 0x4fd0fc
    if (f.zf) goto L_004fd0fc;
L_004fd0f5:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004fd0f7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004fd0f9:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd0fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd0fc:  // mov dword ptr [edi + 0x74], 0
    M32((uint32_t)(edi + 0x74u)) = (uint32_t)(0x0u);
L_004fd103:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004fd105:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004fd107:  // call dword ptr [eax + 0x1c0]
    t0 = M32((uint32_t)(eax + 0x1c0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd10du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd10d:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_004fd113:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fd115:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fd117:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004fd11b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fd11d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004fd11e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004fd11f:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004fd123:  // push 0x7d0
    t0 = 0x7d0u; esp -= 4; M32(esp) = t0;
L_004fd128:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004fd12d:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fd132u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fd132:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fd133:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fd134:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004fd135:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004fd136:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004fd139:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004fd040, 004fd040)
