// lifted from 004db150 (FUN_004db150, 1185 bytes, 298 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004db150(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004db150;
L_004db150:  // sub esp, 0x458
    t0 = lsub<32>(esp, 0x458u, f);
    esp = (uint32_t)(t0);
L_004db156:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004db157:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004db158:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004db15a:  // call 0x4daba0
    t0 = 0x004daba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db15fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db15f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004db161:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004db165:  // jne 0x4db205
    if (!f.zf) goto L_004db205;
L_004db16b:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004db171:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db176u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db176:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004db17b:  // jns 0x4db184
    if (!f.sf) goto L_004db184;
L_004db17d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004db17e:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004db183:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004db184:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_004db188:  // mov eax, dword ptr [ebx + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xf0u)));
L_004db18e:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_004db192:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004db198:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_004db19e:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_004db1a4:  // fmul dword ptr [eax + 0x90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x90u)));
L_004db1aa:  // fadd dword ptr [ebx + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x1cu)));
L_004db1ad:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004db1b1:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db1b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db1b6:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004db1bb:  // jns 0x4db1c4
    if (!f.sf) goto L_004db1c4;
L_004db1bd:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004db1be:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004db1c3:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004db1c4:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_004db1c8:  // mov ecx, dword ptr [ebx + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xf0u)));
L_004db1ce:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_004db1d2:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004db1d6:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_004db1dc:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_004db1e2:  // fmul dword ptr [ecx + 0x90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x90u)));
L_004db1e8:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004db1ed:  // fadd dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x20u)));
L_004db1f0:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004db1f4:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db1f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db1f9:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_004db1ff:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004db203:  // jmp 0x4db214
    goto L_004db214;
L_004db205:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004db207:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004db20b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db20c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004db20e:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db214u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db214:  // mov edx, dword ptr [ebx + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xf0u)));
L_004db21a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004db21b:  // call 0x50f7a0
    t0 = 0x0050f7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db220u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db220:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004db222:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004db225:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004db227:  // je 0x4db5e8
    if (f.zf) goto L_004db5e8;
L_004db22d:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_004db234:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db239u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db239:  // mov dword ptr [esp + 0xc], 0xbf800000
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0xbf800000u);
L_004db241:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004db245:  // mov dword ptr [esp + 0x10], 0xbf800000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0xbf800000u);
L_004db24d:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004db251:  // mov dword ptr [esp + 0x440], eax
    M32((uint32_t)(esp + 0x440u)) = (uint32_t)(eax);
L_004db258:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004db25c:  // mov dword ptr [esp + 0x444], ecx
    M32((uint32_t)(esp + 0x444u)) = (uint32_t)(ecx);
L_004db263:  // mov ecx, dword ptr [ebx + 0x118]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x118u)));
L_004db269:  // mov dword ptr [esp + 0x14], 0xbf800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xbf800000u);
L_004db271:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004db275:  // mov dword ptr [esp + 0x44c], eax
    M32((uint32_t)(esp + 0x44cu)) = (uint32_t)(eax);
L_004db27c:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004db282:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004db283:  // mov dword ptr [esp + 0x84], 0x5de9b4
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x5de9b4u);
L_004db28e:  // mov dword ptr [esp + 0x448], edx
    M32((uint32_t)(esp + 0x448u)) = (uint32_t)(edx);
L_004db295:  // mov dword ptr [esp + 0x454], 0
    M32((uint32_t)(esp + 0x454u)) = (uint32_t)(0x0u);
L_004db2a0:  // mov dword ptr [esp + 0x458], 0
    M32((uint32_t)(esp + 0x458u)) = (uint32_t)(0x0u);
L_004db2ab:  // mov dword ptr [esp + 0x45c], 0
    M32((uint32_t)(esp + 0x45cu)) = (uint32_t)(0x0u);
L_004db2b6:  // mov dword ptr [esp + 0x450], ecx
    M32((uint32_t)(esp + 0x450u)) = (uint32_t)(ecx);
L_004db2bd:  // mov ecx, dword ptr [eax + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x50u)));
L_004db2c0:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004db2c2:  // je 0x4db2f3
    if (f.zf) goto L_004db2f3;
L_004db2c4:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004db2c8:  // fsub dword ptr [ebx + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x1cu)));
L_004db2cb:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004db2cf:  // fsub dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x20u)));
L_004db2d2:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004db2d6:  // fsub dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x24u)));
L_004db2d9:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004db2db:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004db2dd:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004db2df:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004db2e1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004db2e3:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004db2e5:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004db2e7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004db2e9:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004db2eb:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004db2ed:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004db2ef:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004db2f1:  // jmp 0x4db2fc
    goto L_004db2fc;
L_004db2f3:  // fld dword ptr [eax + 0x2c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x2cu)));
L_004db2f6:  // fmul dword ptr [0x5d8584]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8584u)));
L_004db2fc:  // lea edx, [ebx + 0x1c]
    edx = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004db2ff:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004db301:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004db305:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004db307:  // mov dword ptr [esp + 0x88], ecx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(ecx);
L_004db30e:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004db311:  // mov dword ptr [esp + 0x8c], ecx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(ecx);
L_004db318:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004db31b:  // mov dword ptr [esp + 0x90], ecx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(ecx);
L_004db322:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004db327:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004db32a:  // mov dword ptr [esp + 0x94], eax
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(eax);
L_004db331:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db336u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db336:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_004db33c:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_004db343:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004db345:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004db347:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004db34a:  // jne 0x4db355
    if (!f.zf) goto L_004db355;
L_004db34c:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_004db353:  // jmp 0x4db357
    goto L_004db357;
L_004db355:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004db357:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004db35b:  // fsub dword ptr [esp + 0x88]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x88u)));
L_004db362:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004db366:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004db36a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004db36e:  // mov dword ptr [esp + 0x448], eax
    M32((uint32_t)(esp + 0x448u)) = (uint32_t)(eax);
L_004db375:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004db379:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004db37d:  // fsub dword ptr [esp + 0x8c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x8cu)));
L_004db384:  // mov dword ptr [esp + 0x440], ecx
    M32((uint32_t)(esp + 0x440u)) = (uint32_t)(ecx);
L_004db38b:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004db38f:  // mov dword ptr [esp + 0x444], edx
    M32((uint32_t)(esp + 0x444u)) = (uint32_t)(edx);
L_004db396:  // mov dword ptr [esp + 0x44c], ecx
    M32((uint32_t)(esp + 0x44cu)) = (uint32_t)(ecx);
L_004db39d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004db3a1:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004db3a5:  // fsub dword ptr [esp + 0x90]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x90u)));
L_004db3ac:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_004db3b0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004db3b4:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004db3b6:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004db3b8:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004db3ba:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004db3bc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004db3be:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004db3c2:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004db3c6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004db3c8:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004db3ca:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004db3cc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004db3ce:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_004db3d2:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004db3d8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004db3da:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004db3dd:  // jne 0x4db3f2
    if (!f.zf) goto L_004db3f2;
L_004db3df:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004db3e3:  // fdiv dword ptr [esp + 8]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x8u)));
L_004db3e7:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db3ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db3ec:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004db3f0:  // jmp 0x4db3fa
    goto L_004db3fa;
L_004db3f2:  // mov dword ptr [esp + 8], 0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x0u);
L_004db3fa:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004db3fe:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004db402:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004db404:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004db408:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004db409:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004db40a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004db40c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004db40d:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_004db411:  // fchs 
    ST(0) = -ST(0);
L_004db413:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004db417:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004db41b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004db41c:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db421u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db421:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004db426:  // lea esi, [esp + 0x5c]
    esi = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004db42a:  // lea edi, [esp + 0xa0]
    edi = (uint32_t)((uint32_t)(esp + 0xa0u));
L_004db431:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004db433:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004db43a:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_004db43e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db43f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004db442:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004db446:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_004db44a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db44b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004db44e:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004db452:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_004db456:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db457:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004db45b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004db45e:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db463u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db463:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004db467:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004db46b:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004db46f:  // mov dword ptr [esp + 0xdc], ecx
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(ecx);
L_004db476:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004db47a:  // mov dword ptr [esp + 0xe4], eax
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(eax);
L_004db481:  // mov eax, dword ptr [ebx + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xf0u)));
L_004db487:  // mov dword ptr [esp + 0xe0], edx
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(edx);
L_004db48e:  // mov dword ptr [esp + 0xe8], ecx
    M32((uint32_t)(esp + 0xe8u)) = (uint32_t)(ecx);
L_004db495:  // mov ecx, dword ptr [ebx + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xecu)));
L_004db49b:  // mov dword ptr [esp + 0xec], 1
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(0x1u);
L_004db4a6:  // mov dword ptr [esp + 0x45c], eax
    M32((uint32_t)(esp + 0x45cu)) = (uint32_t)(eax);
L_004db4ad:  // mov edx, dword ptr [eax + 0x24]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x24u)));
L_004db4b0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db4b1:  // mov dword ptr [esp + 0x468], edx
    M32((uint32_t)(esp + 0x468u)) = (uint32_t)(edx);
L_004db4b8:  // mov eax, dword ptr [eax + 0x94]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x94u)));
L_004db4be:  // lea ecx, [ebp + 0xec]
    ecx = (uint32_t)((uint32_t)(ebp + 0xecu));
L_004db4c4:  // mov dword ptr [esp + 0x464], eax
    M32((uint32_t)(esp + 0x464u)) = (uint32_t)(eax);
L_004db4cb:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db4d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db4d0:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004db4d4:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004db4d6:  // je 0x4db519
    if (f.zf) goto L_004db519;
L_004db4d8:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004db4de:  // mov ecx, dword ptr [eax + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x48u)));
L_004db4e1:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004db4e3:  // jne 0x4db4f5
    if (!f.zf) goto L_004db4f5;
L_004db4e5:  // fld dword ptr [eax + 0x1c]
    lpush(x, (long double)F32((uint32_t)(eax + 0x1cu)));
L_004db4e8:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004db4ee:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004db4f0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004db4f3:  // je 0x4db519
    if (f.zf) goto L_004db519;
L_004db4f5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004db4f7:  // call 0x4dab50
    t0 = 0x004dab50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db4fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db4fc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004db4fd:  // lea ecx, [ebp + 0xe8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xe8u));
L_004db503:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db508u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db508:  // test byte ptr [esi + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(esi + 0x34u)) & 0x8u, f);
L_004db50c:  // je 0x4db519
    if (f.zf) goto L_004db519;
L_004db50e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004db50f:  // mov ecx, 0x8551a0
    ecx = (uint32_t)(0x8551a0u);
L_004db514:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db519u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db519:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004db51d:  // fsub dword ptr [esp + 0x98]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x98u)));
L_004db524:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db525:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004db528:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004db52c:  // fsub dword ptr [esp + 0x98]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x98u)));
L_004db533:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db534:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004db537:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004db53b:  // fsub dword ptr [esp + 0x98]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x98u)));
L_004db542:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db543:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004db547:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004db54a:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db54fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db54f:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004db553:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004db557:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004db55b:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_004db55f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004db560:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004db561:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004db563:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004db567:  // fmul dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004db56b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004db56d:  // fld dword ptr [esp + 0x45c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x45cu)));
L_004db574:  // fmul dword ptr [esp + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x48u)));
L_004db578:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004db57a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004db57c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004db57f:  // jne 0x4db5d6
    if (!f.zf) goto L_004db5d6;
L_004db581:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004db583:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004db589:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004db58d:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db592u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db592:  // mov edx, dword ptr [ebp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004db598:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004db59d:  // fld dword ptr [edx + 0x7c]
    lpush(x, (long double)F32((uint32_t)(edx + 0x7cu)));
L_004db5a0:  // fmul dword ptr [esp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x8u)));
L_004db5a4:  // jns 0x4db5ad
    if (!f.sf) goto L_004db5ad;
L_004db5a6:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004db5a7:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004db5ac:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004db5ad:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004db5b1:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_004db5b5:  // fmul dword ptr [0x5de9ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5de9acu)));
L_004db5bb:  // fmul dword ptr [0x5d85fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85fcu)));
L_004db5c1:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004db5c3:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004db5c5:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004db5c7:  // fadd dword ptr [esp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x8u)));
L_004db5cb:  // fdiv dword ptr [esp + 0x48]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x48u)));
L_004db5cf:  // fstp dword ptr [esp + 0x45c]
    F32((uint32_t)(esp + 0x45cu)) = lf32(ST(0));
    lpop(x);
L_004db5d6:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004db5d9:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_004db5e0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004db5e1:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004db5e3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004db5e5:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004db5e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004db5e8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004db5e9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004db5ea:  // add esp, 0x458
    t0 = ladd<32>(esp, 0x458u, f);
    esp = (uint32_t)(t0);
L_004db5f0:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004db150, 004db150)
