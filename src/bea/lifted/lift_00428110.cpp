// lifted from 00428110 (vslot66, 988 bytes, 291 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00428110(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00428110;
L_00428110:  // sub esp, 0x3dc
    t0 = lsub<32>(esp, 0x3dcu, f);
    esp = (uint32_t)(t0);
L_00428116:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00428117:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00428118:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00428119:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042811a:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0042811c:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0042811e:  // test byte ptr [edi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(edi + 0x2cu)) & 0x4u, f);
L_00428122:  // je 0x428214
    if (f.zf) goto L_00428214;
L_00428128:  // mov eax, dword ptr [edi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x164u)));
L_0042812e:  // cmp dword ptr [eax + 0x198], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x198u)), ebx, f);
L_00428134:  // je 0x428214
    if (f.zf) goto L_00428214;
L_0042813a:  // fld dword ptr [edi + 0x118]
    lpush(x, (long double)F32((uint32_t)(edi + 0x118u)));
L_00428140:  // fsub dword ptr [0x5d85f8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85f8u)));
L_00428146:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00428148:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0042814a:  // mov dword ptr [edi + 0x130], 0x3ba3d70a
    M32((uint32_t)(edi + 0x130u)) = (uint32_t)(0x3ba3d70au);
L_00428154:  // fstp dword ptr [edi + 0x124]
    F32((uint32_t)(edi + 0x124u)) = lf32(ST(0));
    lpop(x);
L_0042815a:  // call dword ptr [edx + 0xb4]
    t0 = M32((uint32_t)(edx + 0xb4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00428160u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00428160:  // fadd dword ptr [edi + 0x84]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x84u)));
L_00428166:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00428168:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0042816a:  // fstp dword ptr [edi + 0x84]
    F32((uint32_t)(edi + 0x84u)) = lf32(ST(0));
    lpop(x);
L_00428170:  // call dword ptr [eax + 0x124]
    t0 = M32((uint32_t)(eax + 0x124u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00428176u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00428176:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00428178:  // fmul dword ptr [edi + 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x7cu)));
L_0042817b:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0042817d:  // fstp dword ptr [edi + 0x7c]
    F32((uint32_t)(edi + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_00428180:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00428182:  // fmul dword ptr [edi + 0x80]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x80u)));
L_00428188:  // fstp dword ptr [edi + 0x80]
    F32((uint32_t)(edi + 0x80u)) = lf32(ST(0));
    lpop(x);
L_0042818e:  // fmul dword ptr [edi + 0x84]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x84u)));
L_00428194:  // fstp dword ptr [edi + 0x84]
    F32((uint32_t)(edi + 0x84u)) = lf32(ST(0));
    lpop(x);
L_0042819a:  // call 0x401fa0
    t0 = 0x00401fa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042819fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042819f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004281a1:  // je 0x4281d9
    if (f.zf) goto L_004281d9;
L_004281a3:  // fld dword ptr [edi + 0x7c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x7cu)));
L_004281a6:  // fmul dword ptr [0x5d8b9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8b9cu)));
L_004281ac:  // fstp dword ptr [edi + 0x7c]
    F32((uint32_t)(edi + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_004281af:  // fld dword ptr [edi + 0x80]
    lpush(x, (long double)F32((uint32_t)(edi + 0x80u)));
L_004281b5:  // fmul dword ptr [0x5d8b9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8b9cu)));
L_004281bb:  // fstp dword ptr [edi + 0x80]
    F32((uint32_t)(edi + 0x80u)) = lf32(ST(0));
    lpop(x);
L_004281c1:  // fld dword ptr [edi + 0x84]
    lpush(x, (long double)F32((uint32_t)(edi + 0x84u)));
L_004281c7:  // fmul dword ptr [0x5d8b9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8b9cu)));
L_004281cd:  // fstp dword ptr [edi + 0x84]
    F32((uint32_t)(edi + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004281d3:  // mov dword ptr [edi + 0x130], ebx
    M32((uint32_t)(edi + 0x130u)) = (uint32_t)(ebx);
L_004281d9:  // mov esi, 2
    esi = (uint32_t)(0x2u);
L_004281de:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004281e0:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004281e2:  // call dword ptr [edx + 0x17c]
    t0 = M32((uint32_t)(edx + 0x17cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004281e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004281e8:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004281e9:  // jne 0x4281de
    if (!f.zf) goto L_004281de;
L_004281eb:  // mov eax, dword ptr [edi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x164u)));
L_004281f1:  // fld dword ptr [eax + 0xc0]
    lpush(x, (long double)F32((uint32_t)(eax + 0xc0u)));
L_004281f7:  // fchs 
    ST(0) = -ST(0);
L_004281f9:  // fcomp dword ptr [edi + 0xf8]
    lcom(x, ST(0), (long double)F32((uint32_t)(edi + 0xf8u)));
    lpop(x);
L_004281ff:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00428201:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00428204:  // jne 0x428214
    if (!f.zf) goto L_00428214;
L_00428206:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00428208:  // call 0x4fd230
    t0 = 0x004fd230u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042820du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042820d:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0042820f:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00428211:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00428214u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00428214:  // cmp dword ptr [edi + 0x214], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x214u)), ebx, f);
L_0042821a:  // je 0x428280
    if (f.zf) goto L_00428280;
L_0042821c:  // mov eax, dword ptr [edi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x13cu)));
L_00428222:  // cmp dword ptr [eax + 0xc], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0xcu)), ebx, f);
L_00428225:  // je 0x428280
    if (f.zf) goto L_00428280;
L_00428227:  // mov eax, dword ptr [edi + 0x264]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x264u)));
L_0042822d:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0042822f:  // je 0x428267
    if (f.zf) goto L_00428267;
L_00428231:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00428234:  // je 0x428267
    if (f.zf) goto L_00428267;
L_00428236:  // mov ecx, dword ptr [edi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_00428239:  // push 0x623e14
    t0 = 0x623e14u; esp -= 4; M32(esp) = t0;
L_0042823e:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00428240:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00428243u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00428243:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00428245:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042824au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042824a:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0042824d:  // je 0x428267
    if (f.zf) goto L_00428267;
L_0042824f:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00428251:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00428252:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00428254:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00428255:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00428257:  // call dword ptr [edx + 0xf0]
    t0 = M32((uint32_t)(edx + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042825du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042825d:  // mov dword ptr [edi + 0x264], 3
    M32((uint32_t)(edi + 0x264u)) = (uint32_t)(0x3u);
L_00428267:  // mov eax, dword ptr [edi + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x13cu)));
L_0042826d:  // cmp dword ptr [eax + 0xc], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0xcu)), ebx, f);
L_00428270:  // je 0x4282da
    if (f.zf) goto L_004282da;
L_00428272:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00428278:  // mov dword ptr [edi + 0x268], ecx
    M32((uint32_t)(edi + 0x268u)) = (uint32_t)(ecx);
L_0042827e:  // jmp 0x4282da
    goto L_004282da;
L_00428280:  // fld dword ptr [edi + 0x268]
    lpush(x, (long double)F32((uint32_t)(edi + 0x268u)));
L_00428286:  // fadd dword ptr [0x5d8ba0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8ba0u)));
L_0042828c:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_00428292:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00428294:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00428297:  // je 0x4282da
    if (f.zf) goto L_004282da;
L_00428299:  // mov eax, dword ptr [edi + 0x264]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x264u)));
L_0042829f:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004282a2:  // je 0x4282da
    if (f.zf) goto L_004282da;
L_004282a4:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004282a7:  // je 0x4282da
    if (f.zf) goto L_004282da;
L_004282a9:  // mov ecx, dword ptr [edi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_004282ac:  // push 0x6248c8
    t0 = 0x6248c8u; esp -= 4; M32(esp) = t0;
L_004282b1:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004282b3:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004282b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004282b6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004282b8:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004282bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004282bd:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004282c0:  // je 0x4282da
    if (f.zf) goto L_004282da;
L_004282c2:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004282c4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004282c5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004282c7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004282c8:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004282ca:  // call dword ptr [edx + 0xf0]
    t0 = M32((uint32_t)(edx + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004282d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004282d0:  // mov dword ptr [edi + 0x264], 2
    M32((uint32_t)(edi + 0x264u)) = (uint32_t)(0x2u);
L_004282da:  // cmp dword ptr [edi + 0x2bc], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x2bcu)), ebx, f);
L_004282e0:  // je 0x428494
    if (f.zf) goto L_00428494;
L_004282e6:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004282ea:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004282efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004282ef:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_004282f3:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004282f7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004282f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004282f9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004282fb:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004282fd:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004282ff:  // mov dword ptr [esp + 0x24], 0x5d8c80
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x5d8c80u);
L_00428307:  // mov dword ptr [esp + 0x3e0], ebx
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(ebx);
L_0042830e:  // mov dword ptr [esp + 0x3e4], ebx
    M32((uint32_t)(esp + 0x3e4u)) = (uint32_t)(ebx);
L_00428315:  // mov dword ptr [esp + 0x3e8], ebx
    M32((uint32_t)(esp + 0x3e8u)) = (uint32_t)(ebx);
L_0042831c:  // mov dword ptr [esp + 0x3ec], ebx
    M32((uint32_t)(esp + 0x3ecu)) = (uint32_t)(ebx);
L_00428323:  // mov dword ptr [esp + 0x3f0], ebx
    M32((uint32_t)(esp + 0x3f0u)) = (uint32_t)(ebx);
L_0042832a:  // mov dword ptr [esp + 0x3f8], ebx
    M32((uint32_t)(esp + 0x3f8u)) = (uint32_t)(ebx);
L_00428331:  // mov dword ptr [esp + 0x3f4], ebx
    M32((uint32_t)(esp + 0x3f4u)) = (uint32_t)(ebx);
L_00428338:  // call 0x4fc4e0
    t0 = 0x004fc4e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042833du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042833d:  // mov edx, dword ptr [edi + 0x138]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x138u)));
L_00428343:  // mov eax, 0x6248b8
    eax = (uint32_t)(0x6248b8u);
L_00428348:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042834a:  // mov dword ptr [esp + 0xb4], edx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(edx);
L_00428351:  // je 0x4283c1
    if (f.zf) goto L_004283c1;
L_00428353:  // mov ecx, dword ptr [0x8553f8]
    ecx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_00428359:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0042835b:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0042835d:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0042835f:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_00428362:  // je 0x428368
    if (f.zf) goto L_00428368;
L_00428364:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00428366:  // jmp 0x42836a
    goto L_0042836a;
L_00428368:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042836a:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0042836c:  // je 0x4283c1
    if (f.zf) goto L_004283c1;
L_0042836e:  // mov esi, dword ptr [eax + 0x30]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_00428371:  // mov eax, 0x6248b8
    eax = (uint32_t)(0x6248b8u);
L_00428376:  // mov dl, byte ptr [eax]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00428378:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0042837a:  // cmp dl, byte ptr [esi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi)), f);
L_0042837c:  // jne 0x42839a
    if (!f.zf) goto L_0042839a;
L_0042837e:  // cmp cl, bl
    t0 = lsub<8>((ecx & 0xffu), (ebx & 0xffu), f);
L_00428380:  // je 0x428396
    if (f.zf) goto L_00428396;
L_00428382:  // mov dl, byte ptr [eax + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_00428385:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_00428387:  // cmp dl, byte ptr [esi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0042838a:  // jne 0x42839a
    if (!f.zf) goto L_0042839a;
L_0042838c:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0042838f:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00428392:  // cmp cl, bl
    t0 = lsub<8>((ecx & 0xffu), (ebx & 0xffu), f);
L_00428394:  // jne 0x428376
    if (!f.zf) goto L_00428376;
L_00428396:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00428398:  // jmp 0x42839f
    goto L_0042839f;
L_0042839a:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_0042839c:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_0042839f:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004283a1:  // je 0x4283f7
    if (f.zf) goto L_004283f7;
L_004283a3:  // mov ecx, dword ptr [0x8553f8]
    ecx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004283a9:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004283aa:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004283ad:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004283b0:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004283b2:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_004283b5:  // je 0x4283bb
    if (f.zf) goto L_004283bb;
L_004283b7:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004283b9:  // jmp 0x4283bd
    goto L_004283bd;
L_004283bb:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004283bd:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004283bf:  // jne 0x42836e
    if (!f.zf) goto L_0042836e;
L_004283c1:  // or eax, 0xffffffff
    t0 = llog<32>(eax | 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004283c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004283c5:  // call 0x50ff10
    t0 = 0x0050ff10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004283cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004283ca:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004283cc:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004283cf:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004283d1:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004283d5:  // je 0x428494
    if (f.zf) goto L_00428494;
L_004283db:  // mov edx, 0x6248b8
    edx = (uint32_t)(0x6248b8u);
L_004283e0:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004283e2:  // je 0x42845f
    if (f.zf) goto L_0042845f;
L_004283e4:  // mov edx, dword ptr [0x8553f8]
    edx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004283ea:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004283ec:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004283ee:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004283f1:  // je 0x4283fb
    if (f.zf) goto L_004283fb;
L_004283f3:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004283f5:  // jmp 0x4283fd
    goto L_004283fd;
L_004283f7:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004283f9:  // jmp 0x4283c4
    goto L_004283c4;
L_004283fb:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004283fd:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004283ff:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00428401:  // je 0x42845f
    if (f.zf) goto L_0042845f;
L_00428403:  // mov esi, dword ptr [ebp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_00428406:  // mov eax, 0x6248b8
    eax = (uint32_t)(0x6248b8u);
L_0042840b:  // mov cl, byte ptr [eax]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0042840d:  // mov dl, cl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_0042840f:  // cmp cl, byte ptr [esi]
    t0 = lsub<8>((ecx & 0xffu), M8((uint32_t)(esi)), f);
L_00428411:  // jne 0x42842f
    if (!f.zf) goto L_0042842f;
L_00428413:  // cmp dl, bl
    t0 = lsub<8>((edx & 0xffu), (ebx & 0xffu), f);
L_00428415:  // je 0x42842b
    if (f.zf) goto L_0042842b;
L_00428417:  // mov cl, byte ptr [eax + 1]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_0042841a:  // mov dl, cl
    edx = (edx & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_0042841c:  // cmp cl, byte ptr [esi + 1]
    t0 = lsub<8>((ecx & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_0042841f:  // jne 0x42842f
    if (!f.zf) goto L_0042842f;
L_00428421:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00428424:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_00428427:  // cmp dl, bl
    t0 = lsub<8>((edx & 0xffu), (ebx & 0xffu), f);
L_00428429:  // jne 0x42840b
    if (!f.zf) goto L_0042840b;
L_0042842b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042842d:  // jmp 0x428434
    goto L_00428434;
L_0042842f:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_00428431:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_00428434:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00428436:  // je 0x4284e1
    if (f.zf) goto L_004284e1;
L_0042843c:  // mov edx, dword ptr [0x8553f8]
    edx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_00428442:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00428445:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00428448:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0042844a:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0042844d:  // je 0x428453
    if (f.zf) goto L_00428453;
L_0042844f:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00428451:  // jmp 0x428455
    goto L_00428455;
L_00428453:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00428455:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00428457:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00428459:  // jne 0x428403
    if (!f.zf) goto L_00428403;
L_0042845b:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0042845f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00428461:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_00428467:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_0042846b:  // mov dword ptr [esp + 0x3d0], eax
    M32((uint32_t)(esp + 0x3d0u)) = (uint32_t)(eax);
L_00428472:  // mov dword ptr [esp + 0x3d4], ebx
    M32((uint32_t)(esp + 0x3d4u)) = (uint32_t)(ebx);
L_00428479:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0042847b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0042847e:  // je 0x42848a
    if (f.zf) goto L_0042848a;
L_00428480:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_00428486:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0042848a:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0042848c:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_00428490:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00428491:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00428494u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00428494:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00428496:  // call 0x4fa8d0
    t0 = 0x004fa8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0042849bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0042849b:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004284a1:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004284a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004284a6:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004284ab:  // jns 0x4284b4
    if (!f.sf) goto L_004284b4;
L_004284ad:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004284ae:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004284b3:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004284b4:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004284b8:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004284bc:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_004284c2:  // fcomp dword ptr [0x5d8bb0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bb0u)));
    lpop(x);
L_004284c8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004284ca:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004284cd:  // jne 0x4284d6
    if (!f.zf) goto L_004284d6;
L_004284cf:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004284d1:  // call 0x428500
    t0 = 0x00428500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004284d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004284d6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004284d7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004284d8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004284d9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004284da:  // add esp, 0x3dc
    t0 = ladd<32>(esp, 0x3dcu, f);
    esp = (uint32_t)(t0);
L_004284e0:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004284e1:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004284e5:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004284e7:  // jmp 0x428461
    goto L_00428461;
}

LIFT_FUNCTION(0x00428110, 00428110)
