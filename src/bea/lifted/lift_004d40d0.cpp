// lifted from 004d40d0 (FUN_004d40d0, 2502 bytes, 722 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d40d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d40d0;
L_004d40d0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004d40d6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004d40d8:  // push 0x5d4835
    t0 = 0x5d4835u; esp -= 4; M32(esp) = t0;
L_004d40dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d40de:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004d40e5:  // sub esp, 0xe8
    t0 = lsub<32>(esp, 0xe8u, f);
    esp = (uint32_t)(t0);
L_004d40eb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d40ec:  // mov ebx, dword ptr [esp + 0xfc]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xfcu)));
L_004d40f3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d40f4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d40f5:  // mov eax, dword ptr [ebx + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004d40fb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d40fc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d40fe:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004d4100:  // jne 0x4d4109
    if (!f.zf) goto L_004d4109;
L_004d4102:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004d4104:  // jmp 0x4d4a7b
    goto L_004d4a7b;
L_004d4109:  // push 0x14c
    t0 = 0x14cu; esp -= 4; M32(esp) = t0;
L_004d410e:  // push 0x6316bc
    t0 = 0x6316bcu; esp -= 4; M32(esp) = t0;
L_004d4113:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_004d4115:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004d4117:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d411c:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4121u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4121:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004d4123:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_004d4127:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d4129:  // mov dword ptr [esp + 0x100], 0
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(0x0u);
L_004d4134:  // je 0x4d4187
    if (f.zf) goto L_004d4187;
L_004d4136:  // push 0x12
    t0 = 0x12u; esp -= 4; M32(esp) = t0;
L_004d4138:  // push 0x62d590
    t0 = 0x62d590u; esp -= 4; M32(esp) = t0;
L_004d413d:  // push 0x54
    t0 = 0x54u; esp -= 4; M32(esp) = t0;
L_004d413f:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004d4141:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d4146:  // mov dword ptr [esi + 4], 1
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(0x1u);
L_004d414d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4152u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4152:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004d4154:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_004d4158:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004d415a:  // mov byte ptr [esp + 0x100], 1
    M8((uint32_t)(esp + 0x100u)) = (uint8_t)(0x1u);
L_004d4162:  // je 0x4d417e
    if (f.zf) goto L_004d417e;
L_004d4164:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004d4169:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004d416b:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004d416d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d416e:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4173u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4173:  // mov dword ptr [esi], edi
    M32((uint32_t)(esi)) = (uint32_t)(edi);
L_004d4175:  // mov dword ptr [esi + 8], 0
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(0x0u);
L_004d417c:  // jmp 0x4d4189
    goto L_004d4189;
L_004d417e:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d4180:  // mov dword ptr [esi], edi
    M32((uint32_t)(esi)) = (uint32_t)(edi);
L_004d4182:  // mov dword ptr [esi + 8], edi
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edi);
L_004d4185:  // jmp 0x4d4189
    goto L_004d4189;
L_004d4187:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d4189:  // mov dword ptr [ebp + 0x98], esi
    M32((uint32_t)(ebp + 0x98u)) = (uint32_t)(esi);
L_004d418f:  // mov eax, dword ptr [ebx + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004d4195:  // mov dword ptr [ebp + 0x78], eax
    M32((uint32_t)(ebp + 0x78u)) = (uint32_t)(eax);
L_004d4198:  // mov esi, dword ptr [ebx + 0xfc]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0xfcu)));
L_004d419e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d41a0:  // lea eax, [ebp + 0x40]
    eax = (uint32_t)((uint32_t)(ebp + 0x40u));
L_004d41a3:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_004d41a6:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d41a8:  // mov dword ptr [esp + 0x100], 0xffffffff
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(0xffffffffu);
L_004d41b3:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004d41b5:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_004d41b8:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_004d41ba:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004d41bd:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004d41bf:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004d41c2:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004d41c5:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_004d41c8:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004d41cb:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004d41cf:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_004d41d2:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_004d41d5:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004d41db:  // fst dword ptr [ebp + 0x50]
    F32((uint32_t)(ebp + 0x50u)) = lf32(ST(0));
L_004d41de:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_004d41e1:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004d41e7:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_004d41eb:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004d41ed:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d41ef:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d41f2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d41f4:  // jne 0x4d41fd
    if (!f.zf) goto L_004d41fd;
L_004d41f6:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d41fa:  // mov dword ptr [ebp + 0x50], edx
    M32((uint32_t)(ebp + 0x50u)) = (uint32_t)(edx);
L_004d41fd:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_004d4200:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004d4206:  // fcom dword ptr [ebp + 0x50]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x50u)));
L_004d4209:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d420b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d420e:  // jne 0x4d4215
    if (!f.zf) goto L_004d4215;
L_004d4210:  // fstp dword ptr [ebp + 0x50]
    F32((uint32_t)(ebp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004d4213:  // jmp 0x4d4217
    goto L_004d4217;
L_004d4215:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d4217:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004d421a:  // mov dword ptr [ebp + 0x70], 0x3f800000
    M32((uint32_t)(ebp + 0x70u)) = (uint32_t)(0x3f800000u);
L_004d4221:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004d4224:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4229u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4229:  // fistp qword ptr [esp + 0x88]
    M64((uint32_t)(esp + 0x88u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d4230:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004d4237:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d4238:  // mov dword ptr [ebp + 0x68], eax
    M32((uint32_t)(ebp + 0x68u)) = (uint32_t)(eax);
L_004d423b:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004d423f:  // fdiv dword ptr [ebp + 0x70]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(ebp + 0x70u)));
L_004d4242:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004d4245:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d424au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d424a:  // fistp qword ptr [esp + 0x88]
    M64((uint32_t)(esp + 0x88u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d4251:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004d4258:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004d425b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d425c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d4261:  // mov dword ptr [ebp + 0x6c], eax
    M32((uint32_t)(ebp + 0x6cu)) = (uint32_t)(eax);
L_004d4264:  // push 0x167
    t0 = 0x167u; esp -= 4; M32(esp) = t0;
L_004d4269:  // push 0x6316bc
    t0 = 0x6316bcu; esp -= 4; M32(esp) = t0;
L_004d426e:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_004d4270:  // imul eax, dword ptr [ebp + 0x68]
    t0 = limul32(eax, M32((uint32_t)(ebp + 0x68u)), f);
    eax = (uint32_t)(t0);
L_004d4274:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004d4277:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d4278:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d427du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d427d:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004d427f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004d4281:  // mov dword ptr [ebp + 0x60], edi
    M32((uint32_t)(ebp + 0x60u)) = (uint32_t)(edi);
L_004d4284:  // jne 0x4d428d
    if (!f.zf) goto L_004d428d;
L_004d4286:  // xor al, al
    t0 = llog<8>((eax & 0xffu) ^ (eax & 0xffu), f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_004d4288:  // jmp 0x4d4a7b
    goto L_004d4a7b;
L_004d428d:  // mov ecx, dword ptr [ebp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x6cu)));
L_004d4290:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d4292:  // imul ecx, dword ptr [ebp + 0x68]
    t0 = limul32(ecx, M32((uint32_t)(ebp + 0x68u)), f);
    ecx = (uint32_t)(t0);
L_004d4296:  // shl ecx, 2
    t0 = lshl<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004d4299:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004d429b:  // push 0x17b
    t0 = 0x17bu; esp -= 4; M32(esp) = t0;
L_004d42a0:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004d42a3:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_004d42a5:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004d42a7:  // push 0x6316bc
    t0 = 0x6316bcu; esp -= 4; M32(esp) = t0;
L_004d42ac:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004d42af:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_004d42b1:  // rep stosb byte ptr es:[edi], al
    while (ecx) { M8(edi) = (uint8_t)eax; edi += 1; ecx--; }
L_004d42b3:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004d42b5:  // fsub dword ptr [esi + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x10u)));
L_004d42b8:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_004d42bf:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004d42c2:  // fsub dword ptr [esi + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x14u)));
L_004d42c5:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004d42cc:  // lea eax, [ebp + 0x30]
    eax = (uint32_t)((uint32_t)(ebp + 0x30u));
L_004d42cf:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_004d42d6:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004d42d9:  // fsub dword ptr [esi + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x18u)));
L_004d42dc:  // mov edx, dword ptr [esp + 0x90]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004d42e3:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004d42e5:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_004d42ec:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004d42f3:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004d42f6:  // mov edx, dword ptr [esp + 0x98]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_004d42fd:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004d4300:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d4305:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004d4308:  // mov eax, dword ptr [ebp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x78u)));
L_004d430b:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_004d430e:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004d4310:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004d4313:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004d4316:  // fmul dword ptr [0x5de7ac]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5de7acu)));
L_004d431c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d431d:  // fstp dword ptr [ebp + 0x74]
    F32((uint32_t)(ebp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_004d4320:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4325u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4325:  // mov dword ptr [ebp + 0x64], eax
    M32((uint32_t)(ebp + 0x64u)) = (uint32_t)(eax);
L_004d4328:  // mov eax, dword ptr [ebx + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb0u)));
L_004d432e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d4330:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_004d4338:  // jle 0x4d4a56
    if ((f.zf || f.sf != f.of)) goto L_004d4a56;
L_004d433e:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_004d4346:  // jmp 0x4d434f
    goto L_004d434f;
L_004d4348:  // mov ebx, dword ptr [esp + 0x108]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x108u)));
L_004d434f:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004d4353:  // mov ecx, dword ptr [ebx + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x80u)));
L_004d4359:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004d435b:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d435e:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004d4360:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004d4363:  // mov edi, dword ptr [edx + 0x20]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x20u)));
L_004d4366:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004d4368:  // je 0x4d4a2f
    if (f.zf) goto L_004d4a2f;
L_004d436e:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d4371:  // mov ebx, dword ptr [eax + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_004d4374:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_004d4376:  // je 0x4d4a2f
    if (f.zf) goto L_004d4a2f;
L_004d437c:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_004d437e:  // je 0x4d4a2f
    if (f.zf) goto L_004d4a2f;
L_004d4384:  // mov ecx, dword ptr [esp + 0x108]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x108u)));
L_004d438b:  // mov esi, dword ptr [esi + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004d438e:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004d4391:  // mov ecx, dword ptr [ecx + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x84u)));
L_004d4397:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004d4399:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004d439c:  // add esi, dword ptr [ecx]
    t0 = ladd<32>(esi, M32((uint32_t)(ecx)), f);
    esi = (uint32_t)(t0);
L_004d439e:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_004d43a0:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_004d43a4:  // mov edi, dword ptr [esi + 4]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d43a7:  // mov dword ptr [esp + 0x38], edi
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edi);
L_004d43ab:  // mov edi, dword ptr [esi + 8]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d43ae:  // mov dword ptr [esp + 0x3c], edi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edi);
L_004d43b2:  // mov esi, dword ptr [esi + 0xc]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004d43b5:  // mov dword ptr [esp + 0x40], esi
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(esi);
L_004d43b9:  // mov edx, dword ptr [edx + 0x20]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x20u)));
L_004d43bc:  // mov edi, dword ptr [ecx]
    edi = (uint32_t)(M32((uint32_t)(ecx)));
L_004d43be:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_004d43c1:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_004d43c3:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d43c5:  // mov esi, dword ptr [edx]
    esi = (uint32_t)(M32((uint32_t)(edx)));
L_004d43c7:  // mov dword ptr [esp + 0x44], esi
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(esi);
L_004d43cb:  // mov esi, dword ptr [edx + 4]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004d43ce:  // mov dword ptr [esp + 0x48], esi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(esi);
L_004d43d2:  // mov esi, dword ptr [edx + 8]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004d43d5:  // mov dword ptr [esp + 0x4c], esi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(esi);
L_004d43d9:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004d43dc:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_004d43e0:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d43e2:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004d43e4:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004d43e6:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_004d43ea:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004d43ed:  // mov dword ptr [esp + 0x58], edx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edx);
L_004d43f1:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d43f4:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_004d43f8:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004d43fb:  // mov eax, dword ptr [ebp + 0x98]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d4401:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_004d4405:  // mov esi, dword ptr [eax + 8]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d4408:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d440a:  // jle 0x4d445f
    if ((f.zf || f.sf != f.of)) goto L_004d445f;
L_004d440c:  // lea ecx, [esi + esi*2]
    ecx = (uint32_t)((uint32_t)(esi + esi * 2u));
L_004d440f:  // lea edx, [ecx + ecx - 6]
    edx = (uint32_t)((uint32_t)(ecx + ecx + 0xfffffffau));
L_004d4413:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004d4417:  // mov ecx, dword ptr [ebp + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d441d:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d4421:  // lea ebx, [ebp + 0x40]
    ebx = (uint32_t)((uint32_t)(ebp + 0x40u));
L_004d4424:  // lea eax, [esp + 0xb8]
    eax = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004d442b:  // mov ecx, dword ptr [ecx]
    ecx = (uint32_t)(M32((uint32_t)(ecx)));
L_004d442d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d442e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d442f:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_004d4431:  // call 0x4d4b30
    t0 = 0x004d4b30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4436u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4436:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004d443a:  // lea ecx, [esp + 0xb8]
    ecx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004d4441:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d4442:  // call 0x4d4bc0
    t0 = 0x004d4bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4447u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4447:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d4449:  // jne 0x4d4555
    if (!f.zf) goto L_004d4555;
L_004d444f:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d4453:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004d4454:  // sub ecx, 6
    t0 = lsub<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_004d4457:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_004d4459:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004d445d:  // jl 0x4d4417
    if ((f.sf != f.of)) goto L_004d4417;
L_004d445f:  // mov eax, dword ptr [ebp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_004d4462:  // lea ebx, [ebp + 0x40]
    ebx = (uint32_t)((uint32_t)(ebp + 0x40u));
L_004d4465:  // lea ecx, [esp + 0xa0]
    ecx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_004d446c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d446d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d446e:  // lea edx, [esp + 0xf0]
    edx = (uint32_t)((uint32_t)(esp + 0xf0u));
L_004d4475:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d4476:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d4477:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_004d447b:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4480u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4480:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004d4482:  // call 0x4d4b90
    t0 = 0x004d4b90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4487u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4487:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004d448e:  // fmul dword ptr [0x5de7a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5de7a4u)));
L_004d4494:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d4498:  // mov ax, word ptr [esp + 0x18]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x18u))) & 0xffffu);
L_004d449d:  // mov word ptr [esp + 0x98], ax
    M16((uint32_t)(esp + 0x98u)) = (uint16_t)((eax & 0xffffu));
L_004d44a5:  // lea eax, [esp + 0x98]
    eax = (uint32_t)((uint32_t)(esp + 0x98u));
L_004d44ac:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d44ad:  // fld dword ptr [esp + 0xa8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa8u)));
L_004d44b4:  // fmul dword ptr [0x5de7a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5de7a4u)));
L_004d44ba:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d44be:  // mov cx, word ptr [esp + 0x1c]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x1cu))) & 0xffffu);
L_004d44c3:  // mov word ptr [esp + 0x9e], cx
    M16((uint32_t)(esp + 0x9eu)) = (uint16_t)((ecx & 0xffffu));
L_004d44cb:  // mov ecx, dword ptr [ebp + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d44d1:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004d44d8:  // fmul dword ptr [0x5de7a4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5de7a4u)));
L_004d44de:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d44e2:  // mov dx, word ptr [esp + 0x1c]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x1cu))) & 0xffffu);
L_004d44e7:  // mov word ptr [esp + 0xa0], dx
    M16((uint32_t)(esp + 0xa0u)) = (uint16_t)((edx & 0xffffu));
L_004d44ef:  // call 0x4d61b0
    t0 = 0x004d61b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d44f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d44f4:  // mov dword ptr [esp + 0x7c], eax
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(eax);
L_004d44f8:  // mov ecx, dword ptr [ebp + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d44fe:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d4500:  // mov esi, dword ptr [ecx + 8]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004d4503:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d4505:  // jle 0x4d4562
    if ((f.zf || f.sf != f.of)) goto L_004d4562;
L_004d4507:  // lea edx, [esi + esi*2]
    edx = (uint32_t)((uint32_t)(esi + esi * 2u));
L_004d450a:  // lea eax, [edx + edx - 6]
    eax = (uint32_t)((uint32_t)(edx + edx + 0xfffffffau));
L_004d450e:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004d4512:  // mov edx, dword ptr [ebp + 0x98]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d4518:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d451c:  // lea ecx, [esp + 0xc8]
    ecx = (uint32_t)((uint32_t)(esp + 0xc8u));
L_004d4523:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d4524:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d4525:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_004d4527:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004d4529:  // call 0x4d4b30
    t0 = 0x004d4b30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d452eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d452e:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_004d4532:  // lea ecx, [esp + 0xc8]
    ecx = (uint32_t)((uint32_t)(esp + 0xc8u));
L_004d4539:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d453a:  // call 0x4d4bc0
    t0 = 0x004d4bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d453fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d453f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d4541:  // jne 0x4d455e
    if (!f.zf) goto L_004d455e;
L_004d4543:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d4547:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004d4548:  // sub ecx, 6
    t0 = lsub<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_004d454b:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_004d454d:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004d4551:  // jl 0x4d4512
    if ((f.sf != f.of)) goto L_004d4512;
L_004d4553:  // jmp 0x4d4562
    goto L_004d4562;
L_004d4555:  // sub esi, edi
    t0 = lsub<32>(esi, edi, f);
    esi = (uint32_t)(t0);
L_004d4557:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004d4558:  // mov dword ptr [esp + 0x7c], esi
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(esi);
L_004d455c:  // jmp 0x4d44f8
    goto L_004d44f8;
L_004d455e:  // sub esi, edi
    t0 = lsub<32>(esi, edi, f);
    esi = (uint32_t)(t0);
L_004d4560:  // jmp 0x4d45b2
    goto L_004d45b2;
L_004d4562:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_004d4566:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d4567:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d4568:  // lea ecx, [esp + 0x88]
    ecx = (uint32_t)((uint32_t)(esp + 0x88u));
L_004d456f:  // call 0x4d4aa0
    t0 = 0x004d4aa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4574u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4574:  // mov esi, dword ptr [ebp + 0x98]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d457a:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004d457c:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d457f:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d4582:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004d4583:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004d4585:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_004d4588:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004d458a:  // jle 0x4d4597
    if ((f.zf || f.sf != f.of)) goto L_004d4597;
L_004d458c:  // lea edx, [eax + eax]
    edx = (uint32_t)((uint32_t)(eax + eax));
L_004d458f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004d4591:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004d4592:  // call 0x4d6210
    t0 = 0x004d6210u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4597u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4597:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d459a:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004d459c:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004d459f:  // lea edx, [ecx + eax*2 - 6]
    edx = (uint32_t)((uint32_t)(ecx + eax * 2u + 0xfffffffau));
L_004d45a3:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004d45a5:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004d45a7:  // mov cx, word ptr [edi + 4]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edi + 0x4u))) & 0xffffu);
L_004d45ab:  // mov word ptr [edx + 4], cx
    M16((uint32_t)(edx + 0x4u)) = (uint16_t)((ecx & 0xffffu));
L_004d45af:  // mov esi, dword ptr [esi + 8]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d45b2:  // mov edx, dword ptr [ebp + 0x98]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d45b8:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004d45b9:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_004d45bd:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d45bf:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004d45c2:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004d45c4:  // jle 0x4d4609
    if ((f.zf || f.sf != f.of)) goto L_004d4609;
L_004d45c6:  // lea eax, [edi + edi*2]
    eax = (uint32_t)((uint32_t)(edi + edi * 2u));
L_004d45c9:  // lea ebx, [eax + eax - 6]
    ebx = (uint32_t)((uint32_t)(eax + eax + 0xfffffffau));
L_004d45cd:  // mov edx, dword ptr [ebp + 0x98]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d45d3:  // lea eax, [ebp + 0x40]
    eax = (uint32_t)((uint32_t)(ebp + 0x40u));
L_004d45d6:  // lea ecx, [esp + 0xd8]
    ecx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_004d45dd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d45de:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d45df:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_004d45e1:  // add ecx, ebx
    t0 = ladd<32>(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_004d45e3:  // call 0x4d4b30
    t0 = 0x004d4b30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d45e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d45e8:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_004d45ec:  // lea ecx, [esp + 0xd8]
    ecx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_004d45f3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d45f4:  // call 0x4d4bc0
    t0 = 0x004d4bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d45f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d45f9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d45fb:  // jne 0x4d4965
    if (!f.zf) goto L_004d4965;
L_004d4601:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004d4602:  // sub ebx, 6
    t0 = lsub<32>(ebx, 0x6u, f);
    ebx = (uint32_t)(t0);
L_004d4605:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_004d4607:  // jl 0x4d45cd
    if ((f.sf != f.of)) goto L_004d45cd;
L_004d4609:  // lea eax, [ebp + 0x40]
    eax = (uint32_t)((uint32_t)(ebp + 0x40u));
L_004d460c:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004d4610:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d4611:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d4612:  // lea ecx, [esp + 0xb8]
    ecx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004d4619:  // call 0x4d4aa0
    t0 = 0x004d4aa0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d461eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d461e:  // mov ecx, dword ptr [ebp + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d4624:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d4625:  // call 0x4d61b0
    t0 = 0x004d61b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d462au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d462a:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004d462e:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004d4632:  // fsub dword ptr [ebp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x30u)));
L_004d4635:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004d4639:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004d463d:  // fsub dword ptr [ebp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x34u)));
L_004d4640:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004d4644:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004d4648:  // fsub dword ptr [ebp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x38u)));
L_004d464b:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004d464f:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004d4653:  // fsub dword ptr [ebp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x30u)));
L_004d4656:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004d465a:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004d465c:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004d4660:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004d4664:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004d4668:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004d466c:  // fsub dword ptr [ebp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x34u)));
L_004d466f:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_004d4673:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004d4677:  // fsub dword ptr [ebp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x38u)));
L_004d467a:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004d467e:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004d4682:  // fsub dword ptr [ebp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x30u)));
L_004d4685:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004d4689:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004d468d:  // fsub dword ptr [ebp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x34u)));
L_004d4690:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_004d4694:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004d4698:  // fsub dword ptr [ebp + 0x38]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x38u)));
L_004d469b:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_004d469f:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004d46a3:  // fcomp dword ptr [esp + 0x3c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x3cu)));
    lpop(x);
L_004d46a7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d46a9:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d46ac:  // je 0x4d46b6
    if (f.zf) goto L_004d46b6;
L_004d46ae:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004d46b2:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004d46b6:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004d46ba:  // fcomp dword ptr [esp + 0x2c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x2cu)));
    lpop(x);
L_004d46be:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d46c0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d46c3:  // je 0x4d46cd
    if (f.zf) goto L_004d46cd;
L_004d46c5:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004d46c9:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_004d46cd:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004d46d1:  // fcomp dword ptr [esp + 0x3c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x3cu)));
    lpop(x);
L_004d46d5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d46d7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d46da:  // jne 0x4d46e4
    if (!f.zf) goto L_004d46e4;
L_004d46dc:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004d46e0:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004d46e4:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004d46e8:  // fcomp dword ptr [esp + 0x30]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x30u)));
    lpop(x);
L_004d46ec:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d46ee:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d46f1:  // jne 0x4d46fb
    if (!f.zf) goto L_004d46fb;
L_004d46f3:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004d46f7:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_004d46fb:  // fld dword ptr [0x5de7a8]
    lpush(x, (long double)F32((uint32_t)(0x5de7a8u)));
L_004d4701:  // mov dword ptr [esp + 0x68], 0x51ba43b7
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x51ba43b7u);
L_004d4709:  // mov dword ptr [esp + 0x64], 0xd1ba43b7
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0xd1ba43b7u);
L_004d4711:  // mov dword ptr [esp + 0x6c], 0xd1ba43b7
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0xd1ba43b7u);
L_004d4719:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004d471d:  // mov edx, 3
    edx = (uint32_t)(0x3u);
L_004d4722:  // fcom dword ptr [ecx - 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0xfffffffcu)));
L_004d4725:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d4727:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d472a:  // jne 0x4d4731
    if (!f.zf) goto L_004d4731;
L_004d472c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d472e:  // fld dword ptr [ecx - 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xfffffffcu)));
L_004d4731:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_004d4733:  // fcomp dword ptr [esp + 0x68]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x68u)));
    lpop(x);
L_004d4737:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d4739:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d473c:  // je 0x4d4744
    if (f.zf) goto L_004d4744;
L_004d473e:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d4740:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_004d4744:  // fld dword ptr [ecx - 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xfffffffcu)));
L_004d4747:  // fcomp dword ptr [esp + 0x64]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x64u)));
    lpop(x);
L_004d474b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d474d:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d4750:  // jne 0x4d4759
    if (!f.zf) goto L_004d4759;
L_004d4752:  // mov eax, dword ptr [ecx - 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xfffffffcu)));
L_004d4755:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_004d4759:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_004d475b:  // fcomp dword ptr [esp + 0x6c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x6cu)));
    lpop(x);
L_004d475f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d4761:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004d4764:  // jne 0x4d476c
    if (!f.zf) goto L_004d476c;
L_004d4766:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004d4768:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_004d476c:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004d476f:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_004d4770:  // jne 0x4d4722
    if (!f.zf) goto L_004d4722;
L_004d4772:  // fdiv dword ptr [ebp + 0x70]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(ebp + 0x70u)));
L_004d4775:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004d4778:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004d477b:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4780u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4780:  // fistp qword ptr [esp + 0x98]
    M64((uint32_t)(esp + 0x98u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d4787:  // mov esi, dword ptr [esp + 0x98]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_004d478e:  // mov dword ptr [esp + 0x98], esi
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(esi);
L_004d4795:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004d4799:  // fdiv dword ptr [ebp + 0x70]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(ebp + 0x70u)));
L_004d479c:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004d479f:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d47a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d47a4:  // fistp qword ptr [esp + 0x7c]
    M64((uint32_t)(esp + 0x7cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d47a8:  // mov edi, dword ptr [esp + 0x7c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004d47ac:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004d47b0:  // fdiv dword ptr [ebp + 0x70]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(ebp + 0x70u)));
L_004d47b3:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004d47b6:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d47bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d47bb:  // fistp qword ptr [esp + 0x7c]
    M64((uint32_t)(esp + 0x7cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d47bf:  // mov ebx, dword ptr [esp + 0x7c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004d47c3:  // mov dword ptr [esp + 0x7c], ebx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(ebx);
L_004d47c7:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004d47cb:  // fdiv dword ptr [ebp + 0x70]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(ebp + 0x70u)));
L_004d47ce:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004d47d1:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d47d6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d47d6:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d47da:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004d47de:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004d47e1:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d47e3:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004d47e7:  // jge 0x4d47f4
    if ((f.sf == f.of)) goto L_004d47f4;
L_004d47e9:  // mov dword ptr [esp + 0x90], 0
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(0x0u);
L_004d47f4:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004d47f6:  // jge 0x4d47fa
    if ((f.sf == f.of)) goto L_004d47fa;
L_004d47f8:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004d47fa:  // mov eax, dword ptr [ebp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x68u)));
L_004d47fd:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004d47ff:  // jl 0x4d4806
    if ((f.sf != f.of)) goto L_004d4806;
L_004d4801:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d4802:  // mov dword ptr [esp + 0x74], eax
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(eax);
L_004d4806:  // mov eax, dword ptr [ebp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x6cu)));
L_004d4809:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d480d:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004d480f:  // jl 0x4d4816
    if ((f.sf != f.of)) goto L_004d4816;
L_004d4811:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d4812:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004d4816:  // mov edx, dword ptr [ebp + 0x64]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x64u)));
L_004d4819:  // mov esi, dword ptr [esp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004d481d:  // mov ax, word ptr [esp + 0x7c]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x7cu))) & 0xffffu);
L_004d4822:  // mov word ptr [esi + edx], ax
    M16((uint32_t)(esi + edx)) = (uint16_t)((eax & 0xffffu));
L_004d4826:  // mov ecx, dword ptr [ebp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x64u)));
L_004d4829:  // mov dx, word ptr [esp + 0x20]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x20u))) & 0xffffu);
L_004d482e:  // mov word ptr [esi + ecx + 2], dx
    M16((uint32_t)(esi + ecx + 0x2u)) = (uint16_t)((edx & 0xffffu));
L_004d4833:  // mov eax, dword ptr [ebp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x64u)));
L_004d4836:  // mov cx, word ptr [esp + 0x18]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x18u))) & 0xffffu);
L_004d483b:  // or edx, 0xffffffff
    t0 = llog<32>(edx | 0xffffffffu, f);
    edx = (uint32_t)(t0);
L_004d483e:  // mov word ptr [esi + eax + 4], cx
    M16((uint32_t)(esi + eax + 0x4u)) = (uint16_t)((ecx & 0xffffu));
L_004d4843:  // mov eax, dword ptr [ebp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x64u)));
L_004d4846:  // mov dword ptr [esi + eax + 8], edx
    M32((uint32_t)(esi + eax + 0x8u)) = (uint32_t)(edx);
L_004d484a:  // mov ecx, dword ptr [ebp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x64u)));
L_004d484d:  // mov word ptr [esi + ecx + 6], 0
    M16((uint32_t)(esi + ecx + 0x6u)) = (uint16_t)(0x0u);
L_004d4854:  // fld dword ptr [ebp + 0x74]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x74u)));
L_004d4857:  // fcomp qword ptr [0x5d87b0]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d87b0u)));
    lpop(x);
L_004d485d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d485f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004d4862:  // jne 0x4d48ea
    if (!f.zf) goto L_004d48ea;
L_004d4868:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004d486c:  // fdiv dword ptr [ebp + 0x74]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(ebp + 0x74u)));
L_004d486f:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004d4873:  // fdiv dword ptr [ebp + 0x74]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(ebp + 0x74u)));
L_004d4876:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004d487a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004d487c:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d4880:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004d4884:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004d4888:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004d488c:  // fsubr st(1)
    ST(0) = (ST(1)) - (ST(0));
L_004d488e:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d4894:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d4896:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d4899:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004d489b:  // je 0x4d489e
    if (f.zf) goto L_004d489e;
L_004d489d:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004d489e:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004d48a2:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004d48a6:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004d48aa:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004d48ae:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_004d48b2:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_004d48b6:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004d48bc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004d48be:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004d48c1:  // je 0x4d48c4
    if (f.zf) goto L_004d48c4;
L_004d48c3:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_004d48c4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d48c6:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004d48c8:  // jge 0x4d48cc
    if ((f.sf == f.of)) goto L_004d48cc;
L_004d48ca:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004d48cc:  // cmp edx, 0x1f
    t0 = lsub<32>(edx, 0x1fu, f);
L_004d48cf:  // jle 0x4d48d6
    if ((f.zf || f.sf != f.of)) goto L_004d48d6;
L_004d48d1:  // mov eax, 0x1f
    eax = (uint32_t)(0x1fu);
L_004d48d6:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004d48d8:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004d48da:  // jg 0x4d48ea
    if ((!f.zf && f.sf == f.of)) goto L_004d48ea;
L_004d48dc:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_004d48e1:  // shl ebx, cl
    t0 = lshl<32>(ebx, (ecx & 0xffu), f);
    ebx = (uint32_t)(t0);
L_004d48e3:  // or edx, ebx
    t0 = llog<32>(edx | ebx, f);
    edx = (uint32_t)(t0);
L_004d48e5:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004d48e6:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004d48e8:  // jle 0x4d48dc
    if ((f.zf || f.sf != f.of)) goto L_004d48dc;
L_004d48ea:  // mov eax, dword ptr [ebp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x64u)));
L_004d48ed:  // mov ebx, edi
    ebx = (uint32_t)(edi);
L_004d48ef:  // mov dword ptr [esi + eax + 8], edx
    M32((uint32_t)(esi + eax + 0x8u)) = (uint32_t)(edx);
L_004d48f3:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d48f7:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d48f9:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004d48fb:  // jg 0x4d4a0f
    if ((!f.zf && f.sf == f.of)) goto L_004d4a0f;
L_004d4901:  // mov edi, dword ptr [esp + 0x90]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004d4908:  // cmp edi, dword ptr [esp + 0x74]
    t0 = lsub<32>(edi, M32((uint32_t)(esp + 0x74u)), f);
L_004d490c:  // jg 0x4d49fe
    if ((!f.zf && f.sf == f.of)) goto L_004d49fe;
L_004d4912:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d4913:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004d4917:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d4918:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d4919:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004d491b:  // call 0x4d3ce0
    t0 = 0x004d3ce0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4920u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4920:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004d4922:  // je 0x4d49ea
    if (f.zf) goto L_004d49ea;
L_004d4928:  // mov edx, dword ptr [ebp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x68u)));
L_004d492b:  // mov eax, dword ptr [ebp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x60u)));
L_004d492e:  // imul edx, ebx
    t0 = limul32(edx, ebx, f);
    edx = (uint32_t)(t0);
L_004d4931:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_004d4933:  // mov esi, dword ptr [eax + edx*4]
    esi = (uint32_t)(M32((uint32_t)(eax + edx * 4u)));
L_004d4936:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d4938:  // jne 0x4d4983
    if (!f.zf) goto L_004d4983;
L_004d493a:  // push 0x1d9
    t0 = 0x1d9u; esp -= 4; M32(esp) = t0;
L_004d493f:  // push 0x6316bc
    t0 = 0x6316bcu; esp -= 4; M32(esp) = t0;
L_004d4944:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_004d4946:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004d4948:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d494d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4952u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4952:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004d4954:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004d4956:  // je 0x4d4971
    if (f.zf) goto L_004d4971;
L_004d4958:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004d495a:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004d495d:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004d4960:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_004d4963:  // jmp 0x4d4973
    goto L_004d4973;
L_004d4965:  // sub edi, esi
    t0 = lsub<32>(edi, esi, f);
    edi = (uint32_t)(t0);
L_004d4967:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004d4968:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_004d496c:  // jmp 0x4d462e
    goto L_004d462e;
L_004d4971:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004d4973:  // mov ecx, dword ptr [ebp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x68u)));
L_004d4976:  // mov edx, dword ptr [ebp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x60u)));
L_004d4979:  // imul ecx, ebx
    t0 = limul32(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_004d497c:  // add ecx, edi
    t0 = ladd<32>(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_004d497e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004d4980:  // mov dword ptr [edx + ecx*4], eax
    M32((uint32_t)(edx + ecx * 4u)) = (uint32_t)(eax);
L_004d4983:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d4986:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d4989:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004d498a:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004d498c:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_004d498f:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004d4991:  // jle 0x4d49d6
    if ((f.zf || f.sf != f.of)) goto L_004d49d6;
L_004d4993:  // cmp dword ptr [esi], 0
    t0 = lsub<32>(M32((uint32_t)(esi)), 0x0u, f);
L_004d4996:  // jne 0x4d49b8
    if (!f.zf) goto L_004d49b8;
L_004d4998:  // push 0x76
    t0 = 0x76u; esp -= 4; M32(esp) = t0;
L_004d499a:  // push 0x6316bc
    t0 = 0x6316bcu; esp -= 4; M32(esp) = t0;
L_004d499f:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_004d49a1:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004d49a3:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d49a8:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d49adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d49ad:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_004d49af:  // mov dword ptr [esi + 4], 0xa
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(0xau);
L_004d49b6:  // jmp 0x4d49d6
    goto L_004d49d6;
L_004d49b8:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d49bb:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004d49bd:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004d49c0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d49c1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d49c2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d49c7:  // call 0x5491b0
    t0 = 0x005491b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d49ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d49cc:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004d49cf:  // mov dword ptr [esi], eax
    M32((uint32_t)(esi)) = (uint32_t)(eax);
L_004d49d1:  // shl edx, 1
    t0 = lshl<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_004d49d3:  // mov dword ptr [esi + 4], edx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edx);
L_004d49d6:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004d49d9:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004d49db:  // mov dx, word ptr [esp + 0x70]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x70u))) & 0xffffu);
L_004d49e0:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004d49e5:  // mov word ptr [ecx + eax*2 - 2], dx
    M16((uint32_t)(ecx + eax * 2u + 0xfffffffeu)) = (uint16_t)((edx & 0xffffu));
L_004d49ea:  // mov eax, dword ptr [esp + 0x74]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004d49ee:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004d49ef:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004d49f1:  // jle 0x4d4912
    if ((f.zf || f.sf != f.of)) goto L_004d4912;
L_004d49f7:  // mov edi, dword ptr [esp + 0x90]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004d49fe:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004d4a02:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004d4a03:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004d4a05:  // jle 0x4d4908
    if ((f.zf || f.sf != f.of)) goto L_004d4908;
L_004d4a0b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004d4a0d:  // jne 0x4d4a2f
    if (!f.zf) goto L_004d4a2f;
L_004d4a0f:  // mov eax, dword ptr [esp + 0x108]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x108u)));
L_004d4a16:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_004d4a1c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d4a1d:  // push 0x6316e0
    t0 = 0x6316e0u; esp -= 4; M32(esp) = t0;
L_004d4a22:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_004d4a27:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4a2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4a2c:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004d4a2f:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004d4a33:  // mov eax, dword ptr [esp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004d4a37:  // add edx, 0xc
    t0 = ladd<32>(edx, 0xcu, f);
    edx = (uint32_t)(t0);
L_004d4a3a:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004d4a3b:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004d4a3f:  // mov edx, dword ptr [esp + 0x108]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x108u)));
L_004d4a46:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_004d4a4a:  // cmp eax, dword ptr [edx + 0xb0]
    t0 = lsub<32>(eax, M32((uint32_t)(edx + 0xb0u)), f);
L_004d4a50:  // jl 0x4d4348
    if ((f.sf != f.of)) goto L_004d4348;
L_004d4a56:  // mov ebp, dword ptr [ebp + 0x98]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x98u)));
L_004d4a5c:  // mov esi, dword ptr [ebp + 8]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004d4a5f:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_004d4a62:  // lea eax, [esi + esi*2]
    eax = (uint32_t)((uint32_t)(esi + esi * 2u));
L_004d4a65:  // shl eax, 1
    t0 = lshl<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004d4a67:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004d4a68:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004d4a69:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004d4a6e:  // call 0x5491b0
    t0 = 0x005491b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d4a73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d4a73:  // mov dword ptr [ebp], eax
    M32((uint32_t)(ebp)) = (uint32_t)(eax);
L_004d4a76:  // mov dword ptr [ebp + 4], esi
    M32((uint32_t)(ebp + 0x4u)) = (uint32_t)(esi);
L_004d4a79:  // mov al, 1
    eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_004d4a7b:  // mov ecx, dword ptr [esp + 0xf8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf8u)));
L_004d4a82:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004d4a83:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004d4a84:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004d4a85:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004d4a86:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004d4a8d:  // add esp, 0xf4
    t0 = ladd<32>(esp, 0xf4u, f);
    esp = (uint32_t)(t0);
L_004d4a93:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d40d0, 004d40d0)
