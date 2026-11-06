// lifted from 004acf30 (FUN_004acf30, 1739 bytes, 520 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004acf30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004acf30;
L_004acf30:  // sub esp, 0x40
    t0 = lsub<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004acf33:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004acf37:  // fmul dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x5cu)));
L_004acf3b:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004acf3f:  // fmul dword ptr [esp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x60u)));
L_004acf43:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004acf47:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004acf4b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acf4d:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004acf51:  // fmul dword ptr [esp + 0x58]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x58u)));
L_004acf55:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004acf59:  // mov dword ptr [esp], eax
    M32((uint32_t)(esp)) = (uint32_t)(eax);
L_004acf5d:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004acf61:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004acf62:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004acf64:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004acf68:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004acf69:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004acf6b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004acf6c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004acf6e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004acf6f:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_004acf77:  // mov dword ptr [esp + 0x34], 0
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(0x0u);
L_004acf7f:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_004acf87:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004acf8b:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004acf8f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004acf95:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004acf97:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004acf9a:  // jne 0x4acfc0
    if (!f.zf) goto L_004acfc0;
L_004acf9c:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004acfa2:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004acfa6:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004acfa8:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004acfac:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004acfb0:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004acfb2:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004acfb6:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004acfba:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004acfbc:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004acfc0:  // mov edi, dword ptr [esp + 0x54]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004acfc4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004acfc6:  // cmp dword ptr [edi + 0xc8], 1
    t0 = lsub<32>(M32((uint32_t)(edi + 0xc8u)), 0x1u, f);
L_004acfcd:  // jne 0x4ad0d6
    if (!f.zf) goto L_004ad0d6;
L_004acfd3:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004acfd7:  // fsub dword ptr [edi + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x84u)));
L_004acfdd:  // mov ebp, dword ptr [esp + 0x2c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004acfe1:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004acfe5:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004acfe9:  // fsub dword ptr [edi + 0x88]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x88u)));
L_004acfef:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004acff3:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004acff7:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004acffb:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004acfff:  // fsub dword ptr [edi + 0x8c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8cu)));
L_004ad005:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ad009:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004ad00d:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ad011:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004ad015:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ad019:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004ad01d:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004ad021:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004ad025:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad027:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004ad02b:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_004ad02f:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004ad033:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad035:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004ad037:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004ad03d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad03f:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ad042:  // jne 0x4ad068
    if (!f.zf) goto L_004ad068;
L_004ad044:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004ad04a:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_004ad04e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad050:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004ad054:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ad058:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad05a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004ad05e:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ad062:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004ad066:  // jmp 0x4ad06a
    goto L_004ad06a;
L_004ad068:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ad06a:  // mov ecx, dword ptr [edi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004ad070:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_004ad075:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad076:  // fld dword ptr [edi + ecx*4 + 0xac]
    lpush(x, (long double)F32((uint32_t)(edi + ecx * 4u + 0xacu)));
L_004ad07d:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ad07f:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ad083:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad086:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ad08a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad08c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad08d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad090:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad091:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004ad095:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ad099:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad09c:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad0a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad0a1:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ad0a5:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ad0a9:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004ad0ad:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004ad0b1:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_004ad0b5:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_004ad0b9:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004ad0bd:  // mov dword ptr [esp + 0x3c], esi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(esi);
L_004ad0c1:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004ad0c5:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004ad0c9:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004ad0cd:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_004ad0d1:  // jmp 0x4ad199
    goto L_004ad199;
L_004ad0d6:  // mov edx, dword ptr [edi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004ad0dc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad0dd:  // fld dword ptr [edi + edx*4 + 0xac]
    lpush(x, (long double)F32((uint32_t)(edi + edx * 4u + 0xacu)));
L_004ad0e4:  // fst dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
L_004ad0e8:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004ad0ec:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad0ee:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad0f1:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ad0f5:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad0f7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad0f8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad0fb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad0fc:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004ad100:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ad104:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad107:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad10cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad10c:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004ad110:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004ad114:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004ad118:  // mov ecx, dword ptr [edi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004ad11e:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004ad122:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004ad126:  // fld dword ptr [edi + ecx*4 + 0xac]
    lpush(x, (long double)F32((uint32_t)(edi + ecx * 4u + 0xacu)));
L_004ad12d:  // fcomp qword ptr [0x5dc678]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5dc678u)));
    lpop(x);
L_004ad133:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004ad137:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004ad13b:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004ad13f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad141:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ad144:  // jne 0x4ad195
    if (!f.zf) goto L_004ad195;
L_004ad146:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004ad14a:  // fmul dword ptr [0x5d8bb0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bb0u)));
L_004ad150:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ad154:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad155:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad157:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad15a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ad15e:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad160:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad161:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad164:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad165:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004ad169:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ad16d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad170:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad175u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad175:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004ad179:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004ad17d:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004ad181:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004ad185:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004ad189:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004ad18d:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004ad191:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_004ad195:  // mov ebp, dword ptr [esp + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ad199:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004ad19d:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ad1a1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad1a2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad1a5:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004ad1a9:  // fadd dword ptr [esp + 0x38]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x38u)));
L_004ad1ad:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad1ae:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad1b1:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004ad1b5:  // fadd dword ptr [esp + 0x60]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x60u)));
L_004ad1b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad1ba:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004ad1be:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad1c1:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad1c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad1c6:  // mov eax, dword ptr [esp + 0x7c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004ad1ca:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004ad1ce:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004ad1d2:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004ad1d4:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004ad1d8:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004ad1db:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004ad1df:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004ad1e2:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004ad1e5:  // mov ecx, dword ptr [edi + 0xcc]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0xccu)));
L_004ad1eb:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004ad1f0:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_004ad1f2:  // jne 0x4ad228
    if (!f.zf) goto L_004ad228;
L_004ad1f4:  // mov ecx, dword ptr [esp + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004ad1fb:  // mov edx, dword ptr [0x704cb8]
    edx = (uint32_t)(M32((uint32_t)(0x704cb8u)));
L_004ad201:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ad202:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ad203:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ad205:  // mov edx, dword ptr [0x704cbc]
    edx = (uint32_t)(M32((uint32_t)(0x704cbcu)));
L_004ad20b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ad20c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ad20d:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004ad210:  // mov edx, dword ptr [0x704cc0]
    edx = (uint32_t)(M32((uint32_t)(0x704cc0u)));
L_004ad216:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ad219:  // mov edx, dword ptr [0x704cc4]
    edx = (uint32_t)(M32((uint32_t)(0x704cc4u)));
L_004ad21f:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004ad222:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004ad225:  // ret 0x30
    c->target = M32(esp); esp += 52u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ad228:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ad22a:  // jne 0x4ad2a8
    if (!f.zf) goto L_004ad2a8;
L_004ad22c:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004ad230:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ad234:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad235:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad238:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004ad23c:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_004ad240:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad241:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad244:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004ad248:  // fadd dword ptr [esp + 0x60]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x60u)));
L_004ad24c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad24d:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004ad251:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad254:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad259u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad259:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004ad25d:  // fsub dword ptr [edi + 0x8c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x8cu)));
L_004ad263:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad264:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad267:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004ad26b:  // fsub dword ptr [edi + 0x88]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x88u)));
L_004ad271:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad272:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad275:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004ad279:  // fsub dword ptr [edi + 0x84]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x84u)));
L_004ad27f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad280:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_004ad284:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad287:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad28cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad28c:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004ad290:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004ad294:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004ad298:  // mov ebp, dword ptr [esp + 0x64]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004ad29c:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004ad2a0:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004ad2a4:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004ad2a8:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ad2ac:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ad2b0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ad2b4:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004ad2b8:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004ad2ba:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004ad2bc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad2be:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004ad2c0:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004ad2c2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad2c4:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004ad2c6:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004ad2c8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ad2ca:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004ad2d0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad2d2:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ad2d5:  // jne 0x4ad2fb
    if (!f.zf) goto L_004ad2fb;
L_004ad2d7:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004ad2dd:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ad2df:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004ad2e3:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004ad2e7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ad2eb:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad2ed:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004ad2f1:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_004ad2f5:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004ad2f9:  // jmp 0x4ad2fd
    goto L_004ad2fd;
L_004ad2fb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ad2fd:  // fld dword ptr [edi + 0xdc]
    lpush(x, (long double)F32((uint32_t)(edi + 0xdcu)));
L_004ad303:  // fcomp dword ptr [0x5dc674]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dc674u)));
    lpop(x);
L_004ad309:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad30b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ad30e:  // jne 0x4ad421
    if (!f.zf) goto L_004ad421;
L_004ad314:  // fld dword ptr [edi + 0xdc]
    lpush(x, (long double)F32((uint32_t)(edi + 0xdcu)));
L_004ad31a:  // fcomp dword ptr [0x5d95b4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d95b4u)));
    lpop(x);
L_004ad320:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad322:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ad325:  // je 0x4ad421
    if (f.zf) goto L_004ad421;
L_004ad32b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ad32f:  // fmul dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x6cu)));
L_004ad333:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ad337:  // fmul dword ptr [esp + 0x68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x68u)));
L_004ad33b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad33c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad33e:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004ad342:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004ad346:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad348:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004ad34c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad34e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad351:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ad355:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad357:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad358:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad35b:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004ad35f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad361:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad362:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_004ad366:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad369:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ad36b:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad370u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad370:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004ad374:  // fsub dword ptr [esp + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x60u)));
L_004ad378:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad379:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad37c:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004ad380:  // fsub dword ptr [esp + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x60u)));
L_004ad384:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad385:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad388:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004ad38c:  // fsub dword ptr [esp + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x60u)));
L_004ad390:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad391:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004ad395:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad398:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad39du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad39d:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004ad3a1:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004ad3a5:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004ad3a9:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004ad3af:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004ad3b3:  // mov dword ptr [esp + 0x58], eax
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(eax);
L_004ad3b7:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004ad3bb:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_004ad3bf:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_004ad3c3:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_004ad3c7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad3c9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004ad3cc:  // je 0x4ad421
    if (f.zf) goto L_004ad421;
L_004ad3ce:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ad3d2:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004ad3d6:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004ad3da:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004ad3dc:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004ad3de:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ad3e6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad3e8:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004ad3ea:  // fstp st(1)
    ST(1) = ST(0);
    lpop(x);
L_004ad3ec:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004ad3f2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad3f4:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ad3f7:  // jne 0x4ad41f
    if (!f.zf) goto L_004ad41f;
L_004ad3f9:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004ad3ff:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004ad407:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ad409:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004ad40d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004ad411:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004ad415:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004ad417:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004ad41b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ad41d:  // jmp 0x4ad421
    goto L_004ad421;
L_004ad41f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004ad421:  // mov ecx, dword ptr [edi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004ad427:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004ad42b:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004ad42e:  // lea edx, [ecx + edi + 8]
    edx = (uint32_t)((uint32_t)(ecx + edi + 0x8u));
L_004ad432:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ad436:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004ad438:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ad43c:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004ad43f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004ad442:  // mov dword ptr [edx + 0xc], ebp
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ebp);
L_004ad445:  // mov ebx, dword ptr [edi + 0x80]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x80u)));
L_004ad44b:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004ad44c:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004ad44e:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ad450:  // jle 0x4ad54a
    if ((f.zf || f.sf != f.of)) goto L_004ad54a;
L_004ad456:  // lea esi, [edi + 0x10]
    esi = (uint32_t)((uint32_t)(edi + 0x10u));
L_004ad459:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004ad45d:  // fmul dword ptr [esi - 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xfffffffcu)));
L_004ad460:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004ad464:  // fmul dword ptr [esi - 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xfffffff8u)));
L_004ad467:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad468:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad46a:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004ad46e:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004ad470:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad472:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ad474:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004ad476:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad479:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad47a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ad47c:  // fmul dword ptr [esi - 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xfffffffcu)));
L_004ad47f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad482:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad483:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_004ad487:  // fmul dword ptr [esi - 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xfffffff8u)));
L_004ad48a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad48d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad492u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad492:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004ad496:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_004ad49a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad49b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad49e:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004ad4a2:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_004ad4a6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad4a7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad4aa:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004ad4ae:  // fsub dword ptr [esp + 0x48]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x48u)));
L_004ad4b2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad4b3:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004ad4b7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ad4ba:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad4bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad4bf:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004ad4c3:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004ad4c7:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004ad4cb:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_004ad4cf:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004ad4d3:  // mov dword ptr [esp + 0x5c], edx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edx);
L_004ad4d7:  // mov dword ptr [esp + 0x64], ecx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(ecx);
L_004ad4db:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_004ad4df:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004ad4e1:  // lea ecx, [edi + 0xc]
    ecx = (uint32_t)((uint32_t)(edi + 0xcu));
L_004ad4e4:  // cmp edx, ebp
    t0 = lsub<32>(edx, ebp, f);
L_004ad4e6:  // je 0x4ad532
    if (f.zf) goto L_004ad532;
L_004ad4e8:  // fld dword ptr [esi - 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0xfffffff8u)));
L_004ad4eb:  // fcomp dword ptr [ecx - 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0xfffffffcu)));
    lpop(x);
L_004ad4ee:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad4f0:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ad4f3:  // je 0x4ad50d
    if (f.zf) goto L_004ad50d;
L_004ad4f5:  // fld dword ptr [esi - 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0xfffffffcu)));
L_004ad4f8:  // fcomp dword ptr [ecx]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx)));
    lpop(x);
L_004ad4fa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad4fc:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ad4ff:  // je 0x4ad50d
    if (f.zf) goto L_004ad50d;
L_004ad501:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004ad503:  // fcomp dword ptr [ecx + 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x4u)));
    lpop(x);
L_004ad506:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad508:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004ad50b:  // jne 0x4ad532
    if (!f.zf) goto L_004ad532;
L_004ad50d:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004ad511:  // fmul dword ptr [ecx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x4u)));
L_004ad514:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004ad518:  // fmul dword ptr [ecx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx)));
L_004ad51a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad51c:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004ad520:  // fmul dword ptr [ecx - 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0xfffffffcu)));
L_004ad523:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004ad525:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004ad52b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004ad52d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004ad530:  // jne 0x4ad53a
    if (!f.zf) goto L_004ad53a;
L_004ad532:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004ad533:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004ad536:  // cmp edx, ebx
    t0 = lsub<32>(edx, ebx, f);
L_004ad538:  // jl 0x4ad4e4
    if ((f.sf != f.of)) goto L_004ad4e4;
L_004ad53a:  // cmp edx, ebx
    t0 = lsub<32>(edx, ebx, f);
L_004ad53c:  // je 0x4ad54a
    if (f.zf) goto L_004ad54a;
L_004ad53e:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004ad53f:  // add esi, 0x10
    t0 = ladd<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_004ad542:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ad544:  // jl 0x4ad459
    if ((f.sf != f.of)) goto L_004ad459;
L_004ad54a:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004ad54c:  // je 0x4ad57f
    if (f.zf) goto L_004ad57f;
L_004ad54e:  // mov edx, dword ptr [esp + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004ad555:  // mov eax, dword ptr [esp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004ad559:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004ad55d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ad55e:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004ad560:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_004ad564:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ad565:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ad566:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004ad569:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004ad56d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ad56e:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004ad571:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004ad576:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004ad579:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004ad57c:  // ret 0x30
    c->target = M32(esp); esp += 52u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ad57f:  // cmp ebx, 2
    t0 = lsub<32>(ebx, 0x2u, f);
L_004ad582:  // je 0x4ad590
    if (f.zf) goto L_004ad590;
L_004ad584:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ad585:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ad586:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ad587:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ad589:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ad58a:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004ad58d:  // ret 0x30
    c->target = M32(esp); esp += 52u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ad590:  // lea edx, [edi + 0x18]
    edx = (uint32_t)((uint32_t)(edi + 0x18u));
L_004ad593:  // lea eax, [esp + 0x58]
    eax = (uint32_t)((uint32_t)(esp + 0x58u));
L_004ad597:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ad598:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ad599:  // lea ecx, [edi + 8]
    ecx = (uint32_t)((uint32_t)(edi + 0x8u));
L_004ad59c:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad5a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad5a1:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_004ad5a5:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad5aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad5aa:  // lea ecx, [esp + 0x68]
    ecx = (uint32_t)((uint32_t)(esp + 0x68u));
L_004ad5ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ad5af:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004ad5b3:  // call 0x40d180
    t0 = 0x0040d180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad5b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad5b8:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004ad5bc:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004ad5c0:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_004ad5c4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ad5c5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ad5c6:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004ad5ca:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ad5cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ad5cf:  // mov ecx, dword ptr [esp + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004ad5d6:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004ad5d8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ad5d9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ad5da:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ad5dc:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004ad5df:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ad5e0:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ad5e1:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004ad5e4:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004ad5e7:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ad5ea:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004ad5ed:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004ad5f0:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004ad5f5:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004ad5f8:  // ret 0x30
    c->target = M32(esp); esp += 52u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004acf30, 004acf30)
