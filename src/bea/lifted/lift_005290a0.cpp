// lifted from 005290a0 (vslot11, 596 bytes, 171 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_005290a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_005290a0;
L_005290a0:  // sub esp, 0x38
    t0 = lsub<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_005290a3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005290a4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005290a5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005290a6:  // push 0x64bed4
    t0 = 0x64bed4u; esp -= 4; M32(esp) = t0;
L_005290ab:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_005290ad:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005290b2:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005290b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005290b7:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005290ba:  // push 0x1f
    t0 = 0x1fu; esp -= 4; M32(esp) = t0;
L_005290bc:  // call 0x5be622
    t0 = 0x005be622u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005290c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005290c1:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_005290c3:  // mov dword ptr [esi + 0x32e9c], eax
    M32((uint32_t)(esi + 0x32e9cu)) = (uint32_t)(eax);
L_005290c9:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_005290cb:  // jne 0x5290f6
    if (!f.zf) goto L_005290f6;
L_005290cd:  // push 0x64bebc
    t0 = 0x64bebcu; esp -= 4; M32(esp) = t0;
L_005290d2:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005290d7:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005290dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005290dc:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005290df:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005290e1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005290e3:  // push 0x82000001
    t0 = 0x82000001u; esp -= 4; M32(esp) = t0;
L_005290e8:  // call 0x52c4f0
    t0 = 0x0052c4f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005290edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005290ed:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005290ee:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005290ef:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005290f0:  // add esp, 0x38
    t0 = ladd<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_005290f3:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_005290f6:  // push 0x64bea0
    t0 = 0x64bea0u; esp -= 4; M32(esp) = t0;
L_005290fb:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00529100:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00529105u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00529105:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00529108:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052910a:  // call 0x529350
    t0 = 0x00529350u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052910fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052910f:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00529111:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_00529113:  // jge 0x52913a
    if ((f.sf == f.of)) goto L_0052913a;
L_00529115:  // push 0x64be84
    t0 = 0x64be84u; esp -= 4; M32(esp) = t0;
L_0052911a:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052911f:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00529124u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00529124:  // mov eax, dword ptr [esi + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e9cu)));
L_0052912a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052912d:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0052912f:  // je 0x5292b1
    if (f.zf) goto L_005292b1;
L_00529135:  // jmp 0x5292a5
    goto L_005292a5;
L_0052913a:  // cmp dword ptr [esi + 0x32e94], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x32e94u)), ebx, f);
L_00529140:  // jne 0x52923c
    if (!f.zf) goto L_0052923c;
L_00529146:  // mov edi, dword ptr [esp + 0x48]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0052914a:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0052914c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052914d:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_00529151:  // mov dword ptr [esp + 0x28], 0x529070
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x529070u);
L_00529159:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_0052915d:  // mov dword ptr [esp + 0x30], ebx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ebx);
L_00529161:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_00529165:  // call dword ptr [0x5d8258]
    t0 = M32((uint32_t)(0x5d8258u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052916bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052916b:  // push 0x7f00
    t0 = 0x7f00u; esp -= 4; M32(esp) = t0;
L_00529170:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00529171:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_00529175:  // call dword ptr [0x5d82a4]
    t0 = M32((uint32_t)(0x5d82a4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052917bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052917b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052917c:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_00529180:  // call dword ptr [0x5d806c]
    t0 = M32((uint32_t)(0x5d806cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00529186u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00529186:  // push 0x63fd34
    t0 = 0x63fd34u; esp -= 4; M32(esp) = t0;
L_0052918b:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_0052918f:  // mov dword ptr [esp + 0x40], ebx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ebx);
L_00529193:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00529198u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00529198:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0052919b:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0052919f:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_005291a3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005291a4:  // call dword ptr [0x5d82a0]
    t0 = M32((uint32_t)(0x5d82a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005291aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005291aa:  // mov eax, dword ptr [esi + 0x330c0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x330c0u)));
L_005291b0:  // mov ecx, dword ptr [esi + 0x330bc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x330bcu)));
L_005291b6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005291b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005291b8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005291b9:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_005291bd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005291be:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005291bf:  // mov dword ptr [esi + 0x32ff8], 0x90ce0000
    M32((uint32_t)(esi + 0x32ff8u)) = (uint32_t)(0x90ce0000u);
L_005291c9:  // call dword ptr [0x5d8254]
    t0 = M32((uint32_t)(0x5d8254u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005291cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005291cf:  // mov eax, dword ptr [esi + 0x32ff8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32ff8u)));
L_005291d5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005291d7:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_005291db:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005291dc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005291dd:  // call dword ptr [0x5d8250]
    t0 = M32((uint32_t)(0x5d8250u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005291e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005291e3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005291e4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005291e5:  // push 0x8d
    t0 = 0x8du; esp -= 4; M32(esp) = t0;
L_005291ea:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005291eb:  // call dword ptr [0x5d8294]
    t0 = M32((uint32_t)(0x5d8294u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005291f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005291f1:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005291f5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005291f6:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_005291fa:  // mov ecx, dword ptr [esi + 0x32ff8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x32ff8u)));
L_00529200:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00529202:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00529206:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00529207:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00529208:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0052920c:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0052920e:  // mov edx, dword ptr [esi + 0x330ac]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x330acu)));
L_00529214:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529215:  // push 0x80000000
    t0 = 0x80000000u; esp -= 4; M32(esp) = t0;
L_0052921a:  // push 0x80000000
    t0 = 0x80000000u; esp -= 4; M32(esp) = t0;
L_0052921f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00529220:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00529221:  // push 0x63fd34
    t0 = 0x63fd34u; esp -= 4; M32(esp) = t0;
L_00529226:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052922bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052922b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0052922e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052922f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00529230:  // call dword ptr [0x5d8290]
    t0 = M32((uint32_t)(0x5d8290u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00529236u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00529236:  // mov dword ptr [esi + 0x32e94], eax
    M32((uint32_t)(esi + 0x32e94u)) = (uint32_t)(eax);
L_0052923c:  // cmp dword ptr [esi + 0x32e98], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x32e98u)), ebx, f);
L_00529242:  // jne 0x529250
    if (!f.zf) goto L_00529250;
L_00529244:  // mov eax, dword ptr [esi + 0x32e94]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e94u)));
L_0052924a:  // mov dword ptr [esi + 0x32e98], eax
    M32((uint32_t)(esi + 0x32e98u)) = (uint32_t)(eax);
L_00529250:  // mov ecx, dword ptr [esi + 0x32e94]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x32e94u)));
L_00529256:  // push -0x10
    t0 = 0xfffffff0u; esp -= 4; M32(esp) = t0;
L_00529258:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00529259:  // call dword ptr [0x5d828c]
    t0 = M32((uint32_t)(0x5d828cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052925fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052925f:  // mov dword ptr [esi + 0x32ff8], eax
    M32((uint32_t)(esi + 0x32ff8u)) = (uint32_t)(eax);
L_00529265:  // mov eax, dword ptr [esi + 0x32e94]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e94u)));
L_0052926b:  // lea edx, [esi + 0x32ffc]
    edx = (uint32_t)((uint32_t)(esi + 0x32ffcu));
L_00529271:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00529272:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00529273:  // call dword ptr [0x5d8288]
    t0 = M32((uint32_t)(0x5d8288u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00529279u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00529279:  // mov edx, dword ptr [esi + 0x32e94]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x32e94u)));
L_0052927f:  // lea ecx, [esi + 0x3300c]
    ecx = (uint32_t)((uint32_t)(esi + 0x3300cu));
L_00529285:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00529286:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00529287:  // call dword ptr [0x5d8284]
    t0 = M32((uint32_t)(0x5d8284u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052928du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052928d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052928e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00529290:  // call 0x52af00
    t0 = 0x0052af00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00529295u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00529295:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00529297:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_00529299:  // jge 0x5292c4
    if ((f.sf == f.of)) goto L_005292c4;
L_0052929b:  // mov eax, dword ptr [esi + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x32e9cu)));
L_005292a1:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_005292a3:  // je 0x5292b1
    if (f.zf) goto L_005292b1;
L_005292a5:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005292a7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005292a8:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005292abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005292ab:  // mov dword ptr [esi + 0x32e9c], ebx
    M32((uint32_t)(esi + 0x32e9cu)) = (uint32_t)(ebx);
L_005292b1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005292b3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005292b4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005292b6:  // call 0x52c4f0
    t0 = 0x0052c4f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005292bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005292bb:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005292bc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005292bd:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005292be:  // add esp, 0x38
    t0 = ladd<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_005292c1:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_005292c4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005292c6:  // call 0x52cd20
    t0 = 0x0052cd20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005292cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005292cb:  // push 0x64be74
    t0 = 0x64be74u; esp -= 4; M32(esp) = t0;
L_005292d0:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_005292d5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005292d7:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005292dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005292dc:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_005292df:  // mov dword ptr [esi + 0x32e4c], 1
    M32((uint32_t)(esi + 0x32e4cu)) = (uint32_t)(0x1u);
L_005292e9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005292eb:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005292ec:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005292ed:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005292ee:  // add esp, 0x38
    t0 = ladd<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_005292f1:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x005290a0, 005290a0)
