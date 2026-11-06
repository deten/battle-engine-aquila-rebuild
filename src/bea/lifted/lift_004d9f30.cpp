// lifted from 004d9f30 (FUN_004d9f30, 1779 bytes, 759 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004d9f30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004d9f30;
L_004d9f30:  // sub esp, 0x4f4
    t0 = lsub<32>(esp, 0x4f4u, f);
    esp = (uint32_t)(t0);
L_004d9f36:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004d9f37:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004d9f38:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004d9f3a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004d9f3b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004d9f3c:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_004d9f43:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9f48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9f48:  // mov eax, dword ptr [ebp + 0xec]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004d9f4e:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004d9f50:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004d9f52:  // mov dword ptr [esp + 0xcc], 0x5d8c80
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(0x5d8c80u);
L_004d9f5d:  // mov dword ptr [esp + 0x488], esi
    M32((uint32_t)(esp + 0x488u)) = (uint32_t)(esi);
L_004d9f64:  // mov dword ptr [esp + 0x48c], esi
    M32((uint32_t)(esp + 0x48cu)) = (uint32_t)(esi);
L_004d9f6b:  // mov dword ptr [esp + 0x490], esi
    M32((uint32_t)(esp + 0x490u)) = (uint32_t)(esi);
L_004d9f72:  // mov dword ptr [esp + 0x494], esi
    M32((uint32_t)(esp + 0x494u)) = (uint32_t)(esi);
L_004d9f79:  // mov dword ptr [esp + 0x498], esi
    M32((uint32_t)(esp + 0x498u)) = (uint32_t)(esi);
L_004d9f80:  // mov dword ptr [esp + 0x49c], esi
    M32((uint32_t)(esp + 0x49cu)) = (uint32_t)(esi);
L_004d9f87:  // mov dword ptr [esp + 0x4a0], eax
    M32((uint32_t)(esp + 0x4a0u)) = (uint32_t)(eax);
L_004d9f8e:  // je 0x4d9fa1
    if (f.zf) goto L_004d9fa1;
L_004d9f90:  // test byte ptr [eax + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(eax + 0x34u)) & 0x8u, f);
L_004d9f94:  // je 0x4d9fa1
    if (f.zf) goto L_004d9fa1;
L_004d9f96:  // mov dword ptr [esp + 0x49c], 1
    M32((uint32_t)(esp + 0x49cu)) = (uint32_t)(0x1u);
L_004d9fa1:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004d9fa7:  // mov ebx, dword ptr [eax + 8]
    ebx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004d9faa:  // cmp ebx, esi
    t0 = lsub<32>(ebx, esi, f);
L_004d9fac:  // je 0x4da4a7
    if (f.zf) goto L_004da4a7;
L_004d9fb2:  // mov ecx, dword ptr [0x8553f8]
    ecx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004d9fb8:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004d9fbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004d9fbd:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004d9fbf:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_004d9fc1:  // je 0x4da018
    if (f.zf) goto L_004da018;
L_004d9fc3:  // mov esi, dword ptr [edi + 0x30]
    esi = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_004d9fc6:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004d9fc8:  // mov al, byte ptr [ecx]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx))) & 0xffu);
L_004d9fca:  // mov dl, al
    edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_004d9fcc:  // cmp al, byte ptr [esi]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(esi)), f);
L_004d9fce:  // jne 0x4d9fec
    if (!f.zf) goto L_004d9fec;
L_004d9fd0:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_004d9fd2:  // je 0x4d9fe8
    if (f.zf) goto L_004d9fe8;
L_004d9fd4:  // mov al, byte ptr [ecx + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0x1u))) & 0xffu);
L_004d9fd7:  // mov dl, al
    edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
L_004d9fd9:  // cmp al, byte ptr [esi + 1]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(esi + 0x1u)), f);
L_004d9fdc:  // jne 0x4d9fec
    if (!f.zf) goto L_004d9fec;
L_004d9fde:  // add ecx, 2
    t0 = ladd<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004d9fe1:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_004d9fe4:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_004d9fe6:  // jne 0x4d9fc8
    if (!f.zf) goto L_004d9fc8;
L_004d9fe8:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004d9fea:  // jmp 0x4d9ff1
    goto L_004d9ff1;
L_004d9fec:  // sbb ecx, ecx
    t0 = lsbb<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_004d9fee:  // sbb ecx, -1
    t0 = lsbb<32>(ecx, 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004d9ff1:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004d9ff3:  // je 0x4da0ca
    if (f.zf) goto L_004da0ca;
L_004d9ff9:  // mov ecx, dword ptr [0x8553f8]
    ecx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004d9fff:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004da002:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004da005:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004da007:  // mov dword ptr [ecx + 8], eax
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(eax);
L_004da00a:  // je 0x4da010
    if (f.zf) goto L_004da010;
L_004da00c:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004da00e:  // jmp 0x4da012
    goto L_004da012;
L_004da010:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004da012:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004da014:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004da016:  // jne 0x4d9fc3
    if (!f.zf) goto L_004d9fc3;
L_004da018:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004da01a:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004da01c:  // mov dword ptr [esp + 0x488], eax
    M32((uint32_t)(esp + 0x488u)) = (uint32_t)(eax);
L_004da023:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004da025:  // je 0x4da4a7
    if (f.zf) goto L_004da4a7;
L_004da02b:  // cmp dword ptr [eax + 0x48], esi
    t0 = lsub<32>(M32((uint32_t)(eax + 0x48u)), esi, f);
L_004da02e:  // je 0x4da4a7
    if (f.zf) goto L_004da4a7;
L_004da034:  // mov ebx, dword ptr [esp + 0x508]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x508u)));
L_004da03b:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004da03d:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_004da03f:  // je 0x4da32a
    if (f.zf) goto L_004da32a;
L_004da045:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004da046:  // je 0x4da2b9
    if (f.zf) goto L_004da2b9;
L_004da04c:  // sub eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004da04f:  // jne 0x4da4ae
    if (!f.zf) goto L_004da4ae;
L_004da055:  // mov eax, dword ptr [esp + 0x50c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50cu)));
L_004da05c:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004da05e:  // je 0x4da0d1
    if (f.zf) goto L_004da0d1;
L_004da060:  // cmp dword ptr [eax + 0x80], 1
    t0 = lsub<32>(M32((uint32_t)(eax + 0x80u)), 0x1u, f);
L_004da067:  // jl 0x4da0d1
    if ((f.sf != f.of)) goto L_004da0d1;
L_004da069:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004da06c:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004da06e:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004da072:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004da075:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004da079:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_004da07d:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004da080:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004da084:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004da086:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004da089:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004da08d:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004da091:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004da095:  // fchs 
    ST(0) = -ST(0);
L_004da097:  // fstp dword ptr [esp + 0x110]
    F32((uint32_t)(esp + 0x110u)) = lf32(ST(0));
    lpop(x);
L_004da09e:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da0a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da0a3:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_004da0a7:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004da0ad:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004da0af:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004da0b2:  // jne 0x4da307
    if (!f.zf) goto L_004da307;
L_004da0b8:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da0bc:  // fdiv dword ptr [esp + 0x20]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x20u)));
L_004da0c0:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da0c5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da0c5:  // jmp 0x4da30d
    goto L_004da30d;
L_004da0ca:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004da0cc:  // jmp 0x4da01a
    goto L_004da01a;
L_004da0d1:  // mov eax, dword ptr [esp + 0x510]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x510u)));
L_004da0d8:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004da0da:  // je 0x4da13d
    if (f.zf) goto L_004da13d;
L_004da0dc:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_004da0df:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_004da0e2:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004da0e6:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004da0ea:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_004da0ed:  // fsub dword ptr [eax + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x20u)));
L_004da0f0:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004da0f4:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_004da0f7:  // fsub dword ptr [eax + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x24u)));
L_004da0fa:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004da0fe:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004da102:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004da106:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004da108:  // fchs 
    ST(0) = -ST(0);
L_004da10a:  // fstp dword ptr [esp + 0x110]
    F32((uint32_t)(esp + 0x110u)) = lf32(ST(0));
    lpop(x);
L_004da111:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da116u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da116:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_004da11a:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004da120:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004da122:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004da125:  // jne 0x4da307
    if (!f.zf) goto L_004da307;
L_004da12b:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da12f:  // fdiv dword ptr [esp + 0x20]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x20u)));
L_004da133:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da138u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da138:  // jmp 0x4da30d
    goto L_004da30d;
L_004da13d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da13e:  // push 0xbfc90fdb
    t0 = 0xbfc90fdbu; esp -= 4; M32(esp) = t0;
L_004da143:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da144:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_004da148:  // mov dword ptr [esp + 0x138], 1
    M32((uint32_t)(esp + 0x138u)) = (uint32_t)(0x1u);
L_004da153:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da158u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da158:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004da15c:  // fmul dword ptr [ebp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x64u)));
L_004da15f:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004da163:  // fmul dword ptr [ebp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x60u)));
L_004da166:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da167:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da169:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004da16d:  // fmul dword ptr [ebp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x5cu)));
L_004da170:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da172:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da175:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004da179:  // fmul dword ptr [ebp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x64u)));
L_004da17c:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004da180:  // fmul dword ptr [ebp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x60u)));
L_004da183:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da184:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da186:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004da18a:  // fmul dword ptr [ebp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x5cu)));
L_004da18d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da18f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da192:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004da196:  // fmul dword ptr [ebp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x64u)));
L_004da199:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004da19d:  // fmul dword ptr [ebp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x60u)));
L_004da1a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da1a1:  // lea ecx, [esp + 0xb8]
    ecx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004da1a8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da1aa:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004da1ae:  // fmul dword ptr [ebp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x5cu)));
L_004da1b1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da1b3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da1b6:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da1bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da1bb:  // fld dword ptr [esp + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x7cu)));
L_004da1bf:  // fmul dword ptr [ebp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x54u)));
L_004da1c2:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_004da1c6:  // fmul dword ptr [ebp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x50u)));
L_004da1c9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da1ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da1cb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da1cd:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004da1d1:  // fmul dword ptr [ebp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4cu)));
L_004da1d4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da1d6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da1d9:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004da1e0:  // fmul dword ptr [ebp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x54u)));
L_004da1e3:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004da1e7:  // fmul dword ptr [ebp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x50u)));
L_004da1ea:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da1eb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da1ed:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004da1f1:  // fmul dword ptr [ebp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4cu)));
L_004da1f4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da1f6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da1f9:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004da200:  // fmul dword ptr [ebp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x54u)));
L_004da203:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004da207:  // fmul dword ptr [ebp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x50u)));
L_004da20a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da20b:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_004da212:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da214:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004da218:  // fmul dword ptr [ebp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4cu)));
L_004da21b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da21d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da220:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da225u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da225:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004da22c:  // fmul dword ptr [ebp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x44u)));
L_004da22f:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004da233:  // fmul dword ptr [ebp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x40u)));
L_004da236:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da237:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da238:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da23a:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004da23e:  // fmul dword ptr [ebp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x3cu)));
L_004da241:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da243:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da246:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004da24d:  // fmul dword ptr [ebp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x44u)));
L_004da250:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004da254:  // fmul dword ptr [ebp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x40u)));
L_004da257:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da258:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da25a:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004da25e:  // fmul dword ptr [ebp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x3cu)));
L_004da261:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da263:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da266:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004da26d:  // fmul dword ptr [ebp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x44u)));
L_004da270:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004da274:  // fmul dword ptr [ebp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x40u)));
L_004da277:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da278:  // lea ecx, [esp + 0xa0]
    ecx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_004da27f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da281:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004da285:  // fmul dword ptr [ebp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x3cu)));
L_004da288:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da28a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da28d:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da292u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da292:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da293:  // lea ecx, [esp + 0x4b0]
    ecx = (uint32_t)((uint32_t)(esp + 0x4b0u));
L_004da29a:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da29fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da29f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004da2a4:  // lea esi, [esp + 0x4a4]
    esi = (uint32_t)((uint32_t)(esp + 0x4a4u));
L_004da2ab:  // lea edi, [esp + 0xe0]
    edi = (uint32_t)((uint32_t)(esp + 0xe0u));
L_004da2b2:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004da2b4:  // jmp 0x4da4b7
    goto L_004da4b7;
L_004da2b9:  // lea eax, [ebp + 0x1c]
    eax = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004da2bc:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004da2c0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da2c1:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004da2c6:  // call 0x47ec60
    t0 = 0x0047ec60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da2cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da2cb:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004da2cf:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004da2d3:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004da2d5:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004da2d9:  // fchs 
    ST(0) = -ST(0);
L_004da2db:  // fstp dword ptr [esp + 0x110]
    F32((uint32_t)(esp + 0x110u)) = lf32(ST(0));
    lpop(x);
L_004da2e2:  // call 0x4026b0
    t0 = 0x004026b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da2e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da2e7:  // fst dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
L_004da2eb:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004da2f1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004da2f3:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004da2f6:  // jne 0x4da307
    if (!f.zf) goto L_004da307;
L_004da2f8:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da2fc:  // fdiv dword ptr [esp + 0x20]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0x20u)));
L_004da300:  // call 0x55dcb0
    t0 = 0x0055dcb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da305u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da305:  // jmp 0x4da30d
    goto L_004da30d;
L_004da307:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004da30d:  // fadd dword ptr [0x5d85e4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e4u)));
L_004da313:  // mov dword ptr [esp + 0x118], 0
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(0x0u);
L_004da31e:  // fstp dword ptr [esp + 0x114]
    F32((uint32_t)(esp + 0x114u)) = lf32(ST(0));
    lpop(x);
L_004da325:  // jmp 0x4da4b7
    goto L_004da4b7;
L_004da32a:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004da32f:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004da331:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004da335:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004da337:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da338:  // mov dword ptr [esp + 0x13c], 1
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(0x1u);
L_004da343:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da348u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da348:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da349:  // push 0x3fc90fdb
    t0 = 0x3fc90fdbu; esp -= 4; M32(esp) = t0;
L_004da34e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da34f:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004da353:  // call 0x4062d0
    t0 = 0x004062d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da358u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da358:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004da35c:  // fmul dword ptr [ebp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x64u)));
L_004da35f:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004da363:  // fmul dword ptr [ebp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x60u)));
L_004da366:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da367:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da369:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004da36d:  // fmul dword ptr [ebp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x5cu)));
L_004da370:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da372:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da375:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004da379:  // fmul dword ptr [ebp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x64u)));
L_004da37c:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004da380:  // fmul dword ptr [ebp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x60u)));
L_004da383:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da384:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da386:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004da38a:  // fmul dword ptr [ebp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x5cu)));
L_004da38d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da38f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da392:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004da396:  // fmul dword ptr [ebp + 0x64]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x64u)));
L_004da399:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004da39d:  // fmul dword ptr [ebp + 0x60]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x60u)));
L_004da3a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da3a1:  // lea ecx, [esp + 0xb8]
    ecx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004da3a8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da3aa:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004da3ae:  // fmul dword ptr [ebp + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x5cu)));
L_004da3b1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da3b3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da3b6:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da3bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da3bb:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004da3bf:  // fmul dword ptr [ebp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x54u)));
L_004da3c2:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004da3c6:  // fmul dword ptr [ebp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x50u)));
L_004da3c9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da3ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da3cb:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da3cd:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004da3d1:  // fmul dword ptr [ebp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4cu)));
L_004da3d4:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da3d6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da3d9:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004da3dd:  // fmul dword ptr [ebp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x54u)));
L_004da3e0:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004da3e4:  // fmul dword ptr [ebp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x50u)));
L_004da3e7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da3e8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da3ea:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004da3ee:  // fmul dword ptr [ebp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4cu)));
L_004da3f1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da3f3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da3f6:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004da3fa:  // fmul dword ptr [ebp + 0x54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x54u)));
L_004da3fd:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004da401:  // fmul dword ptr [ebp + 0x50]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x50u)));
L_004da404:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da405:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_004da40c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da40e:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004da412:  // fmul dword ptr [ebp + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4cu)));
L_004da415:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da417:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da41a:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da41fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da41f:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004da423:  // fmul dword ptr [ebp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x44u)));
L_004da426:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004da42a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da42b:  // fmul dword ptr [ebp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x40u)));
L_004da42e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da42f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da431:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004da435:  // fmul dword ptr [ebp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x3cu)));
L_004da438:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da43a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da43d:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004da441:  // fmul dword ptr [ebp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x44u)));
L_004da444:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004da448:  // fmul dword ptr [ebp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x3cu)));
L_004da44b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da44c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da44e:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004da452:  // fmul dword ptr [ebp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x40u)));
L_004da455:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da457:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da45a:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004da45e:  // fmul dword ptr [ebp + 0x44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x44u)));
L_004da461:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004da465:  // fmul dword ptr [ebp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x40u)));
L_004da468:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da469:  // lea ecx, [esp + 0xa0]
    ecx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_004da470:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da472:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004da476:  // fmul dword ptr [ebp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x3cu)));
L_004da479:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da47b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da47e:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da483u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da483:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da484:  // lea ecx, [esp + 0x4e0]
    ecx = (uint32_t)((uint32_t)(esp + 0x4e0u));
L_004da48b:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da490u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da490:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004da495:  // lea esi, [esp + 0x4d4]
    esi = (uint32_t)((uint32_t)(esp + 0x4d4u));
L_004da49c:  // lea edi, [esp + 0xe0]
    edi = (uint32_t)((uint32_t)(esp + 0xe0u));
L_004da4a3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004da4a5:  // jmp 0x4da4b7
    goto L_004da4b7;
L_004da4a7:  // mov ebx, dword ptr [esp + 0x508]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x508u)));
L_004da4ae:  // cmp ebx, 3
    t0 = lsub<32>(ebx, 0x3u, f);
L_004da4b1:  // ja 0x4da89e
    if ((!f.cf && !f.zf)) goto L_004da89e;
L_004da4b7:  // jmp dword ptr [ebx*4 + 0x4daa04]
    t0 = M32((uint32_t)(ebx * 4u + 0x4daa04u));
    switch (t0) {
    case 0x004da4beu: goto L_004da4be;
    case 0x004da502u: goto L_004da502;
    case 0x004da6b9u: goto L_004da6b9;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004da4be:  // mov edx, dword ptr [ebp + 0xf0]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004da4c4:  // fld dword ptr [edx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edx + 0x1cu)));
L_004da4c7:  // fistp qword ptr [esp + 0x84]
    M64((uint32_t)(esp + 0x84u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004da4ce:  // mov eax, dword ptr [esp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004da4d5:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004da4d8:  // jns 0x4da4de
    if (!f.sf) goto L_004da4de;
L_004da4da:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004da4dc:  // jmp 0x4da4e8
    goto L_004da4e8;
L_004da4de:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_004da4e1:  // jle 0x4da4e8
    if ((f.zf || f.sf != f.of)) goto L_004da4e8;
L_004da4e3:  // mov eax, 6
    eax = (uint32_t)(0x6u);
L_004da4e8:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_004da4eb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da4ec:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da4ed:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da4f0:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_004da4f3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da4f4:  // mov ecx, dword ptr [0x89c9b0]
    ecx = (uint32_t)(M32((uint32_t)(0x89c9b0u)));
L_004da4fa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da4fd:  // call 0x5475d0
    t0 = 0x005475d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da502u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da502:  // mov eax, dword ptr [esp + 0x488]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x488u)));
L_004da509:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004da50b:  // je 0x4da673
    if (f.zf) goto L_004da673;
L_004da511:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004da517:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004da51a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da51b:  // call 0x4daa20
    t0 = 0x004daa20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da520u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da520:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da521:  // call 0x50ff10
    t0 = 0x0050ff10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da526u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da526:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004da528:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004da52b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004da52d:  // je 0x4da673
    if (f.zf) goto L_004da673;
L_004da533:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004da536:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004da53a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da53b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004da53d:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da540u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da540:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004da544:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da548:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004da54a:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004da54c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004da54e:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004da550:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da552:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004da556:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004da55a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da55c:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004da55e:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004da560:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004da562:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004da568:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004da56a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004da56d:  // jne 0x4da593
    if (!f.zf) goto L_004da593;
L_004da56f:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004da575:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004da579:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004da57b:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004da57f:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004da583:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004da585:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004da589:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da58d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004da58f:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004da593:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004da595:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da599:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004da59f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da5a0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da5a3:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da5a7:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004da5ad:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da5ae:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da5b1:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da5b5:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004da5bb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da5bc:  // lea ecx, [esp + 0xa8]
    ecx = (uint32_t)((uint32_t)(esp + 0xa8u));
L_004da5c3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da5c6:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da5cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da5cb:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_004da5ce:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_004da5d5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da5d6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da5d9:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_004da5dc:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_004da5e3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da5e4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da5e7:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_004da5ea:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_004da5f1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da5f2:  // lea ecx, [esp + 0xc8]
    ecx = (uint32_t)((uint32_t)(esp + 0xc8u));
L_004da5f9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da5fc:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da601u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da601:  // mov eax, dword ptr [esp + 0xc4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xc4u)));
L_004da608:  // mov ecx, dword ptr [esp + 0xbc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xbcu)));
L_004da60f:  // mov edx, dword ptr [esp + 0xc0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xc0u)));
L_004da616:  // mov dword ptr [esp + 0xd8], eax
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(eax);
L_004da61d:  // mov eax, dword ptr [ebp + 0xec]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004da623:  // mov dword ptr [esp + 0xd0], ecx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(ecx);
L_004da62a:  // mov ecx, dword ptr [esp + 0xc8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xc8u)));
L_004da631:  // mov dword ptr [esp + 0xd4], edx
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(edx);
L_004da638:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004da63a:  // mov dword ptr [esp + 0xdc], ecx
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(ecx);
L_004da641:  // mov dword ptr [esp + 0x48c], ebx
    M32((uint32_t)(esp + 0x48cu)) = (uint32_t)(ebx);
L_004da648:  // je 0x4da659
    if (f.zf) goto L_004da659;
L_004da64a:  // mov edx, dword ptr [eax + 0x138]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x138u)));
L_004da650:  // mov dword ptr [esp + 0x16c], edx
    M32((uint32_t)(esp + 0x16cu)) = (uint32_t)(edx);
L_004da657:  // jmp 0x4da664
    goto L_004da664;
L_004da659:  // mov dword ptr [esp + 0x16c], 2
    M32((uint32_t)(esp + 0x16cu)) = (uint32_t)(0x2u);
L_004da664:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004da666:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_004da66d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da66e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004da670:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da673u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da673:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004da679:  // mov ecx, dword ptr [ebp + 0x118]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x118u)));
L_004da67f:  // mov edx, dword ptr [eax + 0x84]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x84u)));
L_004da685:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_004da687:  // jle 0x4da89c
    if ((f.zf || f.sf != f.of)) goto L_004da89c;
L_004da68d:  // mov ecx, dword ptr [ebp + 0x120]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x120u)));
L_004da693:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004da695:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_004da697:  // jne 0x4da89e
    if (!f.zf) goto L_004da89e;
L_004da69d:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004da6a3:  // fadd dword ptr [eax + 0x94]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x94u)));
L_004da6a9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da6aa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da6ab:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da6ac:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004da6b0:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004da6b4:  // jmp 0x4da87f
    goto L_004da87f;
L_004da6b9:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004da6bf:  // mov ecx, dword ptr [eax + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4cu)));
L_004da6c2:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004da6c4:  // jne 0x4da6d1
    if (!f.zf) goto L_004da6d1;
L_004da6c6:  // mov ecx, dword ptr [eax + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x74u)));
L_004da6c9:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004da6cb:  // je 0x4da840
    if (f.zf) goto L_004da840;
L_004da6d1:  // mov ecx, dword ptr [esp + 0x488]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x488u)));
L_004da6d8:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004da6da:  // je 0x4da840
    if (f.zf) goto L_004da840;
L_004da6e0:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004da6e3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da6e4:  // call 0x4daa20
    t0 = 0x004daa20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da6e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da6e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da6ea:  // call 0x50ff10
    t0 = 0x0050ff10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da6efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da6ef:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004da6f1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004da6f4:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004da6f6:  // je 0x4da840
    if (f.zf) goto L_004da840;
L_004da6fc:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004da6ff:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004da703:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da704:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004da706:  // call dword ptr [edx + 0x6c]
    t0 = M32((uint32_t)(edx + 0x6cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da709u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da709:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004da70d:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da711:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004da713:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004da715:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004da717:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004da719:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da71b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004da71f:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_004da723:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004da725:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004da727:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004da729:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004da72b:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004da731:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004da733:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004da736:  // jne 0x4da75c
    if (!f.zf) goto L_004da75c;
L_004da738:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004da73e:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004da742:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004da744:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004da748:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004da74c:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004da74e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004da752:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da756:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004da758:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004da75c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004da75e:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da762:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004da768:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da769:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da76c:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da770:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004da776:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da777:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da77a:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004da77e:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_004da784:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da785:  // lea ecx, [esp + 0xb8]
    ecx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004da78c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da78f:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da794u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da794:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_004da797:  // fsub dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb4u)));
L_004da79e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da79f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da7a2:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_004da7a5:  // fsub dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb4u)));
L_004da7ac:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da7ad:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da7b0:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_004da7b3:  // fsub dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb4u)));
L_004da7ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da7bb:  // lea ecx, [esp + 0x98]
    ecx = (uint32_t)((uint32_t)(esp + 0x98u));
L_004da7c2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004da7c5:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da7cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da7ca:  // mov eax, dword ptr [esp + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004da7d1:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004da7d8:  // mov edx, dword ptr [esp + 0x90]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004da7df:  // mov dword ptr [esp + 0xd8], eax
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(eax);
L_004da7e6:  // mov eax, dword ptr [ebp + 0xec]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004da7ec:  // mov dword ptr [esp + 0xd0], ecx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(ecx);
L_004da7f3:  // mov ecx, dword ptr [esp + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_004da7fa:  // mov dword ptr [esp + 0xd4], edx
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(edx);
L_004da801:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004da803:  // mov dword ptr [esp + 0xdc], ecx
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(ecx);
L_004da80a:  // mov dword ptr [esp + 0x48c], 0
    M32((uint32_t)(esp + 0x48cu)) = (uint32_t)(0x0u);
L_004da815:  // je 0x4da826
    if (f.zf) goto L_004da826;
L_004da817:  // mov edx, dword ptr [eax + 0x138]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x138u)));
L_004da81d:  // mov dword ptr [esp + 0x16c], edx
    M32((uint32_t)(esp + 0x16cu)) = (uint32_t)(edx);
L_004da824:  // jmp 0x4da831
    goto L_004da831;
L_004da826:  // mov dword ptr [esp + 0x16c], 2
    M32((uint32_t)(esp + 0x16cu)) = (uint32_t)(0x2u);
L_004da831:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004da833:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_004da83a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004da83b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004da83d:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da840u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da840:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004da846:  // mov ecx, dword ptr [ebp + 0x118]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x118u)));
L_004da84c:  // mov edx, dword ptr [eax + 0x84]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x84u)));
L_004da852:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_004da854:  // jle 0x4da89c
    if ((f.zf || f.sf != f.of)) goto L_004da89c;
L_004da856:  // mov ecx, dword ptr [ebp + 0x120]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x120u)));
L_004da85c:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004da85e:  // cmp ecx, esi
    t0 = lsub<32>(ecx, esi, f);
L_004da860:  // jne 0x4da89e
    if (!f.zf) goto L_004da89e;
L_004da862:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004da868:  // fadd dword ptr [eax + 0x94]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x94u)));
L_004da86e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da86f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da870:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004da871:  // lea eax, [esp + 0x90]
    eax = (uint32_t)((uint32_t)(esp + 0x90u));
L_004da878:  // fstp dword ptr [esp + 0x90]
    F32((uint32_t)(esp + 0x90u)) = lf32(ST(0));
    lpop(x);
L_004da87f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da880:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004da881:  // push 0xfa2
    t0 = 0xfa2u; esp -= 4; M32(esp) = t0;
L_004da886:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004da88b:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da890u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da890:  // mov dword ptr [ebp + 0x120], 1
    M32((uint32_t)(ebp + 0x120u)) = (uint32_t)(0x1u);
L_004da89a:  // jmp 0x4da89e
    goto L_004da89e;
L_004da89c:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004da89e:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004da8a4:  // cmp dword ptr [eax + 0x50], esi
    t0 = lsub<32>(M32((uint32_t)(eax + 0x50u)), esi, f);
L_004da8a7:  // je 0x4da97e
    if (f.zf) goto L_004da97e;
L_004da8ad:  // cmp dword ptr [eax], esi
    t0 = lsub<32>(M32((uint32_t)(eax)), esi, f);
L_004da8af:  // je 0x4da97e
    if (f.zf) goto L_004da97e;
L_004da8b5:  // cmp dword ptr [ebp + 0xe4], esi
    t0 = lsub<32>(M32((uint32_t)(ebp + 0xe4u)), esi, f);
L_004da8bb:  // jne 0x4da97e
    if (!f.zf) goto L_004da97e;
L_004da8c1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004da8c3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004da8c5:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004da8c8:  // mov dword ptr [ebp + 0xe4], esi
    M32((uint32_t)(ebp + 0xe4u)) = (uint32_t)(esi);
L_004da8ce:  // mov edx, dword ptr [0x83cc88]
    edx = (uint32_t)(M32((uint32_t)(0x83cc88u)));
L_004da8d4:  // mov eax, dword ptr [0x83cc8c]
    eax = (uint32_t)(M32((uint32_t)(0x83cc8cu)));
L_004da8d9:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004da8db:  // lea ebx, [ebp + 0xe0]
    ebx = (uint32_t)((uint32_t)(ebp + 0xe0u));
L_004da8e1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004da8e2:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004da8e4:  // mov edx, dword ptr [0x83cc90]
    edx = (uint32_t)(M32((uint32_t)(0x83cc90u)));
L_004da8ea:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004da8ed:  // mov eax, dword ptr [0x83cc94]
    eax = (uint32_t)(M32((uint32_t)(0x83cc94u)));
L_004da8f2:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004da8f5:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004da8f8:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004da8fe:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004da900:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004da905:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004da906:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da90bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da90b:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004da90e:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004da910:  // je 0x4da91e
    if (f.zf) goto L_004da91e;
L_004da912:  // lea eax, [ebp + 0xf8]
    eax = (uint32_t)((uint32_t)(ebp + 0xf8u));
L_004da918:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004da919:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da91eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da91e:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004da921:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004da923:  // je 0x4da93c
    if (f.zf) goto L_004da93c;
L_004da925:  // lea esi, [ebp + 0x3c]
    esi = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_004da928:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004da92b:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004da930:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004da932:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004da93c:  // mov ecx, dword ptr [ebp + 0xf0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004da942:  // mov ebx, dword ptr [ebx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004da945:  // mov eax, dword ptr [ecx + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x9cu)));
L_004da94b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004da94d:  // je 0x4da95b
    if (f.zf) goto L_004da95b;
L_004da94f:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004da951:  // je 0x4da97e
    if (f.zf) goto L_004da97e;
L_004da953:  // lea edx, [ebp + 0xf8]
    edx = (uint32_t)((uint32_t)(ebp + 0xf8u));
L_004da959:  // jmp 0x4da962
    goto L_004da962;
L_004da95b:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004da95d:  // je 0x4da97e
    if (f.zf) goto L_004da97e;
L_004da95f:  // lea edx, [ebp + 0x1c]
    edx = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004da962:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004da964:  // add ebx, 0x90
    t0 = ladd<32>(ebx, 0x90u, f);
    ebx = (uint32_t)(t0);
L_004da96a:  // mov dword ptr [ebx], eax
    M32((uint32_t)(ebx)) = (uint32_t)(eax);
L_004da96c:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004da96f:  // mov dword ptr [ebx + 4], ecx
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(ecx);
L_004da972:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004da975:  // mov dword ptr [ebx + 8], eax
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(eax);
L_004da978:  // mov ecx, dword ptr [edx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004da97b:  // mov dword ptr [ebx + 0xc], ecx
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(ecx);
L_004da97e:  // mov eax, dword ptr [ebp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf0u)));
L_004da984:  // mov ecx, dword ptr [eax + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x60u)));
L_004da987:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004da989:  // jne 0x4da9c1
    if (!f.zf) goto L_004da9c1;
L_004da98b:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004da993:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004da997:  // lea edx, [ebp + 0x7c]
    edx = (uint32_t)((uint32_t)(ebp + 0x7cu));
L_004da99a:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004da9a2:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004da9aa:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_004da9ac:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004da9b0:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004da9b3:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004da9b7:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_004da9ba:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004da9be:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004da9c1:  // mov ecx, dword ptr [ebp + 0xe4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xe4u)));
L_004da9c7:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004da9c9:  // je 0x4da9f6
    if (f.zf) goto L_004da9f6;
L_004da9cb:  // mov ecx, dword ptr [eax + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x50u)));
L_004da9ce:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004da9d0:  // jne 0x4da9f6
    if (!f.zf) goto L_004da9f6;
L_004da9d2:  // mov ecx, dword ptr [ebp + 0xe4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xe4u)));
L_004da9d8:  // lea esi, [ebp + 0xe0]
    esi = (uint32_t)((uint32_t)(ebp + 0xe0u));
L_004da9de:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004da9e0:  // je 0x4da9eb
    if (f.zf) goto L_004da9eb;
L_004da9e2:  // lea edx, [ebp + 0x1c]
    edx = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_004da9e5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004da9e6:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da9ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da9eb:  // add ebp, 0x3c
    t0 = ladd<32>(ebp, 0x3cu, f);
    ebp = (uint32_t)(t0);
L_004da9ee:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004da9f0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004da9f1:  // call 0x4c0450
    t0 = 0x004c0450u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004da9f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004da9f6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004da9f7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004da9f8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004da9f9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004da9fa:  // add esp, 0x4f4
    t0 = ladd<32>(esp, 0x4f4u, f);
    esp = (uint32_t)(t0);
L_004daa00:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004d9f30, 004d9f30)
