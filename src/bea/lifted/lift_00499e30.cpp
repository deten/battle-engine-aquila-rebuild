// lifted from 00499e30 (FUN_00499e30, 7540 bytes, 2209 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00499e30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00499e30;
L_00499e30:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00499e31:  // mov ebp, esp
    ebp = (uint32_t)(esp);
L_00499e33:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00499e35:  // push 0x5d332b
    t0 = 0x5d332bu; esp -= 4; M32(esp) = t0;
L_00499e3a:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00499e40:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00499e41:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00499e48:  // sub esp, 0x1b8
    t0 = lsub<32>(esp, 0x1b8u, f);
    esp = (uint32_t)(t0);
L_00499e4e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00499e4f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00499e50:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00499e52:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00499e53:  // mov dword ptr [ebp - 0x68], esi
    M32((uint32_t)(ebp + 0xffffff98u)) = (uint32_t)(esi);
L_00499e56:  // mov dword ptr [ebp - 0x1b4], 0x49
    M32((uint32_t)(ebp + 0xfffffe4cu)) = (uint32_t)(0x49u);
L_00499e60:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00499e62:  // rdtsc 
    __asm__ volatile("rdtsc" : "=a"(eax), "=d"(edx));
L_00499e64:  // mov dword ptr [ebp - 0x178], edx
    M32((uint32_t)(ebp + 0xfffffe88u)) = (uint32_t)(edx);
L_00499e6a:  // mov dword ptr [ebp - 0x17c], eax
    M32((uint32_t)(ebp + 0xfffffe84u)) = (uint32_t)(eax);
L_00499e70:  // mov dword ptr [ebp - 0x1b0], eax
    M32((uint32_t)(ebp + 0xfffffe50u)) = (uint32_t)(eax);
L_00499e76:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_00499e7c:  // mov dword ptr [ebp - 4], 0
    M32((uint32_t)(ebp + 0xfffffffcu)) = (uint32_t)(0x0u);
L_00499e83:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00499e85:  // jne 0x499e98
    if (!f.zf) goto L_00499e98;
L_00499e87:  // mov eax, dword ptr [ebp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_00499e8a:  // mov ecx, dword ptr [eax + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x128u)));
L_00499e90:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00499e91:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00499e93:  // call 0x498c40
    t0 = 0x00498c40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00499e98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00499e98:  // mov dword ptr [ebp - 0x44], 0x3f800000
    M32((uint32_t)(ebp + 0xffffffbcu)) = (uint32_t)(0x3f800000u);
L_00499e9f:  // mov edx, dword ptr [ebp - 0x44]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffbcu)));
L_00499ea2:  // mov dword ptr [ebp - 0x3c], 0
    M32((uint32_t)(ebp + 0xffffffc4u)) = (uint32_t)(0x0u);
L_00499ea9:  // mov ecx, dword ptr [ebp - 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_00499eac:  // mov dword ptr [ebp - 0x40], 0
    M32((uint32_t)(ebp + 0xffffffc0u)) = (uint32_t)(0x0u);
L_00499eb3:  // mov eax, dword ptr [ebp - 0x40]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc0u)));
L_00499eb6:  // mov dword ptr [ebp - 0xf8], edx
    M32((uint32_t)(ebp + 0xffffff08u)) = (uint32_t)(edx);
L_00499ebc:  // mov edx, dword ptr [ebp - 0x38]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc8u)));
L_00499ebf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00499ec1:  // mov dword ptr [ebp - 0xf0], ecx
    M32((uint32_t)(ebp + 0xffffff10u)) = (uint32_t)(ecx);
L_00499ec7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00499ecc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00499ece:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_00499ed1:  // mov byte ptr [ebp - 0x21], 0
    M8((uint32_t)(ebp + 0xffffffdfu)) = (uint8_t)(0x0u);
L_00499ed5:  // mov byte ptr [ebp - 0xd], 0
    M8((uint32_t)(ebp + 0xfffffff3u)) = (uint8_t)(0x0u);
L_00499ed9:  // mov dword ptr [ebp - 0xf4], eax
    M32((uint32_t)(ebp + 0xffffff0cu)) = (uint32_t)(eax);
L_00499edf:  // mov dword ptr [ebp - 0xec], edx
    M32((uint32_t)(ebp + 0xffffff14u)) = (uint32_t)(edx);
L_00499ee5:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00499eeau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00499eea:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00499eec:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00499ef1:  // mov dword ptr [ebp - 0xe8], ecx
    M32((uint32_t)(ebp + 0xffffff18u)) = (uint32_t)(ecx);
L_00499ef7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00499ef9:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00499efc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00499efe:  // mov dword ptr [ebp - 0xe4], edx
    M32((uint32_t)(ebp + 0xffffff1cu)) = (uint32_t)(edx);
L_00499f04:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00499f07:  // mov dword ptr [ebp - 0xe0], ecx
    M32((uint32_t)(ebp + 0xffffff20u)) = (uint32_t)(ecx);
L_00499f0d:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_00499f10:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00499f13:  // mov dword ptr [ebp - 0xdc], edx
    M32((uint32_t)(ebp + 0xffffff24u)) = (uint32_t)(edx);
L_00499f19:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00499f1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00499f1e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00499f20:  // mov edi, dword ptr [ebp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_00499f23:  // mov dword ptr [ebp - 0xd8], ecx
    M32((uint32_t)(ebp + 0xffffff28u)) = (uint32_t)(ecx);
L_00499f29:  // mov ebx, dword ptr [ebp + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_00499f2c:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00499f2f:  // mov dword ptr [ebp - 0x108], 0
    M32((uint32_t)(ebp + 0xfffffef8u)) = (uint32_t)(0x0u);
L_00499f39:  // mov dword ptr [ebp - 0xd4], edx
    M32((uint32_t)(ebp + 0xffffff2cu)) = (uint32_t)(edx);
L_00499f3f:  // mov dword ptr [ebp - 0x104], 0
    M32((uint32_t)(ebp + 0xfffffefcu)) = (uint32_t)(0x0u);
L_00499f49:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00499f4c:  // mov dword ptr [ebp - 0x100], 0
    M32((uint32_t)(ebp + 0xffffff00u)) = (uint32_t)(0x0u);
L_00499f56:  // mov dword ptr [ebp - 0xd0], ecx
    M32((uint32_t)(ebp + 0xffffff30u)) = (uint32_t)(ecx);
L_00499f5c:  // mov dword ptr [ebp - 0x13c], 0
    M32((uint32_t)(ebp + 0xfffffec4u)) = (uint32_t)(0x0u);
L_00499f66:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00499f69:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00499f6c:  // mov dword ptr [ebp - 0x80], eax
    M32((uint32_t)(ebp + 0xffffff80u)) = (uint32_t)(eax);
L_00499f6f:  // mov eax, dword ptr [ebp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_00499f72:  // mov dword ptr [ebp - 0xcc], edx
    M32((uint32_t)(ebp + 0xffffff34u)) = (uint32_t)(edx);
L_00499f78:  // mov ecx, dword ptr [eax + 0xc4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xc4u)));
L_00499f7e:  // mov eax, dword ptr [eax + 0x88]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_00499f84:  // mov dl, byte ptr [ecx]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx))) & 0xffu);
L_00499f86:  // mov ecx, dword ptr [esi + 0xe4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xe4u)));
L_00499f8c:  // mov byte ptr [ebp - 0x6c], dl
    M8((uint32_t)(ebp + 0xffffff94u)) = (uint8_t)((edx & 0xffu));
L_00499f8f:  // mov edx, dword ptr [ecx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00499f92:  // mov edx, dword ptr [edx + eax*4]
    edx = (uint32_t)(M32((uint32_t)(edx + eax * 4u)));
L_00499f95:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_00499f98:  // jne 0x49a776
    if (!f.zf) goto L_0049a776;
L_00499f9e:  // mov eax, dword ptr [ebp - 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff94u)));
L_00499fa1:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_00499fa4:  // fld dword ptr [ebx + 8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x8u)));
L_00499fa7:  // mov edx, dword ptr [ecx + 0xc8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xc8u)));
L_00499fad:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_00499fb2:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00499fb5:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00499fb7:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00499fb9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00499fbb:  // mov dword ptr [ebp + 0x1c], 0
    M32((uint32_t)(ebp + 0x1cu)) = (uint32_t)(0x0u);
L_00499fc2:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00499fc5:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_00499fc8:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00499fcb:  // mov dword ptr [ebp + 0x20], 0
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(0x0u);
L_00499fd2:  // mov dword ptr [ebp - 0x70], 0
    M32((uint32_t)(ebp + 0xffffff90u)) = (uint32_t)(0x0u);
L_00499fd9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00499fdb:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_00499fdd:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00499fdf:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00499fe1:  // fld dword ptr [ebx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x18u)));
L_00499fe4:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00499fe7:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_00499fea:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_00499fed:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00499fef:  // fld dword ptr [ebx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x10u)));
L_00499ff2:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_00499ff4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00499ff6:  // fstp dword ptr [ebp - 0x50]
    F32((uint32_t)(ebp + 0xffffffb0u)) = lf32(ST(0));
    lpop(x);
L_00499ff9:  // fld dword ptr [ebx + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x28u)));
L_00499ffc:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_00499fff:  // fld dword ptr [ebx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x24u)));
L_0049a002:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049a005:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a007:  // fld dword ptr [ebx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x20u)));
L_0049a00a:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0049a00c:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049a00f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a011:  // fstp dword ptr [ebp - 0x4c]
    F32((uint32_t)(ebp + 0xffffffb4u)) = lf32(ST(0));
    lpop(x);
L_0049a014:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0049a016:  // fstp dword ptr [ebp - 0x90]
    F32((uint32_t)(ebp + 0xffffff70u)) = lf32(ST(0));
    lpop(x);
L_0049a01c:  // fld dword ptr [ebp - 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb0u)));
L_0049a01f:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049a022:  // fstp dword ptr [ebp - 0x8c]
    F32((uint32_t)(ebp + 0xffffff74u)) = lf32(ST(0));
    lpop(x);
L_0049a028:  // fld dword ptr [ebp - 0x4c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb4u)));
L_0049a02b:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049a02e:  // fstp dword ptr [ebp - 0x88]
    F32((uint32_t)(ebp + 0xffffff78u)) = lf32(ST(0));
    lpop(x);
L_0049a034:  // call dword ptr [edx + 0x28]
    t0 = M32((uint32_t)(edx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a037u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a037:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049a039:  // je 0x49a06c
    if (f.zf) goto L_0049a06c;
L_0049a03b:  // lea eax, [ebp - 0x90]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffff70u));
L_0049a041:  // lea edx, [ebp - 0x44]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffffbcu));
L_0049a044:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a045:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0049a04a:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a04fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a04f:  // mov ecx, dword ptr [ebp - 0x44]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffbcu)));
L_0049a052:  // mov edx, dword ptr [ebp - 0x40]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc0u)));
L_0049a055:  // mov eax, dword ptr [ebp - 0x3c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_0049a058:  // mov dword ptr [ebp - 0x34], ecx
    M32((uint32_t)(ebp + 0xffffffccu)) = (uint32_t)(ecx);
L_0049a05b:  // mov ecx, dword ptr [ebp - 0x38]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc8u)));
L_0049a05e:  // mov dword ptr [ebp - 0x30], edx
    M32((uint32_t)(ebp + 0xffffffd0u)) = (uint32_t)(edx);
L_0049a061:  // mov dword ptr [ebp - 0x2c], eax
    M32((uint32_t)(ebp + 0xffffffd4u)) = (uint32_t)(eax);
L_0049a064:  // mov dword ptr [ebp - 0x28], ecx
    M32((uint32_t)(ebp + 0xffffffd8u)) = (uint32_t)(ecx);
L_0049a067:  // jmp 0x49a0f9
    goto L_0049a0f9;
L_0049a06c:  // mov eax, dword ptr [ebp - 0x80]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff80u)));
L_0049a06f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049a071:  // je 0x49a078
    if (f.zf) goto L_0049a078;
L_0049a073:  // add eax, -8
    t0 = ladd<32>(eax, 0xfffffff8u, f);
    eax = (uint32_t)(t0);
L_0049a076:  // jmp 0x49a07a
    goto L_0049a07a;
L_0049a078:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049a07a:  // mov edx, dword ptr [eax + 0x114]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x114u)));
L_0049a080:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0049a082:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049a084:  // mov dword ptr [ebp - 0x94], edx
    M32((uint32_t)(ebp + 0xffffff6cu)) = (uint32_t)(edx);
L_0049a08a:  // call dword ptr [eax + 0x2c]
    t0 = M32((uint32_t)(eax + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a08du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a08d:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0049a08f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049a091:  // fstp dword ptr [ebp - 0x14]
    F32((uint32_t)(ebp + 0xffffffecu)) = lf32(ST(0));
    lpop(x);
L_0049a094:  // call dword ptr [edx + 0x30]
    t0 = M32((uint32_t)(edx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a097u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a097:  // fstp dword ptr [ebp + 0xc]
    F32((uint32_t)(ebp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0049a09a:  // mov eax, dword ptr [ebp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_0049a09d:  // mov ecx, dword ptr [ebp - 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffecu)));
L_0049a0a0:  // mov edx, dword ptr [ebp - 0x94]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff6cu)));
L_0049a0a6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a0a7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a0a8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049a0a9:  // lea ecx, [ebp - 0x138]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049a0af:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a0b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a0b4:  // fld dword ptr [ebp - 0x130]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffed0u)));
L_0049a0ba:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0049a0c0:  // fstp dword ptr [ebp - 0x44]
    F32((uint32_t)(ebp + 0xffffffbcu)) = lf32(ST(0));
    lpop(x);
L_0049a0c3:  // fld dword ptr [ebp - 0x120]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffee0u)));
L_0049a0c9:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0049a0cf:  // mov eax, dword ptr [ebp - 0x44]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffbcu)));
L_0049a0d2:  // mov dword ptr [ebp - 0x34], eax
    M32((uint32_t)(ebp + 0xffffffccu)) = (uint32_t)(eax);
L_0049a0d5:  // mov eax, dword ptr [ebp - 0x38]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc8u)));
L_0049a0d8:  // fstp dword ptr [ebp - 0x40]
    F32((uint32_t)(ebp + 0xffffffc0u)) = lf32(ST(0));
    lpop(x);
L_0049a0db:  // fld dword ptr [ebp - 0x110]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffef0u)));
L_0049a0e1:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0049a0e7:  // mov ecx, dword ptr [ebp - 0x40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc0u)));
L_0049a0ea:  // mov dword ptr [ebp - 0x28], eax
    M32((uint32_t)(ebp + 0xffffffd8u)) = (uint32_t)(eax);
L_0049a0ed:  // mov dword ptr [ebp - 0x30], ecx
    M32((uint32_t)(ebp + 0xffffffd0u)) = (uint32_t)(ecx);
L_0049a0f0:  // fstp dword ptr [ebp - 0x3c]
    F32((uint32_t)(ebp + 0xffffffc4u)) = lf32(ST(0));
    lpop(x);
L_0049a0f3:  // mov edx, dword ptr [ebp - 0x3c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_0049a0f6:  // mov dword ptr [ebp - 0x2c], edx
    M32((uint32_t)(ebp + 0xffffffd4u)) = (uint32_t)(edx);
L_0049a0f9:  // fld dword ptr [esi + 0x10]
    lpush(x, (long double)F32((uint32_t)(esi + 0x10u)));
L_0049a0fc:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049a0fe:  // fmul dword ptr [esi + 0x88]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x88u)));
L_0049a104:  // mov dword ptr [ebp - 0x3c], 0
    M32((uint32_t)(ebp + 0xffffffc4u)) = (uint32_t)(0x0u);
L_0049a10b:  // fstp dword ptr [ebp - 0x44]
    F32((uint32_t)(ebp + 0xffffffbcu)) = lf32(ST(0));
    lpop(x);
L_0049a10e:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049a110:  // fmul dword ptr [esi + 0x8c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8cu)));
L_0049a116:  // fstp dword ptr [ebp - 0x40]
    F32((uint32_t)(ebp + 0xffffffc0u)) = lf32(ST(0));
    lpop(x);
L_0049a119:  // fmul dword ptr [esi + 0x90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x90u)));
L_0049a11f:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0049a125:  // fsub dword ptr [esi + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x10u)));
L_0049a128:  // fld dword ptr [ebp - 0x34]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffccu)));
L_0049a12b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0049a12d:  // fstp dword ptr [ebp - 0x54]
    F32((uint32_t)(ebp + 0xffffffacu)) = lf32(ST(0));
    lpop(x);
L_0049a130:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049a132:  // fmul dword ptr [ebp - 0x30]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffd0u)));
L_0049a135:  // fstp dword ptr [ebp - 0x50]
    F32((uint32_t)(ebp + 0xffffffb0u)) = lf32(ST(0));
    lpop(x);
L_0049a138:  // fmul dword ptr [ebp - 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffd4u)));
L_0049a13b:  // fld dword ptr [ebp - 0x54]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffacu)));
L_0049a13e:  // fadd dword ptr [ebp - 0x44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffbcu)));
L_0049a141:  // mov dword ptr [ebp - 0x44], 0
    M32((uint32_t)(ebp + 0xffffffbcu)) = (uint32_t)(0x0u);
L_0049a148:  // fstp dword ptr [ebp - 0x34]
    F32((uint32_t)(ebp + 0xffffffccu)) = lf32(ST(0));
    lpop(x);
L_0049a14b:  // fld dword ptr [ebp - 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb0u)));
L_0049a14e:  // fadd dword ptr [ebp - 0x40]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffc0u)));
L_0049a151:  // mov ecx, dword ptr [ebp - 0x34]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffccu)));
L_0049a154:  // mov dword ptr [ebp - 0x40], 0xbf800000
    M32((uint32_t)(ebp + 0xffffffc0u)) = (uint32_t)(0xbf800000u);
L_0049a15b:  // mov dword ptr [esi + 0x88], ecx
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(ecx);
L_0049a161:  // mov ecx, dword ptr [ebp - 0x28]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd8u)));
L_0049a164:  // fstp dword ptr [ebp - 0x30]
    F32((uint32_t)(ebp + 0xffffffd0u)) = lf32(ST(0));
    lpop(x);
L_0049a167:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a168:  // mov edx, dword ptr [ebp - 0x30]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd0u)));
L_0049a16b:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0049a16d:  // mov dword ptr [esi + 0x8c], edx
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(edx);
L_0049a173:  // fstp dword ptr [ebp - 0x2c]
    F32((uint32_t)(ebp + 0xffffffd4u)) = lf32(ST(0));
    lpop(x);
L_0049a176:  // mov eax, dword ptr [ebp - 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd4u)));
L_0049a179:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049a17b:  // fld dword ptr [ebp - 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd4u)));
L_0049a17e:  // fchs 
    ST(0) = -ST(0);
L_0049a180:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a183:  // fld dword ptr [ebp - 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd0u)));
L_0049a186:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a187:  // mov dword ptr [esi + 0x90], eax
    M32((uint32_t)(esi + 0x90u)) = (uint32_t)(eax);
L_0049a18d:  // fchs 
    ST(0) = -ST(0);
L_0049a18f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a192:  // fld dword ptr [ebp - 0x34]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffccu)));
L_0049a195:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a196:  // mov dword ptr [esi + 0x94], ecx
    M32((uint32_t)(esi + 0x94u)) = (uint32_t)(ecx);
L_0049a19c:  // fchs 
    ST(0) = -ST(0);
L_0049a19e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a1a1:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049a1a4:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a1a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a1a9:  // mov eax, dword ptr [ebp - 0x40]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc0u)));
L_0049a1ac:  // mov ecx, dword ptr [ebp - 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_0049a1af:  // mov edx, dword ptr [ebp - 0x44]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffbcu)));
L_0049a1b2:  // mov dword ptr [ebp - 0x1c], eax
    M32((uint32_t)(ebp + 0xffffffe4u)) = (uint32_t)(eax);
L_0049a1b5:  // mov dword ptr [ebp - 0x18], ecx
    M32((uint32_t)(ebp + 0xffffffe8u)) = (uint32_t)(ecx);
L_0049a1b8:  // lea eax, [ebp - 0x20]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffffe0u));
L_0049a1bb:  // lea ecx, [ebp - 0x34]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffccu));
L_0049a1be:  // mov dword ptr [ebp - 0x20], edx
    M32((uint32_t)(ebp + 0xffffffe0u)) = (uint32_t)(edx);
L_0049a1c1:  // mov edx, dword ptr [ebp - 0x38]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc8u)));
L_0049a1c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a1c5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a1c6:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049a1c9:  // mov dword ptr [ebp - 0x14], edx
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(edx);
L_0049a1cc:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a1d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a1d1:  // lea edx, [ebp - 0x34]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffffccu));
L_0049a1d4:  // lea eax, [ebp - 0x54]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049a1d7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049a1d8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a1d9:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049a1dc:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a1e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a1e1:  // lea ecx, [ebp - 0x34]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffccu));
L_0049a1e4:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a1e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a1e9:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049a1ec:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a1f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a1f1:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049a1f4:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a1f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a1f9:  // mov eax, dword ptr [ebp - 0x64]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff9cu)));
L_0049a1fc:  // mov ecx, dword ptr [ebp - 0x34]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffccu)));
L_0049a1ff:  // mov edx, dword ptr [ebp - 0x54]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffacu)));
L_0049a202:  // mov dword ptr [ebp - 0xf0], eax
    M32((uint32_t)(ebp + 0xffffff10u)) = (uint32_t)(eax);
L_0049a208:  // mov eax, dword ptr [ebp - 0x60]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa0u)));
L_0049a20b:  // mov dword ptr [ebp - 0xf8], ecx
    M32((uint32_t)(ebp + 0xffffff08u)) = (uint32_t)(ecx);
L_0049a211:  // mov ecx, dword ptr [ebp - 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd0u)));
L_0049a214:  // mov dword ptr [ebp - 0xe0], eax
    M32((uint32_t)(ebp + 0xffffff20u)) = (uint32_t)(eax);
L_0049a21a:  // mov eax, dword ptr [ebp - 0x5c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa4u)));
L_0049a21d:  // mov dword ptr [ebp - 0xf4], edx
    M32((uint32_t)(ebp + 0xffffff0cu)) = (uint32_t)(edx);
L_0049a223:  // mov edx, dword ptr [ebp - 0x50]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb0u)));
L_0049a226:  // mov dword ptr [ebp - 0xd0], eax
    M32((uint32_t)(ebp + 0xffffff30u)) = (uint32_t)(eax);
L_0049a22c:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_0049a232:  // mov dword ptr [ebp - 0xe8], ecx
    M32((uint32_t)(ebp + 0xffffff18u)) = (uint32_t)(ecx);
L_0049a238:  // mov ecx, dword ptr [ebp - 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd4u)));
L_0049a23b:  // mov dword ptr [ebp - 0xe4], edx
    M32((uint32_t)(ebp + 0xffffff1cu)) = (uint32_t)(edx);
L_0049a241:  // mov edx, dword ptr [ebp - 0x4c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb4u)));
L_0049a244:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0049a246:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049a248:  // mov dword ptr [ebp - 0xd8], ecx
    M32((uint32_t)(ebp + 0xffffff28u)) = (uint32_t)(ecx);
L_0049a24e:  // mov dword ptr [ebp - 0xd4], edx
    M32((uint32_t)(ebp + 0xffffff2cu)) = (uint32_t)(edx);
L_0049a254:  // jle 0x49a365
    if ((f.zf || f.sf != f.of)) goto L_0049a365;
L_0049a25a:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0049a25d:  // cmp dword ptr [ecx + edi*4], 0
    t0 = lsub<32>(M32((uint32_t)(ecx + edi * 4u)), 0x0u, f);
L_0049a261:  // jle 0x49a356
    if ((f.zf || f.sf != f.of)) goto L_0049a356;
L_0049a267:  // mov edx, dword ptr [ebp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049a26a:  // lea ecx, [edi + 1]
    ecx = (uint32_t)((uint32_t)(edi + 0x1u));
L_0049a26d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a26e:  // push 0x62df54
    t0 = 0x62df54u; esp -= 4; M32(esp) = t0;
L_0049a273:  // mov ecx, dword ptr [edx + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x128u)));
L_0049a279:  // call 0x4aa820
    t0 = 0x004aa820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a27eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a27e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a280:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a282:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049a285:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a287:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a288:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0049a28b:  // lea edx, [ebp - 0x1ac]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049a291:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049a292:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a293:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a295:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a297:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a299:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049a29b:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a2a0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a2a0:  // fld dword ptr [ebp - 0x54]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffacu)));
L_0049a2a3:  // fsub dword ptr [ebp - 0x90]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xffffff70u)));
L_0049a2a9:  // fld dword ptr [ebp - 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb0u)));
L_0049a2ac:  // fsub dword ptr [ebp - 0x8c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xffffff74u)));
L_0049a2b2:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0049a2b5:  // fstp dword ptr [ebp - 0x60]
    F32((uint32_t)(ebp + 0xffffffa0u)) = lf32(ST(0));
    lpop(x);
L_0049a2b8:  // fild dword ptr [ecx + edi*4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ecx + edi * 4u)));
L_0049a2bb:  // fmul dword ptr [0x5db4f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f4u)));
L_0049a2c1:  // fmul dword ptr [0x5db54c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db54cu)));
L_0049a2c7:  // fsin 
    ST(0) = lfsin(ST(0));
L_0049a2c9:  // fst dword ptr [ebp - 0x14]
    F32((uint32_t)(ebp + 0xffffffecu)) = lf32(ST(0));
L_0049a2cc:  // fst dword ptr [ebp + 0xc]
    F32((uint32_t)(ebp + 0xcu)) = lf32(ST(0));
L_0049a2cf:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0049a2d1:  // fstp dword ptr [ebp - 0x64]
    F32((uint32_t)(ebp + 0xffffff9cu)) = lf32(ST(0));
    lpop(x);
L_0049a2d4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049a2d6:  // fld dword ptr [ebp + 0xc]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xcu)));
L_0049a2d9:  // fmul dword ptr [ebp - 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffa0u)));
L_0049a2dc:  // fld dword ptr [ebp - 0x64]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049a2df:  // fcomp dword ptr [0x5d85d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d8u)));
    lpop(x);
L_0049a2e5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049a2e7:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0049a2ea:  // jne 0x49a2f3
    if (!f.zf) goto L_0049a2f3;
L_0049a2ec:  // mov dword ptr [ebp - 0x64], 0x40a00000
    M32((uint32_t)(ebp + 0xffffff9cu)) = (uint32_t)(0x40a00000u);
L_0049a2f3:  // fcom dword ptr [0x5d85d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d8u)));
L_0049a2f9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049a2fb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0049a2fe:  // jne 0x49a308
    if (!f.zf) goto L_0049a308;
L_0049a300:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049a302:  // fld dword ptr [0x5d85d8]
    lpush(x, (long double)F32((uint32_t)(0x5d85d8u)));
L_0049a308:  // fld dword ptr [ebp - 0x64]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049a30b:  // fcomp dword ptr [0x5db2b0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db2b0u)));
    lpop(x);
L_0049a311:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049a313:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0049a316:  // je 0x49a31f
    if (f.zf) goto L_0049a31f;
L_0049a318:  // mov dword ptr [ebp - 0x64], 0xc0a00000
    M32((uint32_t)(ebp + 0xffffff9cu)) = (uint32_t)(0xc0a00000u);
L_0049a31f:  // fcom dword ptr [0x5db2b0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5db2b0u)));
L_0049a325:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049a327:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0049a32a:  // je 0x49a334
    if (f.zf) goto L_0049a334;
L_0049a32c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049a32e:  // fld dword ptr [0x5db2b0]
    lpush(x, (long double)F32((uint32_t)(0x5db2b0u)));
L_0049a334:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0049a336:  // fadd dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049a339:  // fstp dword ptr [ebp + 0x1c]
    F32((uint32_t)(ebp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0049a33c:  // fld dword ptr [ebp - 0x64]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049a33f:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0049a341:  // fadd dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x20u)));
L_0049a344:  // fstp dword ptr [ebp + 0x20]
    F32((uint32_t)(ebp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0049a347:  // fld dword ptr [ebp - 0x14]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffecu)));
L_0049a34a:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_0049a350:  // fsubr dword ptr [ebp - 0x70]
    ST(0) = ((long double)F32((uint32_t)(ebp + 0xffffff90u))) - (ST(0));
L_0049a353:  // fstp dword ptr [ebp - 0x70]
    F32((uint32_t)(ebp + 0xffffff90u)) = lf32(ST(0));
    lpop(x);
L_0049a356:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_0049a35c:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0049a35d:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0049a35f:  // jl 0x49a25d
    if ((f.sf != f.of)) goto L_0049a25d;
L_0049a365:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049a368:  // fmul dword ptr [esi + 0x98]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x98u)));
L_0049a36e:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_0049a371:  // fmul dword ptr [esi + 0x98]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x98u)));
L_0049a377:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049a37a:  // fstp dword ptr [ebp + 0x20]
    F32((uint32_t)(ebp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0049a37d:  // fmul dword ptr [0x5db4f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f4u)));
L_0049a383:  // fmul dword ptr [0x5db54c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db54cu)));
L_0049a389:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049a38b:  // fcos 
    ST(0) = lfcos(ST(0));
L_0049a38d:  // fst dword ptr [ebp + 0xc]
    F32((uint32_t)(ebp + 0xcu)) = lf32(ST(0));
L_0049a390:  // fstp dword ptr [ebp - 0x60]
    F32((uint32_t)(ebp + 0xffffffa0u)) = lf32(ST(0));
    lpop(x);
L_0049a393:  // mov edx, dword ptr [ebp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_0049a396:  // fsin 
    ST(0) = lfsin(ST(0));
L_0049a398:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049a399:  // fst dword ptr [ebp + 0x1c]
    F32((uint32_t)(ebp + 0x1cu)) = lf32(ST(0));
L_0049a39c:  // mov eax, dword ptr [ebp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_0049a39f:  // fchs 
    ST(0) = -ST(0);
L_0049a3a1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a3a2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a3a4:  // fstp dword ptr [ebp - 0x5c]
    F32((uint32_t)(ebp + 0xffffffa4u)) = lf32(ST(0));
    lpop(x);
L_0049a3a7:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a3acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a3ac:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_0049a3af:  // fmul dword ptr [0x5db4f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f4u)));
L_0049a3b5:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049a3b7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a3b9:  // mov dword ptr [ebp - 0x118], ecx
    M32((uint32_t)(ebp + 0xfffffee8u)) = (uint32_t)(ecx);
L_0049a3bf:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0049a3c4:  // fmul dword ptr [0x5db54c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db54cu)));
L_0049a3ca:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049a3cd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a3cf:  // mov dword ptr [ebp - 0x114], edx
    M32((uint32_t)(ebp + 0xfffffeecu)) = (uint32_t)(edx);
L_0049a3d5:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049a3d7:  // fcos 
    ST(0) = lfcos(ST(0));
L_0049a3d9:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049a3dc:  // mov dword ptr [ebp - 0x110], ecx
    M32((uint32_t)(ebp + 0xfffffef0u)) = (uint32_t)(ecx);
L_0049a3e2:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049a3e5:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049a3e8:  // mov dword ptr [ebp - 0x10c], edx
    M32((uint32_t)(ebp + 0xfffffef4u)) = (uint32_t)(edx);
L_0049a3ee:  // fst dword ptr [ebp + 0x20]
    F32((uint32_t)(ebp + 0x20u)) = lf32(ST(0));
L_0049a3f1:  // fstp dword ptr [ebp - 0x34]
    F32((uint32_t)(ebp + 0xffffffccu)) = lf32(ST(0));
    lpop(x);
L_0049a3f4:  // fsin 
    ST(0) = lfsin(ST(0));
L_0049a3f6:  // fst dword ptr [ebp + 0x1c]
    F32((uint32_t)(ebp + 0x1cu)) = lf32(ST(0));
L_0049a3f9:  // fstp dword ptr [ebp - 0x2c]
    F32((uint32_t)(ebp + 0xffffffd4u)) = lf32(ST(0));
    lpop(x);
L_0049a3fc:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a401u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a401:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049a403:  // mov dword ptr [ebp - 0x164], ecx
    M32((uint32_t)(ebp + 0xfffffe9cu)) = (uint32_t)(ecx);
L_0049a409:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049a40c:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049a40f:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049a412:  // mov dword ptr [ebp - 0x160], edx
    M32((uint32_t)(ebp + 0xfffffea0u)) = (uint32_t)(edx);
L_0049a418:  // mov dword ptr [ebp - 0x15c], ecx
    M32((uint32_t)(ebp + 0xfffffea4u)) = (uint32_t)(ecx);
L_0049a41e:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049a421:  // mov eax, dword ptr [ebp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049a424:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a425:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a427:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a428:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049a42b:  // fchs 
    ST(0) = -ST(0);
L_0049a42d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a430:  // mov dword ptr [ebp - 0x158], edx
    M32((uint32_t)(ebp + 0xfffffea8u)) = (uint32_t)(edx);
L_0049a436:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a43bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a43b:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049a43d:  // mov dword ptr [ebp - 0x154], ecx
    M32((uint32_t)(ebp + 0xfffffeacu)) = (uint32_t)(ecx);
L_0049a443:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049a446:  // mov dword ptr [ebp - 0x150], edx
    M32((uint32_t)(ebp + 0xfffffeb0u)) = (uint32_t)(edx);
L_0049a44c:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049a44f:  // mov dword ptr [ebp - 0x14c], ecx
    M32((uint32_t)(ebp + 0xfffffeb4u)) = (uint32_t)(ecx);
L_0049a455:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049a458:  // mov eax, dword ptr [ebp - 0x80]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff80u)));
L_0049a45b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049a45d:  // mov dword ptr [ebp - 0x148], edx
    M32((uint32_t)(ebp + 0xfffffeb8u)) = (uint32_t)(edx);
L_0049a463:  // je 0x49a46a
    if (f.zf) goto L_0049a46a;
L_0049a465:  // lea ecx, [eax - 8]
    ecx = (uint32_t)((uint32_t)(eax + 0xfffffff8u));
L_0049a468:  // jmp 0x49a46c
    goto L_0049a46c;
L_0049a46a:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0049a46c:  // test byte ptr [ecx + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ecx + 0x2cu)) & 0x4u, f);
L_0049a470:  // je 0x49a4b5
    if (f.zf) goto L_0049a4b5;
L_0049a472:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049a475:  // mov byte ptr [ebp - 0xd], 1
    M8((uint32_t)(ebp + 0xfffffff3u)) = (uint8_t)(0x1u);
L_0049a479:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049a47b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0049a47d:  // mov dword ptr [ebp - 0x108], edx
    M32((uint32_t)(ebp + 0xfffffef8u)) = (uint32_t)(edx);
L_0049a483:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0049a486:  // mov dword ptr [ebp - 0x104], edx
    M32((uint32_t)(ebp + 0xfffffefcu)) = (uint32_t)(edx);
L_0049a48c:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0049a48f:  // mov dword ptr [ebp - 0x100], edx
    M32((uint32_t)(ebp + 0xffffff00u)) = (uint32_t)(edx);
L_0049a495:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0049a498:  // mov dword ptr [ebp - 0xfc], ecx
    M32((uint32_t)(ebp + 0xffffff04u)) = (uint32_t)(ecx);
L_0049a49e:  // je 0x49a4a5
    if (f.zf) goto L_0049a4a5;
L_0049a4a0:  // lea ecx, [eax - 8]
    ecx = (uint32_t)((uint32_t)(eax + 0xfffffff8u));
L_0049a4a3:  // jmp 0x49a4a7
    goto L_0049a4a7;
L_0049a4a5:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0049a4a7:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0049a4a9:  // call dword ptr [edx + 0x1a8]
    t0 = M32((uint32_t)(edx + 0x1a8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a4afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a4af:  // fstp dword ptr [ebp - 0x100]
    F32((uint32_t)(ebp + 0xffffff00u)) = lf32(ST(0));
    lpop(x);
L_0049a4b5:  // fld dword ptr [ebp - 0xd0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff30u)));
L_0049a4bb:  // fmul dword ptr [ebp - 0x118]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffee8u)));
L_0049a4c1:  // lea eax, [ebp - 0x54]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049a4c4:  // mov dword ptr [ebp + 0x20], 0
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(0x0u);
L_0049a4cb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a4cc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a4cd:  // fadd dword ptr [ebp - 0xd8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff28u)));
L_0049a4d3:  // fstp dword ptr [ebp - 0x54]
    F32((uint32_t)(ebp + 0xffffffacu)) = lf32(ST(0));
    lpop(x);
L_0049a4d6:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0049a4dc:  // fld dword ptr [ebp - 0xd0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff30u)));
L_0049a4e2:  // fmul dword ptr [ebp - 0x114]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffeecu)));
L_0049a4e8:  // fld dword ptr [ebp - 0xd4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff2cu)));
L_0049a4ee:  // fmul dword ptr [ebp - 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffa0u)));
L_0049a4f1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a4f3:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0049a4f5:  // fstp dword ptr [ebp - 0x50]
    F32((uint32_t)(ebp + 0xffffffb0u)) = lf32(ST(0));
    lpop(x);
L_0049a4f8:  // fld dword ptr [ebp - 0xd0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff30u)));
L_0049a4fe:  // fmul dword ptr [ebp - 0x110]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffef0u)));
L_0049a504:  // fld dword ptr [ebp - 0xd4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff2cu)));
L_0049a50a:  // fmul dword ptr [ebp - 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffa4u)));
L_0049a50d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a50f:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0049a511:  // fstp dword ptr [ebp - 0x4c]
    F32((uint32_t)(ebp + 0xffffffb4u)) = lf32(ST(0));
    lpop(x);
L_0049a514:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049a516:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0049a51c:  // fld dword ptr [ebp - 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff20u)));
L_0049a522:  // fmul dword ptr [ebp - 0x110]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffef0u)));
L_0049a528:  // fld dword ptr [ebp - 0xe4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff1cu)));
L_0049a52e:  // fmul dword ptr [ebp - 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffa4u)));
L_0049a531:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a533:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0049a535:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a538:  // fld dword ptr [ebp - 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff20u)));
L_0049a53e:  // fmul dword ptr [ebp - 0x114]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffeecu)));
L_0049a544:  // fld dword ptr [ebp - 0xe4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff1cu)));
L_0049a54a:  // fmul dword ptr [ebp - 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffa0u)));
L_0049a54d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a54e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a550:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0049a552:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a555:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a556:  // lea ecx, [ebp - 0x20]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffe0u));
L_0049a559:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049a55b:  // fld dword ptr [ebp - 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff20u)));
L_0049a561:  // fmul dword ptr [ebp - 0x118]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffee8u)));
L_0049a567:  // fadd dword ptr [ebp - 0xe8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff18u)));
L_0049a56d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a570:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a575u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a575:  // fld dword ptr [ebp - 0xf0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff10u)));
L_0049a57b:  // fmul dword ptr [ebp - 0x110]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffef0u)));
L_0049a581:  // fld dword ptr [ebp - 0xf4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff0cu)));
L_0049a587:  // fmul dword ptr [ebp - 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffa4u)));
L_0049a58a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a58b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a58c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a58e:  // fadd dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x20u)));
L_0049a591:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a594:  // fld dword ptr [ebp - 0xf0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff10u)));
L_0049a59a:  // fmul dword ptr [ebp - 0x114]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffeecu)));
L_0049a5a0:  // fld dword ptr [ebp - 0xf4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff0cu)));
L_0049a5a6:  // fmul dword ptr [ebp - 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffa0u)));
L_0049a5a9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a5aa:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a5ac:  // fadd dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x20u)));
L_0049a5af:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a5b2:  // fld dword ptr [ebp - 0xf0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff10u)));
L_0049a5b8:  // fmul dword ptr [ebp - 0x118]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffee8u)));
L_0049a5be:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a5bf:  // lea ecx, [ebp - 0x7c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff84u));
L_0049a5c2:  // fadd dword ptr [ebp - 0xf8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff08u)));
L_0049a5c8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a5cb:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a5d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a5d0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a5d1:  // lea ecx, [ebp - 0xc8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff38u));
L_0049a5d7:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a5dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a5dc:  // fld dword ptr [ebp - 0x34]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffccu)));
L_0049a5df:  // fmul dword ptr [ebp - 0xa8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff58u)));
L_0049a5e5:  // fld dword ptr [ebp - 0x154]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeacu)));
L_0049a5eb:  // fmul dword ptr [ebp - 0xa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff60u)));
L_0049a5f1:  // lea ecx, [ebp - 0x44]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffbcu));
L_0049a5f4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a5f5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a5f6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a5f8:  // fld dword ptr [ebp - 0x164]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffe9cu)));
L_0049a5fe:  // fmul dword ptr [ebp - 0xa4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff5cu)));
L_0049a604:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a606:  // fstp dword ptr [ebp - 0x44]
    F32((uint32_t)(ebp + 0xffffffbcu)) = lf32(ST(0));
    lpop(x);
L_0049a609:  // fld dword ptr [ebp - 0x150]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeb0u)));
L_0049a60f:  // fmul dword ptr [ebp - 0xa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff60u)));
L_0049a615:  // fld dword ptr [ebp - 0x160]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffea0u)));
L_0049a61b:  // fmul dword ptr [ebp - 0xa4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff5cu)));
L_0049a621:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a623:  // fstp dword ptr [ebp - 0x40]
    F32((uint32_t)(ebp + 0xffffffc0u)) = lf32(ST(0));
    lpop(x);
L_0049a626:  // fld dword ptr [ebp - 0x14c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeb4u)));
L_0049a62c:  // fmul dword ptr [ebp - 0xa0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff60u)));
L_0049a632:  // fld dword ptr [ebp - 0x15c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffea4u)));
L_0049a638:  // fmul dword ptr [ebp - 0xa4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff5cu)));
L_0049a63e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a640:  // fld dword ptr [ebp - 0xa8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff58u)));
L_0049a646:  // fmul dword ptr [ebp - 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffd4u)));
L_0049a649:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a64b:  // fstp dword ptr [ebp - 0x3c]
    F32((uint32_t)(ebp + 0xffffffc4u)) = lf32(ST(0));
    lpop(x);
L_0049a64e:  // fld dword ptr [ebp - 0xb0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff50u)));
L_0049a654:  // fmul dword ptr [ebp - 0x14c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffeb4u)));
L_0049a65a:  // fld dword ptr [ebp - 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff4cu)));
L_0049a660:  // fmul dword ptr [ebp - 0x15c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffea4u)));
L_0049a666:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a668:  // fld dword ptr [ebp - 0xb8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff48u)));
L_0049a66e:  // fmul dword ptr [ebp - 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffd4u)));
L_0049a671:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a673:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a676:  // fld dword ptr [ebp - 0xb0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff50u)));
L_0049a67c:  // fmul dword ptr [ebp - 0x150]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffeb0u)));
L_0049a682:  // fld dword ptr [ebp - 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff4cu)));
L_0049a688:  // fmul dword ptr [ebp - 0x160]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffea0u)));
L_0049a68e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a68f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a691:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a694:  // fld dword ptr [ebp - 0x34]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffccu)));
L_0049a697:  // fmul dword ptr [ebp - 0xb8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff48u)));
L_0049a69d:  // fld dword ptr [ebp - 0xb0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff50u)));
L_0049a6a3:  // fmul dword ptr [ebp - 0x154]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffeacu)));
L_0049a6a9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a6aa:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049a6ad:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a6af:  // fld dword ptr [ebp - 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff4cu)));
L_0049a6b5:  // fmul dword ptr [ebp - 0x164]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffe9cu)));
L_0049a6bb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a6bd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a6c0:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a6c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a6c5:  // fld dword ptr [ebp - 0xc8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff38u)));
L_0049a6cb:  // fmul dword ptr [ebp - 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffd4u)));
L_0049a6ce:  // fld dword ptr [ebp - 0xc0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff40u)));
L_0049a6d4:  // fmul dword ptr [ebp - 0x14c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffeb4u)));
L_0049a6da:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a6db:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a6dc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a6de:  // fld dword ptr [ebp - 0xc4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff3cu)));
L_0049a6e4:  // fmul dword ptr [ebp - 0x15c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffea4u)));
L_0049a6ea:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a6ec:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a6ef:  // fld dword ptr [ebp - 0xc0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff40u)));
L_0049a6f5:  // fmul dword ptr [ebp - 0x150]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffeb0u)));
L_0049a6fb:  // fld dword ptr [ebp - 0xc4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff3cu)));
L_0049a701:  // fmul dword ptr [ebp - 0x160]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffea0u)));
L_0049a707:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a708:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a70a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a70d:  // fld dword ptr [ebp - 0xc8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff38u)));
L_0049a713:  // fmul dword ptr [ebp - 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffccu)));
L_0049a716:  // fld dword ptr [ebp - 0xc0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff40u)));
L_0049a71c:  // fmul dword ptr [ebp - 0x154]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffeacu)));
L_0049a722:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a724:  // fld dword ptr [ebp - 0xc4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff3cu)));
L_0049a72a:  // fmul dword ptr [ebp - 0x164]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xfffffe9cu)));
L_0049a730:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a732:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a733:  // lea ecx, [ebp - 0x1c4]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe3cu));
L_0049a739:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049a73c:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a741u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a741:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a742:  // lea ecx, [ebp - 0x1ac]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049a748:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a74du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a74d:  // mov edx, dword ptr [ebp - 0x68]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049a750:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049a755:  // lea esi, [ebp - 0x1ac]
    esi = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049a75b:  // lea edi, [ebp - 0xf8]
    edi = (uint32_t)((uint32_t)(ebp + 0xffffff08u));
L_0049a761:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049a763:  // lea edi, [edx + 0x58]
    edi = (uint32_t)((uint32_t)(edx + 0x58u));
L_0049a766:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049a76b:  // lea esi, [ebp - 0x1ac]
    esi = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049a771:  // jmp 0x49b5b6
    goto L_0049b5b6;
L_0049a776:  // cmp edx, 2
    t0 = lsub<32>(edx, 0x2u, f);
L_0049a779:  // jne 0x49b1b4
    if (!f.zf) goto L_0049b1b4;
L_0049a77f:  // mov ecx, dword ptr [ecx + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x10u)));
L_0049a782:  // mov edx, dword ptr [ebp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049a785:  // mov ecx, dword ptr [ecx + eax*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + eax * 4u)));
L_0049a788:  // mov eax, dword ptr [ebp - 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff94u)));
L_0049a78b:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_0049a790:  // mov dword ptr [edi], ecx
    M32((uint32_t)(edi)) = (uint32_t)(ecx);
L_0049a792:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049a795:  // add eax, dword ptr [edx + 0xc8]
    t0 = ladd<32>(eax, M32((uint32_t)(edx + 0xc8u)), f);
    eax = (uint32_t)(t0);
L_0049a79b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a79c:  // mov ecx, dword ptr [edx + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x128u)));
L_0049a7a2:  // push 0x62df54
    t0 = 0x62df54u; esp -= 4; M32(esp) = t0;
L_0049a7a7:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0049a7aa:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_0049a7ad:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0049a7b0:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_0049a7b3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a7b5:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_0049a7b7:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0049a7b9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a7bb:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_0049a7be:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049a7c1:  // fld dword ptr [ebx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x10u)));
L_0049a7c4:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0049a7c6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a7c8:  // fld dword ptr [ebx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x18u)));
L_0049a7cb:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049a7ce:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a7d0:  // fstp dword ptr [ebp - 0x50]
    F32((uint32_t)(ebp + 0xffffffb0u)) = lf32(ST(0));
    lpop(x);
L_0049a7d3:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0049a7d6:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_0049a7d9:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0049a7dc:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_0049a7df:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a7e1:  // fld dword ptr [ebx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x20u)));
L_0049a7e4:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0049a7e6:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049a7e9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049a7eb:  // fstp dword ptr [ebp - 0x4c]
    F32((uint32_t)(ebp + 0xffffffb4u)) = lf32(ST(0));
    lpop(x);
L_0049a7ee:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0049a7f0:  // fstp dword ptr [ebp - 0x34]
    F32((uint32_t)(ebp + 0xffffffccu)) = lf32(ST(0));
    lpop(x);
L_0049a7f3:  // fld dword ptr [ebp - 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb0u)));
L_0049a7f6:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049a7f9:  // fstp dword ptr [ebp - 0x30]
    F32((uint32_t)(ebp + 0xffffffd0u)) = lf32(ST(0));
    lpop(x);
L_0049a7fc:  // fld dword ptr [ebp - 0x4c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb4u)));
L_0049a7ff:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049a802:  // fstp dword ptr [ebp - 0x2c]
    F32((uint32_t)(ebp + 0xffffffd4u)) = lf32(ST(0));
    lpop(x);
L_0049a805:  // call 0x4aa820
    t0 = 0x004aa820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a80au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a80a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a80c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a80e:  // lea edx, [ebp - 0x44]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffffbcu));
L_0049a811:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a813:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049a814:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0049a817:  // lea ecx, [ebp - 0x174]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe8cu));
L_0049a81d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a81e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049a81f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a821:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a823:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049a825:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049a827:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a82cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a82c:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049a82e:  // mov ecx, dword ptr [esi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_0049a831:  // fld dword ptr [ebp - 0x34]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffccu)));
L_0049a834:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049a837:  // lea eax, [eax + ecx - 0x10]
    eax = (uint32_t)((uint32_t)(eax + ecx + 0xfffffff0u));
L_0049a83b:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_0049a83d:  // mov edx, dword ptr [ebp - 0x34]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffccu)));
L_0049a840:  // mov ecx, dword ptr [ebp - 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd0u)));
L_0049a843:  // fstp dword ptr [ebp - 0x7c]
    F32((uint32_t)(ebp + 0xffffff84u)) = lf32(ST(0));
    lpop(x);
L_0049a846:  // fld dword ptr [ebp - 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd0u)));
L_0049a849:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049a84c:  // fstp dword ptr [ebp - 0x78]
    F32((uint32_t)(ebp + 0xffffff88u)) = lf32(ST(0));
    lpop(x);
L_0049a84f:  // fld dword ptr [ebp - 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd4u)));
L_0049a852:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049a855:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_0049a857:  // mov edx, dword ptr [ebp - 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd4u)));
L_0049a85a:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_0049a85d:  // mov ecx, dword ptr [ebp - 0x28]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd8u)));
L_0049a860:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0049a863:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_0049a866:  // mov edx, dword ptr [ebp - 0x44]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffbcu)));
L_0049a869:  // mov eax, dword ptr [ebp - 0x40]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc0u)));
L_0049a86c:  // mov ecx, dword ptr [ebp - 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_0049a86f:  // mov dword ptr [ebp - 0x20], edx
    M32((uint32_t)(ebp + 0xffffffe0u)) = (uint32_t)(edx);
L_0049a872:  // mov edx, dword ptr [ebp - 0x38]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc8u)));
L_0049a875:  // mov dword ptr [ebp - 0x1c], eax
    M32((uint32_t)(ebp + 0xffffffe4u)) = (uint32_t)(eax);
L_0049a878:  // mov eax, dword ptr [ebp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049a87b:  // mov dword ptr [ebp - 0x18], ecx
    M32((uint32_t)(ebp + 0xffffffe8u)) = (uint32_t)(ecx);
L_0049a87e:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0049a880:  // mov dword ptr [ebp - 0x14], edx
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(edx);
L_0049a883:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049a884:  // lea edx, [ebp - 0x44]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffffbcu));
L_0049a887:  // fstp dword ptr [ebp - 0x74]
    F32((uint32_t)(ebp + 0xffffff8cu)) = lf32(ST(0));
    lpop(x);
L_0049a88a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049a88b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049a88c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049a88e:  // call 0x499bc0
    t0 = 0x00499bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049a893u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049a893:  // fld dword ptr [ebp - 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff84u)));
L_0049a896:  // fadd dword ptr [ebp - 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_0049a899:  // fstp dword ptr [ebp - 0x20]
    F32((uint32_t)(ebp + 0xffffffe0u)) = lf32(ST(0));
    lpop(x);
L_0049a89c:  // fld dword ptr [ebp - 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffe4u)));
L_0049a89f:  // fadd dword ptr [ebp - 0x78]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff88u)));
L_0049a8a2:  // fstp dword ptr [ebp - 0x1c]
    F32((uint32_t)(ebp + 0xffffffe4u)) = lf32(ST(0));
    lpop(x);
L_0049a8a5:  // fld dword ptr [ebp - 0x74]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff8cu)));
L_0049a8a8:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0049a8aa:  // fstp dword ptr [ebp - 0x18]
    F32((uint32_t)(ebp + 0xffffffe8u)) = lf32(ST(0));
    lpop(x);
L_0049a8ad:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049a8af:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049a8b2:  // fcomp dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
    lpop(x);
L_0049a8b8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049a8ba:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0049a8bd:  // jne 0x49a8e2
    if (!f.zf) goto L_0049a8e2;
L_0049a8bf:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049a8c1:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0049a8c4:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049a8c7:  // lea edx, [eax + ecx - 0x10]
    edx = (uint32_t)((uint32_t)(eax + ecx + 0xfffffff0u));
L_0049a8cb:  // mov eax, dword ptr [ebp - 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe0u)));
L_0049a8ce:  // mov ecx, dword ptr [ebp - 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe4u)));
L_0049a8d1:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0049a8d3:  // mov eax, dword ptr [ebp - 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_0049a8d6:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0049a8d9:  // mov ecx, dword ptr [ebp - 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffecu)));
L_0049a8dc:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0049a8df:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0049a8e2:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0049a8e4:  // mov eax, dword ptr [esi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0049a8e7:  // fld dword ptr [ebp - 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_0049a8ea:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0049a8ec:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0049a8ef:  // fsub dword ptr [edx + eax - 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edx + eax + 0xfffffff0u)));
L_0049a8f3:  // lea eax, [edx + eax - 0x10]
    eax = (uint32_t)((uint32_t)(edx + eax + 0xfffffff0u));
L_0049a8f7:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0049a8f9:  // fstp dword ptr [ebp - 0x64]
    F32((uint32_t)(ebp + 0xffffff9cu)) = lf32(ST(0));
    lpop(x);
L_0049a8fc:  // fld dword ptr [ebp - 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffe4u)));
L_0049a8ff:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049a902:  // fld dword ptr [ebp - 0x18]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffe8u)));
L_0049a905:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049a908:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0049a90b:  // mov dword ptr [eax + ecx*4 - 4], edx
    M32((uint32_t)(eax + ecx * 4u + 0xfffffffcu)) = (uint32_t)(edx);
L_0049a90f:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0049a912:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0049a914:  // mov dword ptr [ebp - 0x14], eax
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(eax);
L_0049a917:  // fstp dword ptr [ebp - 0x5c]
    F32((uint32_t)(ebp + 0xffffffa4u)) = lf32(ST(0));
    lpop(x);
L_0049a91a:  // lea eax, [eax + ecx*4 - 4]
    eax = (uint32_t)((uint32_t)(eax + ecx * 4u + 0xfffffffcu));
L_0049a91e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0049a920:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0049a922:  // jle 0x49a9f1
    if ((f.zf || f.sf != f.of)) goto L_0049a9f1;
L_0049a928:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049a92b:  // fmul dword ptr [esi + 0x9c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x9cu)));
L_0049a931:  // fistp qword ptr [ebp - 0x18]
    M64((uint32_t)(ebp + 0xffffffe8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0049a934:  // mov edx, dword ptr [ebp - 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_0049a937:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0049a939:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_0049a93b:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049a93d:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0049a940:  // mov edx, dword ptr [ecx + eax*4 - 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + eax * 4u + 0xfffffffcu)));
L_0049a944:  // lea ecx, [ecx + eax*4 - 4]
    ecx = (uint32_t)((uint32_t)(ecx + eax * 4u + 0xfffffffcu));
L_0049a948:  // cmp edx, 0xb4
    t0 = lsub<32>(edx, 0xb4u, f);
L_0049a94e:  // mov dword ptr [ebp + 0x1c], edx
    M32((uint32_t)(ebp + 0x1cu)) = (uint32_t)(edx);
L_0049a951:  // jle 0x49a960
    if ((f.zf || f.sf != f.of)) goto L_0049a960;
L_0049a953:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049a955:  // mov dword ptr [ecx], 0
    M32((uint32_t)(ecx)) = (uint32_t)(0x0u);
L_0049a95b:  // jmp 0x49ab88
    goto L_0049ab88;
L_0049a960:  // fild dword ptr [ebp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebp + 0x1cu)));
L_0049a963:  // mov edx, dword ptr [esi + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0049a966:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049a969:  // fstp dword ptr [ebp + 0x1c]
    F32((uint32_t)(ebp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0049a96c:  // fld dword ptr [ebp - 0x64]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049a96f:  // fmul dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049a972:  // lea eax, [eax + edx - 0x10]
    eax = (uint32_t)((uint32_t)(eax + edx + 0xfffffff0u));
L_0049a976:  // fstp dword ptr [ebp - 0x54]
    F32((uint32_t)(ebp + 0xffffffacu)) = lf32(ST(0));
    lpop(x);
L_0049a979:  // fmul dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049a97c:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049a97f:  // fmul dword ptr [ebp - 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffa4u)));
L_0049a982:  // fstp dword ptr [ebp - 0x4c]
    F32((uint32_t)(ebp + 0xffffffb4u)) = lf32(ST(0));
    lpop(x);
L_0049a985:  // fld dword ptr [ebp - 0x54]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffacu)));
L_0049a988:  // fmul dword ptr [0x5db54c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db54cu)));
L_0049a98e:  // fstp dword ptr [ebp - 0x64]
    F32((uint32_t)(ebp + 0xffffff9cu)) = lf32(ST(0));
    lpop(x);
L_0049a991:  // fmul dword ptr [0x5db54c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db54cu)));
L_0049a997:  // fld dword ptr [ebp - 0x4c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb4u)));
L_0049a99a:  // fmul dword ptr [0x5db54c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db54cu)));
L_0049a9a0:  // fstp dword ptr [ebp - 0x5c]
    F32((uint32_t)(ebp + 0xffffffa4u)) = lf32(ST(0));
    lpop(x);
L_0049a9a3:  // fld dword ptr [ebp - 0x64]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049a9a6:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0049a9a8:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_0049a9aa:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049a9ad:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0049a9b0:  // fld dword ptr [ebp - 0x5c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffa4u)));
L_0049a9b3:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049a9b6:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0049a9b9:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049a9bb:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0049a9be:  // mov dword ptr [ecx + eax*4 - 4], 0
    M32((uint32_t)(ecx + eax * 4u + 0xfffffffcu)) = (uint32_t)(0x0u);
L_0049a9c6:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049a9c8:  // mov edx, dword ptr [esi + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0049a9cb:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0049a9ce:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0049a9d1:  // fild dword ptr [eax + edx - 4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(eax + edx + 0xfffffffcu)));
L_0049a9d5:  // fmul dword ptr [0x5db4f4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4f4u)));
L_0049a9db:  // fmul dword ptr [0x5db54c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db54cu)));
L_0049a9e1:  // fsin 
    ST(0) = lfsin(ST(0));
L_0049a9e3:  // fmul dword ptr [esi + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0xcu)));
L_0049a9e6:  // fchs 
    ST(0) = -ST(0);
L_0049a9e8:  // fstp dword ptr [ecx + eax - 4]
    F32((uint32_t)(ecx + eax + 0xfffffffcu)) = lf32(ST(0));
    lpop(x);
L_0049a9ec:  // jmp 0x49ab88
    goto L_0049ab88;
L_0049a9f1:  // fld dword ptr [ebp - 0x74]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff8cu)));
L_0049a9f4:  // fld dword ptr [ebp - 0x78]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff88u)));
L_0049a9f7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049a9f9:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0049a9fb:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0049a9fd:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0049a9ff:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aa01:  // fld dword ptr [ebp - 0x7c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff84u)));
L_0049aa04:  // fmul dword ptr [ebp - 0x7c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff84u)));
L_0049aa07:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aa09:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0049aa0b:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0049aa0d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049aa0f:  // fcomp dword ptr [0x5d8574]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8574u)));
    lpop(x);
L_0049aa15:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049aa17:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0049aa1a:  // jne 0x49aa48
    if (!f.zf) goto L_0049aa48;
L_0049aa1c:  // mov ecx, dword ptr [ebp - 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa4u)));
L_0049aa1f:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_0049aa25:  // mov dword ptr [ebp + 0x1c], ecx
    M32((uint32_t)(ebp + 0x1cu)) = (uint32_t)(ecx);
L_0049aa28:  // mov dword ptr [ebp - 0x94], eax
    M32((uint32_t)(ebp + 0xffffff6cu)) = (uint32_t)(eax);
L_0049aa2e:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049aa31:  // fmul dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_0049aa34:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0049aa36:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0049aa38:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aa3a:  // fld dword ptr [ebp - 0x64]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049aa3d:  // fmul dword ptr [ebp - 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049aa40:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aa42:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0049aa44:  // fstp st(1)
    ST(1) = ST(0);
    lpop(x);
L_0049aa46:  // jmp 0x49aa62
    goto L_0049aa62;
L_0049aa48:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049aa4a:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0049aa4c:  // fld dword ptr [ebp - 0x64]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049aa4f:  // fmul dword ptr [ebp - 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049aa52:  // mov eax, dword ptr [esi + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_0049aa58:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aa5a:  // mov dword ptr [ebp - 0x94], eax
    M32((uint32_t)(ebp + 0xffffff6cu)) = (uint32_t)(eax);
L_0049aa60:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0049aa62:  // fstp dword ptr [ebp - 0x70]
    F32((uint32_t)(ebp + 0xffffff90u)) = lf32(ST(0));
    lpop(x);
L_0049aa65:  // fld dword ptr [ebp - 0x70]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff90u)));
L_0049aa68:  // fcomp dword ptr [ebp - 0x94]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xffffff6cu)));
    lpop(x);
L_0049aa6e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049aa70:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0049aa73:  // jne 0x49ab88
    if (!f.zf) goto L_0049ab88;
L_0049aa79:  // mov eax, dword ptr [esi + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_0049aa7f:  // mov dword ptr [ebp - 0x144], edx
    M32((uint32_t)(ebp + 0xfffffebcu)) = (uint32_t)(edx);
L_0049aa85:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0049aa87:  // mov byte ptr [ebp + 0x1f], 0
    M8((uint32_t)(ebp + 0x1fu)) = (uint8_t)(0x0u);
L_0049aa8b:  // mov byte ptr [ebp + 0xf], 0
    M8((uint32_t)(ebp + 0xfu)) = (uint8_t)(0x0u);
L_0049aa8f:  // mov byte ptr [ebp - 0xd], 1
    M8((uint32_t)(ebp + 0xfffffff3u)) = (uint8_t)(0x1u);
L_0049aa93:  // mov dword ptr [ebp - 0x98], edx
    M32((uint32_t)(ebp + 0xffffff68u)) = (uint32_t)(edx);
L_0049aa99:  // jle 0x49ab34
    if ((f.zf || f.sf != f.of)) goto L_0049ab34;
L_0049aa9f:  // mov ecx, dword ptr [ebp - 0x14]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffecu)));
L_0049aaa2:  // mov edx, dword ptr [ebp - 0x98]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff68u)));
L_0049aaa8:  // mov eax, dword ptr [ecx + edx*4]
    eax = (uint32_t)(M32((uint32_t)(ecx + edx * 4u)));
L_0049aaab:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049aaad:  // mov dword ptr [ebp - 0x140], eax
    M32((uint32_t)(ebp + 0xfffffec0u)) = (uint32_t)(eax);
L_0049aab3:  // je 0x49aadb
    if (f.zf) goto L_0049aadb;
L_0049aab5:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0049aab8:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0049aaba:  // mov dword ptr [ebp - 0x14], eax
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(eax);
L_0049aabd:  // mov edx, dword ptr [eax + ecx*4]
    edx = (uint32_t)(M32((uint32_t)(eax + ecx * 4u)));
L_0049aac0:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0049aac2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049aac4:  // mov dword ptr [ebp - 0x140], edx
    M32((uint32_t)(ebp + 0xfffffec0u)) = (uint32_t)(edx);
L_0049aaca:  // call dword ptr [eax + 0x34]
    t0 = M32((uint32_t)(eax + 0x34u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049aacdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049aacd:  // cmp dword ptr [ebp - 0x140], eax
    t0 = lsub<32>(M32((uint32_t)(ebp + 0xfffffec0u)), eax, f);
L_0049aad3:  // jg 0x49aadb
    if ((!f.zf && f.sf == f.of)) goto L_0049aadb;
L_0049aad5:  // inc dword ptr [ebp - 0x144]
    t0 = linc<32>(M32((uint32_t)(ebp + 0xfffffebcu)), f);
    M32((uint32_t)(ebp + 0xfffffebcu)) = (uint32_t)(t0);
L_0049aadb:  // mov eax, dword ptr [ebp - 0x140]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xfffffec0u)));
L_0049aae1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049aae3:  // je 0x49aaea
    if (f.zf) goto L_0049aaea;
L_0049aae5:  // cmp eax, 0x5a
    t0 = lsub<32>(eax, 0x5au, f);
L_0049aae8:  // jle 0x49ab0c
    if ((f.zf || f.sf != f.of)) goto L_0049ab0c;
L_0049aaea:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0049aaec:  // mov eax, dword ptr [ebp - 0x98]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff68u)));
L_0049aaf2:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0049aaf3:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0049aaf5:  // je 0x49ab12
    if (f.zf) goto L_0049ab12;
L_0049aaf7:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0049aaf9:  // and edx, 1
    t0 = llog<32>(edx & 0x1u, f);
    edx = (uint32_t)(t0);
L_0049aafc:  // cmp dl, 1
    t0 = lsub<8>((edx & 0xffu), 0x1u, f);
L_0049aaff:  // jne 0x49ab06
    if (!f.zf) goto L_0049ab06;
L_0049ab01:  // mov byte ptr [ebp + 0x1f], dl
    M8((uint32_t)(ebp + 0x1fu)) = (uint8_t)((edx & 0xffu));
L_0049ab04:  // jmp 0x49ab1f
    goto L_0049ab1f;
L_0049ab06:  // mov byte ptr [ebp + 0xf], 1
    M8((uint32_t)(ebp + 0xfu)) = (uint8_t)(0x1u);
L_0049ab0a:  // jmp 0x49ab1f
    goto L_0049ab1f;
L_0049ab0c:  // mov eax, dword ptr [ebp - 0x98]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff68u)));
L_0049ab12:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0049ab14:  // sub ecx, 2
    t0 = lsub<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0049ab17:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0049ab19:  // jne 0x49ab1f
    if (!f.zf) goto L_0049ab1f;
L_0049ab1b:  // mov byte ptr [ebp - 0xd], 0
    M8((uint32_t)(ebp + 0xfffffff3u)) = (uint8_t)(0x0u);
L_0049ab1f:  // mov ecx, dword ptr [esi + 0xa8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_0049ab25:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0049ab26:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0049ab28:  // mov dword ptr [ebp - 0x98], eax
    M32((uint32_t)(ebp + 0xffffff68u)) = (uint32_t)(eax);
L_0049ab2e:  // jl 0x49aa9f
    if ((f.sf != f.of)) goto L_0049aa9f;
L_0049ab34:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0049ab36:  // lea eax, [edx - 1]
    eax = (uint32_t)((uint32_t)(edx + 0xffffffffu));
L_0049ab39:  // and eax, 1
    t0 = llog<32>(eax & 0x1u, f);
    eax = (uint32_t)(t0);
L_0049ab3c:  // cmp al, 1
    t0 = lsub<8>((eax & 0xffu), 0x1u, f);
L_0049ab3e:  // mov al, byte ptr [ebp + 0x1f]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x1fu))) & 0xffu);
L_0049ab41:  // je 0x49ab46
    if (f.zf) goto L_0049ab46;
L_0049ab43:  // mov al, byte ptr [ebp + 0xf]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xfu))) & 0xffu);
L_0049ab46:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049ab48:  // je 0x49ab55
    if (f.zf) goto L_0049ab55;
L_0049ab4a:  // mov al, byte ptr [ebp - 0xd]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xfffffff3u))) & 0xffu);
L_0049ab4d:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049ab4f:  // je 0x49ab55
    if (f.zf) goto L_0049ab55;
L_0049ab51:  // mov cl, 1
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_0049ab53:  // jmp 0x49ab57
    goto L_0049ab57;
L_0049ab55:  // xor cl, cl
    t0 = llog<8>((ecx & 0xffu) ^ (ecx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0049ab57:  // mov eax, dword ptr [ebp - 0x144]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xfffffebcu)));
L_0049ab5d:  // cmp eax, dword ptr [esi + 0xc4]
    t0 = lsub<32>(eax, M32((uint32_t)(esi + 0xc4u)), f);
L_0049ab63:  // jl 0x49ab67
    if ((f.sf != f.of)) goto L_0049ab67;
L_0049ab65:  // xor cl, cl
    t0 = llog<8>((ecx & 0xffu) ^ (ecx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0049ab67:  // fld dword ptr [ebp - 0x94]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff6cu)));
L_0049ab6d:  // fadd st(0), st(0)
    ST(0) = (ST(0)) + (ST(0));
L_0049ab6f:  // fcomp dword ptr [ebp - 0x70]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xffffff90u)));
    lpop(x);
L_0049ab72:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049ab74:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0049ab77:  // jne 0x49ab7d
    if (!f.zf) goto L_0049ab7d;
L_0049ab79:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_0049ab7b:  // je 0x49ab88
    if (f.zf) goto L_0049ab88;
L_0049ab7d:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0049ab80:  // mov dword ptr [ecx + edx*4 - 4], 1
    M32((uint32_t)(ecx + edx * 4u + 0xfffffffcu)) = (uint32_t)(0x1u);
L_0049ab88:  // mov edx, dword ptr [ebp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049ab8b:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049ab8d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049ab8e:  // lea ecx, [ebp - 0x44]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffbcu));
L_0049ab91:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ab92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049ab93:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049ab95:  // call 0x499bc0
    t0 = 0x00499bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ab9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ab9a:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0049ab9c:  // mov eax, dword ptr [esi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0049ab9f:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0049aba2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049aba4:  // lea ecx, [edx + eax - 0x10]
    ecx = (uint32_t)((uint32_t)(edx + eax + 0xfffffff0u));
L_0049aba8:  // mov edx, dword ptr [edx + eax - 0x10]
    edx = (uint32_t)(M32((uint32_t)(edx + eax + 0xfffffff0u)));
L_0049abac:  // mov dword ptr [ebp - 0x90], edx
    M32((uint32_t)(ebp + 0xffffff70u)) = (uint32_t)(edx);
L_0049abb2:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0049abb5:  // mov dword ptr [ebp - 0x8c], eax
    M32((uint32_t)(ebp + 0xffffff74u)) = (uint32_t)(eax);
L_0049abbb:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0049abbe:  // mov dword ptr [ebp - 0x88], edx
    M32((uint32_t)(ebp + 0xffffff78u)) = (uint32_t)(edx);
L_0049abc4:  // mov edx, dword ptr [ebp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049abc7:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0049abca:  // mov ecx, dword ptr [ebp - 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_0049abcd:  // mov dword ptr [ebp - 0x84], eax
    M32((uint32_t)(ebp + 0xffffff7cu)) = (uint32_t)(eax);
L_0049abd3:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049abd5:  // mov dword ptr [ebp - 0x88], ecx
    M32((uint32_t)(ebp + 0xffffff78u)) = (uint32_t)(ecx);
L_0049abdb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049abdc:  // lea ecx, [ebp - 0x90]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff70u));
L_0049abe2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049abe3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049abe4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049abe6:  // call 0x499bc0
    t0 = 0x00499bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049abebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049abeb:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0049abed:  // mov eax, dword ptr [esi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0049abf0:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0049abf3:  // fstp dword ptr [edx + eax - 8]
    F32((uint32_t)(edx + eax + 0xfffffff8u)) = lf32(ST(0));
    lpop(x);
L_0049abf7:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049abf9:  // mov edx, dword ptr [esi + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0049abfc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049abfe:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049ac01:  // lea ecx, [ecx + edx - 0x10]
    ecx = (uint32_t)((uint32_t)(ecx + edx + 0xfffffff0u));
L_0049ac05:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0049ac07:  // mov dword ptr [ebp - 0x20], edx
    M32((uint32_t)(ebp + 0xffffffe0u)) = (uint32_t)(edx);
L_0049ac0a:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0049ac0d:  // mov dword ptr [ebp - 0x1c], edx
    M32((uint32_t)(ebp + 0xffffffe4u)) = (uint32_t)(edx);
L_0049ac10:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0049ac13:  // mov dword ptr [ebp - 0x18], edx
    M32((uint32_t)(ebp + 0xffffffe8u)) = (uint32_t)(edx);
L_0049ac16:  // mov edx, dword ptr [esi + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0049ac19:  // fld dword ptr [ebp - 0x18]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffe8u)));
L_0049ac1c:  // fadd dword ptr [edx + eax*4 - 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edx + eax * 4u + 0xfffffffcu)));
L_0049ac20:  // lea edx, [edx + eax*4 - 4]
    edx = (uint32_t)((uint32_t)(edx + eax * 4u + 0xfffffffcu));
L_0049ac24:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_0049ac27:  // mov dword ptr [ebp - 0x14], ecx
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(ecx);
L_0049ac2a:  // mov ecx, dword ptr [esi + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0049ac2d:  // fstp dword ptr [ebp - 0x18]
    F32((uint32_t)(ebp + 0xffffffe8u)) = lf32(ST(0));
    lpop(x);
L_0049ac30:  // fld dword ptr [ebp - 0x34]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffccu)));
L_0049ac33:  // fsub dword ptr [ebp - 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_0049ac36:  // fld dword ptr [ebp - 0x30]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd0u)));
L_0049ac39:  // fsub dword ptr [ebp - 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xffffffe4u)));
L_0049ac3c:  // fld dword ptr [ebp - 0x2c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffd4u)));
L_0049ac3f:  // fsub dword ptr [ebp - 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xffffffe8u)));
L_0049ac42:  // cmp dword ptr [ecx + eax*4 - 4], 0
    t0 = lsub<32>(M32((uint32_t)(ecx + eax * 4u + 0xfffffffcu)), 0x0u, f);
L_0049ac47:  // jne 0x49ac89
    if (!f.zf) goto L_0049ac89;
L_0049ac49:  // fld dword ptr [edx]
    lpush(x, (long double)F32((uint32_t)(edx)));
L_0049ac4b:  // fcomp dword ptr [0x5d95b4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d95b4u)));
    lpop(x);
L_0049ac51:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049ac53:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0049ac56:  // jne 0x49ac89
    if (!f.zf) goto L_0049ac89;
L_0049ac58:  // mov edx, dword ptr [ebp - 0x20]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe0u)));
L_0049ac5b:  // lea eax, [esi + 0xd4]
    eax = (uint32_t)((uint32_t)(esi + 0xd4u));
L_0049ac61:  // mov dword ptr [esi + 0xd0], 1
    M32((uint32_t)(esi + 0xd0u)) = (uint32_t)(0x1u);
L_0049ac6b:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_0049ac6d:  // mov edx, dword ptr [ebp - 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe4u)));
L_0049ac70:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0049ac73:  // mov edx, dword ptr [ebp - 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_0049ac76:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0049ac79:  // mov edx, dword ptr [ebp - 0x14]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffecu)));
L_0049ac7c:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0049ac7f:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049ac81:  // mov dword ptr [ecx + eax*4 - 4], 1
    M32((uint32_t)(ecx + eax * 4u + 0xfffffffcu)) = (uint32_t)(0x1u);
L_0049ac89:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049ac8b:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0049ac8d:  // fld st(4)
    v0 = ST(4); lpush(x, v0);
L_0049ac8f:  // fmul st(5)
    ST(0) = (ST(0)) * (ST(5));
L_0049ac91:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0049ac93:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0049ac95:  // mov edx, dword ptr [esi + 0xac]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_0049ac9b:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0049ac9d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049ac9f:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0049aca1:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0049aca3:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_0049aca5:  // mov dword ptr [ebp + 0x1c], ecx
    M32((uint32_t)(ebp + 0x1cu)) = (uint32_t)(ecx);
L_0049aca8:  // mov dword ptr [ebp + 0x20], ecx
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(ecx);
L_0049acab:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049acad:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0049acaf:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_0049acb1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049acb3:  // fstp dword ptr [ebp + 0xc]
    F32((uint32_t)(ebp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0049acb6:  // jle 0x49acfc
    if ((f.zf || f.sf != f.of)) goto L_0049acfc;
L_0049acb8:  // mov eax, dword ptr [esi + 0xe4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xe4u)));
L_0049acbe:  // mov edi, dword ptr [edi]
    edi = (uint32_t)(M32((uint32_t)(edi)));
L_0049acc0:  // shl edi, 2
    t0 = lshl<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_0049acc3:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_0049acc5:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0049acc7:  // fld dword ptr [edi + eax - 4]
    lpush(x, (long double)F32((uint32_t)(edi + eax + 0xfffffffcu)));
L_0049accb:  // fsub dword ptr [ebp + 0xc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xcu)));
L_0049acce:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_0049acd0:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_0049acd3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0049acd9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049acdb:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0049acde:  // jne 0x49acea
    if (!f.zf) goto L_0049acea;
L_0049ace0:  // fcom dword ptr [ebp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x20u)));
L_0049ace3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049ace5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0049ace8:  // je 0x49acf2
    if (f.zf) goto L_0049acf2;
L_0049acea:  // fstp dword ptr [ebp + 0x20]
    F32((uint32_t)(ebp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0049aced:  // mov dword ptr [ebp + 0x1c], ecx
    M32((uint32_t)(ebp + 0x1cu)) = (uint32_t)(ecx);
L_0049acf0:  // jmp 0x49acf4
    goto L_0049acf4;
L_0049acf2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049acf4:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0049acf5:  // add esi, 4
    t0 = ladd<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0049acf8:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_0049acfa:  // jl 0x49acc5
    if ((f.sf != f.of)) goto L_0049acc5;
L_0049acfc:  // mov eax, dword ptr [ebp - 0x68]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049acff:  // mov esi, dword ptr [ebp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_0049ad02:  // mov edx, dword ptr [ebp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_0049ad05:  // mov byte ptr [ebp - 0xd], 1
    M8((uint32_t)(ebp + 0xfffffff3u)) = (uint8_t)(0x1u);
L_0049ad09:  // mov ecx, dword ptr [eax + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xb0u)));
L_0049ad0f:  // add ecx, esi
    t0 = ladd<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0049ad11:  // lea esi, [eax + 0x58]
    esi = (uint32_t)((uint32_t)(eax + 0x58u));
L_0049ad14:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_0049ad16:  // mov ecx, dword ptr [ebp - 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd0u)));
L_0049ad19:  // fld dword ptr [esi + 4]
    lpush(x, (long double)F32((uint32_t)(esi + 0x4u)));
L_0049ad1c:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0049ad22:  // mov eax, dword ptr [ebp - 0x34]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffccu)));
L_0049ad25:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049ad26:  // mov edx, dword ptr [ebp - 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd4u)));
L_0049ad29:  // mov dword ptr [ebp - 0x108], eax
    M32((uint32_t)(ebp + 0xfffffef8u)) = (uint32_t)(eax);
L_0049ad2f:  // fstp dword ptr [ebp - 0x64]
    F32((uint32_t)(ebp + 0xffffff9cu)) = lf32(ST(0));
    lpop(x);
L_0049ad32:  // fld dword ptr [esi + 0x14]
    lpush(x, (long double)F32((uint32_t)(esi + 0x14u)));
L_0049ad35:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0049ad3b:  // mov eax, dword ptr [ebp - 0x28]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd8u)));
L_0049ad3e:  // mov dword ptr [ebp - 0x104], ecx
    M32((uint32_t)(ebp + 0xfffffefcu)) = (uint32_t)(ecx);
L_0049ad44:  // mov dword ptr [ebp - 0x100], edx
    M32((uint32_t)(ebp + 0xffffff00u)) = (uint32_t)(edx);
L_0049ad4a:  // mov dword ptr [ebp - 0xfc], eax
    M32((uint32_t)(ebp + 0xffffff04u)) = (uint32_t)(eax);
L_0049ad50:  // fstp dword ptr [ebp - 0x60]
    F32((uint32_t)(ebp + 0xffffffa0u)) = lf32(ST(0));
    lpop(x);
L_0049ad53:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_0049ad56:  // fmul dword ptr [0x5d8be0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8be0u)));
L_0049ad5c:  // fstp dword ptr [ebp - 0x5c]
    F32((uint32_t)(ebp + 0xffffffa4u)) = lf32(ST(0));
    lpop(x);
L_0049ad5f:  // fchs 
    ST(0) = -ST(0);
L_0049ad61:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049ad64:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049ad65:  // fchs 
    ST(0) = -ST(0);
L_0049ad67:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049ad6a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049ad6b:  // lea ecx, [ebp - 0x34]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffccu));
L_0049ad6e:  // fchs 
    ST(0) = -ST(0);
L_0049ad70:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049ad73:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ad78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ad78:  // mov ecx, dword ptr [ebp - 0x64]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff9cu)));
L_0049ad7b:  // mov edx, dword ptr [ebp - 0x60]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa0u)));
L_0049ad7e:  // mov eax, dword ptr [ebp - 0x5c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa4u)));
L_0049ad81:  // mov dword ptr [ebp - 0x54], ecx
    M32((uint32_t)(ebp + 0xffffffacu)) = (uint32_t)(ecx);
L_0049ad84:  // mov ecx, dword ptr [ebp - 0x58]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa8u)));
L_0049ad87:  // mov dword ptr [ebp - 0x50], edx
    M32((uint32_t)(ebp + 0xffffffb0u)) = (uint32_t)(edx);
L_0049ad8a:  // mov dword ptr [ebp - 0x4c], eax
    M32((uint32_t)(ebp + 0xffffffb4u)) = (uint32_t)(eax);
L_0049ad8d:  // lea edx, [ebp - 0x54]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049ad90:  // lea eax, [ebp - 0x20]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffffe0u));
L_0049ad93:  // mov dword ptr [ebp - 0x48], ecx
    M32((uint32_t)(ebp + 0xffffffb8u)) = (uint32_t)(ecx);
L_0049ad96:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049ad97:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ad98:  // lea ecx, [ebp - 0x34]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffccu));
L_0049ad9b:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ada0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ada0:  // lea ecx, [ebp - 0x20]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffe0u));
L_0049ada3:  // lea edx, [ebp - 0x7c]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffff84u));
L_0049ada6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049ada7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049ada8:  // lea ecx, [ebp - 0x34]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffccu));
L_0049adab:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049adb0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049adb0:  // lea ecx, [ebp - 0x20]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffe0u));
L_0049adb3:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049adb8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049adb8:  // lea ecx, [ebp - 0x7c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff84u));
L_0049adbb:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049adc0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049adc0:  // lea ecx, [ebp - 0x34]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffccu));
L_0049adc3:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049adc8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049adc8:  // mov eax, dword ptr [ebp - 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe0u)));
L_0049adcb:  // mov ecx, dword ptr [ebp - 0x7c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff84u)));
L_0049adce:  // mov edx, dword ptr [ebp - 0x34]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffccu)));
L_0049add1:  // mov dword ptr [ebp - 0xf8], eax
    M32((uint32_t)(ebp + 0xffffff08u)) = (uint32_t)(eax);
L_0049add7:  // mov eax, dword ptr [ebp - 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe4u)));
L_0049adda:  // mov dword ptr [ebp - 0xf4], ecx
    M32((uint32_t)(ebp + 0xffffff0cu)) = (uint32_t)(ecx);
L_0049ade0:  // mov ecx, dword ptr [ebp - 0x78]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff88u)));
L_0049ade3:  // mov dword ptr [ebp - 0xf0], edx
    M32((uint32_t)(ebp + 0xffffff10u)) = (uint32_t)(edx);
L_0049ade9:  // mov edx, dword ptr [ebp - 0x30]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd0u)));
L_0049adec:  // mov dword ptr [ebp - 0xe8], eax
    M32((uint32_t)(ebp + 0xffffff18u)) = (uint32_t)(eax);
L_0049adf2:  // mov eax, dword ptr [ebp - 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_0049adf5:  // mov dword ptr [ebp - 0xe4], ecx
    M32((uint32_t)(ebp + 0xffffff1cu)) = (uint32_t)(ecx);
L_0049adfb:  // mov dword ptr [ebp - 0xe0], edx
    M32((uint32_t)(ebp + 0xffffff20u)) = (uint32_t)(edx);
L_0049ae01:  // mov ecx, dword ptr [ebp - 0x74]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff8cu)));
L_0049ae04:  // mov edx, dword ptr [ebp - 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffd4u)));
L_0049ae07:  // mov dword ptr [ebp - 0xd8], eax
    M32((uint32_t)(ebp + 0xffffff28u)) = (uint32_t)(eax);
L_0049ae0d:  // lea eax, [ebp - 0xc8]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffff38u));
L_0049ae13:  // mov dword ptr [ebp - 0xd4], ecx
    M32((uint32_t)(ebp + 0xffffff2cu)) = (uint32_t)(ecx);
L_0049ae19:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ae1a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049ae1c:  // mov dword ptr [ebp - 0xd0], edx
    M32((uint32_t)(ebp + 0xffffff30u)) = (uint32_t)(edx);
L_0049ae22:  // call 0x49bc80
    t0 = 0x0049bc80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ae27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ae27:  // lea ecx, [ebp - 0xc8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff38u));
L_0049ae2d:  // call 0x49bc10
    t0 = 0x0049bc10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ae32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ae32:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049ae34:  // call 0x49bc40
    t0 = 0x0049bc40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ae39u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ae39:  // fstp dword ptr [ebp + 0x20]
    F32((uint32_t)(ebp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0049ae3c:  // mov esi, dword ptr [ebp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049ae3f:  // lea ecx, [ebp - 0xc8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff38u));
L_0049ae45:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049ae46:  // call 0x4944b0
    t0 = 0x004944b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ae4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ae4b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049ae4c:  // lea ecx, [ebp - 0xb8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff48u));
L_0049ae52:  // call 0x4944b0
    t0 = 0x004944b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ae57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ae57:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0049ae58:  // lea ecx, [ebp - 0xa8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff58u));
L_0049ae5e:  // call 0x4944b0
    t0 = 0x004944b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ae63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ae63:  // fld dword ptr [ebp - 0xa4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff5cu)));
L_0049ae69:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_0049ae6c:  // fld dword ptr [ebp - 0xa8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff58u)));
L_0049ae72:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_0049ae74:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049ae79:  // lea esi, [ebp - 0xc8]
    esi = (uint32_t)((uint32_t)(ebp + 0xffffff38u));
L_0049ae7f:  // lea edi, [ebp - 0x138]
    edi = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049ae85:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049ae87:  // fld dword ptr [ebp - 0xa0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff60u)));
L_0049ae8d:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_0049ae90:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049ae92:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049ae94:  // fstp dword ptr [ebp - 0x54]
    F32((uint32_t)(ebp + 0xffffffacu)) = lf32(ST(0));
    lpop(x);
L_0049ae97:  // fld dword ptr [ebp - 0xa0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff60u)));
L_0049ae9d:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_0049aea0:  // fld dword ptr [ebp - 0xa4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff5cu)));
L_0049aea6:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_0049aea9:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049aeac:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049aead:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049aeae:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aeb0:  // fld dword ptr [ebp - 0xa8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff58u)));
L_0049aeb6:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_0049aeb9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aebb:  // fstp dword ptr [ebp - 0x50]
    F32((uint32_t)(ebp + 0xffffffb0u)) = lf32(ST(0));
    lpop(x);
L_0049aebe:  // fld dword ptr [ebp - 0xa8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff58u)));
L_0049aec4:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_0049aec7:  // fld dword ptr [ebp - 0xa0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff60u)));
L_0049aecd:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_0049aed0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aed2:  // fld dword ptr [ebp - 0xa4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff5cu)));
L_0049aed8:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_0049aedb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aedd:  // fstp dword ptr [ebp - 0x4c]
    F32((uint32_t)(ebp + 0xffffffb4u)) = lf32(ST(0));
    lpop(x);
L_0049aee0:  // fld dword ptr [ebp - 0xb8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff48u)));
L_0049aee6:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_0049aee9:  // fld dword ptr [ebp - 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff4cu)));
L_0049aeef:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_0049aef2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aef4:  // fld dword ptr [ebp - 0xb0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff50u)));
L_0049aefa:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_0049aefd:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049aeff:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049af02:  // fld dword ptr [ebp - 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff4cu)));
L_0049af08:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_0049af0b:  // fld dword ptr [ebp - 0xb8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff48u)));
L_0049af11:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_0049af14:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049af15:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049af17:  // fld dword ptr [ebp - 0xb0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff50u)));
L_0049af1d:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_0049af20:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049af22:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049af25:  // fld dword ptr [ebp - 0xb0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff50u)));
L_0049af2b:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_0049af2e:  // fld dword ptr [ebp - 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff4cu)));
L_0049af34:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_0049af37:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049af38:  // lea ecx, [ebp - 0x1c4]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe3cu));
L_0049af3e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049af40:  // fld dword ptr [ebp - 0xb8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff48u)));
L_0049af46:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_0049af48:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049af4a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049af4d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049af52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049af52:  // fld dword ptr [ebp - 0x130]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffed0u)));
L_0049af58:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_0049af5b:  // fld dword ptr [ebp - 0x134]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeccu)));
L_0049af61:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_0049af64:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049af65:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049af66:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049af68:  // fld dword ptr [ebp - 0x138]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffec8u)));
L_0049af6e:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_0049af71:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049af73:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049af76:  // fld dword ptr [ebp - 0x130]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffed0u)));
L_0049af7c:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_0049af7f:  // fld dword ptr [ebp - 0x134]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeccu)));
L_0049af85:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_0049af88:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049af89:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049af8b:  // fld dword ptr [ebp - 0x138]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffec8u)));
L_0049af91:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_0049af94:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049af96:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049af99:  // fld dword ptr [ebp - 0x138]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffec8u)));
L_0049af9f:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_0049afa1:  // fld dword ptr [ebp - 0x134]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeccu)));
L_0049afa7:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_0049afaa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049afab:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049afae:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049afb0:  // fld dword ptr [ebp - 0x130]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffed0u)));
L_0049afb6:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_0049afb9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049afbb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049afbe:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049afc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049afc3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049afc4:  // lea ecx, [ebp - 0x1ac]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049afca:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049afcfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049afcf:  // mov edx, dword ptr [ebp - 0x68]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049afd2:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049afd7:  // lea esi, [ebp - 0x1ac]
    esi = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049afdd:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0049afdf:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049afe1:  // mov eax, dword ptr [edx + 0xe4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xe4u)));
L_0049afe7:  // mov edx, dword ptr [ebp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0049afea:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049afed:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0049afef:  // mov edx, dword ptr [ebp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_0049aff2:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0049aff5:  // mov ecx, dword ptr [ecx + edx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + edx * 4u)));
L_0049aff8:  // lea edx, [ebp - 0x138]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049affe:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049b001:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b002:  // lea esi, [ecx + eax - 0x30]
    esi = (uint32_t)((uint32_t)(ecx + eax + 0xffffffd0u));
L_0049b006:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049b008:  // call 0x49bc80
    t0 = 0x0049bc80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b00du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b00d:  // lea ecx, [ebp - 0x138]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049b013:  // call 0x49bc10
    t0 = 0x0049bc10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b018u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b018:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049b01a:  // call 0x49bc40
    t0 = 0x0049bc40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b01fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b01f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b020:  // lea ecx, [ebp - 0x138]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049b026:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b029:  // call 0x49bbb0
    t0 = 0x0049bbb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b02eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b02e:  // fld dword ptr [ebp - 0x130]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffed0u)));
L_0049b034:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_0049b037:  // fld dword ptr [ebp - 0x110]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffef0u)));
L_0049b03d:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_0049b040:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b045:  // lea esi, [ebp - 0x138]
    esi = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049b04b:  // lea edi, [ebp - 0xc8]
    edi = (uint32_t)((uint32_t)(ebp + 0xffffff38u));
L_0049b051:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049b053:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b055:  // fld dword ptr [ebp - 0x120]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffee0u)));
L_0049b05b:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_0049b05e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b05f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b061:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b064:  // fld dword ptr [ebp - 0x134]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeccu)));
L_0049b06a:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_0049b06d:  // fld dword ptr [ebp - 0x114]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeecu)));
L_0049b073:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_0049b076:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b077:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b079:  // fld dword ptr [ebp - 0x124]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffedcu)));
L_0049b07f:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_0049b082:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b084:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b087:  // fld dword ptr [ebp - 0x138]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffec8u)));
L_0049b08d:  // fmul dword ptr [ebx + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x20u)));
L_0049b090:  // fld dword ptr [ebp - 0x118]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffee8u)));
L_0049b096:  // fmul dword ptr [ebx + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x28u)));
L_0049b099:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b09a:  // lea ecx, [ebp - 0x1c4]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe3cu));
L_0049b0a0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b0a2:  // fld dword ptr [ebp - 0x128]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffed8u)));
L_0049b0a8:  // fmul dword ptr [ebx + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x24u)));
L_0049b0ab:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b0ad:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b0b0:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b0b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b0b5:  // fld dword ptr [ebp - 0xc0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff40u)));
L_0049b0bb:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_0049b0be:  // fld dword ptr [ebp - 0xb0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff50u)));
L_0049b0c4:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_0049b0c7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b0c8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b0c9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b0cb:  // fld dword ptr [ebp - 0xa0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff60u)));
L_0049b0d1:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_0049b0d4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b0d6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b0d9:  // fld dword ptr [ebp - 0xc4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff3cu)));
L_0049b0df:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_0049b0e2:  // fld dword ptr [ebp - 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff4cu)));
L_0049b0e8:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_0049b0eb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b0ec:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b0ee:  // fld dword ptr [ebp - 0xa4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff5cu)));
L_0049b0f4:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_0049b0f7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b0f9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b0fc:  // fld dword ptr [ebp - 0xb8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff48u)));
L_0049b102:  // fmul dword ptr [ebx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x14u)));
L_0049b105:  // fld dword ptr [ebp - 0xc8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff38u)));
L_0049b10b:  // fmul dword ptr [ebx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x10u)));
L_0049b10e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b10f:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049b112:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b114:  // fld dword ptr [ebp - 0xa8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff58u)));
L_0049b11a:  // fmul dword ptr [ebx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x18u)));
L_0049b11d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b11f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b122:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b127u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b127:  // fld dword ptr [ebp - 0xc0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff40u)));
L_0049b12d:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_0049b12f:  // fld dword ptr [ebp - 0xa0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff60u)));
L_0049b135:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_0049b138:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b139:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b13a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b13c:  // fld dword ptr [ebp - 0xb0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff50u)));
L_0049b142:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_0049b145:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b147:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b14a:  // fld dword ptr [ebp - 0xc4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff3cu)));
L_0049b150:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_0049b152:  // fld dword ptr [ebp - 0xa4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff5cu)));
L_0049b158:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_0049b15b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b15c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b15e:  // fld dword ptr [ebp - 0xb4]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff4cu)));
L_0049b164:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_0049b167:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b169:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b16c:  // fld dword ptr [ebp - 0xa8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff58u)));
L_0049b172:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_0049b175:  // fld dword ptr [ebp - 0xb8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff48u)));
L_0049b17b:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_0049b17e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b17f:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049b182:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b184:  // fld dword ptr [ebp - 0xc8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff38u)));
L_0049b18a:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_0049b18c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b18e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b191:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b196u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b196:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b197:  // lea ecx, [ebp - 0x1ac]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b19d:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b1a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b1a2:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b1a7:  // lea esi, [ebp - 0x1ac]
    esi = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b1ad:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0049b1af:  // jmp 0x49b5b6
    goto L_0049b5b6;
L_0049b1b4:  // cmp edx, 3
    t0 = lsub<32>(edx, 0x3u, f);
L_0049b1b7:  // jne 0x49b2cc
    if (!f.zf) goto L_0049b2cc;
L_0049b1bd:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049b1bf:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0049b1c2:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049b1c5:  // lea edx, [eax + ecx - 0x10]
    edx = (uint32_t)((uint32_t)(eax + ecx + 0xfffffff0u));
L_0049b1c9:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0049b1ce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b1cf:  // lea edx, [ebp - 0x54]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049b1d2:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b1d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b1d7:  // mov ecx, dword ptr [ebp - 0x50]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb0u)));
L_0049b1da:  // mov eax, dword ptr [ebp - 0x54]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffacu)));
L_0049b1dd:  // mov edx, dword ptr [ebp - 0x4c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb4u)));
L_0049b1e0:  // mov dword ptr [ebp - 0x30], ecx
    M32((uint32_t)(ebp + 0xffffffd0u)) = (uint32_t)(ecx);
L_0049b1e3:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049b1e6:  // mov dword ptr [ebp - 0x34], eax
    M32((uint32_t)(ebp + 0xffffffccu)) = (uint32_t)(eax);
L_0049b1e9:  // mov eax, dword ptr [ebp - 0x48]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb8u)));
L_0049b1ec:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b1ed:  // lea ecx, [ebp - 0x34]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffccu));
L_0049b1f0:  // mov dword ptr [ebp - 0x44], 0
    M32((uint32_t)(ebp + 0xffffffbcu)) = (uint32_t)(0x0u);
L_0049b1f7:  // mov dword ptr [ebp - 0x40], 0xbf800000
    M32((uint32_t)(ebp + 0xffffffc0u)) = (uint32_t)(0xbf800000u);
L_0049b1fe:  // mov dword ptr [ebp - 0x3c], 0
    M32((uint32_t)(ebp + 0xffffffc4u)) = (uint32_t)(0x0u);
L_0049b205:  // mov dword ptr [ebp - 0x2c], edx
    M32((uint32_t)(ebp + 0xffffffd4u)) = (uint32_t)(edx);
L_0049b208:  // mov dword ptr [ebp - 0x28], eax
    M32((uint32_t)(ebp + 0xffffffd8u)) = (uint32_t)(eax);
L_0049b20b:  // call 0x4404f0
    t0 = 0x004404f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b210u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b210:  // mov eax, dword ptr [ebp - 0x40]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc0u)));
L_0049b213:  // mov ecx, dword ptr [ebp - 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc4u)));
L_0049b216:  // mov edx, dword ptr [ebp - 0x44]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffbcu)));
L_0049b219:  // mov dword ptr [ebp - 0x1c], eax
    M32((uint32_t)(ebp + 0xffffffe4u)) = (uint32_t)(eax);
L_0049b21c:  // mov dword ptr [ebp - 0x18], ecx
    M32((uint32_t)(ebp + 0xffffffe8u)) = (uint32_t)(ecx);
L_0049b21f:  // lea eax, [ebp - 0x20]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffffe0u));
L_0049b222:  // lea ecx, [ebp - 0x90]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff70u));
L_0049b228:  // mov dword ptr [ebp - 0x20], edx
    M32((uint32_t)(ebp + 0xffffffe0u)) = (uint32_t)(edx);
L_0049b22b:  // mov edx, dword ptr [ebp - 0x38]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffc8u)));
L_0049b22e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b22f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b230:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049b233:  // mov dword ptr [ebp - 0x14], edx
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(edx);
L_0049b236:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b23bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b23b:  // lea edx, [ebp - 0x90]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffff70u));
L_0049b241:  // lea eax, [ebp - 0x7c]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffff84u));
L_0049b244:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b245:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b246:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049b249:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b24eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b24e:  // lea ecx, [ebp - 0x90]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff70u));
L_0049b254:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b259u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b259:  // lea ecx, [ebp - 0x7c]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff84u));
L_0049b25c:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b261u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b261:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049b264:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b269u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b269:  // mov ecx, dword ptr [ebp - 0x90]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff70u)));
L_0049b26f:  // mov edx, dword ptr [ebp - 0x7c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff84u)));
L_0049b272:  // mov eax, dword ptr [ebp - 0x64]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff9cu)));
L_0049b275:  // mov dword ptr [ebp - 0xf8], ecx
    M32((uint32_t)(ebp + 0xffffff08u)) = (uint32_t)(ecx);
L_0049b27b:  // mov ecx, dword ptr [ebp - 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff74u)));
L_0049b281:  // mov dword ptr [ebp - 0xf4], edx
    M32((uint32_t)(ebp + 0xffffff0cu)) = (uint32_t)(edx);
L_0049b287:  // mov edx, dword ptr [ebp - 0x78]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff88u)));
L_0049b28a:  // mov dword ptr [ebp - 0xf0], eax
    M32((uint32_t)(ebp + 0xffffff10u)) = (uint32_t)(eax);
L_0049b290:  // mov eax, dword ptr [ebp - 0x60]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa0u)));
L_0049b293:  // mov dword ptr [ebp - 0xe8], ecx
    M32((uint32_t)(ebp + 0xffffff18u)) = (uint32_t)(ecx);
L_0049b299:  // mov ecx, dword ptr [ebp - 0x88]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff78u)));
L_0049b29f:  // mov dword ptr [ebp - 0xe4], edx
    M32((uint32_t)(ebp + 0xffffff1cu)) = (uint32_t)(edx);
L_0049b2a5:  // mov edx, dword ptr [ebp - 0x74]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff8cu)));
L_0049b2a8:  // mov dword ptr [ebp - 0xe0], eax
    M32((uint32_t)(ebp + 0xffffff20u)) = (uint32_t)(eax);
L_0049b2ae:  // mov eax, dword ptr [ebp - 0x5c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffa4u)));
L_0049b2b1:  // mov dword ptr [ebp - 0xd8], ecx
    M32((uint32_t)(ebp + 0xffffff28u)) = (uint32_t)(ecx);
L_0049b2b7:  // mov dword ptr [ebp - 0xd4], edx
    M32((uint32_t)(ebp + 0xffffff2cu)) = (uint32_t)(edx);
L_0049b2bd:  // mov dword ptr [ebp - 0xd0], eax
    M32((uint32_t)(ebp + 0xffffff30u)) = (uint32_t)(eax);
L_0049b2c3:  // mov byte ptr [ebp - 0x21], 1
    M8((uint32_t)(ebp + 0xffffffdfu)) = (uint8_t)(0x1u);
L_0049b2c7:  // jmp 0x49b5bb
    goto L_0049b5bb;
L_0049b2cc:  // cmp edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
L_0049b2cf:  // jne 0x49b540
    if (!f.zf) goto L_0049b540;
L_0049b2d5:  // mov ecx, dword ptr [ecx + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x10u)));
L_0049b2d8:  // mov edx, dword ptr [ebp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b2db:  // mov eax, dword ptr [ecx + eax*4]
    eax = (uint32_t)(M32((uint32_t)(ecx + eax * 4u)));
L_0049b2de:  // mov ecx, dword ptr [edx + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x128u)));
L_0049b2e4:  // mov dword ptr [ebp + 0x1c], eax
    M32((uint32_t)(ebp + 0x1cu)) = (uint32_t)(eax);
L_0049b2e7:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0049b2e8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b2e9:  // push 0x62df28
    t0 = 0x62df28u; esp -= 4; M32(esp) = t0;
L_0049b2ee:  // call 0x4aa820
    t0 = 0x004aa820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b2f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b2f3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049b2f5:  // mov dword ptr [ebp - 0x14], eax
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(eax);
L_0049b2f8:  // je 0x49b5bb
    if (f.zf) goto L_0049b5bb;
L_0049b2fe:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0049b300:  // mov ecx, dword ptr [esi + 0xc0]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xc0u)));
L_0049b306:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0049b307:  // mov dword ptr [ebp + 0xc], ecx
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(ecx);
L_0049b30a:  // imul eax, ecx
    t0 = limul32(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0049b30d:  // mov dword ptr [ebp + 0x20], eax
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(eax);
L_0049b310:  // mov eax, dword ptr [ebp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_0049b313:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0049b314:  // mov ecx, 3
    ecx = (uint32_t)(0x3u);
L_0049b319:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0049b31b:  // mov eax, dword ptr [ebp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049b31e:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0049b320:  // mov edx, dword ptr [esi + 0xa8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_0049b326:  // imul edx, dword ptr [ebp + 0xc]
    t0 = limul32(edx, M32((uint32_t)(ebp + 0xcu)), f);
    edx = (uint32_t)(t0);
L_0049b32a:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0049b32c:  // mov dword ptr [ebp + 0x20], eax
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(eax);
L_0049b32f:  // jge 0x49b5bb
    if ((f.sf == f.of)) goto L_0049b5bb;
L_0049b335:  // mov eax, dword ptr [ebp - 0x14]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffecu)));
L_0049b338:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_0049b33d:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0049b33f:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0049b341:  // mov ecx, dword ptr [eax + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x98u)));
L_0049b347:  // lea eax, [ebp - 0x138]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049b34d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b34e:  // mov edx, dword ptr [ecx + 0x98]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x98u)));
L_0049b354:  // mov dword ptr [ebp + 0xc], edx
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(edx);
L_0049b357:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b35cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b35c:  // mov ecx, dword ptr [ebp - 0x68]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049b35f:  // mov eax, dword ptr [ebp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049b362:  // mov edx, dword ptr [ecx + 0xbc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xbcu)));
L_0049b368:  // mov esi, dword ptr [ecx + 0xb4]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xb4u)));
L_0049b36e:  // mov edx, dword ptr [edx + eax*4]
    edx = (uint32_t)(M32((uint32_t)(edx + eax * 4u)));
L_0049b371:  // mov eax, dword ptr [ecx + 0xe4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xe4u)));
L_0049b377:  // sub edx, esi
    t0 = lsub<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_0049b379:  // mov esi, dword ptr [ebp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_0049b37c:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049b37f:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0049b382:  // mov edi, dword ptr [eax + esi*4]
    edi = (uint32_t)(M32((uint32_t)(eax + esi * 4u)));
L_0049b385:  // mov esi, dword ptr [ecx + 0x34]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x34u)));
L_0049b388:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_0049b38a:  // mov edi, dword ptr [ecx + 0x30]
    edi = (uint32_t)(M32((uint32_t)(ecx + 0x30u)));
L_0049b38d:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b392:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0049b394:  // mov dword ptr [ebp - 0x20], eax
    M32((uint32_t)(ebp + 0xffffffe0u)) = (uint32_t)(eax);
L_0049b397:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0049b39a:  // mov dword ptr [ebp - 0x1c], eax
    M32((uint32_t)(ebp + 0xffffffe4u)) = (uint32_t)(eax);
L_0049b39d:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0049b3a0:  // mov dword ptr [ebp - 0x18], eax
    M32((uint32_t)(ebp + 0xffffffe8u)) = (uint32_t)(eax);
L_0049b3a3:  // mov eax, dword ptr [ebp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_0049b3a6:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0049b3a9:  // mov dword ptr [ebp - 0x14], edx
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(edx);
L_0049b3ac:  // mov eax, dword ptr [eax + 0x88]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0049b3b2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0049b3b4:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0049b3b7:  // add edx, esi
    t0 = ladd<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_0049b3b9:  // mov esi, dword ptr [edx]
    esi = (uint32_t)(M32((uint32_t)(edx)));
L_0049b3bb:  // mov dword ptr [ebp - 0x44], esi
    M32((uint32_t)(ebp + 0xffffffbcu)) = (uint32_t)(esi);
L_0049b3be:  // mov esi, dword ptr [edx + 4]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_0049b3c1:  // mov dword ptr [ebp - 0x40], esi
    M32((uint32_t)(ebp + 0xffffffc0u)) = (uint32_t)(esi);
L_0049b3c4:  // mov esi, dword ptr [edx + 8]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0049b3c7:  // mov dword ptr [ebp - 0x3c], esi
    M32((uint32_t)(ebp + 0xffffffc4u)) = (uint32_t)(esi);
L_0049b3ca:  // lea esi, [eax + eax*2]
    esi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0049b3cd:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0049b3d0:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0049b3d3:  // add esi, edi
    t0 = ladd<32>(esi, edi, f);
    esi = (uint32_t)(t0);
L_0049b3d5:  // lea edi, [ebp - 0x138]
    edi = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049b3db:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049b3dd:  // fld dword ptr [ebp - 0x118]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffee8u)));
L_0049b3e3:  // fmul dword ptr [ebp - 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_0049b3e6:  // fld dword ptr [ebp - 0x114]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeecu)));
L_0049b3ec:  // fmul dword ptr [ebp - 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe4u)));
L_0049b3ef:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b3f1:  // fld dword ptr [ebp - 0x110]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffef0u)));
L_0049b3f7:  // fmul dword ptr [ebp - 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe8u)));
L_0049b3fa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b3fb:  // mov dword ptr [ebp - 0x38], edx
    M32((uint32_t)(ebp + 0xffffffc8u)) = (uint32_t)(edx);
L_0049b3fe:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b400:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b403:  // fld dword ptr [ebp - 0x128]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffed8u)));
L_0049b409:  // fmul dword ptr [ebp - 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_0049b40c:  // fld dword ptr [ebp - 0x124]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffedcu)));
L_0049b412:  // fmul dword ptr [ebp - 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe4u)));
L_0049b415:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b416:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b418:  // fld dword ptr [ebp - 0x120]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffee0u)));
L_0049b41e:  // fmul dword ptr [ebp - 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe8u)));
L_0049b421:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b423:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b426:  // fld dword ptr [ebp - 0x138]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffec8u)));
L_0049b42c:  // fmul dword ptr [ebp - 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe0u)));
L_0049b42f:  // fld dword ptr [ebp - 0x134]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffeccu)));
L_0049b435:  // fmul dword ptr [ebp - 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe4u)));
L_0049b438:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b439:  // lea ecx, [ebp - 0x90]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff70u));
L_0049b43f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b441:  // fld dword ptr [ebp - 0x130]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xfffffed0u)));
L_0049b447:  // fmul dword ptr [ebp - 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0xffffffe8u)));
L_0049b44a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b44c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b44f:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b454u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b454:  // fld dword ptr [ebp - 0x90]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff70u)));
L_0049b45a:  // fadd dword ptr [ebp - 0x44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffbcu)));
L_0049b45d:  // mov eax, dword ptr [ebp - 0x90]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff70u)));
L_0049b463:  // mov ecx, dword ptr [ebp - 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff74u)));
L_0049b469:  // mov dword ptr [ebp - 0x20], eax
    M32((uint32_t)(ebp + 0xffffffe0u)) = (uint32_t)(eax);
L_0049b46c:  // mov edx, dword ptr [ebp - 0x88]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff78u)));
L_0049b472:  // mov dword ptr [ebp - 0x1c], ecx
    M32((uint32_t)(ebp + 0xffffffe4u)) = (uint32_t)(ecx);
L_0049b475:  // mov eax, dword ptr [ebp - 0x84]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff7cu)));
L_0049b47b:  // fstp dword ptr [ebp - 0x20]
    F32((uint32_t)(ebp + 0xffffffe0u)) = lf32(ST(0));
    lpop(x);
L_0049b47e:  // fld dword ptr [ebp - 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffc0u)));
L_0049b481:  // fadd dword ptr [ebp - 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffe4u)));
L_0049b484:  // mov dword ptr [ebp - 0x18], edx
    M32((uint32_t)(ebp + 0xffffffe8u)) = (uint32_t)(edx);
L_0049b487:  // lea edx, [ebp - 0x20]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffffe0u));
L_0049b48a:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0049b48f:  // mov dword ptr [ebp - 0x14], eax
    M32((uint32_t)(ebp + 0xffffffecu)) = (uint32_t)(eax);
L_0049b492:  // fstp dword ptr [ebp - 0x1c]
    F32((uint32_t)(ebp + 0xffffffe4u)) = lf32(ST(0));
    lpop(x);
L_0049b495:  // fld dword ptr [ebp - 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffc4u)));
L_0049b498:  // fadd dword ptr [ebp - 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffe8u)));
L_0049b49b:  // fstp dword ptr [ebp - 0x18]
    F32((uint32_t)(ebp + 0xffffffe8u)) = lf32(ST(0));
    lpop(x);
L_0049b49e:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b4a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b4a3:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049b4a5:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_0049b4ab:  // fcomp dword ptr [ebp - 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xffffffe8u)));
    lpop(x);
L_0049b4ae:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049b4b0:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0049b4b3:  // je 0x49b4f0
    if (f.zf) goto L_0049b4f0;
L_0049b4b5:  // mov eax, dword ptr [ebp - 0x68]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049b4b8:  // mov edx, dword ptr [ebp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049b4bb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049b4bd:  // mov ecx, dword ptr [eax + 0xbc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xbcu)));
L_0049b4c3:  // mov edi, dword ptr [ecx + edx*4]
    edi = (uint32_t)(M32((uint32_t)(ecx + edx * 4u)));
L_0049b4c6:  // lea ecx, [ecx + edx*4]
    ecx = (uint32_t)((uint32_t)(ecx + edx * 4u));
L_0049b4c9:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0049b4ca:  // mov dword ptr [ecx], edi
    M32((uint32_t)(ecx)) = (uint32_t)(edi);
L_0049b4cc:  // mov ecx, dword ptr [eax + 0xbc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xbcu)));
L_0049b4d2:  // mov esi, dword ptr [eax + 0xb4]
    esi = (uint32_t)(M32((uint32_t)(eax + 0xb4u)));
L_0049b4d8:  // mov ecx, dword ptr [ecx + edx*4]
    ecx = (uint32_t)(M32((uint32_t)(ecx + edx * 4u)));
L_0049b4db:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_0049b4dd:  // jge 0x49b35c
    if ((f.sf == f.of)) goto L_0049b35c;
L_0049b4e3:  // mov ecx, dword ptr [eax + 0xbc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xbcu)));
L_0049b4e9:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0049b4eb:  // mov dword ptr [ecx + edx*4], eax
    M32((uint32_t)(ecx + edx * 4u)) = (uint32_t)(eax);
L_0049b4ee:  // jmp 0x49b52a
    goto L_0049b52a;
L_0049b4f0:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_0049b4f6:  // fcomp dword ptr [ebp - 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xffffffe8u)));
    lpop(x);
L_0049b4f9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049b4fb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0049b4fe:  // jne 0x49b52a
    if (!f.zf) goto L_0049b52a;
L_0049b500:  // mov ecx, dword ptr [ebp - 0x68]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049b503:  // mov edx, dword ptr [ebp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049b506:  // mov eax, dword ptr [ecx + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xbcu)));
L_0049b50c:  // mov esi, dword ptr [eax + edx*4]
    esi = (uint32_t)(M32((uint32_t)(eax + edx * 4u)));
L_0049b50f:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0049b512:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0049b513:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_0049b515:  // mov eax, dword ptr [ecx + 0xbc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xbcu)));
L_0049b51b:  // mov ecx, dword ptr [ecx + 0xb8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xb8u)));
L_0049b521:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0049b524:  // cmp dword ptr [eax], ecx
    t0 = lsub<32>(M32((uint32_t)(eax)), ecx, f);
L_0049b526:  // jle 0x49b52a
    if ((f.zf || f.sf != f.of)) goto L_0049b52a;
L_0049b528:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0049b52a:  // mov ecx, dword ptr [ebp - 0x68]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049b52d:  // mov eax, dword ptr [ebp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049b530:  // mov edx, dword ptr [ecx + 0xbc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xbcu)));
L_0049b536:  // mov ecx, dword ptr [edx + eax*4]
    ecx = (uint32_t)(M32((uint32_t)(edx + eax * 4u)));
L_0049b539:  // mov edx, dword ptr [ebp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_0049b53c:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_0049b53e:  // jmp 0x49b5b8
    goto L_0049b5b8;
L_0049b540:  // cmp edx, 5
    t0 = lsub<32>(edx, 0x5u, f);
L_0049b543:  // jne 0x49b5bb
    if (!f.zf) goto L_0049b5bb;
L_0049b545:  // mov ecx, dword ptr [ebp - 0x80]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff80u)));
L_0049b548:  // mov byte ptr [ebp - 0x21], 1
    M8((uint32_t)(ebp + 0xffffffdfu)) = (uint8_t)(0x1u);
L_0049b54c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0049b54e:  // je 0x49b555
    if (f.zf) goto L_0049b555;
L_0049b550:  // lea eax, [ecx - 8]
    eax = (uint32_t)((uint32_t)(ecx + 0xfffffff8u));
L_0049b553:  // jmp 0x49b557
    goto L_0049b557;
L_0049b555:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0049b557:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0049b559:  // je 0x49b560
    if (f.zf) goto L_0049b560;
L_0049b55b:  // lea esi, [ecx - 8]
    esi = (uint32_t)((uint32_t)(ecx + 0xfffffff8u));
L_0049b55e:  // jmp 0x49b562
    goto L_0049b562;
L_0049b560:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0049b562:  // mov eax, dword ptr [eax + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xe0u)));
L_0049b568:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_0049b56d:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0049b56f:  // lea ecx, [ebp - 0x1ac]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b575:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0049b577:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b578:  // mov dword ptr [ebp + 0x20], eax
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(eax);
L_0049b57b:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b580u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b580:  // mov edx, dword ptr [ebp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049b583:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b585:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b587:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b588:  // lea ecx, [ebp - 0x1ac]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b58e:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b593u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b593:  // lea eax, [ebp - 0x1ac]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b599:  // lea ecx, [ebp - 0x138]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049b59f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b5a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b5a1:  // lea ecx, [esi + 0x3c]
    ecx = (uint32_t)((uint32_t)(esi + 0x3cu));
L_0049b5a4:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b5a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b5a9:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b5ae:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049b5b0:  // lea edi, [ebp - 0xf8]
    edi = (uint32_t)((uint32_t)(ebp + 0xffffff08u));
L_0049b5b6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049b5b8:  // mov edi, dword ptr [ebp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0049b5bb:  // cmp dword ptr [edi], -1
    t0 = lsub<32>(M32((uint32_t)(edi)), 0xffffffffu, f);
L_0049b5be:  // je 0x49b5da
    if (f.zf) goto L_0049b5da;
L_0049b5c0:  // mov edx, dword ptr [ebp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_0049b5c3:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b5c6:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0049b5c8:  // mov edx, dword ptr [ecx + 0xc4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xc4u)));
L_0049b5ce:  // mov dword ptr [ebp - 0x13c], eax
    M32((uint32_t)(ebp + 0xfffffec4u)) = (uint32_t)(eax);
L_0049b5d4:  // mov al, byte ptr [edx + eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + eax))) & 0xffu);
L_0049b5d7:  // mov byte ptr [ebp - 0x6c], al
    M8((uint32_t)(ebp + 0xffffff94u)) = (uint8_t)((eax & 0xffu));
L_0049b5da:  // mov eax, dword ptr [ebp - 0x80]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff80u)));
L_0049b5dd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049b5df:  // je 0x49b708
    if (f.zf) goto L_0049b708;
L_0049b5e5:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b5e8:  // mov eax, dword ptr [ecx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x88u)));
L_0049b5ee:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049b5f0:  // jne 0x49b645
    if (!f.zf) goto L_0049b645;
L_0049b5f2:  // mov esi, dword ptr [ebp - 0x80]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffff80u)));
L_0049b5f5:  // lea eax, [ebp - 0x1c4]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffe3cu));
L_0049b5fb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b5fc:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049b5fe:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0049b600:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b602u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b602:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049b605:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0049b607:  // fadd dword ptr [ecx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx)));
L_0049b609:  // fstp dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
    lpop(x);
L_0049b60b:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0049b60e:  // fadd dword ptr [ecx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x4u)));
L_0049b611:  // fstp dword ptr [ecx + 4]
    F32((uint32_t)(ecx + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0049b614:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0049b617:  // fadd dword ptr [ecx + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x8u)));
L_0049b61a:  // lea eax, [ebp - 0x1ac]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b620:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b621:  // fstp dword ptr [ecx + 8]
    F32((uint32_t)(ecx + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0049b624:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0049b626:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0049b628:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b62bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b62b:  // lea ecx, [ebp - 0x138]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049b631:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b632:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b633:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0049b635:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b63au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b63a:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b63f:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049b641:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0049b643:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049b645:  // mov esi, dword ptr [ebp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b648:  // mov ecx, dword ptr [ebp - 0x80]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff80u)));
L_0049b64b:  // mov eax, dword ptr [esi + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x88u)));
L_0049b651:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0049b653:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b654:  // call dword ptr [edx + 0x38]
    t0 = M32((uint32_t)(edx + 0x38u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b657u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b657:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049b659:  // jne 0x49b708
    if (!f.zf) goto L_0049b708;
L_0049b65f:  // mov al, byte ptr [ebp - 0xd]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xfffffff3u))) & 0xffu);
L_0049b662:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049b664:  // jne 0x49b696
    if (!f.zf) goto L_0049b696;
L_0049b666:  // mov eax, dword ptr [ebp - 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff94u)));
L_0049b669:  // mov ecx, dword ptr [esi + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xc8u)));
L_0049b66f:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_0049b674:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049b677:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0049b679:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049b67c:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_0049b67e:  // fadd dword ptr [ecx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx)));
L_0049b680:  // fstp dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
    lpop(x);
L_0049b682:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_0049b685:  // fadd dword ptr [ecx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x4u)));
L_0049b688:  // fstp dword ptr [ecx + 4]
    F32((uint32_t)(ecx + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0049b68b:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_0049b68e:  // fadd dword ptr [ecx + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x8u)));
L_0049b691:  // fstp dword ptr [ecx + 8]
    F32((uint32_t)(ecx + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0049b694:  // jmp 0x49b6bc
    goto L_0049b6bc;
L_0049b696:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049b699:  // mov edx, dword ptr [ebp - 0x108]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xfffffef8u)));
L_0049b69f:  // mov eax, dword ptr [ebp - 0x104]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xfffffefcu)));
L_0049b6a5:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0049b6a7:  // mov edx, dword ptr [ebp - 0x100]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff00u)));
L_0049b6ad:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_0049b6b0:  // mov eax, dword ptr [ebp - 0xfc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff04u)));
L_0049b6b6:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0049b6b9:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0049b6bc:  // mov al, byte ptr [ebp - 0x21]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xffffffdfu))) & 0xffu);
L_0049b6bf:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049b6c1:  // jne 0x49b813
    if (!f.zf) goto L_0049b813;
L_0049b6c7:  // mov eax, dword ptr [ebp - 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff94u)));
L_0049b6ca:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b6cd:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_0049b6d2:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0049b6d4:  // mov edx, dword ptr [ecx + 0x10c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x10cu)));
L_0049b6da:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b6df:  // lea esi, [eax + eax*2]
    esi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0049b6e2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049b6e3:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_0049b6e6:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0049b6e8:  // lea edx, [ebp - 0x1ac]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b6ee:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049b6f0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b6f1:  // lea ecx, [ebp - 0xf8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff08u));
L_0049b6f7:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b6fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b6fc:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b701:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049b703:  // jmp 0x49b81e
    goto L_0049b81e;
L_0049b708:  // mov al, byte ptr [ebp - 0xd]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xfffffff3u))) & 0xffu);
L_0049b70b:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049b70d:  // jne 0x49b799
    if (!f.zf) goto L_0049b799;
L_0049b713:  // mov eax, dword ptr [ebp - 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff94u)));
L_0049b716:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b719:  // fld dword ptr [ebx + 0x28]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x28u)));
L_0049b71c:  // mov esi, dword ptr [ecx + 0xc8]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0xc8u)));
L_0049b722:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_0049b727:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049b72a:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_0049b72c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b72d:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049b730:  // fld dword ptr [ebx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x20u)));
L_0049b733:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0049b735:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b737:  // fld dword ptr [ebx + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x24u)));
L_0049b73a:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049b73d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b73f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b742:  // fld dword ptr [ebx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x18u)));
L_0049b745:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049b748:  // fld dword ptr [ebx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x10u)));
L_0049b74b:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0049b74d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b74e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b750:  // fld dword ptr [ebx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x14u)));
L_0049b753:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049b756:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b758:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b75b:  // fld dword ptr [ebx + 8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x8u)));
L_0049b75e:  // fmul dword ptr [eax + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049b761:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_0049b764:  // fmul dword ptr [eax + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049b767:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b768:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049b76b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b76d:  // fld dword ptr [ebx]
    lpush(x, (long double)F32((uint32_t)(ebx)));
L_0049b76f:  // fmul dword ptr [eax]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(eax)));
L_0049b771:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0049b773:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b776:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b77bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b77b:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049b77e:  // fld dword ptr [ebp - 0x54]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffacu)));
L_0049b781:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_0049b783:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_0049b785:  // fld dword ptr [ebp - 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb0u)));
L_0049b788:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_0049b78b:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_0049b78e:  // fld dword ptr [ebp - 0x4c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffb4u)));
L_0049b791:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_0049b794:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0049b797:  // jmp 0x49b7bf
    goto L_0049b7bf;
L_0049b799:  // mov edx, dword ptr [ebp + 8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049b79c:  // mov eax, dword ptr [ebp - 0x108]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xfffffef8u)));
L_0049b7a2:  // mov ecx, dword ptr [ebp - 0x104]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xfffffefcu)));
L_0049b7a8:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0049b7aa:  // mov eax, dword ptr [ebp - 0x100]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff00u)));
L_0049b7b0:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0049b7b3:  // mov ecx, dword ptr [ebp - 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff04u)));
L_0049b7b9:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_0049b7bc:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0049b7bf:  // mov al, byte ptr [ebp - 0x21]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0xffffffdfu))) & 0xffu);
L_0049b7c2:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0049b7c4:  // jne 0x49b813
    if (!f.zf) goto L_0049b813;
L_0049b7c6:  // mov eax, dword ptr [ebp - 0x6c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff94u)));
L_0049b7c9:  // lea ecx, [ebp - 0x1ac]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b7cf:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_0049b7d4:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0049b7d7:  // mov eax, dword ptr [ebp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b7da:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0049b7dd:  // add edx, dword ptr [eax + 0x10c]
    t0 = ladd<32>(edx, M32((uint32_t)(eax + 0x10cu)), f);
    edx = (uint32_t)(t0);
L_0049b7e3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b7e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b7e5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0049b7e7:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b7ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b7ec:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b7f1:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049b7f3:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0049b7f5:  // lea edx, [ebp - 0x1ac]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b7fb:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049b7fd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0049b7fe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b7ff:  // lea ecx, [ebp - 0xf8]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff08u));
L_0049b805:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b80au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b80a:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b80f:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049b811:  // jmp 0x49b81e
    goto L_0049b81e;
L_0049b813:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049b818:  // lea esi, [ebp - 0xf8]
    esi = (uint32_t)((uint32_t)(ebp + 0xffffff08u));
L_0049b81e:  // mov edx, dword ptr [ebp - 0x68]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049b821:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0049b823:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049b825:  // fld dword ptr [edx + 0x2c]
    lpush(x, (long double)F32((uint32_t)(edx + 0x2cu)));
L_0049b828:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0049b82e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0049b830:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0049b833:  // jne 0x49ba52
    if (!f.zf) goto L_0049ba52;
L_0049b839:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0049b83c:  // or esi, 0xffffffff
    t0 = llog<32>(esi | 0xffffffffu, f);
    esi = (uint32_t)(t0);
L_0049b83f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0049b841:  // mov dword ptr [ebp + 0x14], 0
    M32((uint32_t)(ebp + 0x14u)) = (uint32_t)(0x0u);
L_0049b848:  // je 0x49b854
    if (f.zf) goto L_0049b854;
L_0049b84a:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0049b84c:  // call dword ptr [eax + 0x1c]
    t0 = M32((uint32_t)(eax + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b84fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b84f:  // mov edx, dword ptr [ebp - 0x68]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049b852:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049b854:  // mov eax, dword ptr [ebp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b857:  // cmp dword ptr [eax + 0xb8], 1
    t0 = lsub<32>(M32((uint32_t)(eax + 0xb8u)), 0x1u, f);
L_0049b85e:  // jle 0x49b918
    if ((f.zf || f.sf != f.of)) goto L_0049b918;
L_0049b864:  // mov ecx, dword ptr [eax + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x128u)));
L_0049b86a:  // mov eax, dword ptr [ecx + 0x14]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x14u)));
L_0049b86d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0049b86f:  // je 0x49b918
    if (f.zf) goto L_0049b918;
L_0049b875:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0049b877:  // jl 0x49b918
    if ((f.sf != f.of)) goto L_0049b918;
L_0049b87d:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0049b880:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0049b882:  // je 0x49b88c
    if (f.zf) goto L_0049b88c;
L_0049b884:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0049b886:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b889u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b889:  // fstp dword ptr [ebp + 0x14]
    F32((uint32_t)(ebp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0049b88c:  // mov edi, dword ptr [ebp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b88f:  // lea eax, [esi + esi*8]
    eax = (uint32_t)((uint32_t)(esi + esi * 8u));
L_0049b892:  // mov ecx, dword ptr [edi + 0x128]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x128u)));
L_0049b898:  // mov edx, dword ptr [ecx + 0x18]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x18u)));
L_0049b89b:  // fild dword ptr [edx + eax*4 + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(edx + eax * 4u + 0x1cu)));
L_0049b89f:  // lea esi, [edx + eax*4]
    esi = (uint32_t)((uint32_t)(edx + eax * 4u));
L_0049b8a2:  // fmul dword ptr [ebp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x14u)));
L_0049b8a5:  // fiadd dword ptr [esi + 0x14]
    ST(0) = (ST(0)) + ((long double)(int32_t)M32((uint32_t)(esi + 0x14u)));
L_0049b8a8:  // fst dword ptr [ebp + 0x14]
    F32((uint32_t)(ebp + 0x14u)) = lf32(ST(0));
L_0049b8ab:  // fstp qword ptr [ebp - 0x18]
    F64((uint32_t)(ebp + 0xffffffe8u)) = lf64(ST(0));
    lpop(x);
L_0049b8ae:  // mov eax, dword ptr [ebp - 0x14]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffecu)));
L_0049b8b1:  // mov ecx, dword ptr [ebp - 0x18]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_0049b8b4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b8b5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b8b6:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b8bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b8bb:  // fistp qword ptr [ebp - 0x74]
    M64((uint32_t)(ebp + 0xffffff8cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0049b8be:  // mov eax, dword ptr [ebp - 0x74]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffff8cu)));
L_0049b8c1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049b8c4:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0049b8c5:  // idiv dword ptr [edi + 0xb8]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(edi + 0xb8u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0049b8cb:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0049b8ce:  // mov dword ptr [ebp + 0x20], edx
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(edx);
L_0049b8d1:  // lea edi, [edx + 1]
    edi = (uint32_t)((uint32_t)(edx + 0x1u));
L_0049b8d4:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0049b8d6:  // jle 0x49b8db
    if ((f.zf || f.sf != f.of)) goto L_0049b8db;
L_0049b8d8:  // mov edi, dword ptr [esi + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0049b8db:  // mov edx, dword ptr [ebp - 0x14]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffecu)));
L_0049b8de:  // mov eax, dword ptr [ebp - 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_0049b8e1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b8e2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b8e3:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b8e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b8e8:  // fsubr dword ptr [ebp + 0x14]
    ST(0) = ((long double)F32((uint32_t)(ebp + 0x14u))) - (ST(0));
L_0049b8eb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b8ed:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b8ef:  // fstp dword ptr [ebp + 0x14]
    F32((uint32_t)(ebp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0049b8f2:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b8f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b8f7:  // fistp qword ptr [ebp - 0x18]
    M64((uint32_t)(ebp + 0xffffffe8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0049b8fa:  // mov esi, dword ptr [ebp - 0x18]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffffe8u)));
L_0049b8fd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b8ff:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b901:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0049b902:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b907u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b907:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_0049b90a:  // fistp qword ptr [ebp - 0x18]
    M64((uint32_t)(ebp + 0xffffffe8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0049b90d:  // cmp esi, dword ptr [ebp - 0x18]
    t0 = lsub<32>(esi, M32((uint32_t)(ebp + 0xffffffe8u)), f);
L_0049b910:  // jle 0x49b929
    if ((f.zf || f.sf != f.of)) goto L_0049b929;
L_0049b912:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b914:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b916:  // jmp 0x49b91f
    goto L_0049b91f;
L_0049b918:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0049b91a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049b91b:  // mov dword ptr [ebp + 0x20], edi
    M32((uint32_t)(ebp + 0x20u)) = (uint32_t)(edi);
L_0049b91e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049b91f:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b924u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b924:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049b926:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0049b929:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_0049b92e:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0049b930:  // lea ecx, [ebp - 0x1ac]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b936:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0049b938:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b939:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b93eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b93e:  // mov esi, dword ptr [ebp - 0x68]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049b941:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b943:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b945:  // lea edx, [ebp - 0x90]
    edx = (uint32_t)((uint32_t)(ebp + 0xffffff70u));
L_0049b94b:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0049b94e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0049b950:  // lea eax, [ebp - 0x1ac]
    eax = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049b956:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b957:  // mov edx, dword ptr [ebp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x14u)));
L_0049b95a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b95b:  // mov eax, dword ptr [ebp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0049b95e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b95f:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049b962:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049b963:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0049b964:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049b965:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b96au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b96a:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0049b970:  // fsub dword ptr [esi + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x2cu)));
L_0049b973:  // mov edi, dword ptr [ebp + 8]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049b976:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b977:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049b979:  // fmul dword ptr [edi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x8u)));
L_0049b97c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b97f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b980:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0049b982:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_0049b985:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b988:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b989:  // lea ecx, [ebp - 0x44]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffbcu));
L_0049b98c:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_0049b98e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b991:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b996u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b996:  // fld dword ptr [esi + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x2cu)));
L_0049b999:  // fld dword ptr [ebp - 0x88]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff78u)));
L_0049b99f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0049b9a1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b9a2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b9a5:  // fld dword ptr [ebp - 0x8c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff74u)));
L_0049b9ab:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0049b9ad:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b9ae:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b9b1:  // fld dword ptr [ebp - 0x90]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffff70u)));
L_0049b9b7:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0049b9b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b9ba:  // lea ecx, [ebp - 0x64]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffff9cu));
L_0049b9bd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b9c0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0049b9c2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b9c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b9c7:  // fld dword ptr [ebp - 0x3c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffc4u)));
L_0049b9ca:  // fadd dword ptr [ebp - 0x5c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffa4u)));
L_0049b9cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b9ce:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b9d1:  // fld dword ptr [ebp - 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffc0u)));
L_0049b9d4:  // fadd dword ptr [ebp - 0x60]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffffa0u)));
L_0049b9d7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b9d8:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b9db:  // fld dword ptr [ebp - 0x44]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xffffffbcu)));
L_0049b9de:  // fadd dword ptr [ebp - 0x64]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xffffff9cu)));
L_0049b9e1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049b9e2:  // lea ecx, [ebp - 0x54]
    ecx = (uint32_t)((uint32_t)(ebp + 0xffffffacu));
L_0049b9e5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049b9e8:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049b9edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049b9ed:  // mov ecx, dword ptr [ebp - 0x54]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffacu)));
L_0049b9f0:  // mov edx, dword ptr [ebp - 0x50]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb0u)));
L_0049b9f3:  // mov eax, dword ptr [ebp - 0x4c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb4u)));
L_0049b9f6:  // mov dword ptr [edi], ecx
    M32((uint32_t)(edi)) = (uint32_t)(ecx);
L_0049b9f8:  // mov ecx, dword ptr [ebp - 0x48]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xffffffb8u)));
L_0049b9fb:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_0049ba01:  // mov dword ptr [edi + 4], edx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(edx);
L_0049ba04:  // mov dword ptr [edi + 8], eax
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(eax);
L_0049ba07:  // mov dword ptr [edi + 0xc], ecx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(ecx);
L_0049ba0a:  // fsub dword ptr [esi + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esi + 0x2cu)));
L_0049ba0d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049ba0e:  // lea edx, [ebp - 0x138]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffec8u));
L_0049ba14:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0049ba16:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0049ba19:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049ba1a:  // call 0x495ed0
    t0 = 0x00495ed0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ba1fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ba1f:  // mov ecx, dword ptr [esi + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_0049ba22:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ba23:  // lea eax, [ebp - 0xc8]
    eax = (uint32_t)((uint32_t)(ebp + 0xffffff38u));
L_0049ba29:  // lea edx, [ebp - 0x174]
    edx = (uint32_t)((uint32_t)(ebp + 0xfffffe8cu));
L_0049ba2f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0049ba30:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0049ba31:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0049ba32:  // lea ecx, [ebp - 0x1ac]
    ecx = (uint32_t)((uint32_t)(ebp + 0xfffffe54u));
L_0049ba38:  // call 0x495ed0
    t0 = 0x00495ed0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ba3du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ba3d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0049ba3f:  // call 0x4956a0
    t0 = 0x004956a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0049ba44u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0049ba44:  // mov edx, dword ptr [ebp - 0x68]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049ba47:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049ba4c:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0049ba4e:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0049ba50:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049ba52:  // mov eax, dword ptr [edx + 0xcc]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xccu)));
L_0049ba58:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0049ba5b:  // mov eax, dword ptr [ebp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049ba5e:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0049ba64:  // jge 0x49bab5
    if ((f.sf == f.of)) goto L_0049bab5;
L_0049ba66:  // mov edi, dword ptr [edx + 0x40]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x40u)));
L_0049ba69:  // mov esi, dword ptr [ebp + 8]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049ba6c:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049ba6f:  // add ecx, edi
    t0 = ladd<32>(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_0049ba71:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_0049ba73:  // fild dword ptr [ebp - 0x13c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebp + 0xfffffec4u)));
L_0049ba79:  // mov dword ptr [ecx], edi
    M32((uint32_t)(ecx)) = (uint32_t)(edi);
L_0049ba7b:  // mov edi, dword ptr [esi + 4]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0049ba7e:  // mov dword ptr [ecx + 4], edi
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edi);
L_0049ba81:  // mov edi, dword ptr [esi + 8]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0049ba84:  // mov dword ptr [ecx + 8], edi
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edi);
L_0049ba87:  // mov esi, dword ptr [esi + 0xc]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0049ba8a:  // mov dword ptr [ecx + 0xc], esi
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(esi);
L_0049ba8d:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0049ba93:  // mov esi, ebx
    esi = (uint32_t)(ebx);
L_0049ba95:  // lea edi, [ecx + ecx*2]
    edi = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0049ba98:  // mov ecx, dword ptr [edx + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x3cu)));
L_0049ba9b:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0049ba9e:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0049baa0:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049baa5:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049baa7:  // mov eax, dword ptr [eax + 0x88]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0049baad:  // mov ecx, dword ptr [edx + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x44u)));
L_0049bab0:  // fstp dword ptr [ecx + eax*4]
    F32((uint32_t)(ecx + eax * 4u)) = lf32(ST(0));
    lpop(x);
L_0049bab3:  // jmp 0x49bb0a
    goto L_0049bb0a;
L_0049bab5:  // mov esi, dword ptr [edx + 0x34]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x34u)));
L_0049bab8:  // mov edi, dword ptr [edx + 0x40]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x40u)));
L_0049babb:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049babe:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_0049bac0:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0049bac2:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0049bac4:  // mov dword ptr [edi], ecx
    M32((uint32_t)(edi)) = (uint32_t)(ecx);
L_0049bac6:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0049bac9:  // mov dword ptr [edi + 4], ecx
    M32((uint32_t)(edi + 0x4u)) = (uint32_t)(ecx);
L_0049bacc:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0049bacf:  // mov dword ptr [edi + 8], ecx
    M32((uint32_t)(edi + 0x8u)) = (uint32_t)(ecx);
L_0049bad2:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0049bad5:  // mov dword ptr [edi + 0xc], ecx
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(ecx);
L_0049bad8:  // mov ecx, dword ptr [eax + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0049bade:  // mov esi, dword ptr [edx + 0x30]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x30u)));
L_0049bae1:  // mov edi, dword ptr [edx + 0x3c]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x3cu)));
L_0049bae4:  // lea ecx, [ecx + ecx*2]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0049bae7:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0049baea:  // add esi, ecx
    t0 = ladd<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_0049baec:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0049baee:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049baf3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049baf5:  // mov eax, dword ptr [eax + 0x88]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x88u)));
L_0049bafb:  // mov ecx, dword ptr [edx + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x38u)));
L_0049bafe:  // mov edx, dword ptr [edx + 0x44]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x44u)));
L_0049bb01:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0049bb04:  // mov ecx, dword ptr [ecx + eax]
    ecx = (uint32_t)(M32((uint32_t)(ecx + eax)));
L_0049bb07:  // mov dword ptr [edx + eax], ecx
    M32((uint32_t)(edx + eax)) = (uint32_t)(ecx);
L_0049bb0a:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049bb0d:  // mov edx, dword ptr [ebp - 0x68]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xffffff98u)));
L_0049bb10:  // fild dword ptr [ebp - 0x13c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebp + 0xfffffec4u)));
L_0049bb16:  // mov eax, dword ptr [ecx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x88u)));
L_0049bb1c:  // mov esi, dword ptr [edx + 0x34]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x34u)));
L_0049bb1f:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0049bb22:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0049bb24:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_0049bb27:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_0049bb29:  // mov dword ptr [esi], edi
    M32((uint32_t)(esi)) = (uint32_t)(edi);
L_0049bb2b:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0049bb2e:  // mov dword ptr [esi + 4], edi
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edi);
L_0049bb31:  // mov edi, dword ptr [eax + 8]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0049bb34:  // mov dword ptr [esi + 8], edi
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edi);
L_0049bb37:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0049bb3a:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_0049bb3d:  // mov eax, dword ptr [ecx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x88u)));
L_0049bb43:  // mov esi, dword ptr [edx + 0x30]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x30u)));
L_0049bb46:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0049bb4b:  // lea edi, [eax + eax*2]
    edi = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0049bb4e:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0049bb51:  // add edi, esi
    t0 = ladd<32>(edi, esi, f);
    edi = (uint32_t)(t0);
L_0049bb53:  // mov esi, ebx
    esi = (uint32_t)(ebx);
L_0049bb55:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0049bb57:  // mov ecx, dword ptr [ebp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x10u)));
L_0049bb5a:  // mov eax, dword ptr [ecx + 0x88]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x88u)));
L_0049bb60:  // mov ecx, dword ptr [edx + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x38u)));
L_0049bb63:  // fstp dword ptr [ecx + eax*4]
    F32((uint32_t)(ecx + eax * 4u)) = lf32(ST(0));
    lpop(x);
L_0049bb66:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0049bb68:  // rdtsc 
    __asm__ volatile("rdtsc" : "=a"(eax), "=d"(edx));
L_0049bb6a:  // mov ecx, dword ptr [0x835764]
    ecx = (uint32_t)(M32((uint32_t)(0x835764u)));
L_0049bb70:  // mov dword ptr [ebp - 0x1b0], edx
    M32((uint32_t)(ebp + 0xfffffe50u)) = (uint32_t)(edx);
L_0049bb76:  // mov edx, dword ptr [ebp - 0x17c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xfffffe84u)));
L_0049bb7c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0049bb7d:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0049bb7f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0049bb80:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0049bb82:  // mov eax, dword ptr [0x835934]
    eax = (uint32_t)(M32((uint32_t)(0x835934u)));
L_0049bb87:  // mov dword ptr [0x835764], ecx
    M32((uint32_t)(0x835764u)) = (uint32_t)(ecx);
L_0049bb8d:  // mov ecx, dword ptr [ebp - 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xfffffff4u)));
L_0049bb90:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0049bb91:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0049bb92:  // mov dword ptr [0x835934], eax
    M32((uint32_t)(0x835934u)) = (uint32_t)(eax);
L_0049bb97:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0049bb9e:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_0049bba0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0049bba1:  // ret 0x1c
    c->target = M32(esp); esp += 32u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00499e30, 00499e30)
