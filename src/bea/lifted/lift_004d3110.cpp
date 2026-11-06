// lifted from 004d3110 (vslot3, 804 bytes, 238 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d3110(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d3110;
L_004d3110:  // mov eax, dword ptr [0x8a9ac0]
    eax = (uint32_t)(M32((uint32_t)(0x8a9ac0u)));
L_004d3115:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d3116:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_004d3119:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d311a:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004d311c:  // jg 0x4d342f
    if ((!f.zf && f.sf == f.of)) goto L_004d342f;
L_004d3122:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004d3125:  // jle 0x4d342f
    if ((f.zf || f.sf != f.of)) goto L_004d342f;
L_004d312b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004d3130:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3135u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3135:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d3139:  // fstp dword ptr [esi + 0x4c]
    F32((uint32_t)(esi + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004d313c:  // cmp edi, 0x38
    t0 = lsub<32>(edi, 0x38u, f);
L_004d313f:  // jne 0x4d3157
    if (!f.zf) goto L_004d3157;
L_004d3141:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004d3145:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d314a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d314b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d314d:  // call 0x46fb00
    t0 = 0x0046fb00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3152u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3152:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d3153:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d3154:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d3157:  // cmp edi, 0x39
    t0 = lsub<32>(edi, 0x39u, f);
L_004d315a:  // je 0x4d342f
    if (f.zf) goto L_004d342f;
L_004d3160:  // cmp edi, 0x3a
    t0 = lsub<32>(edi, 0x3au, f);
L_004d3163:  // jne 0x4d3199
    if (!f.zf) goto L_004d3199;
L_004d3165:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_004d3168:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d316a:  // jne 0x4d3199
    if (!f.zf) goto L_004d3199;
L_004d316c:  // cmp dword ptr [0x8a9ac0], 2
    t0 = lsub<32>(M32((uint32_t)(0x8a9ac0u)), 0x2u, f);
L_004d3173:  // jne 0x4d3199
    if (!f.zf) goto L_004d3199;
L_004d3175:  // cmp dword ptr [esi + 0x28], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x28u)), 0x1u, f);
L_004d3179:  // jne 0x4d3182
    if (!f.zf) goto L_004d3182;
L_004d317b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d317d:  // call 0x4d28c0
    t0 = 0x004d28c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3182u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3182:  // cmp dword ptr [esi + 0x28], 2
    t0 = lsub<32>(M32((uint32_t)(esi + 0x28u)), 0x2u, f);
L_004d3186:  // jne 0x4d318f
    if (!f.zf) goto L_004d318f;
L_004d3188:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d318a:  // call 0x4d29c0
    t0 = 0x004d29c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d318fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d318f:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004d3194:  // call 0x46fec0
    t0 = 0x0046fec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3199u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3199:  // cmp dword ptr [0x8a9ac0], 3
    t0 = lsub<32>(M32((uint32_t)(0x8a9ac0u)), 0x3u, f);
L_004d31a0:  // jl 0x4d342f
    if ((f.sf != f.of)) goto L_004d342f;
L_004d31a6:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004d31a9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d31ab:  // je 0x4d342f
    if (f.zf) goto L_004d342f;
L_004d31b1:  // test byte ptr [ecx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ecx + 0x2cu)) & 0x4u, f);
L_004d31b5:  // jne 0x4d342f
    if (!f.zf) goto L_004d342f;
L_004d31bb:  // mov eax, dword ptr [ecx + 0x580]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x580u)));
L_004d31c1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d31c3:  // je 0x4d342f
    if (f.zf) goto L_004d342f;
L_004d31c9:  // cmp edi, 0x1a
    t0 = lsub<32>(edi, 0x1au, f);
L_004d31cc:  // je 0x4d31d3
    if (f.zf) goto L_004d31d3;
L_004d31ce:  // cmp edi, 0x1c
    t0 = lsub<32>(edi, 0x1cu, f);
L_004d31d1:  // jne 0x4d3204
    if (!f.zf) goto L_004d3204;
L_004d31d3:  // call 0x4080f0
    t0 = 0x004080f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d31d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d31d8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d31da:  // je 0x4d31ec
    if (f.zf) goto L_004d31ec;
L_004d31dc:  // mov ecx, dword ptr [esi + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_004d31df:  // mov eax, dword ptr [ecx*4 + 0x662ac0]
    eax = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x662ac0u)));
L_004d31e6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d31e8:  // je 0x4d3204
    if (f.zf) goto L_004d3204;
L_004d31ea:  // jmp 0x4d31fa
    goto L_004d31fa;
L_004d31ec:  // mov edx, dword ptr [esi + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_004d31ef:  // mov eax, dword ptr [edx*4 + 0x662ab8]
    eax = (uint32_t)(M32((uint32_t)(edx * 4u + 0x662ab8u)));
L_004d31f6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d31f8:  // je 0x4d3204
    if (f.zf) goto L_004d3204;
L_004d31fa:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004d31fe:  // fchs 
    ST(0) = -ST(0);
L_004d3200:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004d3204:  // cmp edi, 0x1b
    t0 = lsub<32>(edi, 0x1bu, f);
L_004d3207:  // je 0x4d3218
    if (f.zf) goto L_004d3218;
L_004d3209:  // cmp edi, 0x19
    t0 = lsub<32>(edi, 0x19u, f);
L_004d320c:  // je 0x4d3218
    if (f.zf) goto L_004d3218;
L_004d320e:  // cmp edi, 0x1a
    t0 = lsub<32>(edi, 0x1au, f);
L_004d3211:  // je 0x4d3218
    if (f.zf) goto L_004d3218;
L_004d3213:  // cmp edi, 0x1c
    t0 = lsub<32>(edi, 0x1cu, f);
L_004d3216:  // jne 0x4d3281
    if (!f.zf) goto L_004d3281;
L_004d3218:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004d321c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d3222:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004d3226:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d3228:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d322b:  // jne 0x4d323f
    if (!f.zf) goto L_004d323f;
L_004d322d:  // fmul dword ptr [0x5dbce4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbce4u)));
L_004d3233:  // fptan 
    ST(0) = lfptan(ST(0)); lpush(x, 1.0L);
L_004d3235:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d3237:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_004d323d:  // jmp 0x4d3251
    goto L_004d3251;
L_004d323f:  // fmul dword ptr [0x5de7a0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5de7a0u)));
L_004d3245:  // fptan 
    ST(0) = lfptan(ST(0)); lpush(x, 1.0L);
L_004d3247:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d3249:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_004d324f:  // fchs 
    ST(0) = -ST(0);
L_004d3251:  // mov al, byte ptr [0x82b5bc]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x82b5bcu))) & 0xffu);
L_004d3256:  // test al, 1
    t0 = llog<8>((eax & 0xffu) & 0x1u, f);
L_004d3258:  // jne 0x4d3277
    if (!f.zf) goto L_004d3277;
L_004d325a:  // fld qword ptr [0x5de798]
    lpush(x, (long double)F64((uint32_t)(0x5de798u)));
L_004d3260:  // fptan 
    ST(0) = lfptan(ST(0)); lpush(x, 1.0L);
L_004d3262:  // or al, 1
    t0 = llog<8>((eax & 0xffu) | 0x1u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004d3264:  // mov byte ptr [0x82b5bc], al
    M8((uint32_t)(0x82b5bcu)) = (uint8_t)((eax & 0xffu));
L_004d3269:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d326b:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_004d3271:  // fstp dword ptr [0x82b5b8]
    F32((uint32_t)(0x82b5b8u)) = lf32(ST(0));
    lpop(x);
L_004d3277:  // fdiv dword ptr [0x82b5b8]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(0x82b5b8u)));
L_004d327d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004d3281:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004d3284:  // mov eax, dword ptr [ecx + 0x260]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x260u)));
L_004d328a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d328c:  // je 0x4d32e7
    if (f.zf) goto L_004d32e7;
L_004d328e:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004d3291:  // je 0x4d32e7
    if (f.zf) goto L_004d32e7;
L_004d3293:  // lea eax, [edi - 0x10]
    eax = (uint32_t)((uint32_t)(edi + 0xfffffff0u));
L_004d3296:  // cmp eax, 0x2e
    t0 = lsub<32>(eax, 0x2eu, f);
L_004d3299:  // ja 0x4d32e7
    if ((!f.cf && !f.zf)) goto L_004d32e7;
L_004d329b:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004d329d:  // mov dl, byte ptr [eax + 0x4d345c]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x4d345cu))) & 0xffu);
L_004d32a3:  // jmp dword ptr [edx*4 + 0x4d3434]
    t0 = M32((uint32_t)(edx * 4u + 0x4d3434u));
    switch (t0) {
    case 0x004d32aau: goto L_004d32aa;
    case 0x004d32b1u: goto L_004d32b1;
    case 0x004d32b8u: goto L_004d32b8;
    case 0x004d32bfu: goto L_004d32bf;
    case 0x004d32c6u: goto L_004d32c6;
    case 0x004d32cdu: goto L_004d32cd;
    case 0x004d32d4u: goto L_004d32d4;
    case 0x004d32dbu: goto L_004d32db;
    case 0x004d32e2u: goto L_004d32e2;
    case 0x004d32e7u: goto L_004d32e7;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004d32aa:  // call 0x40a580
    t0 = 0x0040a580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d32afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d32af:  // jmp 0x4d32e7
    goto L_004d32e7;
L_004d32b1:  // call 0x409ec0
    t0 = 0x00409ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d32b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d32b6:  // jmp 0x4d32e7
    goto L_004d32e7;
L_004d32b8:  // call 0x409e90
    t0 = 0x00409e90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d32bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d32bd:  // jmp 0x4d32e7
    goto L_004d32e7;
L_004d32bf:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d32c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d32c4:  // jmp 0x4d32e7
    goto L_004d32e7;
L_004d32c6:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d32cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d32cb:  // jmp 0x4d32e7
    goto L_004d32e7;
L_004d32cd:  // call 0x409ef0
    t0 = 0x00409ef0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d32d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d32d2:  // jmp 0x4d32e7
    goto L_004d32e7;
L_004d32d4:  // call 0x409f20
    t0 = 0x00409f20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d32d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d32d9:  // jmp 0x4d32e7
    goto L_004d32e7;
L_004d32db:  // call 0x409f70
    t0 = 0x00409f70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d32e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d32e0:  // jmp 0x4d32e7
    goto L_004d32e7;
L_004d32e2:  // call 0x40d4d0
    t0 = 0x0040d4d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d32e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d32e7:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004d32ea:  // mov ecx, dword ptr [eax + 0x260]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x260u)));
L_004d32f0:  // cmp ecx, 2
    t0 = lsub<32>(ecx, 0x2u, f);
L_004d32f3:  // jne 0x4d339a
    if (!f.zf) goto L_004d339a;
L_004d32f9:  // lea ecx, [edi - 0x15]
    ecx = (uint32_t)((uint32_t)(edi + 0xffffffebu));
L_004d32fc:  // cmp ecx, 0xb
    t0 = lsub<32>(ecx, 0xbu, f);
L_004d32ff:  // ja 0x4d342f
    if ((!f.cf && !f.zf)) goto L_004d342f;
L_004d3305:  // jmp dword ptr [ecx*4 + 0x4d348c]
    t0 = M32((uint32_t)(ecx * 4u + 0x4d348cu));
    switch (t0) {
    case 0x004d330cu: goto L_004d330c;
    case 0x004d3321u: goto L_004d3321;
    case 0x004d3336u: goto L_004d3336;
    case 0x004d334bu: goto L_004d334b;
    case 0x004d335bu: goto L_004d335b;
    case 0x004d3370u: goto L_004d3370;
    case 0x004d3385u: goto L_004d3385;
    case 0x004d33b6u: goto L_004d33b6;
    case 0x004d33cbu: goto L_004d33cb;
    case 0x004d33e0u: goto L_004d33e0;
    case 0x004d33f5u: goto L_004d33f5;
    case 0x004d340au: goto L_004d340a;
    case 0x004d341fu: goto L_004d341f;
    case 0x004d342fu: goto L_004d342f;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004d330c:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d3310:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d3311:  // mov ecx, dword ptr [eax + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x578u)));
L_004d3317:  // call 0x412d80
    t0 = 0x00412d80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d331cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d331c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d331d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d331e:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d3321:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d3325:  // mov ecx, dword ptr [eax + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x578u)));
L_004d332b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d332c:  // call 0x412f70
    t0 = 0x00412f70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3331u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3331:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d3332:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d3333:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d3336:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d333a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d333b:  // mov ecx, dword ptr [eax + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x578u)));
L_004d3341:  // call 0x413160
    t0 = 0x00413160u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3346u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3346:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d3347:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d3348:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d334b:  // mov ecx, dword ptr [eax + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x578u)));
L_004d3351:  // call 0x4135e0
    t0 = 0x004135e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3356u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3356:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d3357:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d3358:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d335b:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d335f:  // mov ecx, dword ptr [eax + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x578u)));
L_004d3365:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d3366:  // call 0x413360
    t0 = 0x00413360u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d336bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d336b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d336c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d336d:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d3370:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d3374:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d3375:  // mov ecx, dword ptr [eax + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x578u)));
L_004d337b:  // call 0x413660
    t0 = 0x00413660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3380u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3380:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d3381:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d3382:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d3385:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d3389:  // mov ecx, dword ptr [eax + 0x578]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x578u)));
L_004d338f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d3390:  // call 0x4136e0
    t0 = 0x004136e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3395u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3395:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d3396:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d3397:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d339a:  // cmp ecx, 3
    t0 = lsub<32>(ecx, 0x3u, f);
L_004d339d:  // jne 0x4d342f
    if (!f.zf) goto L_004d342f;
L_004d33a3:  // lea ecx, [edi - 0x19]
    ecx = (uint32_t)((uint32_t)(edi + 0xffffffe7u));
L_004d33a6:  // cmp ecx, 7
    t0 = lsub<32>(ecx, 0x7u, f);
L_004d33a9:  // ja 0x4d342f
    if ((!f.cf && !f.zf)) goto L_004d342f;
L_004d33af:  // jmp dword ptr [ecx*4 + 0x4d34bc]
    t0 = M32((uint32_t)(ecx * 4u + 0x4d34bcu));
    switch (t0) {
    case 0x004d33b6u: goto L_004d33b6;
    case 0x004d33cbu: goto L_004d33cb;
    case 0x004d33e0u: goto L_004d33e0;
    case 0x004d33f5u: goto L_004d33f5;
    case 0x004d340au: goto L_004d340a;
    case 0x004d341fu: goto L_004d341f;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004d33b6:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d33ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d33bb:  // mov ecx, dword ptr [eax + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x57cu)));
L_004d33c1:  // call 0x410490
    t0 = 0x00410490u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d33c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d33c6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d33c7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d33c8:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d33cb:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d33cf:  // mov ecx, dword ptr [eax + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x57cu)));
L_004d33d5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d33d6:  // call 0x410670
    t0 = 0x00410670u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d33dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d33db:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d33dc:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d33dd:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d33e0:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d33e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d33e5:  // mov ecx, dword ptr [eax + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x57cu)));
L_004d33eb:  // call 0x410740
    t0 = 0x00410740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d33f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d33f0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d33f1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d33f2:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d33f5:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d33f9:  // mov ecx, dword ptr [eax + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x57cu)));
L_004d33ff:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d3400:  // call 0x4109d0
    t0 = 0x004109d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d3405u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d3405:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d3406:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d3407:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d340a:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d340e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d340f:  // mov ecx, dword ptr [eax + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x57cu)));
L_004d3415:  // call 0x410310
    t0 = 0x00410310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d341au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d341a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d341b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d341c:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004d341f:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004d3423:  // mov ecx, dword ptr [eax + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x57cu)));
L_004d3429:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d342a:  // call 0x410310
    t0 = 0x00410310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d342fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d342f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d3430:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d3431:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d3110, 004d3110)
