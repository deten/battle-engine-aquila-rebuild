// lifted from 00480ed0 (FUN_00480ed0, 395 bytes, 139 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00480ed0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00480ed0;
L_00480ed0:  // sub esp, 0x24
    t0 = lsub<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00480ed3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00480ed4:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00480ed6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00480ed7:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00480eda:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00480edc:  // je 0x480f02
    if (f.zf) goto L_00480f02;
L_00480ede:  // cmp dword ptr [eax + 0xc], 0x3b6
    t0 = lsub<32>(M32((uint32_t)(eax + 0xcu)), 0x3b6u, f);
L_00480ee5:  // jle 0x480f02
    if ((f.zf || f.sf != f.of)) goto L_00480f02;
L_00480ee7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00480ee8:  // push 0x62ce20
    t0 = 0x62ce20u; esp -= 4; M32(esp) = t0;
L_00480eed:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00480ef2:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480ef7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480ef7:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00480efa:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00480efb:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00480efc:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00480eff:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00480f02:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00480f06:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_00480f0a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00480f0b:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00480f0e:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480f13u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480f13:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00480f16:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00480f1a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00480f1b:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00480f1e:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480f23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480f23:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00480f27:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00480f2b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00480f2f:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_00480f33:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00480f37:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_00480f3b:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00480f3f:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00480f42:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00480f44:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00480f46:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00480f4a:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_00480f4e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00480f50:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00480f52:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00480f54:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00480f56:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00480f58:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00480f5a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00480f5c:  // fld dword ptr [edx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edx + 0x1cu)));
L_00480f5f:  // fadd dword ptr [edi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x1cu)));
L_00480f62:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00480f64:  // fst dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
L_00480f68:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00480f6e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00480f70:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00480f73:  // jne 0x480ffe
    if (!f.zf) goto L_00480ffe;
L_00480f79:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00480f7c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00480f7d:  // mov ebx, dword ptr [edx + 8]
    ebx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00480f80:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00480f82:  // call dword ptr [eax + 0x3c]
    t0 = M32((uint32_t)(eax + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480f85u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480f85:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_00480f87:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00480f89:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00480f8d:  // call dword ptr [edx + 0x3c]
    t0 = M32((uint32_t)(edx + 0x3cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480f90u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480f90:  // fadd dword ptr [esp + 0x34]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x34u)));
L_00480f94:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00480f95:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00480f9b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00480f9d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00480fa0:  // jne 0x481051
    if (!f.zf) goto L_00481051;
L_00480fa6:  // fdivr dword ptr [esp + 8]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x8u))) / (ST(0));
L_00480faa:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_00480fb0:  // fcom dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
L_00480fb6:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00480fb8:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00480fbb:  // jne 0x480ffc
    if (!f.zf) goto L_00480ffc;
L_00480fbd:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00480fc0:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00480fc4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00480fc6:  // je 0x480ff0
    if (f.zf) goto L_00480ff0;
L_00480fc8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00480fc9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00480fca:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_00480fce:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00480fd0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00480fd1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00480fd2:  // push 0x7d0
    t0 = 0x7d0u; esp -= 4; M32(esp) = t0;
L_00480fd7:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_00480fdc:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00480fe1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00480fe1:  // mov dword ptr [esi + 0xc], 0
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(0x0u);
L_00480fe8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00480fe9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00480fea:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00480fed:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00480ff0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00480ff2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00480ff3:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00480ff7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00480ff9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00480ffa:  // jmp 0x481039
    goto L_00481039;
L_00480ffc:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00480ffe:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00481001:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00481003:  // jne 0x481015
    if (!f.zf) goto L_00481015;
L_00481005:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00481006:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00481008:  // call 0x480c90
    t0 = 0x00480c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048100du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048100d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048100e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048100f:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00481012:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00481015:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00481018:  // mov dword ptr [esp + 0x30], 0xbf800000
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0xbf800000u);
L_00481020:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00481022:  // je 0x48102f
    if (f.zf) goto L_0048102f;
L_00481024:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00481025:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00481026:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0048102a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048102c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048102d:  // jmp 0x480fd1
    goto L_00480fd1;
L_0048102f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00481031:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00481032:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_00481036:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00481038:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00481039:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048103a:  // push 0x7d0
    t0 = 0x7d0u; esp -= 4; M32(esp) = t0;
L_0048103f:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_00481044:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00481049u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00481049:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048104a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048104b:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_0048104e:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00481051:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00481052:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00481053:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00481055:  // add esp, 0x24
    t0 = ladd<32>(esp, 0x24u, f);
    esp = (uint32_t)(t0);
L_00481058:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00480ed0, 00480ed0)
