// lifted from 004af110 (FUN_004af110, 853 bytes, 256 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004af110(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004af110;
L_004af110:  // sub esp, 0x28
    t0 = lsub<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_004af113:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004af114:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004af115:  // mov ebx, dword ptr [esp + 0x34]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004af119:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004af11a:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004af11c:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004af11e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004af11f:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004af125:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004af127:  // jle 0x4af244
    if ((f.zf || f.sf != f.of)) goto L_004af244;
L_004af12d:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004af12f:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af135:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af137:  // lea ecx, [edi + eax + 0x20]
    ecx = (uint32_t)((uint32_t)(edi + eax + 0x20u));
L_004af13b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004af13c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af13e:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af143u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af143:  // mov edx, dword ptr [esi + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af149:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af14b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af14d:  // lea eax, [edi + edx + 0x24]
    eax = (uint32_t)((uint32_t)(edi + edx + 0x24u));
L_004af151:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004af152:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af157u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af157:  // mov ecx, dword ptr [esi + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af15d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af15f:  // lea edx, [edi + ecx + 0x28]
    edx = (uint32_t)((uint32_t)(edi + ecx + 0x28u));
L_004af163:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af165:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004af166:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af16bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af16b:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af171:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af173:  // fld dword ptr [edi + eax + 0x28]
    lpush(x, (long double)F32((uint32_t)(edi + eax + 0x28u)));
L_004af177:  // lea eax, [edi + eax + 0x28]
    eax = (uint32_t)((uint32_t)(edi + eax + 0x28u));
L_004af17b:  // fchs 
    ST(0) = -ST(0);
L_004af17d:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004af17f:  // mov ecx, dword ptr [esi + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af185:  // lea edx, [edi + ecx + 0x2c]
    edx = (uint32_t)((uint32_t)(edi + ecx + 0x2cu));
L_004af189:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af18b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004af18c:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af191u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af191:  // lea eax, [esp + 0x3c]
    eax = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004af195:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af197:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004af198:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af19a:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af19fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af19f:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004af1a3:  // cmp eax, -2
    t0 = lsub<32>(eax, 0xfffffffeu, f);
L_004af1a6:  // jl 0x4af1ae
    if ((f.sf != f.of)) goto L_004af1ae;
L_004af1a8:  // cmp eax, dword ptr [esp + 0x48]
    t0 = lsub<32>(eax, M32((uint32_t)(esp + 0x48u)), f);
L_004af1ac:  // jl 0x4af1b6
    if ((f.sf != f.of)) goto L_004af1b6;
L_004af1ae:  // mov dword ptr [esp + 0x3c], 0xffffffff
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0xffffffffu);
L_004af1b6:  // lea eax, [edi + 0x30]
    eax = (uint32_t)((uint32_t)(edi + 0x30u));
L_004af1b9:  // mov ecx, 6
    ecx = (uint32_t)(0x6u);
L_004af1be:  // mov edx, dword ptr [esi + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af1c4:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004af1c7:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004af1c8:  // mov dword ptr [eax + edx - 4], 0xffffffff
    M32((uint32_t)(eax + edx + 0xfffffffcu)) = (uint32_t)(0xffffffffu);
L_004af1d0:  // jne 0x4af1be
    if (!f.zf) goto L_004af1be;
L_004af1d2:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004af1d6:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004af1d9:  // jne 0x4af1eb
    if (!f.zf) goto L_004af1eb;
L_004af1db:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af1e1:  // mov dword ptr [edi + eax + 0x30], 0
    M32((uint32_t)(edi + eax + 0x30u)) = (uint32_t)(0x0u);
L_004af1e9:  // jmp 0x4af1f5
    goto L_004af1f5;
L_004af1eb:  // mov ecx, dword ptr [esi + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af1f1:  // mov dword ptr [edi + ecx + 0x30], eax
    M32((uint32_t)(edi + ecx + 0x30u)) = (uint32_t)(eax);
L_004af1f5:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af1fb:  // mov edx, edi
    edx = (uint32_t)(edi);
L_004af1fd:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_004af205:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004af207:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004af20b:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004af213:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004af217:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004af219:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_004af221:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004af225:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004af228:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004af22c:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004af22d:  // add edi, 0x60
    t0 = ladd<32>(edi, 0x60u, f);
    edi = (uint32_t)(t0);
L_004af230:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004af233:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004af236:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004af23c:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004af23e:  // jl 0x4af12f
    if ((f.sf != f.of)) goto L_004af12f;
L_004af244:  // mov eax, dword ptr [esi + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb8u)));
L_004af24a:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004af24c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004af24e:  // jle 0x4af269
    if ((f.zf || f.sf != f.of)) goto L_004af269;
L_004af250:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004af254:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af256:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004af257:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af259:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af25eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af25e:  // mov eax, dword ptr [esi + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb8u)));
L_004af264:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004af265:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004af267:  // jl 0x4af250
    if ((f.sf != f.of)) goto L_004af250;
L_004af269:  // mov eax, dword ptr [esi + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004af26f:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004af271:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004af273:  // mov dword ptr [esp + 0x48], edi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edi);
L_004af277:  // jle 0x4af3b0
    if ((f.zf || f.sf != f.of)) goto L_004af3b0;
L_004af27d:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004af283:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004af285:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004af287:  // jle 0x4af2b8
    if ((f.zf || f.sf != f.of)) goto L_004af2b8;
L_004af289:  // mov dword ptr [esp + 0x3c], ebp
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebp);
L_004af28d:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004af293:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004af294:  // mov ecx, dword ptr [edi + eax]
    ecx = (uint32_t)(M32((uint32_t)(edi + eax)));
L_004af297:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004af29b:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004af29d:  // call 0x44c1c0
    t0 = 0x0044c1c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af2a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af2a2:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004af2a6:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004af2ac:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004af2ad:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004af2b0:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004af2b2:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_004af2b6:  // jl 0x4af28d
    if ((f.sf != f.of)) goto L_004af28d;
L_004af2b8:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004af2be:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004af2c0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004af2c2:  // jle 0x4af396
    if ((f.zf || f.sf != f.of)) goto L_004af396;
L_004af2c8:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004af2ca:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004af2d0:  // mov eax, dword ptr [edi + eax]
    eax = (uint32_t)(M32((uint32_t)(edi + eax)));
L_004af2d3:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004af2d5:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004af2d7:  // fsub dword ptr [esi + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x60u)));
L_004af2da:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004af2dc:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004af2df:  // fsub dword ptr [esi + 0x64]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x64u)));
L_004af2e2:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004af2e5:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004af2e8:  // fsub dword ptr [esi + 0x68]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x68u)));
L_004af2eb:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004af2ee:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004af2f1:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_004af2f4:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_004af2f7:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004af2fa:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_004af2fd:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004af300:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004af302:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004af308:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004af30c:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_004af30f:  // mov eax, dword ptr [edi + eax]
    eax = (uint32_t)(M32((uint32_t)(edi + eax)));
L_004af312:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004af316:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004af319:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004af31d:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004af321:  // fmul dword ptr [eax + ecx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx)));
L_004af324:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004af328:  // fmul dword ptr [eax + ecx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx + 0x4u)));
L_004af32c:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004af32e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004af330:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004af334:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004af337:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004af339:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004af33d:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004af33f:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004af341:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004af343:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004af346:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004af34a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004af34c:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004af34e:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004af351:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004af353:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004af357:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004af359:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004af35b:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004af35d:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004af360:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004af362:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004af364:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004af367:  // mov dword ptr [eax], ebp
    M32((uint32_t)(eax)) = (uint32_t)(ebp);
L_004af369:  // mov ebp, dword ptr [esp + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004af36d:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_004af370:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004af372:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004af376:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004af37a:  // mov dword ptr [eax + 8], ebp
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebp);
L_004af37d:  // mov ebp, dword ptr [esp + 0x24]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004af381:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004af382:  // mov dword ptr [eax + 0xc], ebp
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebp);
L_004af385:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004af38b:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004af38e:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_004af390:  // jl 0x4af2ca
    if ((f.sf != f.of)) goto L_004af2ca;
L_004af396:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004af39a:  // mov ecx, dword ptr [esi + 0xb4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004af3a0:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004af3a1:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_004af3a4:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004af3a6:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_004af3aa:  // jl 0x4af27d
    if ((f.sf != f.of)) goto L_004af27d;
L_004af3b0:  // mov eax, dword ptr [esi + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb0u)));
L_004af3b6:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004af3b8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004af3ba:  // jle 0x4af452
    if ((f.zf || f.sf != f.of)) goto L_004af452;
L_004af3c0:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004af3c2:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004af3c6:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af3c8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004af3c9:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af3cb:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af3d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af3d0:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004af3d4:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af3d6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004af3d7:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af3d9:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af3deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af3de:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_004af3e2:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af3e4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004af3e5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af3e7:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af3ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af3ec:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004af3f0:  // mov edx, dword ptr [esi + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af3f6:  // add edi, 0xc
    t0 = ladd<32>(edi, 0xcu, f);
    edi = (uint32_t)(t0);
L_004af3f9:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004af3fc:  // shl ecx, 5
    t0 = lshl<32>(ecx, 0x5u, f);
    ecx = (uint32_t)(t0);
L_004af3ff:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_004af401:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004af407:  // mov dword ptr [edi + edx - 0xc], ecx
    M32((uint32_t)(edi + edx + 0xfffffff4u)) = (uint32_t)(ecx);
L_004af40b:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004af40f:  // mov edx, dword ptr [esi + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af415:  // mov ecx, dword ptr [esi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004af41b:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004af41e:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004af421:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004af423:  // mov dword ptr [edi + ecx - 8], eax
    M32((uint32_t)(edi + ecx + 0xfffffff8u)) = (uint32_t)(eax);
L_004af427:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004af42b:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004af42e:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af434:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004af437:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004af439:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004af43f:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004af440:  // mov dword ptr [edi + eax - 4], edx
    M32((uint32_t)(edi + eax + 0xfffffffcu)) = (uint32_t)(edx);
L_004af444:  // mov eax, dword ptr [esi + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb0u)));
L_004af44a:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004af44c:  // jl 0x4af3c2
    if ((f.sf != f.of)) goto L_004af3c2;
L_004af452:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004af454:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004af456:  // call 0x4b1eb0
    t0 = 0x004b1eb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af45bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af45b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004af45c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004af45d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004af45e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004af45f:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_004af462:  // ret 0x14
    c->target = M32(esp); esp += 24u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004af110, 004af110)
