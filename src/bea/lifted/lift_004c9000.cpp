// lifted from 004c9000 (vslot11, 6956 bytes, 1864 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004c9000(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004c9000;
L_004c9000:  // sub esp, 0x150
    t0 = lsub<32>(esp, 0x150u, f);
    esp = (uint32_t)(t0);
L_004c9006:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004c9007:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9008:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004c9009:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c900a:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004c900c:  // call 0x4c7db0
    t0 = 0x004c7db0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9011u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9011:  // mov eax, dword ptr [ebx + 0x64]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004c9014:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c9016:  // je 0x4cab1f
    if (f.zf) goto L_004cab1f;
L_004c901c:  // mov ebp, dword ptr [esp + 0x164]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x164u)));
L_004c9023:  // mov eax, dword ptr [ebp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_004c9026:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c9028:  // je 0x4c9053
    if (f.zf) goto L_004c9053;
L_004c902a:  // cmp dword ptr [eax + 0xac], 0xbf800000
    t0 = lsub<32>(M32((uint32_t)(eax + 0xacu)), 0xbf800000u, f);
L_004c9034:  // je 0x4c9053
    if (f.zf) goto L_004c9053;
L_004c9036:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004c903c:  // fsub dword ptr [0x5ddba4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5ddba4u)));
L_004c9042:  // fcomp dword ptr [eax + 0xac]
    lcom(x, ST(0), (long double)F32((uint32_t)(eax + 0xacu)));
    lpop(x);
L_004c9048:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c904a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004c904d:  // je 0x4cab1f
    if (f.zf) goto L_004cab1f;
L_004c9053:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c9056:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004c9059:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c905a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c905b:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c905d:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c905f:  // lea ecx, [ebx + 0x74]
    ecx = (uint32_t)((uint32_t)(ebx + 0x74u));
L_004c9062:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c9064:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c9067:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c9069:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c906b:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9070u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9070:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_004c9077:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c907a:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004c907d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c907e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c907f:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c9081:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c9083:  // lea ecx, [ebx + 0x7c]
    ecx = (uint32_t)((uint32_t)(ebx + 0x7cu));
L_004c9086:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c9088:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c908b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c908d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c908f:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9094u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9094:  // fstp dword ptr [esp + 0xf0]
    F32((uint32_t)(esp + 0xf0u)) = lf32(ST(0));
    lpop(x);
L_004c909b:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c909e:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004c90a1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c90a2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c90a3:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c90a5:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c90a7:  // lea ecx, [ebx + 0x84]
    ecx = (uint32_t)((uint32_t)(ebx + 0x84u));
L_004c90ad:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c90af:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c90b2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c90b4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c90b6:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c90bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c90bb:  // fstp dword ptr [esp + 0x98]
    F32((uint32_t)(esp + 0x98u)) = lf32(ST(0));
    lpop(x);
L_004c90c2:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c90c5:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004c90c8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c90c9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c90ca:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c90cc:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c90ce:  // lea ecx, [ebx + 0x8c]
    ecx = (uint32_t)((uint32_t)(ebx + 0x8cu));
L_004c90d4:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c90d6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c90d9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c90db:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c90dd:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c90e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c90e2:  // mov esi, dword ptr [ebx + 0x70]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x70u)));
L_004c90e5:  // mov byte ptr [esp + 0x78], 0xff
    M8((uint32_t)(esp + 0x78u)) = (uint8_t)(0xffu);
L_004c90ea:  // fstp dword ptr [esp + 0xfc]
    F32((uint32_t)(esp + 0xfcu)) = lf32(ST(0));
    lpop(x);
L_004c90f1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c90f3:  // mov byte ptr [esp + 0x7c], 0xff
    M8((uint32_t)(esp + 0x7cu)) = (uint8_t)(0xffu);
L_004c90f8:  // mov byte ptr [esp + 0x74], 0xff
    M8((uint32_t)(esp + 0x74u)) = (uint8_t)(0xffu);
L_004c90fd:  // je 0x4c940e
    if (f.zf) goto L_004c940e;
L_004c9103:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c9106:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004c910c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c910e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c9110:  // fsub dword ptr [ebp + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x60u)));
L_004c9113:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_004c9115:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004c9119:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c911b:  // je 0x4c92e7
    if (f.zf) goto L_004c92e7;
L_004c9121:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004c9125:  // fcomp dword ptr [esi + 0xac]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0xacu)));
    lpop(x);
L_004c912b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004c912f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c9131:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004c9134:  // je 0x4c9208
    if (f.zf) goto L_004c9208;
L_004c913a:  // fdiv dword ptr [esi + 0xac]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esi + 0xacu)));
L_004c9140:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9141:  // lea ecx, [esi + 0x8c]
    ecx = (uint32_t)((uint32_t)(esi + 0x8cu));
L_004c9147:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004c914b:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c9151:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c9155:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c9159:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c915a:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004c915e:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9163u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9163:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004c9167:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9168:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9169:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c916c:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c9170:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9175u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9175:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9179:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c917a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c917b:  // lea ecx, [esi + 0x94]
    ecx = (uint32_t)((uint32_t)(esi + 0x94u));
L_004c9181:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9185:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c918b:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c918f:  // mov al, byte ptr [esp + 0x44]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c9193:  // mov byte ptr [esp + 0x80], al
    M8((uint32_t)(esp + 0x80u)) = (uint8_t)((eax & 0xffu));
L_004c919a:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c919fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c919f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c91a0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c91a1:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c91a4:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004c91a8:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c91ac:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c91b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c91b1:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c91b5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c91b6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c91b7:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c91bb:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c91c1:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c91c5:  // mov cl, byte ptr [esp + 0x44]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c91c9:  // mov byte ptr [esp + 0x84], cl
    M8((uint32_t)(esp + 0x84u)) = (uint8_t)((ecx & 0xffu));
L_004c91d0:  // lea ecx, [esi + 0x9c]
    ecx = (uint32_t)((uint32_t)(esi + 0x9cu));
L_004c91d6:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c91dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c91db:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c91dc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c91dd:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c91e0:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004c91e4:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c91e8:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c91edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c91ed:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c91f1:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c91f5:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c91fb:  // fistp qword ptr [esp + 0x3c]
    M64((uint32_t)(esp + 0x3cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c91ff:  // mov dl, byte ptr [esp + 0x3c]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x3cu))) & 0xffu);
L_004c9203:  // jmp 0x4c940a
    goto L_004c940a;
L_004c9208:  // fsub dword ptr [esi + 0xac]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xacu)));
L_004c920e:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c9214:  // fsub dword ptr [esi + 0xac]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xacu)));
L_004c921a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c921b:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c921e:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_004c9220:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004c9224:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c922a:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c922e:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c9232:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9233:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004c9237:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c923cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c923c:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004c9240:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9241:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9242:  // lea ecx, [esi + 0x8c]
    ecx = (uint32_t)((uint32_t)(esi + 0x8cu));
L_004c9248:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c924c:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9251u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9251:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9255:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9256:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9257:  // lea ecx, [esi + 0x7c]
    ecx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004c925a:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c925e:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9264:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9268:  // mov al, byte ptr [esp + 0x44]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c926c:  // mov byte ptr [esp + 0x80], al
    M8((uint32_t)(esp + 0x80u)) = (uint8_t)((eax & 0xffu));
L_004c9273:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9278u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9278:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9279:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c927a:  // lea ecx, [esi + 0x94]
    ecx = (uint32_t)((uint32_t)(esi + 0x94u));
L_004c9280:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004c9284:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c9288:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c928du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c928d:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9291:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9292:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9293:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9297:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c929d:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c92a1:  // mov cl, byte ptr [esp + 0x44]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c92a5:  // mov byte ptr [esp + 0x84], cl
    M8((uint32_t)(esp + 0x84u)) = (uint8_t)((ecx & 0xffu));
L_004c92ac:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004c92b2:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c92b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c92b7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c92b8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c92b9:  // lea ecx, [esi + 0x9c]
    ecx = (uint32_t)((uint32_t)(esi + 0x9cu));
L_004c92bf:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004c92c3:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c92c7:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c92ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c92cc:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c92d0:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c92d4:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c92da:  // fistp qword ptr [esp + 0x3c]
    M64((uint32_t)(esp + 0x3cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c92de:  // mov dl, byte ptr [esp + 0x3c]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x3cu))) & 0xffu);
L_004c92e2:  // jmp 0x4c940a
    goto L_004c940a;
L_004c92e7:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004c92ed:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c92ef:  // je 0x4c93b0
    if (f.zf) goto L_004c93b0;
L_004c92f5:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c92fb:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_004c92ff:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c9303:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9304:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9305:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c9308:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004c930c:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9311u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9311:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004c9315:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9316:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9317:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c931a:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c931e:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9323u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9323:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9327:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9328:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9329:  // lea ecx, [esi + 0x7c]
    ecx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004c932c:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9330:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9336:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c933a:  // mov al, byte ptr [esp + 0x44]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c933e:  // mov byte ptr [esp + 0x80], al
    M8((uint32_t)(esp + 0x80u)) = (uint8_t)((eax & 0xffu));
L_004c9345:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c934au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c934a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c934b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c934c:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c934f:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004c9353:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c9357:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c935cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c935c:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9360:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9361:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9362:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9366:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c936c:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9370:  // mov cl, byte ptr [esp + 0x44]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c9374:  // mov byte ptr [esp + 0x84], cl
    M8((uint32_t)(esp + 0x84u)) = (uint8_t)((ecx & 0xffu));
L_004c937b:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004c9381:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9386u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9386:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9387:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9388:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c938b:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004c938f:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c9393:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9398u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9398:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c939c:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c93a0:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c93a6:  // fistp qword ptr [esp + 0x3c]
    M64((uint32_t)(esp + 0x3cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c93aa:  // mov dl, byte ptr [esp + 0x3c]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x3cu))) & 0xffu);
L_004c93ae:  // jmp 0x4c940a
    goto L_004c940a;
L_004c93b0:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c93b4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c93b5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c93b6:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c93b9:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c93beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c93be:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c93c4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c93c5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c93c6:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c93c9:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c93cd:  // mov al, byte ptr [esp + 0x44]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c93d1:  // mov byte ptr [esp + 0x80], al
    M8((uint32_t)(esp + 0x80u)) = (uint8_t)((eax & 0xffu));
L_004c93d8:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c93ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c93dd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c93de:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c93df:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c93e5:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c93e9:  // mov cl, byte ptr [esp + 0x44]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c93ed:  // mov byte ptr [esp + 0x84], cl
    M8((uint32_t)(esp + 0x84u)) = (uint8_t)((ecx & 0xffu));
L_004c93f4:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c93f7:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c93fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c93fc:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9402:  // fistp qword ptr [esp + 0x3c]
    M64((uint32_t)(esp + 0x3cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9406:  // mov dl, byte ptr [esp + 0x3c]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x3cu))) & 0xffu);
L_004c940a:  // mov byte ptr [esp + 0x74], dl
    M8((uint32_t)(esp + 0x74u)) = (uint8_t)((edx & 0xffu));
L_004c940e:  // lea eax, [ebp + 0x38]
    eax = (uint32_t)((uint32_t)(ebp + 0x38u));
L_004c9411:  // lea esi, [ebp + 8]
    esi = (uint32_t)((uint32_t)(ebp + 0x8u));
L_004c9414:  // lea edi, [esp + 0xb0]
    edi = (uint32_t)((uint32_t)(esp + 0xb0u));
L_004c941b:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004c941d:  // mov dword ptr [esp + 0x80], ecx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(ecx);
L_004c9424:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004c9427:  // mov dword ptr [esp + 0x84], edx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(edx);
L_004c942e:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004c9431:  // mov dword ptr [esp + 0x88], ecx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(ecx);
L_004c9438:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004c943d:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004c9440:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004c9442:  // mov esi, dword ptr [ebp + 0x58]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_004c9445:  // mov dword ptr [esp + 0x8c], edx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edx);
L_004c944c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c944e:  // je 0x4c96e0
    if (f.zf) goto L_004c96e0;
L_004c9454:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_004c945a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c945c:  // je 0x4c96a2
    if (f.zf) goto L_004c96a2;
L_004c9462:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004c9469:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004c946c:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004c9473:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004c9476:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9478:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004c947f:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004c9482:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9484:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004c9488:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004c948f:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004c9492:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004c9499:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004c949c:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004c94a0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c94a2:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004c94a9:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004c94ac:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c94ae:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004c94b2:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004c94b9:  // fmul dword ptr [esi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x38u)));
L_004c94bc:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004c94c3:  // fmul dword ptr [esi + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x34u)));
L_004c94c6:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004c94ca:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c94cc:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004c94d3:  // fmul dword ptr [esi + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x30u)));
L_004c94d6:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_004c94dd:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004c94e1:  // mov dword ptr [esp + 0x84], ecx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(ecx);
L_004c94e8:  // lea ecx, [esp + 0xe0]
    ecx = (uint32_t)((uint32_t)(esp + 0xe0u));
L_004c94ef:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c94f1:  // mov dword ptr [esp + 0x8c], eax
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(eax);
L_004c94f8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c94f9:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_004c94fd:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_004c9504:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004c9507:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_004c950e:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004c9511:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004c9515:  // mov dword ptr [esp + 0x8c], edx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(edx);
L_004c951c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c951e:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004c9525:  // fmul dword ptr [esi + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x30u)));
L_004c9528:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c952a:  // fstp dword ptr [esp + 0xe4]
    F32((uint32_t)(esp + 0xe4u)) = lf32(ST(0));
    lpop(x);
L_004c9531:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_004c9538:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004c953b:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_004c9542:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004c9545:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9547:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004c954e:  // fmul dword ptr [esi + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x34u)));
L_004c9551:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9553:  // fstp dword ptr [esp + 0xe8]
    F32((uint32_t)(esp + 0xe8u)) = lf32(ST(0));
    lpop(x);
L_004c955a:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_004c9561:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004c9564:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_004c956b:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004c956e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9570:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004c9577:  // fmul dword ptr [esi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x38u)));
L_004c957a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c957c:  // fstp dword ptr [esp + 0xec]
    F32((uint32_t)(esp + 0xecu)) = lf32(ST(0));
    lpop(x);
L_004c9583:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004c958a:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004c958d:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004c9594:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004c9597:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9598:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c959a:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_004c95a1:  // fmul dword ptr [esi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x38u)));
L_004c95a4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c95a6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c95a9:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004c95b0:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004c95b3:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004c95ba:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004c95bd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c95be:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c95c0:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_004c95c7:  // fmul dword ptr [esi + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x34u)));
L_004c95ca:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c95cc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c95cf:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004c95d6:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004c95d9:  // fld dword ptr [esp + 0xd0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd0u)));
L_004c95e0:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004c95e3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c95e4:  // lea ecx, [esp + 0x120]
    ecx = (uint32_t)((uint32_t)(esp + 0x120u));
L_004c95eb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c95ed:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_004c95f4:  // fmul dword ptr [esi + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x30u)));
L_004c95f7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c95f9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c95fc:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9601u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9601:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_004c9608:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004c960b:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_004c9612:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004c9615:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c9616:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9617:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9619:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004c9620:  // fmul dword ptr [esi + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x38u)));
L_004c9623:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9625:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c9628:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_004c962f:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004c9632:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004c9639:  // fmul dword ptr [esi + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x34u)));
L_004c963c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c963d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c963f:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_004c9646:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004c9649:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c964b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c964e:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_004c9655:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004c9658:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004c965f:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004c9662:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9663:  // lea ecx, [esp + 0x134]
    ecx = (uint32_t)((uint32_t)(esp + 0x134u));
L_004c966a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c966c:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004c9673:  // fmul dword ptr [esi + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x30u)));
L_004c9676:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9678:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c967b:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9680u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9680:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004c9681:  // lea ecx, [esp + 0x13c]
    ecx = (uint32_t)((uint32_t)(esp + 0x13cu));
L_004c9688:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c968du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c968d:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004c9692:  // lea esi, [esp + 0x130]
    esi = (uint32_t)((uint32_t)(esp + 0x130u));
L_004c9699:  // lea edi, [esp + 0xb0]
    edi = (uint32_t)((uint32_t)(esp + 0xb0u));
L_004c96a0:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004c96a2:  // mov eax, dword ptr [ebp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_004c96a5:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004c96ac:  // fadd dword ptr [eax + 0x80]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x80u)));
L_004c96b2:  // add eax, 0x80
    t0 = ladd<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_004c96b7:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_004c96be:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004c96c5:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004c96c8:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004c96cf:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004c96d6:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004c96d9:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_004c96e0:  // mov edx, dword ptr [0x89ce4c]
    edx = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_004c96e6:  // mov ecx, dword ptr [edx*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(edx * 4u + 0x89c9a4u)));
L_004c96ed:  // lea edx, [esp + 0x100]
    edx = (uint32_t)((uint32_t)(esp + 0x100u));
L_004c96f4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004c96f5:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004c96f7:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c96f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c96f9:  // mov eax, dword ptr [ebx + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x5cu)));
L_004c96fc:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004c96ff:  // je 0x4ca24a
    if (f.zf) goto L_004ca24a;
L_004c9705:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004c9706:  // jne 0x4cab1f
    if (!f.zf) goto L_004cab1f;
L_004c970c:  // mov ecx, dword ptr [ebx + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004c970f:  // call 0x5501d0
    t0 = 0x005501d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9714u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9714:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c9717:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004c971a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c971b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c971c:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c971e:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c9720:  // lea ecx, [ebx + 0xdc]
    ecx = (uint32_t)((uint32_t)(ebx + 0xdcu));
L_004c9726:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_004c972a:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c972c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c972f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c9731:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c9733:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9738u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9738:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_004c973f:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c9742:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004c9745:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9746:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9747:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c9749:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c974b:  // lea ecx, [ebx + 0xbc]
    ecx = (uint32_t)((uint32_t)(ebx + 0xbcu));
L_004c9751:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c9753:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c9756:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c9758:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c975a:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c975fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c975f:  // fmul dword ptr [0x5dc7b0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dc7b0u)));
L_004c9765:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9766:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9767:  // lea ecx, [ebx + 0xc4]
    ecx = (uint32_t)((uint32_t)(ebx + 0xc4u));
L_004c976d:  // fsub dword ptr [0x5d85e4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e4u)));
L_004c9773:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004c9777:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c977a:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004c977d:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c977f:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c9781:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c9783:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c9786:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c9788:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c978a:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c978fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c978f:  // fmul dword ptr [0x5dc7b0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dc7b0u)));
L_004c9795:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9796:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9797:  // lea ecx, [ebx + 0xcc]
    ecx = (uint32_t)((uint32_t)(ebx + 0xccu));
L_004c979d:  // fsub dword ptr [0x5d85e4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e4u)));
L_004c97a3:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004c97a7:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c97aa:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004c97ad:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c97af:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c97b1:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c97b3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c97b6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c97b8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c97ba:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c97bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c97bf:  // fmul dword ptr [0x5dc7b0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dc7b0u)));
L_004c97c5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c97c6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c97c7:  // fstp dword ptr [esp + 0x100]
    F32((uint32_t)(esp + 0x100u)) = lf32(ST(0));
    lpop(x);
L_004c97ce:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004c97d1:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004c97d4:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004c97d6:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004c97d8:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004c97da:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c97dd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c97df:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c97e1:  // lea ecx, [ebx + 0xd4]
    ecx = (uint32_t)((uint32_t)(ebx + 0xd4u));
L_004c97e7:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c97ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c97ec:  // fmul dword ptr [0x5dc7b0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dc7b0u)));
L_004c97f2:  // mov ecx, dword ptr [ebx + 0xb8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xb8u)));
L_004c97f8:  // mov eax, dword ptr [ebx + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb4u)));
L_004c97fe:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004c9802:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_004c9804:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004c9808:  // fld dword ptr [esp + 0x104]
    lpush(x, (long double)F32((uint32_t)(esp + 0x104u)));
L_004c980f:  // fsub dword ptr [esp + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x84u)));
L_004c9816:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004c981b:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004c981f:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004c9823:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_004c982a:  // fsub dword ptr [esp + 0x88]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x88u)));
L_004c9831:  // fld dword ptr [esp + 0x10c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10cu)));
L_004c9838:  // fsub dword ptr [esp + 0x8c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x8cu)));
L_004c983f:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_004c9843:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004c9847:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_004c984b:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c984f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c9851:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c9853:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004c9857:  // fmul dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x5cu)));
L_004c985b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c985d:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9861:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004c9865:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004c9869:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c986b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004c986d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004c986f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004c9871:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9873:  // fadd dword ptr [esp + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x24u)));
L_004c9877:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004c9879:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004c987b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c987d:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004c9881:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_004c9888:  // fmul dword ptr [esp + 0x98]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x98u)));
L_004c988f:  // fdiv dword ptr [esp + 0x20]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x20u)));
L_004c9893:  // fmul dword ptr [0x630e0c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x630e0cu)));
L_004c9899:  // fmul dword ptr [0x5ddac4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac4u)));
L_004c989f:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004c98a3:  // call 0x515970
    t0 = 0x00515970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c98a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c98a8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c98aa:  // jne 0x4c9978
    if (!f.zf) goto L_004c9978;
L_004c98b0:  // mov eax, dword ptr [0x9c648c]
    eax = (uint32_t)(M32((uint32_t)(0x9c648cu)));
L_004c98b5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c98b7:  // je 0x4c9978
    if (f.zf) goto L_004c9978;
L_004c98bd:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004c98c2:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c98c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c98c7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c98c9:  // jne 0x4c9978
    if (!f.zf) goto L_004c9978;
L_004c98cf:  // cmp byte ptr [ebx + 5], 0x65
    t0 = lsub<8>(M8((uint32_t)(ebx + 0x5u)), 0x65u, f);
L_004c98d3:  // jne 0x4c9978
    if (!f.zf) goto L_004c9978;
L_004c98d9:  // cmp byte ptr [ebx + 9], 0x50
    t0 = lsub<8>(M8((uint32_t)(ebx + 0x9u)), 0x50u, f);
L_004c98dd:  // jne 0x4c9978
    if (!f.zf) goto L_004c9978;
L_004c98e3:  // mov al, byte ptr [ebx + 0x1a]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x1au))) & 0xffu);
L_004c98e6:  // cmp al, 0x41
    t0 = lsub<8>((eax & 0xffu), 0x41u, f);
L_004c98e8:  // je 0x4c98f2
    if (f.zf) goto L_004c98f2;
L_004c98ea:  // cmp al, 0x4c
    t0 = lsub<8>((eax & 0xffu), 0x4cu, f);
L_004c98ec:  // jne 0x4c9978
    if (!f.zf) goto L_004c9978;
L_004c98f2:  // lea ecx, [ebx + 4]
    ecx = (uint32_t)((uint32_t)(ebx + 0x4u));
L_004c98f5:  // mov edi, 0x630e40
    edi = (uint32_t)(0x630e40u);
L_004c98fa:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c98fc:  // mov dl, byte ptr [esi]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_004c98fe:  // mov al, dl
    eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004c9900:  // cmp dl, byte ptr [edi]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(edi)), f);
L_004c9902:  // jne 0x4c9920
    if (!f.zf) goto L_004c9920;
L_004c9904:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004c9906:  // je 0x4c991c
    if (f.zf) goto L_004c991c;
L_004c9908:  // mov dl, byte ptr [esi + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x1u))) & 0xffu);
L_004c990b:  // mov al, dl
    eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004c990d:  // cmp dl, byte ptr [edi + 1]
    t0 = lsub<8>((edx & 0xffu), M8((uint32_t)(edi + 0x1u)), f);
L_004c9910:  // jne 0x4c9920
    if (!f.zf) goto L_004c9920;
L_004c9912:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004c9915:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_004c9918:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004c991a:  // jne 0x4c98fc
    if (!f.zf) goto L_004c98fc;
L_004c991c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c991e:  // jmp 0x4c9925
    goto L_004c9925;
L_004c9920:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004c9922:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004c9925:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c9927:  // je 0x4c9961
    if (f.zf) goto L_004c9961;
L_004c9929:  // mov edi, 0x630e24
    edi = (uint32_t)(0x630e24u);
L_004c992e:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004c9930:  // mov cl, byte ptr [esi]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_004c9932:  // mov dl, byte ptr [edi]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi))) & 0xffu);
L_004c9934:  // mov al, cl
    eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_004c9936:  // cmp cl, dl
    t0 = lsub<8>((ecx & 0xffu), (edx & 0xffu), f);
L_004c9938:  // jne 0x4c9958
    if (!f.zf) goto L_004c9958;
L_004c993a:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004c993c:  // je 0x4c9954
    if (f.zf) goto L_004c9954;
L_004c993e:  // mov dl, byte ptr [esi + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x1u))) & 0xffu);
L_004c9941:  // mov cl, byte ptr [edi + 1]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x1u))) & 0xffu);
L_004c9944:  // mov al, dl
    eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_004c9946:  // cmp dl, cl
    t0 = lsub<8>((edx & 0xffu), (ecx & 0xffu), f);
L_004c9948:  // jne 0x4c9958
    if (!f.zf) goto L_004c9958;
L_004c994a:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004c994d:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_004c9950:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004c9952:  // jne 0x4c9930
    if (!f.zf) goto L_004c9930;
L_004c9954:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004c9956:  // jmp 0x4c995d
    goto L_004c995d;
L_004c9958:  // sbb eax, eax
    t0 = lsbb<32>(eax, eax, f);
    eax = (uint32_t)(t0);
L_004c995a:  // sbb eax, -1
    t0 = lsbb<32>(eax, 0xffffffffu, f);
    eax = (uint32_t)(t0);
L_004c995d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c995f:  // jne 0x4c9978
    if (!f.zf) goto L_004c9978;
L_004c9961:  // mov eax, 0x32
    eax = (uint32_t)(0x32u);
L_004c9966:  // mov byte ptr [esp + 0x3b], 1
    M8((uint32_t)(esp + 0x3bu)) = (uint8_t)(0x1u);
L_004c996b:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004c996f:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004c9973:  // jmp 0x4c9a2f
    goto L_004c9a2f;
L_004c9978:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004c997c:  // fcomp dword ptr [0x5d85cc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ccu)));
    lpop(x);
L_004c9982:  // mov byte ptr [esp + 0x3b], 0
    M8((uint32_t)(esp + 0x3bu)) = (uint8_t)(0x0u);
L_004c9987:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c9989:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004c998c:  // je 0x4c99d4
    if (f.zf) goto L_004c99d4;
L_004c998e:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c9992:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_004c9995:  // jle 0x4c99b9
    if ((f.zf || f.sf != f.of)) goto L_004c99b9;
L_004c9997:  // mov eax, 0x55555556
    eax = (uint32_t)(0x55555556u);
L_004c999c:  // imul esi
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)esi; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004c999e:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004c99a0:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_004c99a3:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004c99a5:  // mov esi, edx
    esi = (uint32_t)(edx);
L_004c99a7:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_004c99aa:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_004c99ae:  // jge 0x4c99b9
    if ((f.sf == f.of)) goto L_004c99b9;
L_004c99b0:  // mov esi, 4
    esi = (uint32_t)(0x4u);
L_004c99b5:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_004c99b9:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c99bd:  // cmp ecx, 4
    t0 = lsub<32>(ecx, 0x4u, f);
L_004c99c0:  // jle 0x4c9a37
    if ((f.zf || f.sf != f.of)) goto L_004c9a37;
L_004c99c2:  // mov eax, 0x55555556
    eax = (uint32_t)(0x55555556u);
L_004c99c7:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004c99c9:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004c99cb:  // shr ecx, 0x1f
    t0 = lshr<32>(ecx, 0x1fu, f);
    ecx = (uint32_t)(t0);
L_004c99ce:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_004c99d0:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004c99d2:  // jmp 0x4c9a1b
    goto L_004c9a1b;
L_004c99d4:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004c99d8:  // fcomp dword ptr [0x5db1e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db1e4u)));
    lpop(x);
L_004c99de:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c99e0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004c99e3:  // je 0x4c9a2f
    if (f.zf) goto L_004c9a2f;
L_004c99e5:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c99e9:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_004c99ec:  // jle 0x4c9a09
    if ((f.zf || f.sf != f.of)) goto L_004c9a09;
L_004c99ee:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004c99f0:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004c99f1:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004c99f3:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004c99f5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004c99f7:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_004c99fa:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_004c99fe:  // jge 0x4c9a09
    if ((f.sf == f.of)) goto L_004c9a09;
L_004c9a00:  // mov esi, 4
    esi = (uint32_t)(0x4u);
L_004c9a05:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_004c9a09:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c9a0d:  // cmp ecx, 4
    t0 = lsub<32>(ecx, 0x4u, f);
L_004c9a10:  // jle 0x4c9a37
    if ((f.zf || f.sf != f.of)) goto L_004c9a37;
L_004c9a12:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004c9a14:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004c9a15:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004c9a17:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004c9a19:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004c9a1b:  // cmp ecx, 4
    t0 = lsub<32>(ecx, 0x4u, f);
L_004c9a1e:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004c9a22:  // jge 0x4c9a37
    if ((f.sf == f.of)) goto L_004c9a37;
L_004c9a24:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_004c9a29:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004c9a2d:  // jmp 0x4c9a37
    goto L_004c9a37;
L_004c9a2f:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c9a33:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004c9a37:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_004c9a3b:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004c9a3f:  // lea eax, [esi + 1]
    eax = (uint32_t)((uint32_t)(esi + 0x1u));
L_004c9a42:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c9a44:  // fstp dword ptr [esp + 0xf4]
    F32((uint32_t)(esp + 0xf4u)) = lf32(ST(0));
    lpop(x);
L_004c9a4b:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004c9a4f:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004c9a53:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_004c9a5b:  // mov dword ptr [esp + 0x68], edx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(edx);
L_004c9a5f:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004c9a63:  // fdiv dword ptr [esp + 0xf4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xf4u)));
L_004c9a6a:  // fstp dword ptr [esp + 0xa8]
    F32((uint32_t)(esp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_004c9a71:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004c9a75:  // fstp dword ptr [esp + 0xa0]
    F32((uint32_t)(esp + 0xa0u)) = lf32(ST(0));
    lpop(x);
L_004c9a7c:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004c9a80:  // fsub dword ptr [esp + 0xf8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xf8u)));
L_004c9a87:  // fdiv dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xa0u)));
L_004c9a8e:  // fstp dword ptr [esp + 0xa4]
    F32((uint32_t)(esp + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_004c9a95:  // jle 0x4ca1cd
    if ((f.zf || f.sf != f.of)) goto L_004ca1cd;
L_004c9a9b:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004c9a9c:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004c9aa0:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004c9aa4:  // mov esi, dword ptr [ebx + 0x6c]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x6cu)));
L_004c9aa7:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004c9aa9:  // fdiv dword ptr [esp + 0xf4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xf4u)));
L_004c9ab0:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_004c9ab4:  // fmul dword ptr [esp + 0xf0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf0u)));
L_004c9abb:  // fadd dword ptr [esp + 0xfc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xfcu)));
L_004c9ac2:  // fstp dword ptr [esp + 0xac]
    F32((uint32_t)(esp + 0xacu)) = lf32(ST(0));
    lpop(x);
L_004c9ac9:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004c9acd:  // fsin 
    ST(0) = lfsin(ST(0));
L_004c9acf:  // fmul dword ptr [esp + 0x94]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x94u)));
L_004c9ad6:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004c9ada:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004c9ade:  // fcos 
    ST(0) = lfcos(ST(0));
L_004c9ae0:  // fmul dword ptr [esp + 0x94]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x94u)));
L_004c9ae7:  // fstp dword ptr [esp + 0x9c]
    F32((uint32_t)(esp + 0x9cu)) = lf32(ST(0));
    lpop(x);
L_004c9aee:  // je 0x4c9e3f
    if (f.zf) goto L_004c9e3f;
L_004c9af4:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004c9afa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c9afc:  // je 0x4c9cbc
    if (f.zf) goto L_004c9cbc;
L_004c9b02:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004c9b06:  // fcomp dword ptr [esi + 0xac]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0xacu)));
    lpop(x);
L_004c9b0c:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004c9b10:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004c9b12:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004c9b15:  // je 0x4c9be3
    if (f.zf) goto L_004c9be3;
L_004c9b1b:  // fdiv dword ptr [esi + 0xac]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esi + 0xacu)));
L_004c9b21:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9b22:  // lea ecx, [esi + 0x8c]
    ecx = (uint32_t)((uint32_t)(esi + 0x8cu));
L_004c9b28:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004c9b2c:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c9b32:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004c9b36:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c9b3a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9b3b:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004c9b3f:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9b44u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9b44:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c9b48:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9b49:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9b4a:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c9b4d:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9b51:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9b56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9b56:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004c9b5a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9b5b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9b5c:  // lea ecx, [esi + 0x94]
    ecx = (uint32_t)((uint32_t)(esi + 0x94u));
L_004c9b62:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9b66:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9b6c:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9b70:  // mov al, byte ptr [esp + 0x4c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4cu))) & 0xffu);
L_004c9b74:  // mov byte ptr [esp + 0x68], al
    M8((uint32_t)(esp + 0x68u)) = (uint8_t)((eax & 0xffu));
L_004c9b78:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9b7du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9b7d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9b7e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9b7f:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c9b82:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c9b86:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9b8a:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9b8fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9b8f:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004c9b93:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9b94:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9b95:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9b99:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9b9f:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9ba3:  // mov cl, byte ptr [esp + 0x4c]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4cu))) & 0xffu);
L_004c9ba7:  // mov byte ptr [esp + 0x78], cl
    M8((uint32_t)(esp + 0x78u)) = (uint8_t)((ecx & 0xffu));
L_004c9bab:  // lea ecx, [esi + 0x9c]
    ecx = (uint32_t)((uint32_t)(esi + 0x9cu));
L_004c9bb1:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9bb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9bb6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9bb7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9bb8:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c9bbb:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004c9bbf:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9bc3:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9bc8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9bc8:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004c9bcc:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004c9bd0:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9bd6:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9bda:  // mov dl, byte ptr [esp + 0x44]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c9bde:  // jmp 0x4c9dd3
    goto L_004c9dd3;
L_004c9be3:  // fsub dword ptr [esi + 0xac]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xacu)));
L_004c9be9:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c9bef:  // fsub dword ptr [esi + 0xac]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xacu)));
L_004c9bf5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9bf6:  // lea ecx, [esi + 0x8c]
    ecx = (uint32_t)((uint32_t)(esi + 0x8cu));
L_004c9bfc:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_004c9bfe:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004c9c02:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c9c08:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004c9c0c:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004c9c10:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9c11:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004c9c15:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9c1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9c1a:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004c9c1e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9c1f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9c20:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c9c23:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9c27:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9c2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9c2c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c9c30:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9c31:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9c32:  // lea ecx, [esi + 0x94]
    ecx = (uint32_t)((uint32_t)(esi + 0x94u));
L_004c9c38:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9c3c:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9c42:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9c46:  // mov al, byte ptr [esp + 0x4c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4cu))) & 0xffu);
L_004c9c4a:  // mov byte ptr [esp + 0x68], al
    M8((uint32_t)(esp + 0x68u)) = (uint8_t)((eax & 0xffu));
L_004c9c4e:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9c53u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9c53:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9c54:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9c55:  // lea ecx, [esi + 0x7c]
    ecx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004c9c58:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004c9c5c:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9c60:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9c65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9c65:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c9c69:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9c6a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9c6b:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9c6f:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9c75:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9c79:  // mov cl, byte ptr [esp + 0x4c]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4cu))) & 0xffu);
L_004c9c7d:  // mov byte ptr [esp + 0x78], cl
    M8((uint32_t)(esp + 0x78u)) = (uint8_t)((ecx & 0xffu));
L_004c9c81:  // lea ecx, [esi + 0x9c]
    ecx = (uint32_t)((uint32_t)(esi + 0x9cu));
L_004c9c87:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9c8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9c8c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9c8d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9c8e:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004c9c94:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004c9c98:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9c9c:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9ca1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9ca1:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c9ca5:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004c9ca9:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9caf:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9cb3:  // mov dl, byte ptr [esp + 0x44]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c9cb7:  // jmp 0x4c9dd3
    goto L_004c9dd3;
L_004c9cbc:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004c9cc2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c9cc4:  // je 0x4c9d7f
    if (f.zf) goto L_004c9d7f;
L_004c9cca:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004c9cd0:  // fsub dword ptr [esp + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c9cd4:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c9cd8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9cd9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9cda:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c9cdd:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004c9ce1:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9ce6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9ce6:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004c9cea:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9ceb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9cec:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004c9cef:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9cf3:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9cf8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9cf8:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c9cfc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9cfd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9cfe:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c9d01:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9d05:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9d0b:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9d0f:  // mov al, byte ptr [esp + 0x4c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4cu))) & 0xffu);
L_004c9d13:  // mov byte ptr [esp + 0x68], al
    M8((uint32_t)(esp + 0x68u)) = (uint8_t)((eax & 0xffu));
L_004c9d17:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9d1cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9d1c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9d1d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9d1e:  // lea ecx, [esi + 0x7c]
    ecx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004c9d21:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004c9d25:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9d29:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9d2eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9d2e:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c9d32:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9d33:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9d34:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9d38:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9d3e:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9d42:  // mov cl, byte ptr [esp + 0x4c]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4cu))) & 0xffu);
L_004c9d46:  // mov byte ptr [esp + 0x78], cl
    M8((uint32_t)(esp + 0x78u)) = (uint8_t)((ecx & 0xffu));
L_004c9d4a:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c9d4d:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9d52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9d52:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9d53:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9d54:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004c9d5a:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004c9d5e:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9d62:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9d67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9d67:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_004c9d6b:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004c9d6f:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9d75:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9d79:  // mov dl, byte ptr [esp + 0x44]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c9d7d:  // jmp 0x4c9dd3
    goto L_004c9dd3;
L_004c9d7f:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004c9d83:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9d84:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9d85:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004c9d88:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9d8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9d8d:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9d93:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9d94:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9d95:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004c9d98:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9d9c:  // mov al, byte ptr [esp + 0x4c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4cu))) & 0xffu);
L_004c9da0:  // mov byte ptr [esp + 0x68], al
    M8((uint32_t)(esp + 0x68u)) = (uint8_t)((eax & 0xffu));
L_004c9da4:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9da9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9da9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004c9daa:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9dab:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9db1:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9db5:  // mov cl, byte ptr [esp + 0x4c]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4cu))) & 0xffu);
L_004c9db9:  // mov byte ptr [esp + 0x78], cl
    M8((uint32_t)(esp + 0x78u)) = (uint8_t)((ecx & 0xffu));
L_004c9dbd:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004c9dc0:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9dc5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9dc5:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004c9dcb:  // fistp qword ptr [esp + 0x44]
    M64((uint32_t)(esp + 0x44u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004c9dcf:  // mov dl, byte ptr [esp + 0x44]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x44u))) & 0xffu);
L_004c9dd3:  // mov esi, dword ptr [esp + 0x60]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004c9dd7:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004c9ddb:  // mov ecx, dword ptr [esp + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004c9ddf:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_004c9de5:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c9dea:  // mov byte ptr [esp + 0x6c], dl
    M8((uint32_t)(esp + 0x6cu)) = (uint8_t)((edx & 0xffu));
L_004c9dee:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004c9df2:  // imul esi, eax
    t0 = limul32(esi, eax, f);
    esi = (uint32_t)(t0);
L_004c9df5:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_004c9dfb:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_004c9e01:  // imul ecx, edx
    t0 = limul32(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_004c9e04:  // sar esi, 8
    t0 = lsar<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004c9e07:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004c9e0b:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_004c9e11:  // add esi, 0xff00
    t0 = ladd<32>(esi, 0xff00u, f);
    esi = (uint32_t)(t0);
L_004c9e17:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c9e1c:  // sar ecx, 8
    t0 = lsar<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004c9e1f:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004c9e22:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_004c9e28:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_004c9e2a:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004c9e2e:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_004c9e34:  // imul eax, ecx
    t0 = limul32(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004c9e37:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004c9e3a:  // sar eax, 8
    t0 = lsar<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004c9e3d:  // jmp 0x4c9e65
    goto L_004c9e65;
L_004c9e3f:  // mov esi, dword ptr [esp + 0x78]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004c9e43:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004c9e47:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_004c9e4d:  // mov eax, dword ptr [esp + 0x74]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004c9e51:  // add esi, 0xff00
    t0 = ladd<32>(esi, 0xff00u, f);
    esi = (uint32_t)(t0);
L_004c9e57:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_004c9e5d:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004c9e60:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_004c9e62:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004c9e65:  // mov ecx, dword ptr [esp + 0xf8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf8u)));
L_004c9e6c:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004c9e71:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_004c9e73:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004c9e77:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004c9e79:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004c9e81:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004c9e85:  // jle 0x4ca1a9
    if ((f.zf || f.sf != f.of)) goto L_004ca1a9;
L_004c9e8b:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004c9e8f:  // mov al, byte ptr [esp + 0x3b]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x3bu))) & 0xffu);
L_004c9e93:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004c9e95:  // fdiv dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xa0u)));
L_004c9e9c:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004c9ea0:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004c9ea4:  // fcos 
    ST(0) = lfcos(ST(0));
L_004c9ea6:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004c9eaa:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004c9eae:  // fsin 
    ST(0) = lfsin(ST(0));
L_004c9eb0:  // fchs 
    ST(0) = -ST(0);
L_004c9eb2:  // fstp dword ptr [esp + 0x64]
    F32((uint32_t)(esp + 0x64u)) = lf32(ST(0));
    lpop(x);
L_004c9eb6:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004c9eba:  // fmul dword ptr [esp + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x9cu)));
L_004c9ec1:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004c9ec5:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004c9ec9:  // fmul dword ptr [esp + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x9cu)));
L_004c9ed0:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004c9ed4:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004c9ed8:  // je 0x4c9f6d
    if (f.zf) goto L_004c9f6d;
L_004c9ede:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004c9ee0:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004c9ee4:  // fmul dword ptr [0x5ddbac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddbacu)));
L_004c9eea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9eeb:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004c9ef1:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c9ef3:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9ef7:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004c9efb:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_004c9f02:  // fmul dword ptr [0x5d8604]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8604u)));
L_004c9f08:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004c9f0c:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_004c9f10:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9f14:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004c9f18:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004c9f1c:  // mov edi, dword ptr [esp + 0x68]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004c9f20:  // fchs 
    ST(0) = -ST(0);
L_004c9f22:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9f26:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c9f29:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9f2a:  // call 0x4cac80
    t0 = 0x004cac80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9f2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9f2f:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_004c9f33:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004c9f37:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004c9f3b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004c9f3e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004c9f3f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9f40:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c9f43:  // call 0x4cac80
    t0 = 0x004cac80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9f48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9f48:  // fmul dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x6cu)));
L_004c9f4c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004c9f4f:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004c9f55:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c9f57:  // fmul dword ptr [esp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x50u)));
L_004c9f5b:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004c9f5f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c9f61:  // fmul dword ptr [esp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x54u)));
L_004c9f65:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004c9f69:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004c9f6d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c9f6f:  // fmul dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd8u)));
L_004c9f76:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004c9f7a:  // fmul dword ptr [esp + 0xd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd0u)));
L_004c9f81:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9f82:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9f84:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004c9f88:  // fmul dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd8u)));
L_004c9f8f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9f91:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c9f94:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9f95:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004c9f97:  // fmul dword ptr [esp + 0xd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd0u)));
L_004c9f9e:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004c9fa2:  // fmul dword ptr [esp + 0xc8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc8u)));
L_004c9fa9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9fab:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004c9faf:  // fmul dword ptr [esp + 0xcc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xccu)));
L_004c9fb6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9fb8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c9fbb:  // fld dword ptr [esp + 0xb8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb8u)));
L_004c9fc2:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_004c9fc6:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004c9fc8:  // fmul dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc0u)));
L_004c9fcf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004c9fd0:  // lea ecx, [esp + 0x12c]
    ecx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_004c9fd7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9fd9:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004c9fdd:  // fmul dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc0u)));
L_004c9fe4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004c9fe6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004c9fe9:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004c9feeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004c9fee:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004c9ff5:  // fadd dword ptr [esp + 0x120]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x120u)));
L_004c9ffc:  // mov eax, dword ptr [esp + 0x120]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x120u)));
L_004ca003:  // mov ecx, dword ptr [esp + 0x124]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x124u)));
L_004ca00a:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_004ca00e:  // mov edx, dword ptr [esp + 0x128]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x128u)));
L_004ca015:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_004ca019:  // mov dword ptr [esp + 0x58], edx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edx);
L_004ca01d:  // fst dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
L_004ca021:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004ca028:  // fadd dword ptr [esp + 0x54]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x54u)));
L_004ca02c:  // mov edi, dword ptr [esp + 0x12c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x12cu)));
L_004ca033:  // mov dword ptr [esp + 0xe0], eax
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(eax);
L_004ca03a:  // mov dword ptr [esp + 0xe4], ecx
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(ecx);
L_004ca041:  // mov ecx, dword ptr [esp + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_004ca048:  // mov dword ptr [esp + 0xe8], edx
    M32((uint32_t)(esp + 0xe8u)) = (uint32_t)(edx);
L_004ca04f:  // mov dword ptr [esp + 0x5c], edi
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edi);
L_004ca053:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004ca057:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004ca05e:  // fadd dword ptr [esp + 0x58]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x58u)));
L_004ca062:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004ca066:  // mov dword ptr [esp + 0xec], edi
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(edi);
L_004ca06d:  // mov dword ptr [esp + 0x134], edx
    M32((uint32_t)(esp + 0x134u)) = (uint32_t)(edx);
L_004ca074:  // mov dword ptr [esp + 0x140], ecx
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(ecx);
L_004ca07b:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004ca07f:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004ca083:  // fstp dword ptr [esp + 0x130]
    F32((uint32_t)(esp + 0x130u)) = lf32(ST(0));
    lpop(x);
L_004ca08a:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004ca08e:  // fmul dword ptr [esp + 0x90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x90u)));
L_004ca095:  // mov dword ptr [esp + 0x138], eax
    M32((uint32_t)(esp + 0x138u)) = (uint32_t)(eax);
L_004ca09c:  // mov al, byte ptr [esp + 0x3b]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x3bu))) & 0xffu);
L_004ca0a0:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004ca0a2:  // fadd dword ptr [esp + 0x98]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x98u)));
L_004ca0a9:  // fstp dword ptr [esp + 0x144]
    F32((uint32_t)(esp + 0x144u)) = lf32(ST(0));
    lpop(x);
L_004ca0b0:  // jne 0x4ca16e
    if (!f.zf) goto L_004ca16e;
L_004ca0b6:  // push 0x3b
    t0 = 0x3bu; esp -= 4; M32(esp) = t0;
L_004ca0b8:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004ca0bd:  // call 0x515970
    t0 = 0x00515970u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca0c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca0c2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca0c4:  // jne 0x4ca16e
    if (!f.zf) goto L_004ca16e;
L_004ca0ca:  // mov eax, dword ptr [0x9c648c]
    eax = (uint32_t)(M32((uint32_t)(0x9c648cu)));
L_004ca0cf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca0d1:  // je 0x4ca16e
    if (f.zf) goto L_004ca16e;
L_004ca0d7:  // lea ecx, [esp + 0xe0]
    ecx = (uint32_t)((uint32_t)(esp + 0xe0u));
L_004ca0de:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca0e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca0e3:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_004ca0ea:  // fsub dword ptr [esp + 0x58]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x58u)));
L_004ca0ee:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca0ef:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ca0f2:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_004ca0f9:  // fsub dword ptr [esp + 0x58]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x58u)));
L_004ca0fd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca0fe:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ca101:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_004ca108:  // fsub dword ptr [esp + 0x58]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x58u)));
L_004ca10c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca10d:  // lea ecx, [esp + 0x11c]
    ecx = (uint32_t)((uint32_t)(esp + 0x11cu));
L_004ca114:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ca117:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca11cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca11c:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004ca123:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca128u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca128:  // lea edx, [esp + 0x110]
    edx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004ca12f:  // lea ecx, [esp + 0xe0]
    ecx = (uint32_t)((uint32_t)(esp + 0xe0u));
L_004ca136:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ca137:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca13cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca13c:  // push 0x3ecccccd
    t0 = 0x3ecccccdu; esp -= 4; M32(esp) = t0;
L_004ca141:  // push 0x3e4ccccd
    t0 = 0x3e4ccccdu; esp -= 4; M32(esp) = t0;
L_004ca146:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004ca148:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca149:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ca14c:  // call 0x4cac40
    t0 = 0x004cac40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca151u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca151:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004ca155:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004ca159:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ca15a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004ca15c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ca15d:  // call 0x4cab30
    t0 = 0x004cab30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca162u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca162:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004ca165:  // mov dword ptr [esp + 0x13c], eax
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(eax);
L_004ca16c:  // jmp 0x4ca175
    goto L_004ca175;
L_004ca16e:  // mov dword ptr [esp + 0x13c], esi
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(esi);
L_004ca175:  // lea ecx, [esp + 0x130]
    ecx = (uint32_t)((uint32_t)(esp + 0x130u));
L_004ca17c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca17d:  // mov ecx, dword ptr [ebx + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004ca180:  // call 0x5501e0
    t0 = 0x005501e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca185u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca185:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ca189:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ca18d:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ca191:  // fadd dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa4u)));
L_004ca198:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ca199:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004ca19b:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004ca19f:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004ca1a3:  // jl 0x4c9e8b
    if ((f.sf != f.of)) goto L_004c9e8b;
L_004ca1a9:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004ca1ad:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ca1b1:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004ca1b5:  // fadd dword ptr [esp + 0xa8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa8u)));
L_004ca1bc:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ca1bd:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004ca1bf:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004ca1c3:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_004ca1c7:  // jl 0x4c9aa0
    if ((f.sf != f.of)) goto L_004c9aa0;
L_004ca1cd:  // mov edi, dword ptr [esp + 0x3c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004ca1d1:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ca1d5:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ca1d9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004ca1db:  // lea esi, [eax + edi + 1]
    esi = (uint32_t)((uint32_t)(eax + edi + 0x1u));
L_004ca1df:  // jle 0x4cab1f
    if ((f.zf || f.sf != f.of)) goto L_004cab1f;
L_004ca1e5:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_004ca1e9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca1eb:  // jle 0x4ca230
    if ((f.zf || f.sf != f.of)) goto L_004ca230;
L_004ca1ed:  // lea edx, [esi + 1]
    edx = (uint32_t)((uint32_t)(esi + 0x1u));
L_004ca1f0:  // lea ebp, [edi + 1]
    ebp = (uint32_t)((uint32_t)(edi + 0x1u));
L_004ca1f3:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004ca1f7:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004ca1fb:  // mov ecx, dword ptr [ebx + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004ca1fe:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ca1ff:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca200:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca201:  // call 0x550180
    t0 = 0x00550180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca206u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca206:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ca20a:  // mov ecx, dword ptr [ebx + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004ca20d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ca20e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ca20f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca210:  // call 0x550180
    t0 = 0x00550180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca215u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca215:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ca219:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ca21d:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004ca21e:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004ca21f:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004ca220:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004ca221:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004ca222:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004ca226:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004ca22a:  // jne 0x4ca1fb
    if (!f.zf) goto L_004ca1fb;
L_004ca22c:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ca230:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004ca234:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004ca235:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004ca236:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004ca237:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_004ca23b:  // jne 0x4ca1e9
    if (!f.zf) goto L_004ca1e9;
L_004ca23d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ca23e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ca23f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ca240:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ca241:  // add esp, 0x150
    t0 = ladd<32>(esp, 0x150u, f);
    esp = (uint32_t)(t0);
L_004ca247:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ca24a:  // mov ecx, dword ptr [ebx + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004ca24d:  // call 0x5501d0
    t0 = 0x005501d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca252u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca252:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004ca255:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004ca258:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca259:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca25a:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004ca25c:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004ca25e:  // lea ecx, [ebx + 0xac]
    ecx = (uint32_t)((uint32_t)(ebx + 0xacu));
L_004ca264:  // mov dword ptr [esp + 0xa8], eax
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(eax);
L_004ca26b:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004ca26d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ca270:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ca272:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ca274:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca279u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca279:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004ca27d:  // fild dword ptr [ebx + 0x60]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x60u)));
L_004ca280:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_004ca283:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca284:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca285:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004ca287:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004ca289:  // lea ecx, [ebx + 0xa4]
    ecx = (uint32_t)((uint32_t)(ebx + 0xa4u));
L_004ca28f:  // fdiv st(2)
    ST(0) = (ST(0)) / (ST(2));
L_004ca291:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ca294:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ca296:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ca298:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca29du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca29d:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ca2a1:  // fld dword ptr [esp + 0x100]
    lpush(x, (long double)F32((uint32_t)(esp + 0x100u)));
L_004ca2a8:  // fsub dword ptr [esp + 0x80]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x80u)));
L_004ca2af:  // fld dword ptr [esp + 0x104]
    lpush(x, (long double)F32((uint32_t)(esp + 0x104u)));
L_004ca2b6:  // fsub dword ptr [esp + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x84u)));
L_004ca2bd:  // fld dword ptr [esp + 0x108]
    lpush(x, (long double)F32((uint32_t)(esp + 0x108u)));
L_004ca2c4:  // fsub dword ptr [esp + 0x88]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x88u)));
L_004ca2cb:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004ca2cd:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ca2cf:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004ca2d1:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004ca2d3:  // mov esi, dword ptr [ebx + 0xa0]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xa0u)));
L_004ca2d9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ca2db:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004ca2dd:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ca2df:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004ca2e1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ca2e3:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004ca2e7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ca2e9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ca2eb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ca2ed:  // jne 0x4ca2fa
    if (!f.zf) goto L_004ca2fa;
L_004ca2ef:  // fld dword ptr [ebx + 0x9c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x9cu)));
L_004ca2f5:  // jmp 0x4ca39e
    goto L_004ca39e;
L_004ca2fa:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004ca300:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca302:  // jne 0x4ca327
    if (!f.zf) goto L_004ca327;
L_004ca304:  // mov ecx, dword ptr [esi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004ca30a:  // mov edx, dword ptr [esi + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004ca30d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca30e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca30f:  // lea eax, [esi + 0x74]
    eax = (uint32_t)((uint32_t)(esi + 0x74u));
L_004ca312:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ca313:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004ca316:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ca317:  // lea edx, [esi + 0x64]
    edx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004ca31a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca31b:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004ca31e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ca31f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ca320:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_004ca325:  // jmp 0x4ca390
    goto L_004ca390;
L_004ca327:  // mov eax, dword ptr [0x9c6400]
    eax = (uint32_t)(M32((uint32_t)(0x9c6400u)));
L_004ca32c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca32d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004ca32f:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004ca333:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca334:  // lea ecx, [esi + 0x88]
    ecx = (uint32_t)((uint32_t)(esi + 0x88u));
L_004ca33a:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca33fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca33f:  // mov eax, dword ptr [esi + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004ca345:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004ca349:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca34b:  // je 0x4ca35f
    if (f.zf) goto L_004ca35f;
L_004ca34d:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004ca34f:  // je 0x4ca35f
    if (f.zf) goto L_004ca35f;
L_004ca351:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ca355:  // fsub dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004ca35b:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004ca35f:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004ca365:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004ca368:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ca36c:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004ca370:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca371:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ca372:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004ca375:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ca376:  // lea edx, [esi + 0x6c]
    edx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004ca379:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca37a:  // lea eax, [esi + 0x64]
    eax = (uint32_t)((uint32_t)(esi + 0x64u));
L_004ca37d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ca37e:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004ca381:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ca382:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ca383:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca388u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca388:  // fdiv dword ptr [esp + 0x38]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ca38c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca38d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ca390:  // call 0x4c0c70
    t0 = 0x004c0c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca395u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca395:  // fmul dword ptr [ebx + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x9cu)));
L_004ca39b:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004ca39e:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ca3a2:  // mov ecx, dword ptr [ebx + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_004ca3a8:  // mov esi, dword ptr [ebx + 0x98]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x98u)));
L_004ca3ae:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004ca3b2:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004ca3b6:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004ca3b8:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004ca3bc:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004ca3be:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004ca3c0:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004ca3c2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ca3c4:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004ca3ca:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ca3cc:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_004ca3ce:  // fdiv dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004ca3d2:  // fmul dword ptr [0x630e0c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x630e0cu)));
L_004ca3d8:  // fmul dword ptr [0x5ddac4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5ddac4u)));
L_004ca3de:  // fcom dword ptr [0x5db1e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db1e4u)));
L_004ca3e4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ca3e6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ca3e9:  // je 0x4ca434
    if (f.zf) goto L_004ca434;
L_004ca3eb:  // cmp ecx, 4
    t0 = lsub<32>(ecx, 0x4u, f);
L_004ca3ee:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ca3f0:  // jle 0x4ca414
    if ((f.zf || f.sf != f.of)) goto L_004ca414;
L_004ca3f2:  // mov eax, 0x55555556
    eax = (uint32_t)(0x55555556u);
L_004ca3f7:  // imul ecx
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)ecx; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004ca3f9:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004ca3fb:  // shr ecx, 0x1f
    t0 = lshr<32>(ecx, 0x1fu, f);
    ecx = (uint32_t)(t0);
L_004ca3fe:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_004ca400:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004ca402:  // cmp ecx, 4
    t0 = lsub<32>(ecx, 0x4u, f);
L_004ca405:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004ca409:  // jge 0x4ca414
    if ((f.sf == f.of)) goto L_004ca414;
L_004ca40b:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_004ca410:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004ca414:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_004ca417:  // jle 0x4ca481
    if ((f.zf || f.sf != f.of)) goto L_004ca481;
L_004ca419:  // mov eax, 0x55555556
    eax = (uint32_t)(0x55555556u);
L_004ca41e:  // imul esi
    { int64_t w = (int64_t)(int32_t)eax * (int32_t)esi; eax = (uint32_t)w; edx = (uint32_t)((uint64_t)w >> 32); f.cf = f.of = w != (int64_t)(int32_t)eax; }
L_004ca420:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004ca422:  // shr eax, 0x1f
    t0 = lshr<32>(eax, 0x1fu, f);
    eax = (uint32_t)(t0);
L_004ca425:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004ca427:  // mov esi, edx
    esi = (uint32_t)(edx);
L_004ca429:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_004ca42c:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004ca430:  // jge 0x4ca481
    if ((f.sf == f.of)) goto L_004ca481;
L_004ca432:  // jmp 0x4ca478
    goto L_004ca478;
L_004ca434:  // fcomp dword ptr [0x5db520]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db520u)));
    lpop(x);
L_004ca43a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ca43c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ca43f:  // je 0x4ca481
    if (f.zf) goto L_004ca481;
L_004ca441:  // cmp ecx, 4
    t0 = lsub<32>(ecx, 0x4u, f);
L_004ca444:  // jle 0x4ca461
    if ((f.zf || f.sf != f.of)) goto L_004ca461;
L_004ca446:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004ca448:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004ca449:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004ca44b:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004ca44d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004ca44f:  // cmp ecx, 4
    t0 = lsub<32>(ecx, 0x4u, f);
L_004ca452:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004ca456:  // jge 0x4ca461
    if ((f.sf == f.of)) goto L_004ca461;
L_004ca458:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_004ca45d:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004ca461:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_004ca464:  // jle 0x4ca481
    if ((f.zf || f.sf != f.of)) goto L_004ca481;
L_004ca466:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004ca468:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004ca469:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004ca46b:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004ca46d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004ca46f:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_004ca472:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004ca476:  // jge 0x4ca481
    if ((f.sf == f.of)) goto L_004ca481;
L_004ca478:  // mov esi, 4
    esi = (uint32_t)(0x4u);
L_004ca47d:  // mov dword ptr [esp + 0x14], esi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(esi);
L_004ca481:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004ca483:  // mov dword ptr [esp + 0x68], 0
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x0u);
L_004ca48b:  // jle 0x4caa9d
    if ((f.zf || f.sf != f.of)) goto L_004caa9d;
L_004ca491:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004ca492:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004ca493:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_004ca497:  // mov dword ptr [esp + 0x9c], esi
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(esi);
L_004ca49e:  // fild dword ptr [esp + 0x3c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x3cu)));
L_004ca4a2:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004ca4a6:  // fild dword ptr [esp + 0x68]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x68u)));
L_004ca4aa:  // mov esi, dword ptr [ebx + 0xa0]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xa0u)));
L_004ca4b0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004ca4b2:  // fdiv dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004ca4b6:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_004ca4ba:  // fmul dword ptr [esp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x4cu)));
L_004ca4be:  // mov edi, dword ptr [esp + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ca4c2:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004ca4c6:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ca4ca:  // fmul dword ptr [esp + 0xf0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xf0u)));
L_004ca4d1:  // fadd dword ptr [esp + 0xfc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xfcu)));
L_004ca4d8:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004ca4dc:  // jne 0x4ca4e9
    if (!f.zf) goto L_004ca4e9;
L_004ca4de:  // fld dword ptr [ebx + 0x9c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x9cu)));
L_004ca4e4:  // jmp 0x4ca589
    goto L_004ca589;
L_004ca4e9:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004ca4ef:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca4f1:  // jne 0x4ca512
    if (!f.zf) goto L_004ca512;
L_004ca4f3:  // mov ecx, dword ptr [esi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004ca4f9:  // mov edx, dword ptr [esi + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004ca4fc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca4fd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca4fe:  // lea eax, [esi + 0x74]
    eax = (uint32_t)((uint32_t)(esi + 0x74u));
L_004ca501:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ca502:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004ca505:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ca506:  // lea edx, [esi + 0x64]
    edx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004ca509:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca50a:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004ca50d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ca50e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ca50f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca510:  // jmp 0x4ca57b
    goto L_004ca57b;
L_004ca512:  // mov eax, dword ptr [0x9c6400]
    eax = (uint32_t)(M32((uint32_t)(0x9c6400u)));
L_004ca517:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca518:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004ca51a:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004ca51e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca51f:  // lea ecx, [esi + 0x88]
    ecx = (uint32_t)((uint32_t)(esi + 0x88u));
L_004ca525:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca52au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca52a:  // mov eax, dword ptr [esi + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_004ca530:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004ca534:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca536:  // je 0x4ca54a
    if (f.zf) goto L_004ca54a;
L_004ca538:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004ca53a:  // je 0x4ca54a
    if (f.zf) goto L_004ca54a;
L_004ca53c:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ca540:  // fsub dword ptr [ebp + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x84u)));
L_004ca546:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004ca54a:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004ca550:  // mov eax, dword ptr [esi + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x7cu)));
L_004ca553:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ca557:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004ca55b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca55c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ca55d:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004ca560:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ca561:  // lea edx, [esi + 0x6c]
    edx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004ca564:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca565:  // lea eax, [esi + 0x64]
    eax = (uint32_t)((uint32_t)(esi + 0x64u));
L_004ca568:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ca569:  // add esi, 0x5c
    t0 = ladd<32>(esi, 0x5cu, f);
    esi = (uint32_t)(t0);
L_004ca56c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ca56d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ca56e:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca573u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca573:  // fdiv dword ptr [esp + 0x38]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ca577:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ca578:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ca57b:  // call 0x4c0c70
    t0 = 0x004c0c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca580u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca580:  // fmul dword ptr [ebx + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x9cu)));
L_004ca586:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_004ca589:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ca58d:  // mov esi, dword ptr [ebx + 0x6c]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x6cu)));
L_004ca590:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004ca592:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004ca596:  // je 0x4ca8e0
    if (f.zf) goto L_004ca8e0;
L_004ca59c:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004ca5a2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca5a4:  // je 0x4ca764
    if (f.zf) goto L_004ca764;
L_004ca5aa:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ca5ae:  // fcomp dword ptr [esi + 0xac]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0xacu)));
    lpop(x);
L_004ca5b4:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ca5b8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ca5ba:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ca5bd:  // je 0x4ca68b
    if (f.zf) goto L_004ca68b;
L_004ca5c3:  // fdiv dword ptr [esi + 0xac]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esi + 0xacu)));
L_004ca5c9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca5ca:  // lea ecx, [esi + 0x8c]
    ecx = (uint32_t)((uint32_t)(esi + 0x8cu));
L_004ca5d0:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004ca5d4:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004ca5da:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ca5de:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ca5e2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca5e3:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ca5e7:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca5ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca5ec:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ca5f0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca5f1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca5f2:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004ca5f5:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ca5f9:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca5feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca5fe:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004ca602:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca603:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca604:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ca608:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca60e:  // fistp qword ptr [esp + 0x38]
    M64((uint32_t)(esp + 0x38u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca612:  // mov cl, byte ptr [esp + 0x38]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x38u))) & 0xffu);
L_004ca616:  // mov byte ptr [esp + 0x74], cl
    M8((uint32_t)(esp + 0x74u)) = (uint8_t)((ecx & 0xffu));
L_004ca61a:  // lea ecx, [esi + 0x94]
    ecx = (uint32_t)((uint32_t)(esi + 0x94u));
L_004ca620:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca625u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca625:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca626:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca627:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004ca62a:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004ca62e:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ca632:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca637u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca637:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004ca63b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca63c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca63d:  // lea ecx, [esi + 0x9c]
    ecx = (uint32_t)((uint32_t)(esi + 0x9cu));
L_004ca643:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ca647:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca64d:  // fistp qword ptr [esp + 0x38]
    M64((uint32_t)(esp + 0x38u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca651:  // mov dl, byte ptr [esp + 0x38]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x38u))) & 0xffu);
L_004ca655:  // mov byte ptr [esp + 0x78], dl
    M8((uint32_t)(esp + 0x78u)) = (uint8_t)((edx & 0xffu));
L_004ca659:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca65eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca65e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca65f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca660:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004ca663:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004ca667:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ca66b:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca670u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca670:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004ca674:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004ca678:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca67e:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca682:  // mov al, byte ptr [esp + 0x30]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x30u))) & 0xffu);
L_004ca686:  // jmp 0x4ca873
    goto L_004ca873;
L_004ca68b:  // fsub dword ptr [esi + 0xac]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xacu)));
L_004ca691:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004ca697:  // fsub dword ptr [esi + 0xac]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0xacu)));
L_004ca69d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca69e:  // lea ecx, [esi + 0x8c]
    ecx = (uint32_t)((uint32_t)(esi + 0x8cu));
L_004ca6a4:  // fdivp st(1)
    ST(1) = (ST(1)) / (ST(0));
    lpop(x);
L_004ca6a6:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004ca6aa:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004ca6b0:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ca6b4:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ca6b8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca6b9:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ca6bd:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca6c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca6c2:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004ca6c6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca6c7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca6c8:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004ca6cb:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ca6cf:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca6d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca6d4:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ca6d8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca6d9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca6da:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ca6de:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca6e4:  // fistp qword ptr [esp + 0x38]
    M64((uint32_t)(esp + 0x38u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca6e8:  // mov cl, byte ptr [esp + 0x38]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x38u))) & 0xffu);
L_004ca6ec:  // mov byte ptr [esp + 0x74], cl
    M8((uint32_t)(esp + 0x74u)) = (uint8_t)((ecx & 0xffu));
L_004ca6f0:  // lea ecx, [esi + 0x94]
    ecx = (uint32_t)((uint32_t)(esi + 0x94u));
L_004ca6f6:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca6fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca6fb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca6fc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca6fd:  // lea ecx, [esi + 0x7c]
    ecx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004ca700:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ca704:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ca708:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca70du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca70d:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ca711:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca712:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca713:  // lea ecx, [esi + 0x9c]
    ecx = (uint32_t)((uint32_t)(esi + 0x9cu));
L_004ca719:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ca71d:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca723:  // fistp qword ptr [esp + 0x38]
    M64((uint32_t)(esp + 0x38u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca727:  // mov dl, byte ptr [esp + 0x38]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x38u))) & 0xffu);
L_004ca72b:  // mov byte ptr [esp + 0x78], dl
    M8((uint32_t)(esp + 0x78u)) = (uint8_t)((edx & 0xffu));
L_004ca72f:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca734u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca734:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca735:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca736:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004ca73c:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ca740:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ca744:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca749u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca749:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ca74d:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004ca751:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca757:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca75b:  // mov al, byte ptr [esp + 0x30]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x30u))) & 0xffu);
L_004ca75f:  // jmp 0x4ca873
    goto L_004ca873;
L_004ca764:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004ca76a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca76c:  // je 0x4ca823
    if (f.zf) goto L_004ca823;
L_004ca772:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_004ca778:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ca77c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca77d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca77e:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004ca781:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ca785:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca78au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca78a:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004ca78e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca78f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca790:  // lea ecx, [esi + 0x74]
    ecx = (uint32_t)((uint32_t)(esi + 0x74u));
L_004ca793:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ca797:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca79cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca79c:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ca7a0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca7a1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca7a2:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ca7a6:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca7ac:  // fistp qword ptr [esp + 0x38]
    M64((uint32_t)(esp + 0x38u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca7b0:  // mov cl, byte ptr [esp + 0x38]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x38u))) & 0xffu);
L_004ca7b4:  // mov byte ptr [esp + 0x74], cl
    M8((uint32_t)(esp + 0x74u)) = (uint8_t)((ecx & 0xffu));
L_004ca7b8:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004ca7bb:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca7c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca7c0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca7c1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca7c2:  // lea ecx, [esi + 0x7c]
    ecx = (uint32_t)((uint32_t)(esi + 0x7cu));
L_004ca7c5:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ca7c9:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ca7cd:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca7d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca7d2:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ca7d6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca7d7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca7d8:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004ca7db:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ca7df:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca7e5:  // fistp qword ptr [esp + 0x38]
    M64((uint32_t)(esp + 0x38u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca7e9:  // mov dl, byte ptr [esp + 0x38]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x38u))) & 0xffu);
L_004ca7ed:  // mov byte ptr [esp + 0x78], dl
    M8((uint32_t)(esp + 0x78u)) = (uint8_t)((edx & 0xffu));
L_004ca7f1:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca7f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca7f6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca7f7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca7f8:  // lea ecx, [esi + 0x84]
    ecx = (uint32_t)((uint32_t)(esi + 0x84u));
L_004ca7fe:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ca802:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004ca806:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca80bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca80b:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ca80f:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_004ca813:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca819:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca81d:  // mov al, byte ptr [esp + 0x30]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x30u))) & 0xffu);
L_004ca821:  // jmp 0x4ca873
    goto L_004ca873;
L_004ca823:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca824:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca825:  // lea ecx, [esi + 0x5c]
    ecx = (uint32_t)((uint32_t)(esi + 0x5cu));
L_004ca828:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca82du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca82d:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca833:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca834:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca835:  // fistp qword ptr [esp + 0x38]
    M64((uint32_t)(esp + 0x38u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca839:  // mov cl, byte ptr [esp + 0x38]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x38u))) & 0xffu);
L_004ca83d:  // mov byte ptr [esp + 0x74], cl
    M8((uint32_t)(esp + 0x74u)) = (uint8_t)((ecx & 0xffu));
L_004ca841:  // lea ecx, [esi + 0x64]
    ecx = (uint32_t)((uint32_t)(esi + 0x64u));
L_004ca844:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca849u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca849:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ca84a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ca84b:  // lea ecx, [esi + 0x6c]
    ecx = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004ca84e:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca854:  // fistp qword ptr [esp + 0x38]
    M64((uint32_t)(esp + 0x38u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca858:  // mov dl, byte ptr [esp + 0x38]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x38u))) & 0xffu);
L_004ca85c:  // mov byte ptr [esp + 0x78], dl
    M8((uint32_t)(esp + 0x78u)) = (uint8_t)((edx & 0xffu));
L_004ca860:  // call 0x4c10c0
    t0 = 0x004c10c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ca865u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ca865:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_004ca86b:  // fistp qword ptr [esp + 0x30]
    M64((uint32_t)(esp + 0x30u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004ca86f:  // mov al, byte ptr [esp + 0x30]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x30u))) & 0xffu);
L_004ca873:  // mov esi, dword ptr [esp + 0x6c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004ca877:  // mov ecx, dword ptr [esp + 0x78]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004ca87b:  // mov edx, dword ptr [esp + 0x70]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004ca87f:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_004ca885:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_004ca88b:  // mov byte ptr [esp + 0x60], al
    M8((uint32_t)(esp + 0x60u)) = (uint8_t)((eax & 0xffu));
L_004ca88f:  // mov eax, dword ptr [esp + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004ca893:  // imul esi, ecx
    t0 = limul32(esi, ecx, f);
    esi = (uint32_t)(t0);
L_004ca896:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_004ca89c:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004ca8a1:  // imul edx, eax
    t0 = limul32(edx, eax, f);
    edx = (uint32_t)(t0);
L_004ca8a4:  // sar esi, 8
    t0 = lsar<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004ca8a7:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004ca8ab:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_004ca8b1:  // add esi, 0xff00
    t0 = ladd<32>(esi, 0xff00u, f);
    esi = (uint32_t)(t0);
L_004ca8b7:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_004ca8bd:  // sar edx, 8
    t0 = lsar<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_004ca8c0:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004ca8c3:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_004ca8c9:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_004ca8cb:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004ca8cf:  // and edx, 0xff
    t0 = llog<32>(edx & 0xffu, f);
    edx = (uint32_t)(t0);
L_004ca8d5:  // imul ecx, edx
    t0 = limul32(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_004ca8d8:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004ca8db:  // sar ecx, 8
    t0 = lsar<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_004ca8de:  // jmp 0x4ca905
    goto L_004ca905;
L_004ca8e0:  // mov esi, dword ptr [esp + 0x78]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004ca8e4:  // mov eax, dword ptr [esp + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004ca8e8:  // and esi, 0xff
    t0 = llog<32>(esi & 0xffu, f);
    esi = (uint32_t)(t0);
L_004ca8ee:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004ca8f2:  // add esi, 0xff00
    t0 = ladd<32>(esi, 0xff00u, f);
    esi = (uint32_t)(t0);
L_004ca8f8:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_004ca8fd:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004ca900:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_004ca902:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_004ca905:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004ca90c:  // and ecx, 0xff
    t0 = llog<32>(ecx & 0xffu, f);
    ecx = (uint32_t)(t0);
L_004ca912:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_004ca914:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ca916:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ca918:  // mov dword ptr [esp + 0x64], edi
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edi);
L_004ca91c:  // jle 0x4caa88
    if ((f.zf || f.sf != f.of)) goto L_004caa88;
L_004ca922:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004ca926:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004ca92a:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_004ca931:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004ca935:  // fstp dword ptr [esp + 0xa8]
    F32((uint32_t)(esp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_004ca93c:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004ca943:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004ca947:  // fstp dword ptr [esp + 0xa4]
    F32((uint32_t)(esp + 0xa4u)) = lf32(ST(0));
    lpop(x);
L_004ca94e:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_004ca955:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_004ca959:  // fstp dword ptr [esp + 0xac]
    F32((uint32_t)(esp + 0xacu)) = lf32(ST(0));
    lpop(x);
L_004ca960:  // fild dword ptr [esp + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x64u)));
L_004ca964:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004ca968:  // mov dword ptr [esp + 0x13c], esi
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(esi);
L_004ca96f:  // mov dword ptr [esp + 0x140], ecx
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(ecx);
L_004ca976:  // mov ecx, dword ptr [ebx + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004ca979:  // fdiv dword ptr [esp + 0x30]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x30u)));
L_004ca97d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ca97f:  // fmul dword ptr [0x5d85e0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85e0u)));
L_004ca985:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ca987:  // fsin 
    ST(0) = lfsin(ST(0));
L_004ca989:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ca98d:  // fstp dword ptr [esp + 0xe0]
    F32((uint32_t)(esp + 0xe0u)) = lf32(ST(0));
    lpop(x);
L_004ca994:  // fcos 
    ST(0) = lfcos(ST(0));
L_004ca996:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ca99a:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004ca9a1:  // fmul dword ptr [esp + 0xe0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe0u)));
L_004ca9a8:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004ca9aa:  // fmul dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xb8u)));
L_004ca9b1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ca9b3:  // fadd dword ptr [esp + 0xa8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa8u)));
L_004ca9ba:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004ca9be:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ca9c0:  // fmul dword ptr [esp + 0xc8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc8u)));
L_004ca9c7:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_004ca9ce:  // fmul dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xc0u)));
L_004ca9d5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ca9d7:  // fadd dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa4u)));
L_004ca9de:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004ca9e2:  // fmul dword ptr [esp + 0xd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd8u)));
L_004ca9e9:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_004ca9f0:  // fmul dword ptr [esp + 0xd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xd0u)));
L_004ca9f7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ca9f9:  // fadd dword ptr [esp + 0xac]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xacu)));
L_004caa00:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004caa04:  // fadd dword ptr [esp + 0x80]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x80u)));
L_004caa0b:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004caa12:  // fadd dword ptr [esp + 0x54]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x54u)));
L_004caa16:  // fstp dword ptr [esp + 0x114]
    F32((uint32_t)(esp + 0x114u)) = lf32(ST(0));
    lpop(x);
L_004caa1d:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_004caa24:  // fadd st(2)
    ST(0) = (ST(0)) + (ST(2));
L_004caa26:  // mov edx, dword ptr [esp + 0x114]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x114u)));
L_004caa2d:  // mov dword ptr [esp + 0x134], edx
    M32((uint32_t)(esp + 0x134u)) = (uint32_t)(edx);
L_004caa34:  // lea edx, [esp + 0x130]
    edx = (uint32_t)((uint32_t)(esp + 0x130u));
L_004caa3b:  // fstp dword ptr [esp + 0x118]
    F32((uint32_t)(esp + 0x118u)) = lf32(ST(0));
    lpop(x);
L_004caa42:  // mov eax, dword ptr [esp + 0x118]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x118u)));
L_004caa49:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004caa4a:  // fstp dword ptr [esp + 0x134]
    F32((uint32_t)(esp + 0x134u)) = lf32(ST(0));
    lpop(x);
L_004caa51:  // mov dword ptr [esp + 0x13c], eax
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(eax);
L_004caa58:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004caa5a:  // fmul dword ptr [esp + 0x94]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x94u)));
L_004caa61:  // fadd dword ptr [esp + 0x9c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x9cu)));
L_004caa68:  // fstp dword ptr [esp + 0x148]
    F32((uint32_t)(esp + 0x148u)) = lf32(ST(0));
    lpop(x);
L_004caa6f:  // call 0x5501e0
    t0 = 0x005501e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004caa74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004caa74:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004caa7b:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004caa7c:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004caa7e:  // mov dword ptr [esp + 0x64], edi
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edi);
L_004caa82:  // jl 0x4ca960
    if ((f.sf != f.of)) goto L_004ca960;
L_004caa88:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004caa8c:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004caa90:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004caa91:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004caa93:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_004caa97:  // jl 0x4ca4a6
    if ((f.sf != f.of)) goto L_004ca4a6;
L_004caa9d:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004caaa1:  // mov edi, dword ptr [esp + 0xa0]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_004caaa8:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004caaac:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004caaad:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004caaaf:  // lea esi, [ecx + edi + 1]
    esi = (uint32_t)((uint32_t)(ecx + edi + 0x1u));
L_004caab3:  // jle 0x4cab1f
    if ((f.zf || f.sf != f.of)) goto L_004cab1f;
L_004caab5:  // mov dword ptr [esp + 0x90], eax
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(eax);
L_004caabc:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004caabe:  // jle 0x4cab0c
    if ((f.zf || f.sf != f.of)) goto L_004cab0c;
L_004caac0:  // lea edx, [esi + 1]
    edx = (uint32_t)((uint32_t)(esi + 0x1u));
L_004caac3:  // lea ebp, [edi + 1]
    ebp = (uint32_t)((uint32_t)(edi + 0x1u));
L_004caac6:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004caaca:  // mov dword ptr [esp + 0x98], ecx
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(ecx);
L_004caad1:  // mov ecx, dword ptr [ebx + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004caad4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004caad5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004caad6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004caad7:  // call 0x550180
    t0 = 0x00550180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004caadcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004caadc:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004caae0:  // mov ecx, dword ptr [ebx + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x64u)));
L_004caae3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004caae4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004caae5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004caae6:  // call 0x550180
    t0 = 0x00550180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004caaebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004caaeb:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004caaef:  // mov eax, dword ptr [esp + 0x98]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_004caaf6:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004caaf7:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004caaf8:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004caaf9:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004caafa:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004caafb:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004caaff:  // mov dword ptr [esp + 0x98], eax
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(eax);
L_004cab06:  // jne 0x4caad1
    if (!f.zf) goto L_004caad1;
L_004cab08:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004cab0c:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004cab13:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004cab14:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004cab15:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004cab16:  // mov dword ptr [esp + 0x90], eax
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(eax);
L_004cab1d:  // jne 0x4caabc
    if (!f.zf) goto L_004caabc;
L_004cab1f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cab20:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cab21:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004cab22:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004cab23:  // add esp, 0x150
    t0 = ladd<32>(esp, 0x150u, f);
    esp = (uint32_t)(t0);
L_004cab29:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004c9000, 004c9000)
