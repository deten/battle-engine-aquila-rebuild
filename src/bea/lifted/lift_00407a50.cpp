// lifted from 00407a50 (FUN_00407a50, 1692 bytes, 437 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00407a50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00407a50;
L_00407a50:  // sub esp, 0x6c
    t0 = lsub<32>(esp, 0x6cu, f);
    esp = (uint32_t)(t0);
L_00407a53:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00407a54:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00407a56:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00407a57:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00407a58:  // lea esi, [ebx + 0x114]
    esi = (uint32_t)((uint32_t)(ebx + 0x114u));
L_00407a5e:  // lea eax, [ebx + 0x590]
    eax = (uint32_t)((uint32_t)(ebx + 0x590u));
L_00407a64:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00407a66:  // mov edi, 2
    edi = (uint32_t)(0x2u);
L_00407a6b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00407a6d:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_00407a6f:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00407a72:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00407a75:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00407a78:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00407a7b:  // mov eax, dword ptr [ebx + 0x260]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x260u)));
L_00407a81:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00407a83:  // jne 0x407dbd
    if (!f.zf) goto L_00407dbd;
L_00407a89:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_00407a8b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00407a8d:  // call dword ptr [edx + 0x10c]
    t0 = M32((uint32_t)(edx + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407a93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407a93:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00407a95:  // jne 0x407aa6
    if (!f.zf) goto L_00407aa6;
L_00407a97:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00407a99:  // call 0x401fd0
    t0 = 0x00401fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407a9eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407a9e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00407aa0:  // je 0x407dbd
    if (f.zf) goto L_00407dbd;
L_00407aa6:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00407aa8:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00407aaa:  // fcos 
    ST(0) = lfcos(ST(0));
L_00407aac:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00407aae:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00407ab2:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00407ab6:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00407aba:  // fsin 
    ST(0) = lfsin(ST(0));
L_00407abc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00407abd:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00407ac1:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00407ac5:  // fchs 
    ST(0) = -ST(0);
L_00407ac7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00407ac8:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00407acc:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_00407ad0:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407ad5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407ad5:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00407ad7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00407adc:  // mov dword ptr [esp + 0x5c], edx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(edx);
L_00407ae0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00407ae2:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00407ae5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00407ae7:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_00407aeb:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00407aef:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00407af2:  // mov dword ptr [esp + 0x6c], edx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(edx);
L_00407af6:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00407af9:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_00407afd:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407b02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407b02:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00407b04:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00407b08:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00407b0b:  // mov dword ptr [esp + 0x68], ecx
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(ecx);
L_00407b0f:  // mov dword ptr [esp + 0x6c], edx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(edx);
L_00407b13:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00407b16:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00407b19:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00407b1b:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00407b1f:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00407b23:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00407b27:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_00407b2b:  // mov dword ptr [esp + 0x70], ecx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(ecx);
L_00407b2f:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00407b31:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00407b35:  // mov dword ptr [esp + 0x74], edx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(edx);
L_00407b39:  // call dword ptr [eax + 0x10c]
    t0 = M32((uint32_t)(eax + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407b3fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407b3f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00407b41:  // je 0x407b82
    if (f.zf) goto L_00407b82;
L_00407b43:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00407b45:  // call 0x401fd0
    t0 = 0x00401fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407b4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407b4a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00407b4c:  // jne 0x407b82
    if (!f.zf) goto L_00407b82;
L_00407b4e:  // lea ecx, [ebx + 0x1c]
    ecx = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_00407b51:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00407b55:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00407b56:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00407b5b:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407b60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407b60:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00407b64:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00407b68:  // mov ecx, dword ptr [esp + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00407b6c:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_00407b70:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00407b74:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_00407b78:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_00407b7c:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_00407b80:  // jmp 0x407bba
    goto L_00407bba;
L_00407b82:  // mov dword ptr [esp + 0x38], 0
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(0x0u);
L_00407b8a:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00407b8e:  // mov dword ptr [esp + 0x3c], 0
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x0u);
L_00407b96:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00407b9a:  // mov dword ptr [esp + 0x40], 0xbf800000
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(0xbf800000u);
L_00407ba2:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00407ba6:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00407baa:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00407bae:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_00407bb2:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_00407bb6:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00407bba:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00407bbe:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00407bc2:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00407bc6:  // fmul dword ptr [esp + 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x30u)));
L_00407bca:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00407bcc:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00407bd0:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00407bd4:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00407bd8:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00407bdc:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00407bde:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00407be2:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_00407be6:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00407bea:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00407bee:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00407bf0:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00407bf2:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00407bf6:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00407bf8:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00407bfc:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00407bfe:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_00407c02:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00407c06:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00407c0a:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00407c0c:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00407c0e:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_00407c12:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00407c16:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_00407c18:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00407c1a:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00407c1e:  // fsubp st(2)
    ST(2) = (ST(2)) - (ST(0));
    lpop(x);
L_00407c20:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00407c22:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00407c26:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00407c28:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_00407c2c:  // fmul dword ptr [esp + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x38u)));
L_00407c30:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00407c32:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00407c34:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00407c36:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00407c38:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00407c3a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00407c3c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00407c3e:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00407c40:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00407c42:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00407c48:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407c4a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00407c4d:  // jne 0x407c59
    if (!f.zf) goto L_00407c59;
L_00407c4f:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00407c55:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00407c57:  // jmp 0x407c5b
    goto L_00407c5b;
L_00407c59:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00407c5b:  // mov ecx, dword ptr [ebx + 0x574]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x574u)));
L_00407c61:  // fchs 
    ST(0) = -ST(0);
L_00407c63:  // mov eax, dword ptr [ecx + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x2cu)));
L_00407c66:  // mov ecx, dword ptr [0x8a9ac4]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9ac4u)));
L_00407c6c:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00407c70:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00407c71:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00407c73:  // jne 0x407ccb
    if (!f.zf) goto L_00407ccb;
L_00407c75:  // cmp dword ptr [0x8a9ac0], 3
    t0 = lsub<32>(M32((uint32_t)(0x8a9ac0u)), 0x3u, f);
L_00407c7c:  // jne 0x407ccb
    if (!f.zf) goto L_00407ccb;
L_00407c7e:  // test byte ptr [ebx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebx + 0x2cu)) & 0x4u, f);
L_00407c82:  // jne 0x407ccb
    if (!f.zf) goto L_00407ccb;
L_00407c84:  // mov ecx, dword ptr [ebx + 0x580]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x580u)));
L_00407c8a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00407c8c:  // je 0x407ccb
    if (f.zf) goto L_00407ccb;
L_00407c8e:  // cmp dword ptr [ebx + 0x260], edi
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x260u)), edi, f);
L_00407c94:  // jne 0x407ccb
    if (!f.zf) goto L_00407ccb;
L_00407c96:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00407c99:  // mov eax, dword ptr [edx*4 + 0x889304]
    eax = (uint32_t)(M32((uint32_t)(edx * 4u + 0x889304u)));
L_00407ca0:  // cmp eax, 0xe
    t0 = lsub<32>(eax, 0xeu, f);
L_00407ca3:  // je 0x407caa
    if (f.zf) goto L_00407caa;
L_00407ca5:  // cmp eax, 0xd
    t0 = lsub<32>(eax, 0xdu, f);
L_00407ca8:  // jne 0x407ccb
    if (!f.zf) goto L_00407ccb;
L_00407caa:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00407cac:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00407cae:  // call dword ptr [eax + 0x10c]
    t0 = M32((uint32_t)(eax + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407cb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407cb4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00407cb6:  // jne 0x407e97
    if (!f.zf) goto L_00407e97;
L_00407cbc:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00407cbe:  // call 0x401fd0
    t0 = 0x00401fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407cc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407cc3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00407cc5:  // jne 0x407e97
    if (!f.zf) goto L_00407e97;
L_00407ccb:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407cd1:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_00407cd5:  // fst dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
L_00407cd9:  // fcomp dword ptr [0x5d85ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85ecu)));
    lpop(x);
L_00407cdf:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00407ce3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407ce5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00407ce8:  // jne 0x407d3b
    if (!f.zf) goto L_00407d3b;
L_00407cea:  // fcomp dword ptr [0x5d8bec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8becu)));
    lpop(x);
L_00407cf0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407cf2:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00407cf5:  // jne 0x407d12
    if (!f.zf) goto L_00407d12;
L_00407cf7:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00407cfb:  // fsub dword ptr [0x5d8bec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8becu)));
L_00407d01:  // fmul dword ptr [0x5d87c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d87c0u)));
L_00407d07:  // fsubr dword ptr [ebx + 0x280]
    ST(0) = ((long double)F32((uint32_t)(ebx + 0x280u))) - (ST(0));
L_00407d0d:  // jmp 0x407e91
    goto L_00407e91;
L_00407d12:  // fld dword ptr [ebx + 0x280]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x280u)));
L_00407d18:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00407d1e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407d20:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00407d23:  // jne 0x407e97
    if (!f.zf) goto L_00407e97;
L_00407d29:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00407d2d:  // fsub dword ptr [0x5d85ec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ecu)));
L_00407d33:  // fmul dword ptr [0x5d8be8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be8u)));
L_00407d39:  // jmp 0x407da1
    goto L_00407da1;
L_00407d3b:  // fcomp dword ptr [0x5d8be4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be4u)));
    lpop(x);
L_00407d41:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407d43:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407d46:  // je 0x407e97
    if (f.zf) goto L_00407e97;
L_00407d4c:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00407d50:  // fcomp dword ptr [0x5d8be0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be0u)));
    lpop(x);
L_00407d56:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407d58:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407d5b:  // je 0x407d78
    if (f.zf) goto L_00407d78;
L_00407d5d:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00407d61:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00407d67:  // fmul dword ptr [0x5d87c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d87c0u)));
L_00407d6d:  // fsubr dword ptr [ebx + 0x280]
    ST(0) = ((long double)F32((uint32_t)(ebx + 0x280u))) - (ST(0));
L_00407d73:  // jmp 0x407e91
    goto L_00407e91;
L_00407d78:  // fld dword ptr [ebx + 0x280]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x280u)));
L_00407d7e:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00407d84:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407d86:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407d89:  // je 0x407e97
    if (f.zf) goto L_00407e97;
L_00407d8f:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_00407d93:  // fadd dword ptr [0x5d85f8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85f8u)));
L_00407d99:  // fmul dword ptr [0x5d8be8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be8u)));
L_00407d9f:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00407da1:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00407da7:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00407dad:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407daf:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407db2:  // je 0x407e8b
    if (f.zf) goto L_00407e8b;
L_00407db8:  // jmp 0x407e83
    goto L_00407e83;
L_00407dbd:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407dc3:  // fcomp dword ptr [0x5d8bdc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bdcu)));
    lpop(x);
L_00407dc9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407dcb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00407dce:  // jne 0x407e29
    if (!f.zf) goto L_00407e29;
L_00407dd0:  // fld dword ptr [ebx + 0x280]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x280u)));
L_00407dd6:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00407ddc:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407dde:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00407de1:  // jne 0x407e29
    if (!f.zf) goto L_00407e29;
L_00407de3:  // mov ecx, dword ptr [ebx + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x57cu)));
L_00407de9:  // mov eax, dword ptr [ecx + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x2cu)));
L_00407dec:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00407dee:  // jne 0x407e29
    if (!f.zf) goto L_00407e29;
L_00407df0:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407df6:  // fsub dword ptr [0x5d8bdc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8bdcu)));
L_00407dfc:  // fmul dword ptr [0x5d8bd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bd8u)));
L_00407e02:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00407e08:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00407e0e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407e10:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407e13:  // je 0x407e1d
    if (f.zf) goto L_00407e1d;
L_00407e15:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00407e17:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00407e1d:  // fmul dword ptr [ebx + 0x280]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x280u)));
L_00407e23:  // fstp dword ptr [ebx + 0x280]
    F32((uint32_t)(ebx + 0x280u)) = lf32(ST(0));
    lpop(x);
L_00407e29:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407e2f:  // fcomp dword ptr [0x5d8bd4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8bd4u)));
    lpop(x);
L_00407e35:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407e37:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407e3a:  // je 0x407e97
    if (f.zf) goto L_00407e97;
L_00407e3c:  // fld dword ptr [ebx + 0x280]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x280u)));
L_00407e42:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00407e48:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407e4a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407e4d:  // je 0x407e97
    if (f.zf) goto L_00407e97;
L_00407e4f:  // mov edx, dword ptr [ebx + 0x57c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x57cu)));
L_00407e55:  // mov eax, dword ptr [edx + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x2cu)));
L_00407e58:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00407e5a:  // jne 0x407e97
    if (!f.zf) goto L_00407e97;
L_00407e5c:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407e62:  // fadd dword ptr [0x5d8bdc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8bdcu)));
L_00407e68:  // fmul dword ptr [0x5d8bd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bd8u)));
L_00407e6e:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00407e70:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00407e76:  // fcom qword ptr [0x5d87b0]
    lcom(x, ST(0), (long double)F64((uint32_t)(0x5d87b0u)));
L_00407e7c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407e7e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407e81:  // je 0x407e8b
    if (f.zf) goto L_00407e8b;
L_00407e83:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00407e85:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00407e8b:  // fmul dword ptr [ebx + 0x280]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x280u)));
L_00407e91:  // fstp dword ptr [ebx + 0x280]
    F32((uint32_t)(ebx + 0x280u)) = lf32(ST(0));
    lpop(x);
L_00407e97:  // fld dword ptr [ebx + 0x278]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x278u)));
L_00407e9d:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_00407e9f:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00407ea1:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_00407ea3:  // fld dword ptr [ebx + 0x280]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x280u)));
L_00407ea9:  // fadd dword ptr [ebx + 0x118]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x118u)));
L_00407eaf:  // fstp dword ptr [ebx + 0x118]
    F32((uint32_t)(ebx + 0x118u)) = lf32(ST(0));
    lpop(x);
L_00407eb5:  // fld dword ptr [ebx + 0x11c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x11cu)));
L_00407ebb:  // fadd dword ptr [ebx + 0x27c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x27cu)));
L_00407ec1:  // fstp dword ptr [ebx + 0x11c]
    F32((uint32_t)(ebx + 0x11cu)) = lf32(ST(0));
    lpop(x);
L_00407ec7:  // call 0x407540
    t0 = 0x00407540u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407eccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407ecc:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00407ece:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_00407ed4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407ed6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00407ed9:  // jne 0x407ee5
    if (!f.zf) goto L_00407ee5;
L_00407edb:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00407edd:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00407ee3:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_00407ee5:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00407ee7:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_00407eed:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407eef:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407ef2:  // je 0x407efe
    if (f.zf) goto L_00407efe;
L_00407ef4:  // fld dword ptr [esi]
    lpush(x, (long double)F32((uint32_t)(esi)));
L_00407ef6:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_00407efc:  // fstp dword ptr [esi]
    F32((uint32_t)(esi)) = lf32(ST(0));
    lpop(x);
L_00407efe:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407f04:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_00407f0a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407f0c:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00407f0f:  // jne 0x407f23
    if (!f.zf) goto L_00407f23;
L_00407f11:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407f17:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00407f1d:  // fstp dword ptr [ebx + 0x118]
    F32((uint32_t)(ebx + 0x118u)) = lf32(ST(0));
    lpop(x);
L_00407f23:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407f29:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_00407f2f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407f31:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407f34:  // je 0x407f48
    if (f.zf) goto L_00407f48;
L_00407f36:  // fld dword ptr [ebx + 0x118]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x118u)));
L_00407f3c:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_00407f42:  // fstp dword ptr [ebx + 0x118]
    F32((uint32_t)(ebx + 0x118u)) = lf32(ST(0));
    lpop(x);
L_00407f48:  // fld dword ptr [ebx + 0x11c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x11cu)));
L_00407f4e:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_00407f54:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407f56:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00407f59:  // jne 0x407f6d
    if (!f.zf) goto L_00407f6d;
L_00407f5b:  // fld dword ptr [ebx + 0x11c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x11cu)));
L_00407f61:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_00407f67:  // fstp dword ptr [ebx + 0x11c]
    F32((uint32_t)(ebx + 0x11cu)) = lf32(ST(0));
    lpop(x);
L_00407f6d:  // fld dword ptr [ebx + 0x11c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x11cu)));
L_00407f73:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_00407f79:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00407f7b:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00407f7e:  // je 0x407f92
    if (f.zf) goto L_00407f92;
L_00407f80:  // fld dword ptr [ebx + 0x11c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x11cu)));
L_00407f86:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_00407f8c:  // fstp dword ptr [ebx + 0x11c]
    F32((uint32_t)(ebx + 0x11cu)) = lf32(ST(0));
    lpop(x);
L_00407f92:  // fld dword ptr [ebx + 0x278]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x278u)));
L_00407f98:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_00407f9e:  // cmp dword ptr [ebx + 0x260], 3
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x260u)), 0x3u, f);
L_00407fa5:  // fstp dword ptr [ebx + 0x278]
    F32((uint32_t)(ebx + 0x278u)) = lf32(ST(0));
    lpop(x);
L_00407fab:  // fld dword ptr [ebx + 0x280]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x280u)));
L_00407fb1:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_00407fb7:  // fstp dword ptr [ebx + 0x280]
    F32((uint32_t)(ebx + 0x280u)) = lf32(ST(0));
    lpop(x);
L_00407fbd:  // fld dword ptr [ebx + 0x27c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x27cu)));
L_00407fc3:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_00407fc9:  // fstp dword ptr [ebx + 0x27c]
    F32((uint32_t)(ebx + 0x27cu)) = lf32(ST(0));
    lpop(x);
L_00407fcf:  // je 0x407fdf
    if (f.zf) goto L_00407fdf;
L_00407fd1:  // fld dword ptr [ebx + 0x11c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x11cu)));
L_00407fd7:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_00407fdd:  // jmp 0x407ffa
    goto L_00407ffa;
L_00407fdf:  // mov ecx, dword ptr [ebx + 0x57c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x57cu)));
L_00407fe5:  // call 0x412900
    t0 = 0x00412900u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00407feau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00407fea:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00407fec:  // je 0x408000
    if (f.zf) goto L_00408000;
L_00407fee:  // fld dword ptr [ebx + 0x11c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x11cu)));
L_00407ff4:  // fmul dword ptr [0x5d8bd0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bd0u)));
L_00407ffa:  // fstp dword ptr [ebx + 0x11c]
    F32((uint32_t)(ebx + 0x11cu)) = lf32(ST(0));
    lpop(x);
L_00408000:  // fld dword ptr [ebx + 0x4c4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4c4u)));
L_00408006:  // fcos 
    ST(0) = lfcos(ST(0));
L_00408008:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0040800a:  // fmul dword ptr [ebx + 0x4c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4c0u)));
L_00408010:  // fadd dword ptr [ebx + 0x11c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x11cu)));
L_00408016:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0040801a:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0040801e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00408020:  // fmul dword ptr [ebx + 0x4bc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4bcu)));
L_00408026:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00408027:  // fadd dword ptr [ebx + 0x118]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x118u)));
L_0040802d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00408031:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00408035:  // fmul dword ptr [ebx + 0x4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4b8u)));
L_0040803b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040803c:  // lea ecx, [esp + 0x50]
    ecx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00408040:  // fadd dword ptr [esi]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi)));
L_00408042:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00408046:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0040804a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0040804b:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00408050u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00408050:  // fld dword ptr [ebx + 0x4b8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4b8u)));
L_00408056:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00408058:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_0040805e:  // lea edi, [ebx + 0x3c]
    edi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_00408061:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00408066:  // lea esi, [esp + 0x48]
    esi = (uint32_t)((uint32_t)(esp + 0x48u));
L_0040806a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0040806c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040806e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408071:  // je 0x40809d
    if (f.zf) goto L_0040809d;
L_00408073:  // fld dword ptr [ebx + 0x4bc]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4bcu)));
L_00408079:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0040807b:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_00408081:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408083:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00408086:  // je 0x40809d
    if (f.zf) goto L_0040809d;
L_00408088:  // fld dword ptr [ebx + 0x4c0]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4c0u)));
L_0040808e:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_00408090:  // fcomp dword ptr [0x5d8580]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8580u)));
    lpop(x);
L_00408096:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00408098:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0040809b:  // jne 0x4080e5
    if (!f.zf) goto L_004080e5;
L_0040809d:  // fld dword ptr [ebx + 0x4b8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4b8u)));
L_004080a3:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_004080a9:  // fstp dword ptr [ebx + 0x4b8]
    F32((uint32_t)(ebx + 0x4b8u)) = lf32(ST(0));
    lpop(x);
L_004080af:  // fld dword ptr [ebx + 0x4bc]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4bcu)));
L_004080b5:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_004080bb:  // fstp dword ptr [ebx + 0x4bc]
    F32((uint32_t)(ebx + 0x4bcu)) = lf32(ST(0));
    lpop(x);
L_004080c1:  // fld dword ptr [ebx + 0x4c0]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4c0u)));
L_004080c7:  // fmul dword ptr [0x5d85f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85f8u)));
L_004080cd:  // fstp dword ptr [ebx + 0x4c0]
    F32((uint32_t)(ebx + 0x4c0u)) = lf32(ST(0));
    lpop(x);
L_004080d3:  // fld dword ptr [ebx + 0x4c4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4c4u)));
L_004080d9:  // fadd dword ptr [0x5d85f8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85f8u)));
L_004080df:  // fstp dword ptr [ebx + 0x4c4]
    F32((uint32_t)(ebx + 0x4c4u)) = lf32(ST(0));
    lpop(x);
L_004080e5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004080e6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004080e7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004080e8:  // add esp, 0x6c
    t0 = ladd<32>(esp, 0x6cu, f);
    esp = (uint32_t)(t0);
L_004080eb:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00407a50, 00407a50)
