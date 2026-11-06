// lifted from 00446150 (FUN_00446150, 688 bytes, 212 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00446150(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00446150;
L_00446150:  // sub esp, 0x3c
    t0 = lsub<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00446153:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00446154:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00446156:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0044615c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044615d:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446162u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446162:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00446167:  // jns 0x446170
    if (!f.sf) goto L_00446170;
L_00446169:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044616a:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0044616f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00446170:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_00446174:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00446177:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_0044617b:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0044617d:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0044617f:  // fmul dword ptr [0x5d85f0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f0u)));
L_00446185:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_0044618b:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0044618f:  // je 0x44619c
    if (f.zf) goto L_0044619c;
L_00446191:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00446193:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00446195:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446198u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446198:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0044619c:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0044619f:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004461a1:  // je 0x4463c5
    if (f.zf) goto L_004463c5;
L_004461a7:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004461a9:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_004461ad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004461ae:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004461b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004461b4:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004461b7:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004461ba:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004461be:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_004461c1:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004461c4:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004461c6:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004461ca:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004461ce:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004461d1:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004461d5:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004461d9:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004461dc:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004461e0:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004461e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004461e3:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004461e6:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004461ea:  // test dword ptr [eax + 0x34], 0x80000
    t0 = llog<32>(M32((uint32_t)(eax + 0x34u)) & 0x80000u, f);
L_004461f1:  // je 0x446208
    if (f.zf) goto L_00446208;
L_004461f3:  // mov eax, dword ptr [eax + 0x26c]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x26cu)));
L_004461f9:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004461fb:  // je 0x446208
    if (f.zf) goto L_00446208;
L_004461fd:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004461ff:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00446201:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446204u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446204:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00446208:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0044620c:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00446210:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00446212:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00446214:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00446216:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00446218:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0044621b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0044621d:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_00446221:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00446225:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00446227:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00446229:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0044622b:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0044622d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0044622f:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00446233:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446236u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446236:  // fsubr dword ptr [esp + 0x10]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x10u))) - (ST(0));
L_0044623a:  // cmp dword ptr [esi + 0x68], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x68u)), edi, f);
L_0044623d:  // fsub dword ptr [esp + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x8u)));
L_00446241:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00446245:  // je 0x446338
    if (f.zf) goto L_00446338;
L_0044624b:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0044624f:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00446253:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00446256:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00446258:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0044625a:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0044625e:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_00446261:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00446265:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00446268:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0044626b:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0044626e:  // call 0x4fcec0
    t0 = 0x004fcec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446273u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446273:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00446277:  // fcomp dword ptr [esi + 0x70]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x70u)));
    lpop(x);
L_0044627a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044627c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0044627f:  // je 0x4463f6
    if (f.zf) goto L_004463f6;
L_00446285:  // mov dword ptr [esi + 0x68], edi
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(edi);
L_00446288:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0044628e:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446293u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446293:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00446298:  // jns 0x4462a1
    if (!f.sf) goto L_004462a1;
L_0044629a:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044629b:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004462a0:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004462a1:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004462a5:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004462a8:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004462ac:  // fmul dword ptr [0x5db1ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db1ecu)));
L_004462b2:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_004462b8:  // fstp dword ptr [esi + 0x70]
    F32((uint32_t)(esi + 0x70u)) = lf32(ST(0));
    lpop(x);
L_004462bb:  // call 0x4455c0
    t0 = 0x004455c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004462c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004462c0:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004462c3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004462c4:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004462c7:  // fld dword ptr [ecx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x40u)));
L_004462ca:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_004462d0:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004462d2:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004462d4:  // fld dword ptr [ecx + 0x50]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x50u)));
L_004462d7:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_004462dd:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004462e1:  // fld dword ptr [ecx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x60u)));
L_004462e4:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_004462ea:  // fchs 
    ST(0) = -ST(0);
L_004462ec:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004462f0:  // fadd dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_004462f3:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004462f7:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004462fb:  // fadd dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x20u)));
L_004462fe:  // mov esi, dword ptr [esp + 0x38]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00446302:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_00446304:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00446308:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0044630c:  // fadd dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x24u)));
L_0044630f:  // mov esi, dword ptr [esp + 0x3c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00446313:  // mov dword ptr [eax + 4], esi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(esi);
L_00446316:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0044631a:  // mov esi, dword ptr [esp + 0x40]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0044631e:  // mov dword ptr [eax + 8], esi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(esi);
L_00446321:  // mov esi, dword ptr [esp + 0x44]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00446325:  // mov dword ptr [eax + 0xc], esi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(esi);
L_00446328:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044632eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044632e:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00446332:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00446333:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00446334:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00446337:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00446338:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0044633b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044633c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0044633f:  // fld dword ptr [ecx + 0x40]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x40u)));
L_00446342:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_00446348:  // mov eax, esp
    eax = (uint32_t)(esp);
L_0044634a:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0044634c:  // fld dword ptr [ecx + 0x50]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x50u)));
L_0044634f:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_00446355:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00446359:  // fld dword ptr [ecx + 0x60]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x60u)));
L_0044635c:  // fmul dword ptr [0x5d85d0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85d0u)));
L_00446362:  // fchs 
    ST(0) = -ST(0);
L_00446364:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00446368:  // fadd dword ptr [ecx + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x1cu)));
L_0044636b:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0044636f:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00446373:  // fadd dword ptr [ecx + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x20u)));
L_00446376:  // mov edi, dword ptr [esp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0044637a:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_0044637c:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00446380:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00446384:  // fadd dword ptr [ecx + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x24u)));
L_00446387:  // mov edi, dword ptr [esp + 0x3c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0044638b:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_0044638e:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00446392:  // mov edi, dword ptr [esp + 0x40]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00446396:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_00446399:  // mov edi, dword ptr [esp + 0x44]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0044639d:  // mov dword ptr [eax + 0xc], edi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edi);
L_004463a0:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004463a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004463a6:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004463aa:  // fcomp dword ptr [esi + 0x70]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x70u)));
    lpop(x);
L_004463ad:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004463af:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004463b2:  // jne 0x4463f6
    if (!f.zf) goto L_004463f6;
L_004463b4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004463b6:  // call 0x446400
    t0 = 0x00446400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004463bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004463bb:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004463bf:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004463c0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004463c1:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004463c4:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004463c5:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004463c7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004463c9:  // mov dword ptr [esi + 0x68], edi
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(edi);
L_004463cc:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004463cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004463cf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004463d1:  // je 0x4463df
    if (f.zf) goto L_004463df;
L_004463d3:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004463d9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004463da:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004463db:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004463de:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004463df:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004463e2:  // call 0x4fda10
    t0 = 0x004fda10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004463e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004463e7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004463e9:  // jne 0x4463f6
    if (!f.zf) goto L_004463f6;
L_004463eb:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004463ee:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004463f0:  // call dword ptr [eax + 0x100]
    t0 = M32((uint32_t)(eax + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004463f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004463f6:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004463fa:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004463fb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004463fc:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004463ff:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00446150, 00446150)
