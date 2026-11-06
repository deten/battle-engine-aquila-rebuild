// lifted from 00445f40 (FUN_00445f40, 514 bytes, 156 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00445f40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00445f40;
L_00445f40:  // sub esp, 0x28
    t0 = lsub<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_00445f43:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00445f44:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00445f46:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00445f4c:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445f51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445f51:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00445f56:  // jns 0x445f5f
    if (!f.sf) goto L_00445f5f;
L_00445f58:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00445f59:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00445f5e:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00445f5f:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_00445f63:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00445f66:  // fild dword ptr [esp + 8]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x8u)));
L_00445f6a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00445f6c:  // fmul dword ptr [0x5d85f0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f0u)));
L_00445f72:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_00445f78:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00445f7c:  // je 0x445f89
    if (f.zf) goto L_00445f89;
L_00445f7e:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00445f80:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00445f82:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00445f85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00445f85:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00445f89:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00445f8c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00445f8e:  // je 0x446118
    if (f.zf) goto L_00446118;
L_00445f94:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00445f97:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_00445f9a:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_00445f9d:  // add eax, 0x114
    t0 = ladd<32>(eax, 0x114u, f);
    eax = (uint32_t)(t0);
L_00445fa2:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00445fa6:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_00445fa9:  // fsub dword ptr [eax - 0xf4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0xffffff0cu)));
L_00445faf:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00445fb1:  // mov dword ptr [esp + 0xc], edx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(edx);
L_00445fb5:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00445fb9:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00445fbd:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00445fbf:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00445fc1:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00445fc5:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00445fc9:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00445fcc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00445fce:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_00445fd2:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00445fd5:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00445fd9:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00445fdb:  // fcom dword ptr [0x5d8ba4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba4u)));
L_00445fe1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00445fe3:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00445fe6:  // jne 0x445ff6
    if (!f.zf) goto L_00445ff6;
L_00445fe8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00445fea:  // mov dword ptr [esi + 0x6c], 1
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(0x1u);
L_00445ff1:  // jmp 0x44608f
    goto L_0044608f;
L_00445ff6:  // fcomp dword ptr [0x5d85d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d8u)));
    lpop(x);
L_00445ffc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00445ffe:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00446001:  // jne 0x44608f
    if (!f.zf) goto L_0044608f;
L_00446007:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0044600b:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0044600f:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00446013:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_00446015:  // fchs 
    ST(0) = -ST(0);
L_00446017:  // fst dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
L_0044601b:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00446021:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00446023:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00446026:  // je 0x446047
    if (f.zf) goto L_00446047;
L_00446028:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0044602c:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00446032:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00446034:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00446037:  // jne 0x446047
    if (!f.zf) goto L_00446047;
L_00446039:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0044603b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0044603f:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00446045:  // jmp 0x446075
    goto L_00446075;
L_00446047:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_0044604b:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00446051:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00446053:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00446056:  // jne 0x446075
    if (!f.zf) goto L_00446075;
L_00446058:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0044605c:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_00446062:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00446064:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00446067:  // je 0x446075
    if (f.zf) goto L_00446075;
L_00446069:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0044606b:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_0044606f:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_00446075:  // fsubr dword ptr [esp + 4]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x4u))) - (ST(0));
L_00446079:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0044607b:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_00446081:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00446083:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00446086:  // jne 0x44608f
    if (!f.zf) goto L_0044608f;
L_00446088:  // mov dword ptr [esi + 0x6c], 0
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(0x0u);
L_0044608f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00446091:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_00446095:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00446096:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044609cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044609c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004460a0:  // fsub dword ptr [0x5db1e4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db1e4u)));
L_004460a6:  // mov eax, dword ptr [esi + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x6cu)));
L_004460a9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004460ab:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004460af:  // je 0x4460e7
    if (f.zf) goto L_004460e7;
L_004460b1:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004460b4:  // mov esi, dword ptr [esp + 0xc]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004460b8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004460ba:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004460bd:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004460bf:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004460c1:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_004460c3:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004460c7:  // mov dword ptr [eax + 4], esi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(esi);
L_004460ca:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004460ce:  // mov dword ptr [eax + 8], esi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(esi);
L_004460d1:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004460d5:  // mov dword ptr [eax + 0xc], esi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(esi);
L_004460d8:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004460deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004460de:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004460e2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004460e3:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_004460e6:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004460e7:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004460eb:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004460ef:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004460f2:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004460f4:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004460f6:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004460fa:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004460fd:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00446101:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00446104:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00446107:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0044610a:  // call 0x4fce40
    t0 = 0x004fce40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044610fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044610f:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_00446113:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00446114:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_00446117:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00446118:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0044611a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0044611c:  // call dword ptr [edx + 0x14]
    t0 = M32((uint32_t)(edx + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044611fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044611f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00446121:  // je 0x44612e
    if (f.zf) goto L_0044612e;
L_00446123:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00446129:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044612a:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0044612d:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0044612e:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00446131:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00446133:  // call dword ptr [eax + 0x100]
    t0 = M32((uint32_t)(eax + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00446139u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00446139:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_0044613d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044613e:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_00446141:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00445f40, 00445f40)
