// lifted from 004e9f00 (vslot52, 1092 bytes, 308 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e9f00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e9f00;
L_004e9f00:  // sub esp, 0x84
    t0 = lsub<32>(esp, 0x84u, f);
    esp = (uint32_t)(t0);
L_004e9f06:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e9f07:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e9f08:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e9f09:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e9f0a:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004e9f0c:  // call 0x4e66e0
    t0 = 0x004e66e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9f11u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9f11:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004e9f14:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004e9f17:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004e9f19:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004e9f1b:  // mov edi, dword ptr [eax + 4]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e9f1e:  // mov ebx, dword ptr [eax + 8]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e9f21:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e9f24:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_004e9f28:  // lea eax, [esp + 0x64]
    eax = (uint32_t)((uint32_t)(esp + 0x64u));
L_004e9f2c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9f2d:  // call dword ptr [edx + 0x11c]
    t0 = M32((uint32_t)(edx + 0x11cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9f33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9f33:  // lea edx, [esp + 0x64]
    edx = (uint32_t)((uint32_t)(esp + 0x64u));
L_004e9f37:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004e9f3c:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9f41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9f41:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_004e9f47:  // mov eax, dword ptr [ebp + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xc4u)));
L_004e9f4d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004e9f4f:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_004e9f53:  // je 0x4e9fce
    if (f.zf) goto L_004e9fce;
L_004e9f55:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_004e9f58:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004e9f5a:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004e9f5e:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004e9f61:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004e9f65:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004e9f68:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004e9f6c:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004e9f71:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004e9f74:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004e9f78:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004e9f7c:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9f81u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9f81:  // push 0xffff0000
    t0 = 0xffff0000u; esp -= 4; M32(esp) = t0;
L_004e9f86:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004e9f8a:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e9f8d:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004e9f8f:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004e9f92:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_004e9f98:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_004e9f9a:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004e9f9c:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004e9f9f:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004e9fa3:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004e9fa6:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_004e9fa9:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004e9fad:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004e9fb1:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004e9fb3:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004e9fb7:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004e9fba:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004e9fbe:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004e9fc1:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004e9fc4:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004e9fc9:  // call 0x53df40
    t0 = 0x0053df40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9fceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9fce:  // mov ecx, dword ptr [ebp + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xc8u)));
L_004e9fd4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e9fd6:  // je 0x4ea01e
    if (f.zf) goto L_004ea01e;
L_004e9fd8:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e9fda:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9fddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9fdd:  // mov eax, dword ptr [0x89ce88]
    eax = (uint32_t)(M32((uint32_t)(0x89ce88u)));
L_004e9fe2:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004e9fe7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9fe8:  // mov esi, 0x83d188
    esi = (uint32_t)(0x83d188u);
L_004e9fed:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004e9ff0:  // lea edx, [esp + 0x58]
    edx = (uint32_t)((uint32_t)(esp + 0x58u));
L_004e9ff4:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004e9ff6:  // fst dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
L_004e9ffa:  // fst dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
L_004e9ffe:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004ea000:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004ea004:  // mov ecx, dword ptr [ebp + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xc8u)));
L_004ea00a:  // add ecx, 0x1c
    t0 = ladd<32>(ecx, 0x1cu, f);
    ecx = (uint32_t)(t0);
L_004ea00d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ea00e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ea00f:  // push 0xffff00ff
    t0 = 0xffff00ffu; esp -= 4; M32(esp) = t0;
L_004ea014:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004ea019:  // call 0x53d760
    t0 = 0x0053d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea01eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea01e:  // mov eax, dword ptr [ebp + 0xdc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xdcu)));
L_004ea024:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea026:  // je 0x4ea13c
    if (f.zf) goto L_004ea13c;
L_004ea02c:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004ea02f:  // mov ecx, dword ptr [ebp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_004ea032:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_004ea036:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004ea039:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004ea03d:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004ea040:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_004ea044:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004ea049:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004ea04c:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_004ea050:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004ea054:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea059u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea059:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_004ea05f:  // mov esi, dword ptr [ebp + 0xe0]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0xe0u)));
L_004ea065:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004ea066:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004ea06a:  // js 0x4ea13c
    if (f.sf) goto L_004ea13c;
L_004ea070:  // mov eax, dword ptr [ebp + 0xe4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xe4u)));
L_004ea076:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004ea078:  // mov edx, dword ptr [ebp + 0xec]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004ea07e:  // mov cl, byte ptr [eax + esi]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + esi))) & 0xffu);
L_004ea081:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ea083:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_004ea085:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004ea089:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004ea08e:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004ea092:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004ea098:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004ea09c:  // mov al, byte ptr [edx + esi]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + esi))) & 0xffu);
L_004ea09f:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004ea0a3:  // shl eax, 1
    t0 = lshl<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004ea0a5:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004ea0a9:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004ea0ad:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004ea0b3:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004ea0b7:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea0bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea0bc:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004ea0c0:  // push 0xff0000ff
    t0 = 0xff0000ffu; esp -= 4; M32(esp) = t0;
L_004ea0c5:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004ea0c9:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea0cc:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004ea0ce:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea0d1:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_004ea0d7:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ea0d9:  // mov edx, dword ptr [esp + 0x60]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_004ea0dd:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004ea0e0:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004ea0e4:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_004ea0e8:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ea0eb:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004ea0ef:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004ea0f2:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004ea0f6:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004ea0f8:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ea0fa:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004ea0fe:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004ea101:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004ea105:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ea108:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004ea10b:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004ea110:  // call 0x53df40
    t0 = 0x0053df40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea115u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea115:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ea119:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ea11d:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ea121:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_004ea125:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ea129:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004ea12a:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004ea12e:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004ea132:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004ea136:  // jns 0x4ea070
    if (!f.sf) goto L_004ea070;
L_004ea13c:  // mov eax, dword ptr [ebp + 0xa4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xa4u)));
L_004ea142:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea144:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004ea148:  // je 0x4ea14e
    if (f.zf) goto L_004ea14e;
L_004ea14a:  // mov ebx, dword ptr [eax]
    ebx = (uint32_t)(M32((uint32_t)(eax)));
L_004ea14c:  // jmp 0x4ea150
    goto L_004ea150;
L_004ea14e:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ea150:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ea152:  // je 0x4ea339
    if (f.zf) goto L_004ea339;
L_004ea158:  // fld dword ptr [ebp + 0x104]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x104u)));
L_004ea15e:  // mov esi, dword ptr [ebx + 0x10]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x10u)));
L_004ea161:  // mov edi, dword ptr [0x89ce88]
    edi = (uint32_t)(M32((uint32_t)(0x89ce88u)));
L_004ea167:  // fst dword ptr [esp + 0x44]
    F32((uint32_t)(esp + 0x44u)) = lf32(ST(0));
L_004ea16b:  // fst dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
L_004ea16f:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_004ea173:  // fld dword ptr [ebx + 4]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x4u)));
L_004ea176:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_004ea17a:  // fld dword ptr [ebx + 8]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x8u)));
L_004ea17d:  // lea edx, [esp + 0x54]
    edx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004ea181:  // lea eax, [esp + 0x84]
    eax = (uint32_t)((uint32_t)(esp + 0x84u));
L_004ea188:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ea189:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ea18a:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_004ea18e:  // lea ecx, [esi + 0x3c]
    ecx = (uint32_t)((uint32_t)(esi + 0x3cu));
L_004ea191:  // mov dword ptr [esp + 0x64], 0
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x0u);
L_004ea199:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea19eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea19e:  // fld dword ptr [eax + 8]
    lpush(x, (long double)F32((uint32_t)(eax + 0x8u)));
L_004ea1a1:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_004ea1a4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ea1a5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ea1a8:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_004ea1ab:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_004ea1ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ea1af:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ea1b2:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_004ea1b5:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004ea1b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ea1b8:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_004ea1bf:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004ea1c2:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea1c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea1c7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ea1c8:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004ea1cd:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_004ea1d0:  // mov esi, 0x83d188
    esi = (uint32_t)(0x83d188u);
L_004ea1d5:  // mov edi, esp
    edi = (uint32_t)(esp);
L_004ea1d7:  // lea edx, [esp + 0x78]
    edx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004ea1db:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004ea1dd:  // lea ecx, [esp + 0xa8]
    ecx = (uint32_t)((uint32_t)(esp + 0xa8u));
L_004ea1e4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ea1e5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ea1e6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004ea1e8:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004ea1ed:  // call 0x53d760
    t0 = 0x0053d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea1f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea1f2:  // mov ebx, dword ptr [ebx]
    ebx = (uint32_t)(M32((uint32_t)(ebx)));
L_004ea1f4:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ea1f6:  // je 0x4ea31c
    if (f.zf) goto L_004ea31c;
L_004ea1fc:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004ea1fe:  // call 0x4fe480
    t0 = 0x004fe480u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea203u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea203:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004ea205:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004ea207:  // je 0x4ea31c
    if (f.zf) goto L_004ea31c;
L_004ea20d:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_004ea210:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea212:  // je 0x4ea31c
    if (f.zf) goto L_004ea31c;
L_004ea218:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004ea21b:  // mov ecx, dword ptr [ebp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x1cu)));
L_004ea21e:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004ea222:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004ea225:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004ea229:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004ea22c:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_004ea230:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004ea235:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004ea238:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_004ea23c:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004ea240:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea245u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea245:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_004ea24b:  // mov esi, dword ptr [edi + 0xc]
    esi = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_004ea24e:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004ea24f:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004ea253:  // js 0x4ea31c
    if (f.sf) goto L_004ea31c;
L_004ea259:  // mov eax, dword ptr [edi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_004ea25c:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004ea25e:  // mov edx, dword ptr [edi + 0x18]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_004ea261:  // mov cl, byte ptr [eax + esi]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + esi))) & 0xffu);
L_004ea264:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004ea266:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_004ea268:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004ea26c:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004ea271:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004ea275:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004ea27b:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004ea27f:  // mov al, byte ptr [esi + edx]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + edx))) & 0xffu);
L_004ea282:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004ea286:  // shl eax, 1
    t0 = lshl<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004ea288:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004ea28c:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_004ea290:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004ea296:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004ea29a:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea29fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea29f:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ea2a3:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004ea2a5:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ea2a9:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea2ac:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004ea2ae:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea2b1:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_004ea2b7:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ea2b9:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004ea2bd:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004ea2c0:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004ea2c4:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004ea2c8:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ea2cb:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004ea2cf:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004ea2d2:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004ea2d6:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004ea2d8:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004ea2da:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004ea2de:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004ea2e1:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004ea2e5:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004ea2e8:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004ea2eb:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_004ea2f0:  // call 0x53df40
    t0 = 0x0053df40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea2f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea2f5:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004ea2f9:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004ea2fd:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004ea301:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004ea305:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004ea309:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004ea30a:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004ea30e:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004ea312:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004ea316:  // jns 0x4ea259
    if (!f.sf) goto L_004ea259;
L_004ea31c:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004ea320:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004ea323:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ea325:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004ea329:  // je 0x4ea32f
    if (f.zf) goto L_004ea32f;
L_004ea32b:  // mov ebx, dword ptr [eax]
    ebx = (uint32_t)(M32((uint32_t)(eax)));
L_004ea32d:  // jmp 0x4ea331
    goto L_004ea331;
L_004ea32f:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ea331:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ea333:  // jne 0x4ea158
    if (!f.zf) goto L_004ea158;
L_004ea339:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ea33a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ea33b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ea33c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ea33d:  // add esp, 0x84
    t0 = ladd<32>(esp, 0x84u, f);
    esp = (uint32_t)(t0);
L_004ea343:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e9f00, 004e9f00)
