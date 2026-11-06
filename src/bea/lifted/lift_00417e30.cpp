// lifted from 00417e30 (vslot52, 600 bytes, 160 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00417e30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00417e30;
L_00417e30:  // sub esp, 0xac
    t0 = lsub<32>(esp, 0xacu, f);
    esp = (uint32_t)(t0);
L_00417e36:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00417e37:  // mov ebx, dword ptr [ecx + 0x30]
    ebx = (uint32_t)(M32((uint32_t)(ecx + 0x30u)));
L_00417e3a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00417e3b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00417e3c:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00417e3e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00417e3f:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00417e43:  // je 0x41807d
    if (f.zf) goto L_0041807d;
L_00417e49:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00417e4e:  // mov esi, 0x660500
    esi = (uint32_t)(0x660500u);
L_00417e53:  // lea edi, [esp + 0x8c]
    edi = (uint32_t)((uint32_t)(esp + 0x8cu));
L_00417e5a:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00417e5d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00417e5f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00417e64:  // mov esi, 0x660500
    esi = (uint32_t)(0x660500u);
L_00417e69:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00417e6b:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00417e6e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00417e70:  // mov dword ptr [esp + 0x50], 0
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x0u);
L_00417e78:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00417e7c:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00417e7e:  // mov dword ptr [esp + 0x54], 0
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x0u);
L_00417e86:  // mov edx, dword ptr [esp + 0x54]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00417e8a:  // mov dword ptr [esp + 0x58], 0
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(0x0u);
L_00417e92:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00417e94:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00417e98:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00417e9b:  // mov edx, dword ptr [esp + 0x5c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00417e9f:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00417ea2:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00417ea7:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00417eaa:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417eafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417eaf:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_00417eb1:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00417eb3:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417eb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417eb6:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00417eb8:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00417eba:  // mov dword ptr [esp + 0x28], edi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edi);
L_00417ebe:  // je 0x41807d
    if (f.zf) goto L_0041807d;
L_00417ec4:  // mov ecx, dword ptr [edi + 0x15c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_00417eca:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00417ecc:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00417ece:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00417ed2:  // jle 0x41807d
    if ((f.zf || f.sf != f.of)) goto L_0041807d;
L_00417ed8:  // mov ecx, dword ptr [edi + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x160u)));
L_00417ede:  // mov esi, dword ptr [ecx + eax*4]
    esi = (uint32_t)(M32((uint32_t)(ecx + eax * 4u)));
L_00417ee1:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00417ee3:  // call 0x4b0cd0
    t0 = 0x004b0cd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417ee8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417ee8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00417eea:  // je 0x418066
    if (f.zf) goto L_00418066;
L_00417ef0:  // mov ebx, dword ptr [esi + 0xfc]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0xfcu)));
L_00417ef6:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_00417ef8:  // mov ebp, 0xff7f7f7f
    ebp = (uint32_t)(0xff7f7f7fu);
L_00417efd:  // je 0x417f0a
    if (f.zf) goto L_00417f0a;
L_00417eff:  // mov ebx, dword ptr [eax + 0xfc]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0xfcu)));
L_00417f05:  // mov ebp, 0xff007f00
    ebp = (uint32_t)(0xff007f00u);
L_00417f0a:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00417f0c:  // je 0x418066
    if (f.zf) goto L_00418066;
L_00417f12:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_00417f18:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00417f1a:  // jne 0x418066
    if (!f.zf) goto L_00418066;
L_00417f20:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00417f24:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00417f26:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00417f28:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_00417f2c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00417f2e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00417f2f:  // mov edx, dword ptr [ecx + 0x30]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x30u)));
L_00417f32:  // lea eax, [esp + 0x6c]
    eax = (uint32_t)((uint32_t)(esp + 0x6cu));
L_00417f36:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00417f37:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00417f39:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00417f3c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00417f3d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00417f3f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00417f41:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00417f43:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00417f48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00417f48:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00417f4c:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_00417f4f:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00417f53:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_00417f55:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00417f58:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00417f5d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00417f5f:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00417f66:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_00417f69:  // lea esi, [esp + 0xbc]
    esi = (uint32_t)((uint32_t)(esp + 0xbcu));
L_00417f70:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00417f72:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00417f74:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00417f76:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_00417f7d:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_00417f7f:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00417f86:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_00417f89:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00417f8c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00417f8e:  // fld dword ptr [esp + 0xb4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xb4u)));
L_00417f95:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_00417f98:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00417f9a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00417f9c:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_00417fa3:  // fld dword ptr [esp + 0xbc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xbcu)));
L_00417faa:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_00417fac:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_00417fb3:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_00417fb6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00417fb8:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_00417fbf:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_00417fc2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00417fc4:  // fstp dword ptr [esp + 0x94]
    F32((uint32_t)(esp + 0x94u)) = lf32(ST(0));
    lpop(x);
L_00417fcb:  // fadd dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00417fcf:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00417fd3:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_00417fd7:  // fadd dword ptr [esp + 0x90]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x90u)));
L_00417fde:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_00417fe2:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00417fe4:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_00417fe8:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_00417fec:  // fadd dword ptr [esp + 0x94]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x94u)));
L_00417ff3:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_00417ff7:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_00417ffa:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_00417ffe:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_00418002:  // mov edx, dword ptr [esp + 0x58]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_00418006:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00418009:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0041800c:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00418011:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00418016u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00418016:  // mov ecx, dword ptr [0x89ce88]
    ecx = (uint32_t)(M32((uint32_t)(0x89ce88u)));
L_0041801c:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00418020:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00418021:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00418026:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00418029:  // lea esi, [edx + 0x3c]
    esi = (uint32_t)((uint32_t)(edx + 0x3cu));
L_0041802c:  // mov edi, esp
    edi = (uint32_t)(esp);
L_0041802e:  // lea eax, [esp + 0x70]
    eax = (uint32_t)((uint32_t)(esp + 0x70u));
L_00418032:  // add ebx, 0x10
    t0 = ladd<32>(ebx, 0x10u, f);
    ebx = (uint32_t)(t0);
L_00418035:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00418036:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00418038:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00418039:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0041803a:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0041803f:  // mov dword ptr [esp + 0x7c], 0
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x0u);
L_00418047:  // mov dword ptr [esp + 0x80], 0
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x0u);
L_00418052:  // mov dword ptr [esp + 0x84], 0
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x0u);
L_0041805d:  // call 0x53d760
    t0 = 0x0053d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00418062u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00418062:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00418066:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0041806a:  // mov ecx, dword ptr [edi + 0x15c]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x15cu)));
L_00418070:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00418071:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00418073:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00418077:  // jl 0x417ed8
    if ((f.sf != f.of)) goto L_00417ed8;
L_0041807d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041807e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041807f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00418080:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00418081:  // add esp, 0xac
    t0 = ladd<32>(esp, 0xacu, f);
    esp = (uint32_t)(t0);
L_00418087:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00417e30, 00417e30)
