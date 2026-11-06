// lifted from 004aede0 (FUN_004aede0, 816 bytes, 243 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004aede0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004aede0;
L_004aede0:  // sub esp, 0x24
    t0 = lsub<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_004aede3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004aede4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004aede5:  // mov ebx, dword ptr [esp + 0x30]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004aede9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004aedea:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004aedec:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004aedee:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004aedef:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004aedf5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aedf7:  // jle 0x4aef14
    if ((f.zf || f.sf != f.of)) goto L_004aef14;
L_004aedfd:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004aedff:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004aee05:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aee07:  // lea ecx, [edi + eax + 0x20]
    ecx = (uint32_t)((uint32_t)(edi + eax + 0x20u));
L_004aee0b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aee0c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aee0e:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004aee13u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004aee13:  // mov edx, dword ptr [esi + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004aee19:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aee1b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aee1d:  // lea eax, [edi + edx + 0x24]
    eax = (uint32_t)((uint32_t)(edi + edx + 0x24u));
L_004aee21:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aee22:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004aee27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004aee27:  // mov ecx, dword ptr [esi + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004aee2d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aee2f:  // lea edx, [edi + ecx + 0x28]
    edx = (uint32_t)((uint32_t)(edi + ecx + 0x28u));
L_004aee33:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aee35:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aee36:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004aee3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004aee3b:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004aee41:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aee43:  // fld dword ptr [edi + eax + 0x28]
    lpush(x, (long double)F32((uint32_t)(edi + eax + 0x28u)));
L_004aee47:  // lea eax, [edi + eax + 0x28]
    eax = (uint32_t)((uint32_t)(edi + eax + 0x28u));
L_004aee4b:  // fchs 
    ST(0) = -ST(0);
L_004aee4d:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004aee4f:  // mov ecx, dword ptr [esi + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004aee55:  // lea edx, [edi + ecx + 0x2c]
    edx = (uint32_t)((uint32_t)(edi + ecx + 0x2cu));
L_004aee59:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aee5b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aee5c:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004aee61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004aee61:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_004aee65:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aee67:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aee68:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aee6a:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004aee6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004aee6f:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004aee73:  // cmp eax, -2
    t0 = lsub<32>(eax, 0xfffffffeu, f);
L_004aee76:  // jl 0x4aee7e
    if ((f.sf != f.of)) goto L_004aee7e;
L_004aee78:  // cmp eax, dword ptr [esp + 0x44]
    t0 = lsub<32>(eax, M32((uint32_t)(esp + 0x44u)), f);
L_004aee7c:  // jl 0x4aee86
    if ((f.sf != f.of)) goto L_004aee86;
L_004aee7e:  // mov dword ptr [esp + 0x38], 0xffffffff
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0xffffffffu);
L_004aee86:  // lea eax, [edi + 0x30]
    eax = (uint32_t)((uint32_t)(edi + 0x30u));
L_004aee89:  // mov ecx, 6
    ecx = (uint32_t)(0x6u);
L_004aee8e:  // mov edx, dword ptr [esi + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004aee94:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004aee97:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004aee98:  // mov dword ptr [eax + edx - 4], 0xffffffff
    M32((uint32_t)(eax + edx + 0xfffffffcu)) = (uint32_t)(0xffffffffu);
L_004aeea0:  // jne 0x4aee8e
    if (!f.zf) goto L_004aee8e;
L_004aeea2:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004aeea6:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004aeea9:  // jne 0x4aeebb
    if (!f.zf) goto L_004aeebb;
L_004aeeab:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004aeeb1:  // mov dword ptr [edi + eax + 0x30], 0
    M32((uint32_t)(edi + eax + 0x30u)) = (uint32_t)(0x0u);
L_004aeeb9:  // jmp 0x4aeec5
    goto L_004aeec5;
L_004aeebb:  // mov ecx, dword ptr [esi + 0x134]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004aeec1:  // mov dword ptr [edi + ecx + 0x30], eax
    M32((uint32_t)(edi + ecx + 0x30u)) = (uint32_t)(eax);
L_004aeec5:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004aeecb:  // mov edx, edi
    edx = (uint32_t)(edi);
L_004aeecd:  // mov dword ptr [esp + 0x14], 0x3f800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3f800000u);
L_004aeed5:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004aeed7:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004aeedb:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004aeee3:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004aeee7:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004aeee9:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004aeef1:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004aeef5:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004aeef8:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004aeefc:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004aeefd:  // add edi, 0x60
    t0 = ladd<32>(edi, 0x60u, f);
    edi = (uint32_t)(t0);
L_004aef00:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004aef03:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004aef06:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_004aef0c:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004aef0e:  // jl 0x4aedff
    if ((f.sf != f.of)) goto L_004aedff;
L_004aef14:  // mov eax, dword ptr [esi + 0xb4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004aef1a:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004aef1c:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004aef1e:  // mov dword ptr [esp + 0x44], edi
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edi);
L_004aef22:  // jle 0x4af05b
    if ((f.zf || f.sf != f.of)) goto L_004af05b;
L_004aef28:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004aef2e:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004aef30:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aef32:  // jle 0x4aef63
    if ((f.zf || f.sf != f.of)) goto L_004aef63;
L_004aef34:  // mov dword ptr [esp + 0x38], ebp
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ebp);
L_004aef38:  // mov edx, dword ptr [esi + 0x84]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004aef3e:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004aef42:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004aef43:  // mov ecx, dword ptr [edi + edx]
    ecx = (uint32_t)(M32((uint32_t)(edi + edx)));
L_004aef46:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004aef48:  // call 0x44c1c0
    t0 = 0x0044c1c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004aef4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004aef4d:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004aef51:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004aef57:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004aef58:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004aef5b:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004aef5d:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004aef61:  // jl 0x4aef38
    if ((f.sf != f.of)) goto L_004aef38;
L_004aef63:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004aef69:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004aef6b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aef6d:  // jle 0x4af041
    if ((f.zf || f.sf != f.of)) goto L_004af041;
L_004aef73:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004aef75:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004aef7b:  // mov eax, dword ptr [edi + eax]
    eax = (uint32_t)(M32((uint32_t)(edi + eax)));
L_004aef7e:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004aef80:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004aef82:  // fsub dword ptr [esi + 0x60]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x60u)));
L_004aef85:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004aef87:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004aef8a:  // fsub dword ptr [esi + 0x64]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x64u)));
L_004aef8d:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004aef90:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004aef93:  // fsub dword ptr [esi + 0x68]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x68u)));
L_004aef96:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004aef99:  // fld dword ptr [esi + 8]
    lpush(x, (long double)F32((uint32_t)(esi + 0x8u)));
L_004aef9c:  // fld dword ptr [esi + 0x18]
    lpush(x, (long double)F32((uint32_t)(esi + 0x18u)));
L_004aef9f:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_004aefa2:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_004aefa5:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_004aefa8:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004aefab:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_004aefad:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_004aefb3:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004aefb7:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_004aefba:  // mov eax, dword ptr [edi + eax]
    eax = (uint32_t)(M32((uint32_t)(edi + eax)));
L_004aefbd:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004aefc1:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004aefc4:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004aefc8:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004aefcc:  // fmul dword ptr [eax + ecx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx)));
L_004aefcf:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004aefd3:  // fmul dword ptr [eax + ecx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + ecx + 0x4u)));
L_004aefd7:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004aefd9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004aefdb:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004aefdf:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004aefe2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004aefe4:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004aefe8:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004aefea:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004aefec:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004aefee:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004aeff1:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004aeff5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004aeff7:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004aeff9:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004aeffc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004aeffe:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004af002:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004af004:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004af006:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004af008:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004af00b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004af00d:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004af00f:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004af012:  // mov dword ptr [eax], ebp
    M32((uint32_t)(eax)) = (uint32_t)(ebp);
L_004af014:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004af018:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_004af01b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004af01d:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004af021:  // mov ebp, dword ptr [esp + 0x1c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004af025:  // mov dword ptr [eax + 8], ebp
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebp);
L_004af028:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004af02c:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004af02d:  // mov dword ptr [eax + 0xc], ebp
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ebp);
L_004af030:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_004af036:  // add ecx, 0x10
    t0 = ladd<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_004af039:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_004af03b:  // jl 0x4aef75
    if ((f.sf != f.of)) goto L_004aef75;
L_004af041:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004af045:  // mov ecx, dword ptr [esi + 0xb4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004af04b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004af04c:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_004af04f:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004af051:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_004af055:  // jl 0x4aef28
    if ((f.sf != f.of)) goto L_004aef28;
L_004af05b:  // mov eax, dword ptr [esi + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb0u)));
L_004af061:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004af063:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004af065:  // jle 0x4af0fd
    if ((f.zf || f.sf != f.of)) goto L_004af0fd;
L_004af06b:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004af06d:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004af071:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af073:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004af074:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af076:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af07bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af07b:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004af07f:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af081:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004af082:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af084:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af089u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af089:  // lea eax, [esp + 0x44]
    eax = (uint32_t)((uint32_t)(esp + 0x44u));
L_004af08d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004af08f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004af090:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004af092:  // call 0x548570
    t0 = 0x00548570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af097u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af097:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004af09b:  // mov edx, dword ptr [esi + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af0a1:  // add edi, 0xc
    t0 = ladd<32>(edi, 0xcu, f);
    edi = (uint32_t)(t0);
L_004af0a4:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004af0a7:  // shl ecx, 5
    t0 = lshl<32>(ecx, 0x5u, f);
    ecx = (uint32_t)(t0);
L_004af0aa:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_004af0ac:  // mov edx, dword ptr [esi + 0x80]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004af0b2:  // mov dword ptr [edi + edx - 0xc], ecx
    M32((uint32_t)(edi + edx + 0xfffffff4u)) = (uint32_t)(ecx);
L_004af0b6:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004af0ba:  // mov edx, dword ptr [esi + 0x134]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af0c0:  // mov ecx, dword ptr [esi + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004af0c6:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004af0c9:  // shl eax, 5
    t0 = lshl<32>(eax, 0x5u, f);
    eax = (uint32_t)(t0);
L_004af0cc:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004af0ce:  // mov dword ptr [edi + ecx - 8], eax
    M32((uint32_t)(edi + ecx + 0xfffffff8u)) = (uint32_t)(eax);
L_004af0d2:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004af0d6:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004af0d9:  // mov eax, dword ptr [esi + 0x134]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x134u)));
L_004af0df:  // shl edx, 5
    t0 = lshl<32>(edx, 0x5u, f);
    edx = (uint32_t)(t0);
L_004af0e2:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_004af0e4:  // mov eax, dword ptr [esi + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x80u)));
L_004af0ea:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004af0eb:  // mov dword ptr [edi + eax - 4], edx
    M32((uint32_t)(edi + eax + 0xfffffffcu)) = (uint32_t)(edx);
L_004af0ef:  // mov eax, dword ptr [esi + 0xb0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xb0u)));
L_004af0f5:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004af0f7:  // jl 0x4af06d
    if ((f.sf != f.of)) goto L_004af06d;
L_004af0fd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004af0ff:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004af101:  // call 0x4b1eb0
    t0 = 0x004b1eb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004af106u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004af106:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004af107:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004af108:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004af109:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004af10a:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_004af10d:  // ret 0x14
    c->target = M32(esp); esp += 24u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004aede0, 004aede0)
