// lifted from 004e6da0 (vslot67, 452 bytes, 134 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e6da0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e6da0;
L_004e6da0:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004e6da6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004e6da8:  // push 0x5d4df1
    t0 = 0x5d4df1u; esp -= 4; M32(esp) = t0;
L_004e6dad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e6dae:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004e6db5:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e6db8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e6db9:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004e6dbd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e6dbe:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004e6dc0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e6dc1:  // cmp ebx, ebp
    t0 = lsub<32>(ebx, ebp, f);
L_004e6dc3:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004e6dc5:  // je 0x4e6f44
    if (f.zf) goto L_004e6f44;
L_004e6dcb:  // cmp dword ptr [ebx + 0x148], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x148u)), ebp, f);
L_004e6dd1:  // jne 0x4e6f44
    if (!f.zf) goto L_004e6f44;
L_004e6dd7:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004e6dd9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e6dda:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e6ddc:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e6ddfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e6ddf:  // fstp dword ptr [esi + 0x104]
    F32((uint32_t)(esi + 0x104u)) = lf32(ST(0));
    lpop(x);
L_004e6de5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e6de7:  // call 0x4fd380
    t0 = 0x004fd380u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e6decu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e6dec:  // mov dword ptr [esi + 0xd0], eax
    M32((uint32_t)(esi + 0xd0u)) = (uint32_t)(eax);
L_004e6df2:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004e6df4:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e6df6:  // call dword ptr [edx + 0x1bc]
    t0 = M32((uint32_t)(edx + 0x1bcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e6dfcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e6dfc:  // fmul dword ptr [0x5df254]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5df254u)));
L_004e6e02:  // fstp dword ptr [esi + 0x10c]
    F32((uint32_t)(esi + 0x10cu)) = lf32(ST(0));
    lpop(x);
L_004e6e08:  // mov eax, dword ptr [ebx + 0x34]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x34u)));
L_004e6e0b:  // mov dword ptr [esi + 0xc0], eax
    M32((uint32_t)(esi + 0xc0u)) = (uint32_t)(eax);
L_004e6e11:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004e6e15:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004e6e17:  // jne 0x4e6e28
    if (!f.zf) goto L_004e6e28;
L_004e6e19:  // mov edi, dword ptr [esi + 0xb4]
    edi = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004e6e1f:  // lea ecx, [edi + 1]
    ecx = (uint32_t)((uint32_t)(edi + 0x1u));
L_004e6e22:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_004e6e26:  // jmp 0x4e6e2c
    goto L_004e6e2c;
L_004e6e28:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004e6e2c:  // fild dword ptr [esp + 0x34]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x34u)));
L_004e6e30:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e6e33:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004e6e35:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004e6e38:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e6e3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e6e3d:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004e6e3f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004e6e42:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004e6e46:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004e6e4a:  // push 0x81
    t0 = 0x81u; esp -= 4; M32(esp) = t0;
L_004e6e4f:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004e6e50:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_004e6e52:  // push 0x63283c
    t0 = 0x63283cu; esp -= 4; M32(esp) = t0;
L_004e6e57:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004e6e59:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_004e6e5b:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_004e6e5f:  // imul eax, ecx
    t0 = limul32(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004e6e62:  // sub edi, eax
    t0 = lsub<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_004e6e64:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004e6e66:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004e6e67:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004e6e69:  // mov dword ptr [esp + 0x3c], edi
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edi);
L_004e6e6d:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004e6e6f:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_004e6e73:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004e6e78:  // fild dword ptr [esp + 0x44]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x44u)));
L_004e6e7c:  // fmul dword ptr [esi + 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x104u)));
L_004e6e82:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004e6e84:  // fild dword ptr [esp + 0x3c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x3cu)));
L_004e6e88:  // fmul dword ptr [esi + 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x104u)));
L_004e6e8e:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_004e6e90:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004e6e92:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004e6e96:  // fild dword ptr [esp + 0x40]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x40u)));
L_004e6e9a:  // fmul dword ptr [esi + 0x104]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x104u)));
L_004e6ea0:  // fmul dword ptr [0x5d95c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d95c0u)));
L_004e6ea6:  // fstp dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
    lpop(x);
L_004e6eaa:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e6eafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e6eaf:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004e6eb1:  // mov dword ptr [esp + 0x30], edi
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edi);
L_004e6eb5:  // cmp edi, ebp
    t0 = lsub<32>(edi, ebp, f);
L_004e6eb7:  // mov dword ptr [esp + 0x20], ebp
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ebp);
L_004e6ebb:  // je 0x4e6ee0
    if (f.zf) goto L_004e6ee0;
L_004e6ebd:  // mov dword ptr [edi], ebp
    M32((uint32_t)(edi)) = (uint32_t)(ebp);
L_004e6ebf:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e6ec0:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004e6ec2:  // mov byte ptr [esp + 0x24], 1
    M8((uint32_t)(esp + 0x24u)) = (uint8_t)(0x1u);
L_004e6ec7:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e6eccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e6ecc:  // mov dword ptr [edi + 4], ebp
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ebp);
L_004e6ecf:  // mov dword ptr [edi + 8], ebp
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ebp);
L_004e6ed2:  // mov dword ptr [edi + 0x10], esi
    M32((uint32_t)(edi + 0x10u)) = (uint32_t)(esi);
L_004e6ed5:  // mov edx, dword ptr [0x672fd0]
    edx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_004e6edb:  // mov dword ptr [edi + 0xc], edx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(edx);
L_004e6ede:  // jmp 0x4e6ee2
    goto L_004e6ee2;
L_004e6ee0:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004e6ee2:  // mov edx, dword ptr [esi + 0xb4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xb4u)));
L_004e6ee8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e6ee9:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004e6eea:  // lea ecx, [esi + 0xa4]
    ecx = (uint32_t)((uint32_t)(esi + 0xa4u));
L_004e6ef0:  // mov dword ptr [esp + 0x24], 0xffffffff
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xffffffffu);
L_004e6ef8:  // mov dword ptr [esi + 0xb4], edx
    M32((uint32_t)(esi + 0xb4u)) = (uint32_t)(edx);
L_004e6efe:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e6f03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e6f03:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e6f04:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004e6f06:  // call 0x4fe500
    t0 = 0x004fe500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e6f0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e6f0b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004e6f0d:  // call 0x4e8730
    t0 = 0x004e8730u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e6f12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e6f12:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004e6f15:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004e6f19:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_004e6f1c:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004e6f20:  // fadd dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x1cu)));
L_004e6f23:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004e6f27:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e6f28:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e6f29:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e6f2a:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004e6f2c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e6f2d:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004e6f30:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004e6f33:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004e6f37:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004e6f3e:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004e6f41:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004e6f44:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004e6f48:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004e6f4c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e6f4d:  // mov dword ptr [eax], ebp
    M32((uint32_t)(eax)) = (uint32_t)(ebp);
L_004e6f4f:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_004e6f52:  // mov dword ptr [eax + 8], ebp
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebp);
L_004e6f55:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e6f56:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e6f57:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004e6f5e:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004e6f61:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e6da0, 004e6da0)
