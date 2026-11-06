// lifted from 004e7110 (FUN_004e7110, 3037 bytes, 900 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e7110(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e7110;
L_004e7110:  // sub esp, 0xbc
    t0 = lsub<32>(esp, 0xbcu, f);
    esp = (uint32_t)(t0);
L_004e7116:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e7117:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e7118:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004e711a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e711b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e711c:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004e711e:  // mov eax, dword ptr [ebx + 0x84]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x84u)));
L_004e7124:  // mov dword ptr [esp + 0x48], edi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edi);
L_004e7128:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004e712a:  // je 0x4e7153
    if (f.zf) goto L_004e7153;
L_004e712c:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004e712e:  // call dword ptr [eax + 0x124]
    t0 = M32((uint32_t)(eax + 0x124u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7134u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7134:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004e7136:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_004e7138:  // je 0x4e7153
    if (f.zf) goto L_004e7153;
L_004e713a:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004e713c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e713e:  // call dword ptr [edx + 0xd4]
    t0 = M32((uint32_t)(edx + 0xd4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7144u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7144:  // mov dword ptr [ebx + 0x120], eax
    M32((uint32_t)(ebx + 0x120u)) = (uint32_t)(eax);
L_004e714a:  // mov eax, dword ptr [esi + 0x138]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_004e7150:  // mov dword ptr [ebx + 0x7c], eax
    M32((uint32_t)(ebx + 0x7cu)) = (uint32_t)(eax);
L_004e7153:  // mov eax, dword ptr [ebx + 0x84]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x84u)));
L_004e7159:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004e715e:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004e7160:  // je 0x4e71a7
    if (f.zf) goto L_004e71a7;
L_004e7162:  // cmp dword ptr [ebx + 0x120], esi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x120u)), esi, f);
L_004e7168:  // jne 0x4e71a7
    if (!f.zf) goto L_004e71a7;
L_004e716a:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004e716c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e716e:  // call dword ptr [edx + 0x124]
    t0 = M32((uint32_t)(edx + 0x124u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7174u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7174:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7176:  // je 0x4e7c0f
    if (f.zf) goto L_004e7c0f;
L_004e717c:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004e717e:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e7180:  // call dword ptr [eax + 0x124]
    t0 = M32((uint32_t)(eax + 0x124u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7186u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7186:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004e7189:  // lea ecx, [ebx + 0x1c]
    ecx = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004e718c:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004e718e:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004e7190:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e7193:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004e7196:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e7199:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004e719c:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e719f:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004e71a2:  // jmp 0x4e7c0f
    goto L_004e7c0f;
L_004e71a7:  // cmp dword ptr [ebx + 0x114], edi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x114u)), edi, f);
L_004e71ad:  // je 0x4e7c0f
    if (f.zf) goto L_004e7c0f;
L_004e71b3:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004e71b8:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004e71ba:  // lea ecx, [esp + 0xa4]
    ecx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_004e71c1:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004e71c3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e71c4:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e71c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e71c9:  // lea ebp, [ebx + 0x1c]
    ebp = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_004e71cc:  // lea edx, [ebx + 0x134]
    edx = (uint32_t)((uint32_t)(ebx + 0x134u));
L_004e71d2:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004e71d4:  // mov dword ptr [ebx + 0x110], edi
    M32((uint32_t)(ebx + 0x110u)) = (uint32_t)(edi);
L_004e71da:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004e71dc:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_004e71de:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e71e1:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004e71e4:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e71e7:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_004e71ea:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e71ed:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004e71f0:  // mov eax, dword ptr [ebx + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xc4u)));
L_004e71f6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e71f8:  // je 0x4e7417
    if (f.zf) goto L_004e7417;
L_004e71fe:  // mov eax, dword ptr [ebx + 0x120]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x120u)));
L_004e7204:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7206:  // jne 0x4e7417
    if (!f.zf) goto L_004e7417;
L_004e720c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e720e:  // call 0x4e81d0
    t0 = 0x004e81d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7213u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7213:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004e7216:  // jne 0x4e7301
    if (!f.zf) goto L_004e7301;
L_004e721c:  // mov eax, dword ptr [ebx + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xc4u)));
L_004e7222:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004e7225:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004e7227:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e722a:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004e722d:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7230:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004e7234:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004e7237:  // fsub dword ptr [ebp + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004e723a:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004e723e:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_004e7241:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004e7243:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004e7247:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004e724b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e724d:  // fld dword ptr [ebp + 4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7250:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004e7254:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004e7258:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004e725c:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_004e7260:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004e7264:  // fld dword ptr [ebp + 8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x8u)));
L_004e7267:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_004e726b:  // mov dword ptr [ebx + 0x110], esi
    M32((uint32_t)(ebx + 0x110u)) = (uint32_t)(esi);
L_004e7271:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e7275:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_004e7279:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004e727d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004e7281:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e7284:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004e7288:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_004e728c:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004e7290:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004e7294:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7297:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004e729b:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004e729f:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004e72a3:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004e72a7:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004e72ab:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e72ad:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004e72b3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e72b5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e72b8:  // jne 0x4e73f7
    if (!f.zf) goto L_004e73f7;
L_004e72be:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004e72c3:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004e72c5:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004e72c9:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004e72cb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e72cc:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e72d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e72d1:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004e72d5:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004e72d9:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004e72db:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e72dd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e72df:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e72e0:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004e72e4:  // fchs 
    ST(0) = -ST(0);
L_004e72e6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e72e9:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e72eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e72ee:  // lea edi, [ebx + 0x3c]
    edi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_004e72f1:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004e72f6:  // lea esi, [esp + 0x6c]
    esi = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e72fa:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e72fc:  // jmp 0x4e73f7
    goto L_004e73f7;
L_004e7301:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004e7303:  // jne 0x4e7381
    if (!f.zf) goto L_004e7381;
L_004e7305:  // mov eax, dword ptr [ebx + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xc4u)));
L_004e730b:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004e730e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e7310:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e7312:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004e7316:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004e7319:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_004e731d:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004e7320:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_004e7324:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004e7327:  // mov dword ptr [ebx + 0x110], esi
    M32((uint32_t)(ebx + 0x110u)) = (uint32_t)(esi);
L_004e732d:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_004e7331:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004e7333:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e7336:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004e7339:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e733c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e733e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e7340:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e7342:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e7344:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e7346:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004e734c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e734e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e7351:  // jne 0x4e73f3
    if (!f.zf) goto L_004e73f3;
L_004e7357:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004e7359:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e735b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e735d:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004e7361:  // fchs 
    ST(0) = -ST(0);
L_004e7363:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004e7367:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e736b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e736c:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7371u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7371:  // lea edi, [ebx + 0x3c]
    edi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_004e7374:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004e7379:  // lea esi, [esp + 0x6c]
    esi = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e737d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e737f:  // jmp 0x4e73f7
    goto L_004e73f7;
L_004e7381:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004e7383:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004e7385:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004e7389:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e738c:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_004e7390:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e7393:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004e7397:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e739a:  // mov eax, dword ptr [ebx + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xc4u)));
L_004e73a0:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004e73a3:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_004e73a7:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004e73a9:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e73ac:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004e73af:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e73b2:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e73b4:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e73b6:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e73b8:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e73ba:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e73bc:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004e73c2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e73c4:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e73c7:  // jne 0x4e73f3
    if (!f.zf) goto L_004e73f3;
L_004e73c9:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004e73cb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e73cd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e73cf:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004e73d3:  // fchs 
    ST(0) = -ST(0);
L_004e73d5:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004e73d9:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e73dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e73de:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e73e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e73e3:  // lea edi, [ebx + 0x3c]
    edi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_004e73e6:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004e73eb:  // lea esi, [esp + 0x6c]
    esi = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e73ef:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e73f1:  // jmp 0x4e73f7
    goto L_004e73f7;
L_004e73f3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e73f5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e73f7:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_004e73f9:  // lea ecx, [ebx + 0xf4]
    ecx = (uint32_t)((uint32_t)(ebx + 0xf4u));
L_004e73ff:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004e7401:  // mov dword ptr [ecx], eax
    M32((uint32_t)(ecx)) = (uint32_t)(eax);
L_004e7403:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004e7406:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004e7409:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004e740c:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_004e740f:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004e7412:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004e7415:  // jmp 0x4e7491
    goto L_004e7491;
L_004e7417:  // lea eax, [ebx + 0xf4]
    eax = (uint32_t)((uint32_t)(ebx + 0xf4u));
L_004e741d:  // mov dword ptr [ebx + 0x110], esi
    M32((uint32_t)(ebx + 0x110u)) = (uint32_t)(esi);
L_004e7423:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004e7425:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004e7429:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e742c:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004e7430:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e7433:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_004e7437:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e743a:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004e743e:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7441:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e7443:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e7445:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e7447:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e7449:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e744c:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004e7450:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e7452:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_004e7456:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004e745c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e745e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e7461:  // jne 0x4e748d
    if (!f.zf) goto L_004e748d;
L_004e7463:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004e7465:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e7467:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e7469:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004e746d:  // fchs 
    ST(0) = -ST(0);
L_004e746f:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004e7473:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e7477:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e7478:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e747du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e747d:  // lea edi, [ebx + 0x3c]
    edi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_004e7480:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004e7485:  // lea esi, [esp + 0x6c]
    esi = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e7489:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e748b:  // jmp 0x4e7491
    goto L_004e7491;
L_004e748d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e748f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e7491:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004e7495:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e7498:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004e749c:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e749f:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004e74a1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e74a3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e74a5:  // fchs 
    ST(0) = -ST(0);
L_004e74a7:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004e74ab:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e74af:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e74b0:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004e74b4:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e74b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e74b9:  // mov eax, dword ptr [ebx + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x7cu)));
L_004e74bc:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004e74c1:  // lea esi, [esp + 0x6c]
    esi = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e74c5:  // lea edi, [esp + 0x9c]
    edi = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004e74cc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e74ce:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e74d0:  // jne 0x4e74da
    if (!f.zf) goto L_004e74da;
L_004e74d2:  // mov esi, dword ptr [0x8a9d7c]
    esi = (uint32_t)(M32((uint32_t)(0x8a9d7cu)));
L_004e74d8:  // jmp 0x4e74e9
    goto L_004e74e9;
L_004e74da:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004e74dd:  // jne 0x4e758f
    if (!f.zf) goto L_004e758f;
L_004e74e3:  // mov esi, dword ptr [0x8a9d80]
    esi = (uint32_t)(M32((uint32_t)(0x8a9d80u)));
L_004e74e9:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e74eb:  // je 0x4e758f
    if (f.zf) goto L_004e758f;
L_004e74f1:  // mov eax, dword ptr [ebx + 0x110]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x110u)));
L_004e74f7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e74f9:  // je 0x4e7534
    if (f.zf) goto L_004e7534;
L_004e74fb:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004e74ff:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004e7503:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e7506:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004e7508:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004e750a:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004e750e:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004e7511:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004e7515:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004e7518:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004e751b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e751d:  // call 0x44c720
    t0 = 0x0044c720u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7522u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7522:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7524:  // je 0x4e758f
    if (f.zf) goto L_004e758f;
L_004e7526:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004e752a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e752c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e752d:  // call 0x44c810
    t0 = 0x0044c810u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7532u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7532:  // jmp 0x4e758f
    goto L_004e758f;
L_004e7534:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e7537:  // mov eax, ebp
    eax = (uint32_t)(ebp);
L_004e7539:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004e753b:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004e753d:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004e753f:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e7542:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004e7545:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e7548:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004e754b:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e754e:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004e7551:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e7553:  // call 0x44c720
    t0 = 0x0044c720u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7558u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7558:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e755a:  // je 0x4e758f
    if (f.zf) goto L_004e758f;
L_004e755c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004e755e:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e7560:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004e7564:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004e7567:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004e756b:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004e756e:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_004e7572:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004e7575:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004e7579:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e757a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e757c:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_004e7580:  // call 0x44c810
    t0 = 0x0044c810u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7585u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7585:  // mov dword ptr [ebx + 0x110], 1
    M32((uint32_t)(ebx + 0x110u)) = (uint32_t)(0x1u);
L_004e758f:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004e7593:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e7596:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004e759a:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e759d:  // mov eax, dword ptr [ebx + 0x110]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x110u)));
L_004e75a3:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004e75a5:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004e75a7:  // je 0x4e7b6e
    if (f.zf) goto L_004e7b6e;
L_004e75ad:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e75af:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e75b1:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e75b3:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e75b5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e75b7:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004e75bb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e75bd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e75bf:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e75c3:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004e75c9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e75cb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e75ce:  // jne 0x4e769b
    if (!f.zf) goto L_004e769b;
L_004e75d4:  // cmp dword ptr [ebx + 0xd0], esi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0xd0u)), esi, f);
L_004e75da:  // je 0x4e769b
    if (f.zf) goto L_004e769b;
L_004e75e0:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004e75e2:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e75e4:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e75e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e75e7:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e75ea:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004e75ed:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e75f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e75f2:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e75f6:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004e75fa:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e75fd:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_004e75ff:  // cmp ecx, 2
    t0 = lsub<32>(ecx, 0x2u, f);
L_004e7602:  // jge 0x4e7609
    if ((f.sf == f.of)) goto L_004e7609;
L_004e7604:  // mov ecx, 2
    ecx = (uint32_t)(0x2u);
L_004e7609:  // cmp dword ptr [ebx + 0xdc], esi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0xdcu)), esi, f);
L_004e760f:  // je 0x4e764b
    if (f.zf) goto L_004e764b;
L_004e7611:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004e7615:  // mov eax, dword ptr [ebx + 0xd4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xd4u)));
L_004e761b:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e761f:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004e7623:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004e7625:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004e7626:  // xor eax, edx
    t0 = llog<32>(eax ^ edx, f);
    eax = (uint32_t)(t0);
L_004e7628:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004e762a:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004e762c:  // jg 0x4e764b
    if ((!f.zf && f.sf == f.of)) goto L_004e764b;
L_004e762e:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004e7632:  // mov eax, dword ptr [ebx + 0xd8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xd8u)));
L_004e7638:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e763c:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004e7640:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004e7642:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004e7643:  // xor eax, edx
    t0 = llog<32>(eax ^ edx, f);
    eax = (uint32_t)(t0);
L_004e7645:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004e7647:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004e7649:  // jle 0x4e769b
    if ((f.zf || f.sf != f.of)) goto L_004e769b;
L_004e764b:  // lea eax, [ebx + 0xd4]
    eax = (uint32_t)((uint32_t)(ebx + 0xd4u));
L_004e7651:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004e7655:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e7656:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e7657:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004e765b:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e765e:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004e7660:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e7663:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004e7665:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004e7669:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004e766c:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004e7670:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004e7673:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004e7675:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004e7678:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004e767a:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004e767c:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004e767e:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004e7681:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004e7684:  // mov eax, dword ptr [ecx + 8]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004e7687:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004e768a:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004e768d:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004e7690:  // mov ecx, dword ptr [ebx + 0xd0]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xd0u)));
L_004e7696:  // call 0x4bc2e0
    t0 = 0x004bc2e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e769bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e769b:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e769f:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004e76a5:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004e76a9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e76ab:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e76ae:  // jne 0x4e76b8
    if (!f.zf) goto L_004e76b8;
L_004e76b0:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_004e76b8:  // cmp dword ptr [ebx + 0xdc], esi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0xdcu)), esi, f);
L_004e76be:  // je 0x4e7868
    if (f.zf) goto L_004e7868;
L_004e76c4:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_004e76c7:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e76cb:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004e76cf:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_004e76d3:  // fld dword ptr [ebx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x20u)));
L_004e76d6:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e76da:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004e76de:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004e76e2:  // mov eax, dword ptr [ebx + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xe0u)));
L_004e76e8:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004e76ea:  // jle 0x4e7714
    if ((f.zf || f.sf != f.of)) goto L_004e7714;
L_004e76ec:  // mov ecx, dword ptr [ebx + 0xe4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xe4u)));
L_004e76f2:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004e76f4:  // mov dl, byte ptr [ecx + eax - 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + eax + 0xffffffffu))) & 0xffu);
L_004e76f8:  // lea ecx, [edx + edx + 1]
    ecx = (uint32_t)((uint32_t)(edx + edx + 0x1u));
L_004e76fc:  // mov edx, dword ptr [ebx + 0xec]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xecu)));
L_004e7702:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_004e7706:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004e7708:  // mov cl, byte ptr [edx + eax - 1]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + eax + 0xffffffffu))) & 0xffu);
L_004e770c:  // lea edx, [ecx + ecx + 1]
    edx = (uint32_t)((uint32_t)(ecx + ecx + 0x1u));
L_004e7710:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004e7714:  // fild dword ptr [esp + 0x4c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4cu)));
L_004e7718:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004e771c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e771e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e7720:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004e7724:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004e7728:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e772b:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004e772f:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004e7733:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7736:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004e773a:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004e773e:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004e7742:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004e7744:  // fchs 
    ST(0) = -ST(0);
L_004e7746:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004e774a:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004e774e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e774f:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7754u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7754:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004e7758:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004e775c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004e7760:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004e7764:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004e7769:  // lea esi, [esp + 0x6c]
    esi = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e776d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e776f:  // lea edi, [esp + 0x9c]
    edi = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004e7776:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_004e777e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e7780:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e7782:  // fld dword ptr [ebx + 0x108]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x108u)));
L_004e7788:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_004e778e:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004e7790:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e7792:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e7795:  // jne 0x4e786e
    if (!f.zf) goto L_004e786e;
L_004e779b:  // mov ecx, dword ptr [ebx + 0xe0]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xe0u)));
L_004e77a1:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e77a2:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004e77a4:  // mov dword ptr [ebx + 0xe0], ecx
    M32((uint32_t)(ebx + 0xe0u)) = (uint32_t)(ecx);
L_004e77aa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e77ac:  // jle 0x4e785e
    if ((f.zf || f.sf != f.of)) goto L_004e785e;
L_004e77b2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e77b4:  // jle 0x4e77de
    if ((f.zf || f.sf != f.of)) goto L_004e77de;
L_004e77b6:  // mov ecx, dword ptr [ebx + 0xe4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xe4u)));
L_004e77bc:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004e77be:  // mov dl, byte ptr [ecx + eax - 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + eax + 0xffffffffu))) & 0xffu);
L_004e77c2:  // lea ecx, [edx + edx + 1]
    ecx = (uint32_t)((uint32_t)(edx + edx + 0x1u));
L_004e77c6:  // mov edx, dword ptr [ebx + 0xec]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xecu)));
L_004e77cc:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_004e77d0:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004e77d2:  // mov cl, byte ptr [edx + eax - 1]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + eax + 0xffffffffu))) & 0xffu);
L_004e77d6:  // lea edx, [ecx + ecx + 1]
    edx = (uint32_t)((uint32_t)(ecx + ecx + 0x1u));
L_004e77da:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004e77de:  // fild dword ptr [esp + 0x4c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4cu)));
L_004e77e2:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004e77e6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e77e8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e77ea:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004e77ee:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004e77f2:  // fsub dword ptr [ebp]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp)));
L_004e77f5:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004e77f9:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004e77fd:  // fsub dword ptr [ebp + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7800:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004e7804:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004e7808:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004e780c:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004e780e:  // fchs 
    ST(0) = -ST(0);
L_004e7810:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004e7814:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004e7818:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e7819:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e781eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e781e:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004e7822:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004e7826:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004e782a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004e782e:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004e7833:  // lea esi, [esp + 0x6c]
    esi = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004e7837:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e7839:  // lea edi, [esp + 0x9c]
    edi = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004e7840:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004e7842:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e7844:  // fld dword ptr [ebx + 0x108]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x108u)));
L_004e784a:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_004e7850:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004e7852:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e7854:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e7857:  // jne 0x4e786e
    if (!f.zf) goto L_004e786e;
L_004e7859:  // jmp 0x4e779b
    goto L_004e779b;
L_004e785e:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004e7866:  // jmp 0x4e786e
    goto L_004e786e;
L_004e7868:  // mov dword ptr [ebx + 0x108], esi
    M32((uint32_t)(ebx + 0x108u)) = (uint32_t)(esi);
L_004e786e:  // lea ecx, [ebx + 0xc8]
    ecx = (uint32_t)((uint32_t)(ebx + 0xc8u));
L_004e7874:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e7876:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e787bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e787b:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004e787f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7881:  // je 0x4e79ca
    if (f.zf) goto L_004e79ca;
L_004e7887:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e7889:  // call 0x4e7cf0
    t0 = 0x004e7cf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e788eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e788e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7890:  // je 0x4e79aa
    if (f.zf) goto L_004e79aa;
L_004e7896:  // fld dword ptr [ebx + 0x108]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x108u)));
L_004e789c:  // fmul dword ptr [0x5d857c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d857cu)));
L_004e78a2:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004e78a9:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e78ab:  // mov eax, dword ptr [ebx + 0xd0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xd0u)));
L_004e78b1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e78b3:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004e78b7:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004e78be:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e78c0:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004e78c4:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_004e78cb:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e78cd:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004e78d1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e78d3:  // je 0x4e79bd
    if (f.zf) goto L_004e79bd;
L_004e78d9:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004e78dd:  // fadd dword ptr [ebp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004e78e0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e78e1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e78e4:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004e78e8:  // fadd dword ptr [ebp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e78eb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e78ec:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e78ef:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004e78f3:  // fadd dword ptr [ebp]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp)));
L_004e78f6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e78f7:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_004e78fb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004e78fe:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7903u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7903:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004e7907:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e790b:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004e790f:  // mov esi, dword ptr [ebx + 0xd0]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xd0u)));
L_004e7915:  // sar ecx, 1
    t0 = lsar<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_004e7917:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004e7919:  // sar eax, 3
    t0 = lsar<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_004e791c:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004e791f:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004e7923:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e7927:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004e792b:  // sar edx, 1
    t0 = lsar<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_004e792d:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004e792f:  // and ecx, 0x80000007
    t0 = llog<32>(ecx & 0x80000007u, f);
    ecx = (uint32_t)(t0);
L_004e7935:  // jns 0x4e793c
    if (!f.sf) goto L_004e793c;
L_004e7937:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e7938:  // or ecx, 0xfffffff8
    t0 = llog<32>(ecx | 0xfffffff8u, f);
    ecx = (uint32_t)(t0);
L_004e793b:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e793c:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004e7941:  // shl eax, cl
    t0 = lshl<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_004e7943:  // test byte ptr [edx + esi], al
    t0 = llog<8>(M8((uint32_t)(edx + esi)) & (eax & 0xffu), f);
L_004e7946:  // je 0x4e7968
    if (f.zf) goto L_004e7968;
L_004e7948:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004e794c:  // fadd dword ptr [ebp]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp)));
L_004e794f:  // fstp dword ptr [ebp]
    F32((uint32_t)(ebp)) = lf32(ST(0));
    lpop(x);
L_004e7952:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004e7956:  // fadd dword ptr [ebp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7959:  // fstp dword ptr [ebp + 4]
    F32((uint32_t)(ebp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e795c:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004e7960:  // fadd dword ptr [ebp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004e7963:  // fstp dword ptr [ebp + 8]
    F32((uint32_t)(ebp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e7966:  // jmp 0x4e79bd
    goto L_004e79bd;
L_004e7968:  // mov eax, dword ptr [ebx + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xe0u)));
L_004e796e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7970:  // jle 0x4e79bd
    if ((f.zf || f.sf != f.of)) goto L_004e79bd;
L_004e7972:  // mov ecx, dword ptr [ebx + 0xe4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xe4u)));
L_004e7978:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004e797a:  // mov dl, byte ptr [ecx + eax - 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + eax + 0xffffffffu))) & 0xffu);
L_004e797e:  // lea ecx, [edx + edx + 1]
    ecx = (uint32_t)((uint32_t)(edx + edx + 0x1u));
L_004e7982:  // mov edx, dword ptr [ebx + 0xec]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xecu)));
L_004e7988:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004e798c:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004e798e:  // mov cl, byte ptr [edx + eax - 1]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + eax + 0xffffffffu))) & 0xffu);
L_004e7992:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_004e7996:  // lea edx, [ecx + ecx + 1]
    edx = (uint32_t)((uint32_t)(ecx + ecx + 0x1u));
L_004e799a:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004e799e:  // fstp dword ptr [ebp]
    F32((uint32_t)(ebp)) = lf32(ST(0));
    lpop(x);
L_004e79a1:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004e79a5:  // fstp dword ptr [ebx + 0x20]
    F32((uint32_t)(ebx + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004e79a8:  // jmp 0x4e79bd
    goto L_004e79bd;
L_004e79aa:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e79ac:  // call 0x4e7f40
    t0 = 0x004e7f40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e79b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e79b1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e79b3:  // je 0x4e79bd
    if (f.zf) goto L_004e79bd;
L_004e79b5:  // mov dword ptr [esp + 0x48], 1
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x1u);
L_004e79bd:  // cmp dword ptr [ebx + 0x9c], 1
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x9cu)), 0x1u, f);
L_004e79c4:  // jne 0x4e7b72
    if (!f.zf) goto L_004e7b72;
L_004e79ca:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e79cc:  // call 0x4e7cf0
    t0 = 0x004e7cf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e79d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e79d1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e79d3:  // je 0x4e7b72
    if (f.zf) goto L_004e7b72;
L_004e79d9:  // fld dword ptr [ebx + 0x104]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x104u)));
L_004e79df:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004e79e5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e79e7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e79ea:  // jne 0x4e7b72
    if (!f.zf) goto L_004e7b72;
L_004e79f0:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004e79f4:  // mov dword ptr [esp + 0x50], 0x8550a0
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x8550a0u);
L_004e79fc:  // call 0x409760
    t0 = 0x00409760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7a01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7a01:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004e7a03:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e7a05:  // je 0x4e7b72
    if (f.zf) goto L_004e7b72;
L_004e7a0b:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004e7a0f:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004e7a11:  // je 0x4e7b53
    if (f.zf) goto L_004e7b53;
L_004e7a17:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e7a19:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e7a1b:  // call dword ptr [eax + 0x148]
    t0 = M32((uint32_t)(eax + 0x148u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7a21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7a21:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7a23:  // je 0x4e7b4f
    if (f.zf) goto L_004e7b4f;
L_004e7a29:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004e7a2b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e7a2d:  // call dword ptr [edx + 0x138]
    t0 = M32((uint32_t)(edx + 0x138u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7a33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7a33:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_004e7a39:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e7a3b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e7a3e:  // jne 0x4e7b4f
    if (!f.zf) goto L_004e7b4f;
L_004e7a44:  // fld dword ptr [ebp]
    lpush(x, (long double)F32((uint32_t)(ebp)));
L_004e7a47:  // fsub dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x1cu)));
L_004e7a4a:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004e7a4c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e7a4e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004e7a52:  // fld dword ptr [ebp + 4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7a55:  // fsub dword ptr [esi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x20u)));
L_004e7a58:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_004e7a5c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004e7a60:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004e7a64:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004e7a66:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004e7a68:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e7a6a:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e7a6c:  // fstp st(1)
    ST(1) = ST(0);
    lpop(x);
L_004e7a6e:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004e7a72:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7a75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7a75:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004e7a77:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e7a79:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004e7a7d:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7a80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7a80:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004e7a84:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_004e7a88:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004e7a8c:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004e7a90:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004e7a96:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e7a98:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e7a9b:  // jne 0x4e7b4f
    if (!f.zf) goto L_004e7b4f;
L_004e7aa1:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e7aa5:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004e7aab:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e7aad:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e7ab0:  // jne 0x4e7b4f
    if (!f.zf) goto L_004e7b4f;
L_004e7ab6:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004e7aba:  // fdiv dword ptr [esp + 0x10]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x10u)));
L_004e7abe:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004e7ac6:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e7ac8:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004e7acc:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004e7ad0:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004e7ad4:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004e7ad8:  // fadd dword ptr [ebp]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp)));
L_004e7adb:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004e7add:  // fadd dword ptr [ebp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7ae0:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004e7ae4:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e7ae8:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004e7aec:  // sar ecx, 1
    t0 = lsar<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_004e7aee:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004e7af0:  // sar edx, 3
    t0 = lsar<32>(edx, 0x3u, f);
    edx = (uint32_t)(t0);
L_004e7af3:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_004e7af6:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004e7afa:  // fistp qword ptr [esp + 0x28]
    M64((uint32_t)(esp + 0x28u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e7afe:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004e7b02:  // sar edi, 1
    t0 = lsar<32>(edi, 0x1u, f);
    edi = (uint32_t)(t0);
L_004e7b04:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_004e7b06:  // mov edx, dword ptr [ebx + 0xd0]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xd0u)));
L_004e7b0c:  // and ecx, 0x80000007
    t0 = llog<32>(ecx & 0x80000007u, f);
    ecx = (uint32_t)(t0);
L_004e7b12:  // jns 0x4e7b19
    if (!f.sf) goto L_004e7b19;
L_004e7b14:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e7b15:  // or ecx, 0xfffffff8
    t0 = llog<32>(ecx | 0xfffffff8u, f);
    ecx = (uint32_t)(t0);
L_004e7b18:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004e7b19:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004e7b1e:  // shl eax, cl
    t0 = lshl<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_004e7b20:  // test byte ptr [edi + edx], al
    t0 = llog<8>(M8((uint32_t)(edi + edx)) & (eax & 0xffu), f);
L_004e7b23:  // je 0x4e7b41
    if (f.zf) goto L_004e7b41;
L_004e7b25:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004e7b29:  // fadd dword ptr [ebp]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp)));
L_004e7b2c:  // fstp dword ptr [ebp]
    F32((uint32_t)(ebp)) = lf32(ST(0));
    lpop(x);
L_004e7b2f:  // fadd dword ptr [ebp + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004e7b32:  // fstp dword ptr [ebp + 4]
    F32((uint32_t)(ebp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e7b35:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004e7b39:  // fadd dword ptr [ebp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004e7b3c:  // fstp dword ptr [ebp + 8]
    F32((uint32_t)(ebp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e7b3f:  // jmp 0x4e7b43
    goto L_004e7b43;
L_004e7b41:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e7b43:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e7b44:  // lea ecx, [ebx + 0xc8]
    ecx = (uint32_t)((uint32_t)(ebx + 0xc8u));
L_004e7b4a:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7b4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7b4f:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004e7b53:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e7b56:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7b58:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_004e7b5c:  // je 0x4e7b62
    if (f.zf) goto L_004e7b62;
L_004e7b5e:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004e7b60:  // jmp 0x4e7b64
    goto L_004e7b64;
L_004e7b62:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004e7b64:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e7b66:  // jne 0x4e7a0f
    if (!f.zf) goto L_004e7a0f;
L_004e7b6c:  // jmp 0x4e7b72
    goto L_004e7b72;
L_004e7b6e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e7b70:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e7b72:  // mov esi, dword ptr [ebx + 0xc4]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xc4u)));
L_004e7b78:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004e7b7a:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e7b7c:  // je 0x4e7c48
    if (f.zf) goto L_004e7c48;
L_004e7b82:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004e7b84:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004e7b88:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e7b89:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e7b8b:  // call dword ptr [eax + 0x120]
    t0 = M32((uint32_t)(eax + 0x120u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7b91u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7b91:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_004e7b94:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_004e7b96:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004e7b99:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_004e7b9c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004e7b9e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004e7ba0:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004e7ba2:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004e7ba4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004e7ba6:  // fcomp dword ptr [0x5df25c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5df25cu)));
    lpop(x);
L_004e7bac:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e7bae:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e7bb0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004e7bb3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e7bb5:  // je 0x4e7c48
    if (f.zf) goto L_004e7c48;
L_004e7bbb:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004e7bc0:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e7bc2:  // call 0x4e8930
    t0 = 0x004e8930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7bc7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7bc7:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004e7bc9:  // je 0x4e7bdd
    if (f.zf) goto L_004e7bdd;
L_004e7bcb:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004e7bd1:  // fadd dword ptr [0x5d85d4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d4u)));
L_004e7bd7:  // fstp dword ptr [ebx + 0x118]
    F32((uint32_t)(ebx + 0x118u)) = lf32(ST(0));
    lpop(x);
L_004e7bdd:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_004e7bdf:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004e7be4:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7be9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7be9:  // mov edx, dword ptr [esp + 0xd0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xd0u)));
L_004e7bf0:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e7bf2:  // fstp dword ptr [ebx + 0x24]
    F32((uint32_t)(ebx + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004e7bf5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e7bf6:  // call 0x452b60
    t0 = 0x00452b60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7bfbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7bfb:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e7bfd:  // call 0x4e91f0
    t0 = 0x004e91f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7c02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7c02:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e7c04:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e7c06:  // call 0x4e8f80
    t0 = 0x004e8f80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7c0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7c0b:  // mov edi, dword ptr [esp + 0x48]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004e7c0f:  // lea eax, [ebx + 0x124]
    eax = (uint32_t)((uint32_t)(ebx + 0x124u));
L_004e7c15:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004e7c17:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004e7c19:  // mov esi, edx
    esi = (uint32_t)(edx);
L_004e7c1b:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_004e7c1f:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004e7c23:  // mov dword ptr [ecx], esi
    M32((uint32_t)(ecx)) = (uint32_t)(esi);
L_004e7c25:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004e7c29:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004e7c2d:  // mov dword ptr [ecx + 4], esi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(esi);
L_004e7c30:  // mov dword ptr [ecx + 8], esi
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(esi);
L_004e7c33:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004e7c37:  // mov dword ptr [ecx + 0xc], esi
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(esi);
L_004e7c3a:  // mov ebx, dword ptr [ebx + 0xa4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0xa4u)));
L_004e7c40:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e7c42:  // je 0x4e7c83
    if (f.zf) goto L_004e7c83;
L_004e7c44:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_004e7c46:  // jmp 0x4e7c85
    goto L_004e7c85;
L_004e7c48:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_004e7c4e:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_004e7c54:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e7c56:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004e7c59:  // je 0x4e7bc0
    if (f.zf) goto L_004e7bc0;
L_004e7c5f:  // mov eax, dword ptr [ebx + 0x110]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x110u)));
L_004e7c65:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7c67:  // jne 0x4e7c77
    if (!f.zf) goto L_004e7c77;
L_004e7c69:  // mov eax, dword ptr [ebx + 0x80]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x80u)));
L_004e7c6f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e7c71:  // je 0x4e7bdd
    if (f.zf) goto L_004e7bdd;
L_004e7c77:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e7c79:  // call 0x4e8730
    t0 = 0x004e8730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e7c7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e7c7e:  // jmp 0x4e7bdd
    goto L_004e7bdd;
L_004e7c83:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004e7c85:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e7c87:  // je 0x4e7cde
    if (f.zf) goto L_004e7cde;
L_004e7c89:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e7c8b:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e7c8d:  // je 0x4e7ca9
    if (f.zf) goto L_004e7ca9;
L_004e7c8f:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_004e7c92:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004e7c94:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004e7c95:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004e7c97:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_004e7c9a:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004e7c9d:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e7ca0:  // fld dword ptr [ecx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x24u)));
L_004e7ca3:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004e7ca6:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e7ca9:  // mov ebx, dword ptr [ebx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004e7cac:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e7cae:  // je 0x4e7cb4
    if (f.zf) goto L_004e7cb4;
L_004e7cb0:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_004e7cb2:  // jmp 0x4e7cb6
    goto L_004e7cb6;
L_004e7cb4:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004e7cb6:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e7cb8:  // jne 0x4e7c89
    if (!f.zf) goto L_004e7c89;
L_004e7cba:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004e7cbc:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_004e7cc0:  // je 0x4e7cde
    if (f.zf) goto L_004e7cde;
L_004e7cc2:  // fild dword ptr [esp + 0x48]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x48u)));
L_004e7cc6:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004e7cc8:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004e7cca:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004e7ccc:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004e7ccf:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004e7cd1:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e7cd4:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004e7cd7:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004e7cd9:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e7cdc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004e7cde:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004e7ce0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e7ce1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e7ce2:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e7ce3:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e7ce4:  // add esp, 0xbc
    t0 = ladd<32>(esp, 0xbcu, f);
    esp = (uint32_t)(t0);
L_004e7cea:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e7110, 004e7110)
