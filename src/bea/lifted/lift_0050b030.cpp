// lifted from 0050b030 (FUN_0050b030, 1256 bytes, 321 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0050b030(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0050b030;
L_0050b030:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0050b032:  // push 0x5d5bb8
    t0 = 0x5d5bb8u; esp -= 4; M32(esp) = t0;
L_0050b037:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0050b03d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b03e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0050b045:  // sub esp, 0x194
    t0 = lsub<32>(esp, 0x194u, f);
    esp = (uint32_t)(t0);
L_0050b04b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050b04c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050b04d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0050b04e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050b04f:  // mov edi, dword ptr [esp + 0x1ec]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1ecu)));
L_0050b056:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_0050b05b:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0050b05d:  // lea eax, [esp + 0xcc]
    eax = (uint32_t)((uint32_t)(esp + 0xccu));
L_0050b064:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0050b066:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0050b068:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b069:  // mov dword ptr [esp + 0x1bc], ebp
    M32((uint32_t)(esp + 0x1bcu)) = (uint32_t)(ebp);
L_0050b070:  // mov dword ptr [edi + 8], ebp
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebp);
L_0050b073:  // mov dword ptr [esp + 0xcc], ebp
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(ebp);
L_0050b07a:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b07fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b07f:  // mov ecx, dword ptr [esp + 0x200]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x200u)));
L_0050b086:  // lea edx, [esp + 0x64]
    edx = (uint32_t)((uint32_t)(esp + 0x64u));
L_0050b08a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050b08b:  // lea eax, [esp + 0x1b8]
    eax = (uint32_t)((uint32_t)(esp + 0x1b8u));
L_0050b092:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050b093:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b094:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0050b099:  // mov dword ptr [esp + 0x148], ebp
    M32((uint32_t)(esp + 0x148u)) = (uint32_t)(ebp);
L_0050b0a0:  // mov dword ptr [esp + 0x170], ebp
    M32((uint32_t)(esp + 0x170u)) = (uint32_t)(ebp);
L_0050b0a7:  // mov dword ptr [esp + 0x190], ebp
    M32((uint32_t)(esp + 0x190u)) = (uint32_t)(ebp);
L_0050b0ae:  // mov dword ptr [esp + 0x194], ebp
    M32((uint32_t)(esp + 0x194u)) = (uint32_t)(ebp);
L_0050b0b5:  // mov dword ptr [esp + 0x198], ebp
    M32((uint32_t)(esp + 0x198u)) = (uint32_t)(ebp);
L_0050b0bc:  // mov dword ptr [esp + 0x28], 0xffffffff
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0xffffffffu);
L_0050b0c4:  // mov dword ptr [esp + 0x20], 0x47c34f80
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x47c34f80u);
L_0050b0cc:  // call 0x490a40
    t0 = 0x00490a40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b0d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b0d1:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0050b0d3:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0050b0d7:  // je 0x50b124
    if (f.zf) goto L_0050b124;
L_0050b0d9:  // fld dword ptr [esp + 0x1c8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1c8u)));
L_0050b0e0:  // fsub dword ptr [esp + 0x64]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x64u)));
L_0050b0e4:  // fld dword ptr [esp + 0x1cc]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1ccu)));
L_0050b0eb:  // fsub dword ptr [esp + 0x68]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x68u)));
L_0050b0ef:  // fld dword ptr [esp + 0x1d0]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1d0u)));
L_0050b0f6:  // fsub dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x6cu)));
L_0050b0fa:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0050b0fc:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0050b0fe:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0050b100:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0050b102:  // mov dword ptr [edi + 8], 1
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(0x1u);
L_0050b109:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050b10b:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0050b10d:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0050b10f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050b111:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0050b113:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_0050b115:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0050b117:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0050b119:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0050b11d:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050b121:  // mov dword ptr [edi + 0xc], ecx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(ecx);
L_0050b124:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050b128:  // mov ecx, dword ptr [esp + 0x1d8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1d8u)));
L_0050b12f:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0050b132:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0050b136:  // mov edx, dword ptr [esp + 0x1ec]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1ecu)));
L_0050b13d:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0050b13f:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0050b142:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0050b144:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0050b146:  // mov ecx, dword ptr [esp + 0x200]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x200u)));
L_0050b14d:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0050b150:  // mov edx, dword ptr [esp + 0x204]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x204u)));
L_0050b157:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0050b15a:  // mov ecx, dword ptr [esp + 0x1e8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1e8u)));
L_0050b161:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0050b164:  // mov edx, dword ptr [esp + 0x1ec]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1ecu)));
L_0050b16b:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0050b16d:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0050b16f:  // mov ecx, dword ptr [esp + 0x1f0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1f0u)));
L_0050b176:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0050b179:  // mov edx, dword ptr [esp + 0x1f4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1f4u)));
L_0050b180:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_0050b183:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0050b188:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0050b18b:  // call 0x492110
    t0 = 0x00492110u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b190u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b190:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0050b192:  // je 0x50b4e9
    if (f.zf) goto L_0050b4e9;
L_0050b198:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050b19a:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b19fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b19f:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0050b1a1:  // mov eax, dword ptr [esp + 0x1e8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1e8u)));
L_0050b1a8:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0050b1aa:  // je 0x50b4bc
    if (f.zf) goto L_0050b4bc;
L_0050b1b0:  // test byte ptr [esi + 0x2c], 0x10
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x10u, f);
L_0050b1b4:  // jne 0x50b4bc
    if (!f.zf) goto L_0050b4bc;
L_0050b1ba:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0050b1bd:  // mov ecx, dword ptr [esp + 0x1fc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1fcu)));
L_0050b1c4:  // test ecx, eax
    t0 = llog<32>(ecx & eax, f);
L_0050b1c6:  // jne 0x50b4bc
    if (!f.zf) goto L_0050b4bc;
L_0050b1cc:  // mov edx, dword ptr [esp + 0x204]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x204u)));
L_0050b1d3:  // test edx, eax
    t0 = llog<32>(edx & eax, f);
L_0050b1d5:  // je 0x50b4bc
    if (f.zf) goto L_0050b4bc;
L_0050b1db:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050b1dd:  // call 0x4f3d10
    t0 = 0x004f3d10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b1e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b1e2:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0050b1e4:  // cmp edi, ebp
    t0 = lsub<32>(edi, ebp, f);
L_0050b1e6:  // je 0x50b4b5
    if (f.zf) goto L_0050b4b5;
L_0050b1ec:  // test byte ptr [edi + 0xc], 0xc0
    t0 = llog<8>(M8((uint32_t)(edi + 0xcu)) & 0xc0u, f);
L_0050b1f0:  // je 0x50b4b5
    if (f.zf) goto L_0050b4b5;
L_0050b1f6:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_0050b1fa:  // je 0x50b21a
    if (f.zf) goto L_0050b21a;
L_0050b1fc:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0050b1ff:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0050b202:  // jne 0x50b21a
    if (!f.zf) goto L_0050b21a;
L_0050b204:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0050b209:  // call 0x4925a0
    t0 = 0x004925a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b20eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b20e:  // mov edi, dword ptr [esp + 0x1ec]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1ecu)));
L_0050b215:  // jmp 0x50b4c6
    goto L_0050b4c6;
L_0050b21a:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0050b21c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0050b21e:  // call dword ptr [eax + 0x1c]
    t0 = M32((uint32_t)(eax + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b221u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b221:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0050b224:  // fadd dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x1cu)));
L_0050b227:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0050b22a:  // lea ecx, [esp + 0xbc]
    ecx = (uint32_t)((uint32_t)(esp + 0xbcu));
L_0050b231:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0050b232:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0050b236:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0050b239:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_0050b23c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0050b23f:  // mov edx, esp
    edx = (uint32_t)(esp);
L_0050b241:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0050b245:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0050b248:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_0050b24b:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0050b24f:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0050b253:  // fchs 
    ST(0) = -ST(0);
L_0050b255:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0050b259:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0050b25d:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0050b261:  // fchs 
    ST(0) = -ST(0);
L_0050b263:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0050b267:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0050b26b:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0050b26f:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0050b271:  // fchs 
    ST(0) = -ST(0);
L_0050b273:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0050b277:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0050b27b:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0050b27e:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0050b282:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0050b285:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0050b287:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0050b28a:  // lea edx, [esp + 0x1c8]
    edx = (uint32_t)((uint32_t)(esp + 0x1c8u));
L_0050b291:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050b292:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0050b294:  // call dword ptr [eax + 0x1c]
    t0 = M32((uint32_t)(eax + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b297u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b297:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050b299:  // call 0x4780f0
    t0 = 0x004780f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b29eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b29e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050b2a0:  // je 0x50b4b5
    if (f.zf) goto L_0050b4b5;
L_0050b2a6:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0050b2aa:  // fsub dword ptr [esp + 0x1c8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1c8u)));
L_0050b2b1:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0050b2b5:  // fsub dword ptr [esp + 0x1cc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1ccu)));
L_0050b2bc:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0050b2c0:  // fsub dword ptr [esp + 0x1d0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1d0u)));
L_0050b2c7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0050b2c9:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0050b2cb:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0050b2cd:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0050b2cf:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0050b2d1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0050b2d3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050b2d5:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0050b2d7:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0050b2d9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050b2db:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0050b2dd:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_0050b2df:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0050b2e1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0050b2e3:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0050b2e7:  // call dword ptr [edx + 0x44]
    t0 = M32((uint32_t)(edx + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b2eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b2ea:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0050b2ee:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_0050b2f2:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0050b2f4:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0050b2f8:  // je 0x50b30d
    if (f.zf) goto L_0050b30d;
L_0050b2fa:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0050b2fe:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_0050b302:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050b304:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0050b307:  // je 0x50b4b5
    if (f.zf) goto L_0050b4b5;
L_0050b30d:  // cmp ebx, ebp
    t0 = lsub<32>(ebx, ebp, f);
L_0050b30f:  // je 0x50b324
    if (f.zf) goto L_0050b324;
L_0050b311:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0050b315:  // fcomp dword ptr [esp + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x18u)));
    lpop(x);
L_0050b319:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050b31b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0050b31e:  // je 0x50b4b5
    if (f.zf) goto L_0050b4b5;
L_0050b324:  // mov eax, dword ptr [esp + 0x1f8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1f8u)));
L_0050b32b:  // mov dword ptr [esp + 0x124], 0xffffffff
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(0xffffffffu);
L_0050b336:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0050b339:  // je 0x50b357
    if (f.zf) goto L_0050b357;
L_0050b33b:  // mov eax, dword ptr [edi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_0050b33e:  // and eax, 0xc
    t0 = llog<32>(eax & 0xcu, f);
    eax = (uint32_t)(t0);
L_0050b341:  // cmp al, 8
    t0 = lsub<8>((eax & 0xffu), 0x8u, f);
L_0050b343:  // jne 0x50b497
    if (!f.zf) goto L_0050b497;
L_0050b349:  // cmp dword ptr [esp + 0x1f4], 1
    t0 = lsub<32>(M32((uint32_t)(esp + 0x1f4u)), 0x1u, f);
L_0050b351:  // jne 0x50b497
    if (!f.zf) goto L_0050b497;
L_0050b357:  // mov ecx, dword ptr [edi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_0050b35a:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_0050b35c:  // je 0x50b497
    if (f.zf) goto L_0050b497;
L_0050b362:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_0050b365:  // fadd dword ptr [ecx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x4u)));
L_0050b368:  // mov dword ptr [esp + 0x58], 0
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x0u);
L_0050b370:  // mov dword ptr [esp + 0x54], 0
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x0u);
L_0050b378:  // mov dword ptr [esp + 0x5c], 0
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(0x0u);
L_0050b380:  // mov dword ptr [esp + 0x94], ebp
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(ebp);
L_0050b387:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0050b38b:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_0050b38e:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_0050b391:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0050b395:  // mov dword ptr [esp + 0xb8], ebp
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(ebp);
L_0050b39c:  // mov dword ptr [esp + 0x84], edx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(edx);
L_0050b3a3:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0050b3a7:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0050b3ab:  // fld dword ptr [ecx + 0xc]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xcu)));
L_0050b3ae:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_0050b3b1:  // mov dword ptr [esp + 0x88], eax
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(eax);
L_0050b3b8:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0050b3bc:  // mov dword ptr [esp + 0x90], eax
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(eax);
L_0050b3c3:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0050b3c7:  // mov dword ptr [esp + 0xac], eax
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(eax);
L_0050b3ce:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0050b3d2:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0050b3d6:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0050b3da:  // mov dword ptr [esp + 0xb4], eax
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(eax);
L_0050b3e1:  // lea eax, [esp + 0xbc]
    eax = (uint32_t)((uint32_t)(esp + 0xbcu));
L_0050b3e8:  // mov dword ptr [esp + 0x8c], edx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edx);
L_0050b3ef:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0050b3f3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b3f4:  // lea eax, [esp + 0x1b8]
    eax = (uint32_t)((uint32_t)(esp + 0x1b8u));
L_0050b3fb:  // mov dword ptr [esp + 0xac], edx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(edx);
L_0050b402:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0050b406:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b407:  // lea eax, [esp + 0xa0]
    eax = (uint32_t)((uint32_t)(esp + 0xa0u));
L_0050b40e:  // mov dword ptr [esp + 0xb8], edx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(edx);
L_0050b415:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0050b417:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b418:  // lea eax, [esp + 0x80]
    eax = (uint32_t)((uint32_t)(esp + 0x80u));
L_0050b41f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050b420:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b423u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b423:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050b425:  // je 0x50b4b5
    if (f.zf) goto L_0050b4b5;
L_0050b42b:  // fld dword ptr [esp + 0x140]
    lpush(x, (long double)F32((uint32_t)(esp + 0x140u)));
L_0050b432:  // fsub dword ptr [esp + 0x1c8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1c8u)));
L_0050b439:  // fld dword ptr [esp + 0x144]
    lpush(x, (long double)F32((uint32_t)(esp + 0x144u)));
L_0050b440:  // fsub dword ptr [esp + 0x1cc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1ccu)));
L_0050b447:  // fld dword ptr [esp + 0x148]
    lpush(x, (long double)F32((uint32_t)(esp + 0x148u)));
L_0050b44e:  // fsub dword ptr [esp + 0x1d0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1d0u)));
L_0050b455:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0050b457:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0050b459:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0050b45b:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0050b45d:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0050b461:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050b463:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0050b465:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0050b467:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0050b469:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0050b46b:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0050b46d:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_0050b46f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0050b471:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0050b473:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0050b477:  // je 0x50b488
    if (f.zf) goto L_0050b488;
L_0050b479:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0050b47d:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_0050b481:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050b483:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0050b486:  // jne 0x50b4b5
    if (!f.zf) goto L_0050b4b5;
L_0050b488:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0050b48c:  // fcomp dword ptr [esp + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x18u)));
    lpop(x);
L_0050b490:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0050b492:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0050b495:  // je 0x50b4b5
    if (f.zf) goto L_0050b4b5;
L_0050b497:  // cmp dword ptr [esp + 0x1f0], ebp
    t0 = lsub<32>(M32((uint32_t)(esp + 0x1f0u)), ebp, f);
L_0050b49e:  // jne 0x50b507
    if (!f.zf) goto L_0050b507;
L_0050b4a0:  // mov ecx, dword ptr [esp + 0x124]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x124u)));
L_0050b4a7:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0050b4ab:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0050b4af:  // mov ebx, esi
    ebx = (uint32_t)(esi);
L_0050b4b1:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0050b4b5:  // mov edi, dword ptr [esp + 0x1ec]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1ecu)));
L_0050b4bc:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0050b4c1:  // call 0x4925a0
    t0 = 0x004925a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050b4c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050b4c6:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0050b4c8:  // jne 0x50b198
    if (!f.zf) goto L_0050b198;
L_0050b4ce:  // cmp ebx, ebp
    t0 = lsub<32>(ebx, ebp, f);
L_0050b4d0:  // je 0x50b4e9
    if (f.zf) goto L_0050b4e9;
L_0050b4d2:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0050b4d6:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0050b4da:  // mov dword ptr [edi], ebx
    M32((uint32_t)(edi)) = (uint32_t)(ebx);
L_0050b4dc:  // mov dword ptr [edi + 4], edx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(edx);
L_0050b4df:  // mov dword ptr [edi + 8], 3
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(0x3u);
L_0050b4e6:  // mov dword ptr [edi + 0xc], eax
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(eax);
L_0050b4e9:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0050b4ec:  // mov ecx, dword ptr [esp + 0x1a4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1a4u)));
L_0050b4f3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050b4f4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050b4f5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0050b4f6:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0050b4fd:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0050b4fe:  // add esp, 0x1a0
    t0 = ladd<32>(esp, 0x1a0u, f);
    esp = (uint32_t)(t0);
L_0050b504:  // ret 0x54
    c->target = M32(esp); esp += 88u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0050b507:  // mov ecx, dword ptr [esp + 0x1ec]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1ecu)));
L_0050b50e:  // mov eax, 3
    eax = (uint32_t)(0x3u);
L_0050b513:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_0050b516:  // jmp 0x50b4ec
    goto L_0050b4ec;
}

LIFT_FUNCTION(0x0050b030, 0050b030)
