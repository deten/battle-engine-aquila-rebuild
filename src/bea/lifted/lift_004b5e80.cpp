// lifted from 004b5e80 (FUN_004b5e80, 987 bytes, 271 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b5e80(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b5e80;
L_004b5e80:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004b5e84:  // sub esp, 0x98
    t0 = lsub<32>(esp, 0x98u, f);
    esp = (uint32_t)(t0);
L_004b5e8a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b5e8b:  // mov ebx, dword ptr [eax + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b5e8e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b5e8f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b5e90:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b5e92:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b5e93:  // je 0x4b6250
    if (f.zf) goto L_004b6250;
L_004b5e99:  // mov esi, dword ptr [esp + 0xf0]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_004b5ea0:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_004b5ea4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5ea5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b5ea7:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b5ea9:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5eacu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5eac:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_004b5eb3:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b5eb6:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004b5ebd:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b5ec0:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b5ec2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b5ec4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5ec6:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b5ecd:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_004b5ecf:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5ed1:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004b5ed5:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_004b5edc:  // fmul dword ptr [eax + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x18u)));
L_004b5edf:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004b5ee6:  // fmul dword ptr [eax + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x14u)));
L_004b5ee9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5eeb:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b5ef2:  // fmul dword ptr [eax + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x10u)));
L_004b5ef5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5ef7:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004b5efb:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_004b5f02:  // fmul dword ptr [eax + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x28u)));
L_004b5f05:  // fld dword ptr [esp + 0xb0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb0u)));
L_004b5f0c:  // fmul dword ptr [eax + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x24u)));
L_004b5f0f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5f11:  // fld dword ptr [esp + 0xac]
    lpush(x, (long double)F32((uint32_t)(esp + 0xacu)));
L_004b5f18:  // fmul dword ptr [eax + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x20u)));
L_004b5f1b:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_004b5f1f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5f20:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5f22:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004b5f26:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5f28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5f28:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004b5f2c:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004b5f2e:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b5f32:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004b5f36:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b5f39:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b5f3d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004b5f41:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b5f45:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b5f48:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b5f4c:  // mov dword ptr [esp + 0xac], ecx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(ecx);
L_004b5f53:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b5f57:  // mov dword ptr [esp + 0xb0], edx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edx);
L_004b5f5e:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004b5f60:  // mov dword ptr [esp + 0xb8], ecx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(ecx);
L_004b5f67:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004b5f6b:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b5f6f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b5f71:  // mov dword ptr [esp + 0xb4], eax
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(eax);
L_004b5f78:  // lea eax, [esp + 0x78]
    eax = (uint32_t)((uint32_t)(esp + 0x78u));
L_004b5f7c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b5f7d:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5f80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5f80:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004b5f87:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b5f89:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004b5f8c:  // fld dword ptr [esp + 0xe4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe4u)));
L_004b5f93:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004b5f96:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5f98:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_004b5f9f:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004b5fa2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5fa3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5fa5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5fa8:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004b5faf:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004b5fb2:  // fld dword ptr [esp + 0xe4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe4u)));
L_004b5fb9:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004b5fbc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5fbd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5fbf:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_004b5fc6:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004b5fc9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5fcb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5fce:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004b5fd5:  // fmul dword ptr [esi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x20u)));
L_004b5fd8:  // fld dword ptr [esp + 0xe4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe4u)));
L_004b5fdf:  // fmul dword ptr [esi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x28u)));
L_004b5fe2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b5fe3:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_004b5fe7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5fe9:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_004b5ff0:  // fmul dword ptr [esi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x24u)));
L_004b5ff3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b5ff5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b5ff8:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b5ffdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b5ffd:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_004b6004:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004b6007:  // fld dword ptr [esp + 0xe4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe4u)));
L_004b600e:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004b6011:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b6012:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b6013:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b6015:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b601c:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004b601f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b6021:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b6024:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004b602b:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004b602e:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_004b6035:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004b6038:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b6039:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b603b:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b6042:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004b6045:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b6047:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b604a:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004b6051:  // fmul dword ptr [esi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x10u)));
L_004b6054:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_004b605b:  // fmul dword ptr [esi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x18u)));
L_004b605e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b605f:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004b6063:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b6065:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_004b606c:  // fmul dword ptr [esi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x14u)));
L_004b606f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b6071:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b6074:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6079u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6079:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_004b6080:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004b6082:  // fld dword ptr [esp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe8u)));
L_004b6089:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_004b608c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b608d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b608e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b6090:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_004b6097:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_004b609a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b609c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b609f:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b60a6:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004b60a8:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_004b60af:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_004b60b2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b60b3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b60b5:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_004b60bc:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_004b60bf:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b60c1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b60c4:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004b60cb:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_004b60cd:  // fld dword ptr [esp + 0xec]
    lpush(x, (long double)F32((uint32_t)(esp + 0xecu)));
L_004b60d4:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_004b60d7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b60d8:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004b60dc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b60de:  // fld dword ptr [esp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe0u)));
L_004b60e5:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_004b60e8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b60ea:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b60ed:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b60f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b60f2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b60f3:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004b60f7:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b60fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b60fc:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b6101:  // lea esi, [esp + 0x48]
    esi = (uint32_t)((uint32_t)(esp + 0x48u));
L_004b6105:  // lea edi, [esp + 0xbc]
    edi = (uint32_t)((uint32_t)(esp + 0xbcu));
L_004b610c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004b610e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b6110:  // mov ecx, dword ptr [esp + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_004b6117:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004b6119:  // cmp dword ptr [ecx + 0x15c], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x15cu)), eax, f);
L_004b611f:  // jle 0x4b6250
    if ((f.zf || f.sf != f.of)) goto L_004b6250;
L_004b6125:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004b6129:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004b612d:  // mov edx, dword ptr [ebx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004b6130:  // cmp dword ptr [edx + ebp*4], -1
    t0 = lsub<32>(M32((uint32_t)(edx + ebp * 4u)), 0xffffffffu, f);
L_004b6134:  // je 0x4b6224
    if (f.zf) goto L_004b6224;
L_004b613a:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004b613d:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b6141:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004b6143:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_004b6145:  // mov edi, dword ptr [esp + 0x20]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b6149:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004b614b:  // add esi, edi
    t0 = ladd<32>(esi, edi, f);
    esi = (uint32_t)(t0);
L_004b614d:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004b6151:  // lea edi, [esp + 0x48]
    edi = (uint32_t)((uint32_t)(esp + 0x48u));
L_004b6155:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b6158:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004b615c:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b615f:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004b6163:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b6168:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b616b:  // lea eax, [esp + 0xac]
    eax = (uint32_t)((uint32_t)(esp + 0xacu));
L_004b6172:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004b6176:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b6177:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b6179:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004b617d:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004b6181:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b6182:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_004b6186:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b6187:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b6188:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_004b618f:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6194u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6194:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004b6196:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b619bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b619b:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004b619d:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004b61a1:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b61a4:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004b61a8:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b61ab:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004b61af:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004b61b3:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b61b6:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_004b61ba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b61bb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b61bc:  // lea ecx, [esp + 0xc4]
    ecx = (uint32_t)((uint32_t)(esp + 0xc4u));
L_004b61c3:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004b61c7:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b61ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b61cc:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004b61cf:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b61d4:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b61d6:  // lea edi, [esp + 0x48]
    edi = (uint32_t)((uint32_t)(esp + 0x48u));
L_004b61da:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b61dc:  // mov eax, dword ptr [edx + ebp*4]
    eax = (uint32_t)(M32((uint32_t)(edx + ebp * 4u)));
L_004b61df:  // mov ecx, dword ptr [esp + 0xf8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf8u)));
L_004b61e6:  // mov edx, dword ptr [esp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_004b61ed:  // or eax, ecx
    t0 = llog<32>(eax | ecx, f);
    eax = (uint32_t)(t0);
L_004b61ef:  // mov ecx, dword ptr [esp + 0xf4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf4u)));
L_004b61f6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b61f7:  // mov eax, dword ptr [ebx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004b61fa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b61fc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b61fd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b61fe:  // mov edx, dword ptr [esp + 0xfc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xfcu)));
L_004b6205:  // mov ecx, dword ptr [eax + ebp*4]
    ecx = (uint32_t)(M32((uint32_t)(eax + ebp * 4u)));
L_004b6208:  // mov eax, dword ptr [edx + 0x160]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x160u)));
L_004b620e:  // lea edx, [esp + 0x58]
    edx = (uint32_t)((uint32_t)(esp + 0x58u));
L_004b6212:  // mov ecx, dword ptr [eax + ecx*4]
    ecx = (uint32_t)(M32((uint32_t)(eax + ecx * 4u)));
L_004b6215:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_004b6219:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b621a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b621b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b621c:  // call 0x4b6350
    t0 = 0x004b6350u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b6221u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b6221:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_004b6224:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b6228:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b622c:  // add ecx, 0x30
    t0 = ladd<32>(ecx, 0x30u, f);
    ecx = (uint32_t)(t0);
L_004b622f:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_004b6230:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004b6234:  // mov ecx, dword ptr [esp + 0xec]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_004b623b:  // add edx, 0x10
    t0 = ladd<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_004b623e:  // mov eax, dword ptr [ecx + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x15cu)));
L_004b6244:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004b6248:  // cmp ebp, eax
    t0 = lsub<32>(ebp, eax, f);
L_004b624a:  // jl 0x4b612d
    if ((f.sf != f.of)) goto L_004b612d;
L_004b6250:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b6251:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b6252:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b6253:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b6254:  // add esp, 0x98
    t0 = ladd<32>(esp, 0x98u, f);
    esp = (uint32_t)(t0);
L_004b625a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004b5e80, 004b5e80)
