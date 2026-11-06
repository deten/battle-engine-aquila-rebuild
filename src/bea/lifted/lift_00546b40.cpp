// lifted from 00546b40 (FUN_00546b40, 2147 bytes, 610 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00546b40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00546b40;
L_00546b40:  // sub esp, 0xd8
    t0 = lsub<32>(esp, 0xd8u, f);
    esp = (uint32_t)(t0);
L_00546b46:  // mov eax, dword ptr [0x8aa96c]
    eax = (uint32_t)(M32((uint32_t)(0x8aa96cu)));
L_00546b4b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00546b4c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00546b4d:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00546b4f:  // mov ecx, dword ptr [0x8aa95c]
    ecx = (uint32_t)(M32((uint32_t)(0x8aa95cu)));
L_00546b55:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00546b56:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00546b58:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546b59:  // mov dword ptr [esp + 0x6c], ebp
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ebp);
L_00546b5d:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_00546b61:  // jle 0x546b75
    if ((f.zf || f.sf != f.of)) goto L_00546b75;
L_00546b63:  // fild dword ptr [esp + 0x34]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x34u)));
L_00546b67:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546b68:  // mov ecx, 0x8aa950
    ecx = (uint32_t)(0x8aa950u);
L_00546b6d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00546b70:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546b75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546b75:  // mov ebx, dword ptr [esp + 0xf0]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_00546b7c:  // mov edx, dword ptr [ebp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x24u)));
L_00546b7f:  // lea eax, [ebx + ebx*2]
    eax = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_00546b82:  // lea ecx, [ebx + eax*4]
    ecx = (uint32_t)((uint32_t)(ebx + eax * 4u));
L_00546b85:  // lea edi, [edx + ecx*4]
    edi = (uint32_t)((uint32_t)(edx + ecx * 4u));
L_00546b88:  // lea edx, [esp + 0x98]
    edx = (uint32_t)((uint32_t)(esp + 0x98u));
L_00546b8f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00546b90:  // mov dword ptr [esp + 0x4c], edi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edi);
L_00546b94:  // mov ecx, dword ptr [edi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_00546b97:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00546b99:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546b9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546b9b:  // mov ecx, dword ptr [edi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x10u)));
L_00546b9e:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_00546ba5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00546ba6:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00546ba8:  // call dword ptr [eax + 4]
    t0 = M32((uint32_t)(eax + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546babu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546bab:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_00546bae:  // fld dword ptr [eax + 0x14]
    lpush(x, (long double)F32((uint32_t)(eax + 0x14u)));
L_00546bb1:  // fld dword ptr [eax + 4]
    lpush(x, (long double)F32((uint32_t)(eax + 0x4u)));
L_00546bb4:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_00546bb8:  // fstp dword ptr [esp + 0x78]
    F32((uint32_t)(esp + 0x78u)) = lf32(ST(0));
    lpop(x);
L_00546bbc:  // fstp dword ptr [esp + 0x7c]
    F32((uint32_t)(esp + 0x7cu)) = lf32(ST(0));
    lpop(x);
L_00546bc0:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_00546bc7:  // fchs 
    ST(0) = -ST(0);
L_00546bc9:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_00546bd0:  // fchs 
    ST(0) = -ST(0);
L_00546bd2:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00546bd6:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_00546bdd:  // fchs 
    ST(0) = -ST(0);
L_00546bdf:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_00546be3:  // mov eax, dword ptr [edi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x14u)));
L_00546be6:  // lea esi, [edi + 0x14]
    esi = (uint32_t)((uint32_t)(edi + 0x14u));
L_00546be9:  // fadd dword ptr [0x5d85bc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85bcu)));
L_00546bef:  // cmp eax, 0x4996b438
    t0 = lsub<32>(eax, 0x4996b438u, f);
L_00546bf4:  // mov dword ptr [esp + 0x60], 0
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x0u);
L_00546bfc:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00546c00:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00546c04:  // fadd dword ptr [0x5d85bc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85bcu)));
L_00546c0a:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00546c0e:  // je 0x546d17
    if (f.zf) goto L_00546d17;
L_00546c14:  // mov eax, dword ptr [ebx*4 + 0x8aa468]
    eax = (uint32_t)(M32((uint32_t)(ebx * 4u + 0x8aa468u)));
L_00546c1b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00546c1d:  // jne 0x546d17
    if (!f.zf) goto L_00546d17;
L_00546c23:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00546c29:  // fsub dword ptr [0x5e50c8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e50c8u)));
L_00546c2f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546c30:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00546c32:  // fmul dword ptr [esi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x8u)));
L_00546c35:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00546c38:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546c39:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00546c3b:  // fmul dword ptr [esi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4u)));
L_00546c3e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00546c41:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546c42:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00546c46:  // fmul dword ptr [esi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi)));
L_00546c48:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00546c4b:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546c50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546c50:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00546c54:  // fmul dword ptr [0x5e50c8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e50c8u)));
L_00546c5a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546c5b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00546c5e:  // fld dword ptr [0x5e50c8]
    lpush(x, (long double)F32((uint32_t)(0x5e50c8u)));
L_00546c64:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00546c68:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546c69:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00546c6c:  // fld dword ptr [0x5e50c8]
    lpush(x, (long double)F32((uint32_t)(0x5e50c8u)));
L_00546c72:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_00546c76:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546c77:  // lea ecx, [esp + 0x94]
    ecx = (uint32_t)((uint32_t)(esp + 0x94u));
L_00546c7e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00546c81:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546c86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546c86:  // lea eax, [esp + 0x50]
    eax = (uint32_t)((uint32_t)(esp + 0x50u));
L_00546c8a:  // lea ecx, [esp + 0xa8]
    ecx = (uint32_t)((uint32_t)(esp + 0xa8u));
L_00546c91:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00546c92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546c93:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_00546c9a:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546c9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546c9f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00546ca1:  // mov edx, esi
    edx = (uint32_t)(esi);
L_00546ca3:  // fld dword ptr [0x5d8568]
    lpush(x, (long double)F32((uint32_t)(0x5d8568u)));
L_00546ca9:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_00546cab:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00546cae:  // lea ebx, [edi + 0x24]
    ebx = (uint32_t)((uint32_t)(edi + 0x24u));
L_00546cb1:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00546cb4:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00546cb7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546cb8:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_00546cbb:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00546cbe:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_00546cc5:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00546cc8:  // fsub dword ptr [0x5e50c8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5e50c8u)));
L_00546cce:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00546cd1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546cd2:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00546cd4:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546cd9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546cd9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00546cda:  // mov eax, dword ptr [0x5e50c8]
    eax = (uint32_t)(M32((uint32_t)(0x5e50c8u)));
L_00546cdf:  // lea edx, [esp + 0x54]
    edx = (uint32_t)((uint32_t)(esp + 0x54u));
L_00546ce3:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00546ce7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00546ce8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00546ce9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546cea:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00546cf1:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546cf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546cf6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00546cf8:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546cfdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546cfd:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00546cff:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_00546d01:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_00546d03:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00546d06:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00546d09:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00546d0c:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_00546d0f:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00546d12:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_00546d15:  // jmp 0x546d57
    goto L_00546d57;
L_00546d17:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00546d1b:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00546d1f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00546d21:  // lea ebx, [edi + 0x24]
    ebx = (uint32_t)((uint32_t)(edi + 0x24u));
L_00546d24:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00546d26:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00546d2a:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_00546d2d:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00546d31:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00546d34:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00546d37:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_00546d3b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00546d3d:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00546d3f:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_00546d43:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_00546d46:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_00546d4a:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00546d4d:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_00546d54:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00546d57:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_00546d59:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00546d5c:  // mov edx, dword ptr [esi + 4]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00546d5f:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_00546d63:  // mov ecx, dword ptr [esi + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00546d66:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00546d6a:  // mov eax, dword ptr [ebx + 4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_00546d6d:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_00546d71:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_00546d73:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_00546d77:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_00546d7a:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_00546d7e:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_00546d82:  // mov edx, dword ptr [ebx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_00546d85:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_00546d89:  // mov dword ptr [esp + 0x58], ecx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ecx);
L_00546d8d:  // mov ecx, dword ptr [ebp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_00546d90:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00546d91:  // mov dword ptr [esp + 0x60], edx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(edx);
L_00546d95:  // call 0x4885e0
    t0 = 0x004885e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546d9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546d9a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00546d9c:  // jl 0x5472cf
    if ((f.sf != f.of)) goto L_005472cf;
L_00546da2:  // mov ebp, dword ptr [esp + 0x34]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00546da6:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00546da8:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_00546dad:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00546daf:  // mov word ptr [ebp + 2], si
    M16((uint32_t)(ebp + 0x2u)) = (uint16_t)((esi & 0xffffu));
L_00546db3:  // mov word ptr [ebp], si
    M16((uint32_t)(ebp)) = (uint16_t)((esi & 0xffffu));
L_00546db7:  // mov edx, dword ptr [edi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_00546dba:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_00546dbd:  // cmp edx, esi
    t0 = lsub<32>(edx, esi, f);
L_00546dbf:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_00546dc3:  // jle 0x546dd9
    if ((f.zf || f.sf != f.of)) goto L_00546dd9;
L_00546dc5:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00546dc7:  // mov ebx, dword ptr [edi + 8]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00546dca:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00546dcb:  // mov dword ptr [ebx + edx + 8], esi
    M32((uint32_t)(ebx + edx + 0x8u)) = (uint32_t)(esi);
L_00546dcf:  // mov ebx, dword ptr [edi + 0xc]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_00546dd2:  // add edx, 0xc
    t0 = ladd<32>(edx, 0xcu, f);
    edx = (uint32_t)(t0);
L_00546dd5:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00546dd7:  // jl 0x546dc7
    if ((f.sf != f.of)) goto L_00546dc7;
L_00546dd9:  // mov edx, dword ptr [edi + 4]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00546ddc:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00546dde:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_00546de2:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_00546dea:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_00546dee:  // mov edi, dword ptr [esp + 0xec]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_00546df5:  // lea esi, [ecx + 0x41]
    esi = (uint32_t)((uint32_t)(ecx + 0x41u));
L_00546df8:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00546dfc:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00546dff:  // mov edx, dword ptr [edi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edi + 0xcu)));
L_00546e02:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_00546e05:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00546e09:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_00546e0d:  // mov dword ptr [esp + 0x40], esi
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(esi);
L_00546e11:  // mov esi, dword ptr [esp + 0x38]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00546e15:  // lea eax, [edx + eax*2]
    eax = (uint32_t)((uint32_t)(edx + eax * 2u));
L_00546e18:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00546e1a:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_00546e1e:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_00546e20:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_00546e23:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_00546e27:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_00546e2b:  // add esi, -3
    t0 = ladd<32>(esi, 0xfffffffdu, f);
    esi = (uint32_t)(t0);
L_00546e2e:  // jmp 0x546e38
    goto L_00546e38;
L_00546e30:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00546e34:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00546e38:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00546e3a:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_00546e3e:  // mov eax, dword ptr [edi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x18u)));
L_00546e41:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_00546e43:  // jl 0x547364
    if ((f.sf != f.of)) goto L_00547364;
L_00546e49:  // cmp edx, dword ptr [edi + 0x20]
    t0 = lsub<32>(edx, M32((uint32_t)(edi + 0x20u)), f);
L_00546e4c:  // jg 0x547364
    if ((!f.zf && f.sf == f.of)) goto L_00547364;
L_00546e52:  // cmp ebx, dword ptr [edi + 0x1c]
    t0 = lsub<32>(ebx, M32((uint32_t)(edi + 0x1cu)), f);
L_00546e55:  // jl 0x547364
    if ((f.sf != f.of)) goto L_00547364;
L_00546e5b:  // cmp ebx, dword ptr [edi + 0x24]
    t0 = lsub<32>(ebx, M32((uint32_t)(edi + 0x24u)), f);
L_00546e5e:  // jg 0x547364
    if ((!f.zf && f.sf == f.of)) goto L_00547364;
L_00546e64:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00546e68:  // mov ebx, dword ptr [esp + 0x38]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00546e6c:  // mov al, byte ptr [eax]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_00546e6e:  // cmp al, byte ptr [ebx]
    t0 = lsub<8>((eax & 0xffu), M8((uint32_t)(ebx)), f);
L_00546e70:  // jl 0x547364
    if ((f.sf != f.of)) goto L_00547364;
L_00546e76:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_00546e7a:  // mov bl, byte ptr [esi + 4]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x4u))) & 0xffu);
L_00546e7d:  // mov al, byte ptr [eax + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x1u))) & 0xffu);
L_00546e80:  // cmp al, bl
    t0 = lsub<8>((eax & 0xffu), (ebx & 0xffu), f);
L_00546e82:  // jg 0x547364
    if ((!f.zf && f.sf == f.of)) goto L_00547364;
L_00546e88:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_00546e8c:  // fadd dword ptr [esi + 7]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x7u)));
L_00546e8f:  // mov eax, dword ptr [0x8aa98c]
    eax = (uint32_t)(M32((uint32_t)(0x8aa98cu)));
L_00546e94:  // mov dword ptr [esp + 0x88], eax
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(eax);
L_00546e9b:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00546e9d:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00546e9f:  // sar eax, 3
    t0 = lsar<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_00546ea2:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00546ea4:  // imul ebx, eax
    t0 = limul32(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_00546ea7:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00546eab:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00546ead:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00546eb1:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00546eb5:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_00546eb9:  // mov dword ptr [esp + 0x64], ebx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(ebx);
L_00546ebd:  // fadd dword ptr [esp + 0x70]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x70u)));
L_00546ec1:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00546ec5:  // fild dword ptr [esp + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x64u)));
L_00546ec9:  // fcomp dword ptr [esp + 0x4c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x4cu)));
    lpop(x);
L_00546ecd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00546ecf:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00546ed2:  // jne 0x546edc
    if (!f.zf) goto L_00546edc;
L_00546ed4:  // fld dword ptr [0x5d8c44]
    lpush(x, (long double)F32((uint32_t)(0x5d8c44u)));
L_00546eda:  // jmp 0x546f1a
    goto L_00546f1a;
L_00546edc:  // mov eax, dword ptr [0x8aa99c]
    eax = (uint32_t)(M32((uint32_t)(0x8aa99cu)));
L_00546ee1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00546ee3:  // je 0x546eed
    if (f.zf) goto L_00546eed;
L_00546ee5:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_00546eeb:  // jmp 0x546ef0
    goto L_00546ef0;
L_00546eed:  // fld dword ptr [esi + 0xb]
    lpush(x, (long double)F32((uint32_t)(esi + 0xbu)));
L_00546ef0:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00546ef4:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00546ef6:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_00546efc:  // fild dword ptr [esp + 0x88]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x88u)));
L_00546f03:  // fadd st(2)
    ST(0) = (ST(0)) + (ST(2));
L_00546f05:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_00546f07:  // fstp st(1)
    ST(1) = ST(0);
    lpop(x);
L_00546f09:  // fcom dword ptr [0x5d8ba0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8ba0u)));
L_00546f0f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00546f11:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00546f14:  // jne 0x5472f2
    if (!f.zf) goto L_005472f2;
L_00546f1a:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00546f1e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00546f20:  // jne 0x546f38
    if (!f.zf) goto L_00546f38;
L_00546f22:  // lea eax, [ecx - 1]
    eax = (uint32_t)((uint32_t)(ecx + 0xffffffffu));
L_00546f25:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_00546f2d:  // mov word ptr [ebp + 2], ax
    M16((uint32_t)(ebp + 0x2u)) = (uint16_t)((eax & 0xffffu));
L_00546f31:  // mov word ptr [ebp], ax
    M16((uint32_t)(ebp)) = (uint16_t)((eax & 0xffffu));
L_00546f35:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_00546f38:  // fistp qword ptr [esp + 0x88]
    M64((uint32_t)(esp + 0x88u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00546f3f:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00546f46:  // cmp eax, 8
    t0 = lsub<32>(eax, 0x8u, f);
L_00546f49:  // jle 0x546f50
    if ((f.zf || f.sf != f.of)) goto L_00546f50;
L_00546f4b:  // mov eax, 8
    eax = (uint32_t)(0x8u);
L_00546f50:  // mov ebx, dword ptr [eax*4 + 0x650ae8]
    ebx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x650ae8u)));
L_00546f57:  // mov eax, dword ptr [esp + 0xf0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xf0u)));
L_00546f5e:  // movsx ecx, byte ptr [esi + 0x13]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esi + 0x13u))));
L_00546f62:  // mov edi, dword ptr [esp + 0x3c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00546f66:  // shl eax, 0xc
    t0 = lshl<32>(eax, 0xcu, f);
    eax = (uint32_t)(t0);
L_00546f69:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_00546f6b:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_00546f6d:  // jne 0x546f7c
    if (!f.zf) goto L_00546f7c;
L_00546f6f:  // mov edx, dword ptr [esi + 0xf]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xfu)));
L_00546f72:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00546f74:  // mov cx, word ptr [edx + 0x3c]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edx + 0x3cu))) & 0xffffu);
L_00546f78:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00546f7a:  // je 0x546fef
    if (f.zf) goto L_00546fef;
L_00546f7c:  // mov ecx, dword ptr [esi + 0xf]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xfu)));
L_00546f7f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00546f81:  // je 0x546f94
    if (f.zf) goto L_00546f94;
L_00546f83:  // mov word ptr [ecx + 0x3c], 0xffff
    M16((uint32_t)(ecx + 0x3cu)) = (uint16_t)(0xffffu);
L_00546f89:  // mov dword ptr [esi + 0xf], 0
    M32((uint32_t)(esi + 0xfu)) = (uint32_t)(0x0u);
L_00546f90:  // mov byte ptr [esi + 0x13], 0x9d
    M8((uint32_t)(esi + 0x13u)) = (uint8_t)(0x9du);
L_00546f94:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00546f96:  // and edi, 0xffff
    t0 = llog<32>(edi & 0xffffu, f);
    edi = (uint32_t)(t0);
L_00546f9c:  // mov edx, dword ptr [0x9c64d8]
    edx = (uint32_t)(M32((uint32_t)(0x9c64d8u)));
L_00546fa2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00546fa3:  // lea ecx, [edx + ebx*8]
    ecx = (uint32_t)((uint32_t)(edx + ebx * 8u));
L_00546fa6:  // call 0x550400
    t0 = 0x00550400u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546fabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546fab:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00546fad:  // jne 0x546fb8
    if (!f.zf) goto L_00546fb8;
L_00546faf:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00546fb0:  // js 0x5472e1
    if (f.sf) goto L_005472e1;
L_00546fb6:  // jmp 0x546f9c
    goto L_00546f9c;
L_00546fb8:  // mov ecx, dword ptr [esi + 0xb]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xbu)));
L_00546fbb:  // mov edx, 4
    edx = (uint32_t)(0x4u);
L_00546fc0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00546fc1:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00546fc3:  // sar edx, cl
    t0 = lsar<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_00546fc5:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00546fc9:  // mov dword ptr [esi + 0xf], eax
    M32((uint32_t)(esi + 0xfu)) = (uint32_t)(eax);
L_00546fcc:  // mov byte ptr [esi + 0x13], bl
    M8((uint32_t)(esi + 0x13u)) = (uint8_t)((ebx & 0xffu));
L_00546fcf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00546fd0:  // lea edx, [ecx*8]
    edx = (uint32_t)((uint32_t)(ecx * 8u));
L_00546fd7:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00546fdb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00546fdc:  // lea edx, [ecx*8]
    edx = (uint32_t)((uint32_t)(ecx * 8u));
L_00546fe3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00546fe5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00546fe6:  // call 0x48f2f0
    t0 = 0x0048f2f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00546febu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00546feb:  // inc dword ptr [esp + 0x60]
    t0 = linc<32>(M32((uint32_t)(esp + 0x60u)), f);
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(t0);
L_00546fef:  // mov edx, dword ptr [0x8aa95c]
    edx = (uint32_t)(M32((uint32_t)(0x8aa95cu)));
L_00546ff5:  // cmp edx, 3
    t0 = lsub<32>(edx, 0x3u, f);
L_00546ff8:  // jl 0x54712a
    if ((f.sf != f.of)) goto L_0054712a;
L_00546ffe:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_00547002:  // fcomp dword ptr [0x5e50f0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5e50f0u)));
    lpop(x);
L_00547008:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054700a:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054700d:  // je 0x54712a
    if (f.zf) goto L_0054712a;
L_00547013:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00547017:  // fsub dword ptr [0x5dbb64]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbb64u)));
L_0054701d:  // fst dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
L_00547021:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00547027:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00547029:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0054702c:  // je 0x547036
    if (f.zf) goto L_00547036;
L_0054702e:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00547036:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0054703a:  // fmul dword ptr [0x5db538]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db538u)));
L_00547040:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_00547044:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_00547048:  // fmul dword ptr [0x5db538]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db538u)));
L_0054704e:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_00547052:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00547054:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00547056:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00547058:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0054705a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0054705c:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_00547060:  // fcomp dword ptr [0x5e50ec]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5e50ecu)));
    lpop(x);
L_00547066:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00547068:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054706a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0054706d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054706f:  // je 0x547123
    if (f.zf) goto L_00547123;
L_00547075:  // cmp edx, 3
    t0 = lsub<32>(edx, 0x3u, f);
L_00547078:  // jle 0x54711c
    if ((f.zf || f.sf != f.of)) goto L_0054711c;
L_0054707e:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00547082:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00547085:  // cmp ecx, 3
    t0 = lsub<32>(ecx, 0x3u, f);
L_00547088:  // jle 0x54711c
    if ((f.zf || f.sf != f.of)) goto L_0054711c;
L_0054708e:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_00547092:  // fmul dword ptr [0x5dbe34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe34u)));
L_00547098:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_0054709c:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_005470a0:  // fmul dword ptr [0x5dbe34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe34u)));
L_005470a6:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_005470aa:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005470ac:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_005470ae:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_005470b0:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_005470b2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005470b4:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_005470b8:  // fcomp dword ptr [0x5e50e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5e50e8u)));
    lpop(x);
L_005470be:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_005470c0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005470c2:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_005470c5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005470c7:  // je 0x54711c
    if (f.zf) goto L_0054711c;
L_005470c9:  // cmp edx, 4
    t0 = lsub<32>(edx, 0x4u, f);
L_005470cc:  // jle 0x547115
    if ((f.zf || f.sf != f.of)) goto L_00547115;
L_005470ce:  // cmp ecx, 4
    t0 = lsub<32>(ecx, 0x4u, f);
L_005470d1:  // jle 0x547115
    if ((f.zf || f.sf != f.of)) goto L_00547115;
L_005470d3:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_005470d7:  // fmul dword ptr [0x5db4e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4e8u)));
L_005470dd:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_005470e1:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_005470e5:  // fmul dword ptr [0x5db4e8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4e8u)));
L_005470eb:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_005470ef:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_005470f1:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_005470f3:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_005470f5:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_005470f7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_005470f9:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_005470fd:  // fcomp dword ptr [0x5d8c50]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8c50u)));
    lpop(x);
L_00547103:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00547105:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00547107:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0054710a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054710c:  // je 0x547115
    if (f.zf) goto L_00547115;
L_0054710e:  // mov eax, 4
    eax = (uint32_t)(0x4u);
L_00547113:  // jmp 0x54712c
    goto L_0054712c;
L_00547115:  // mov eax, 3
    eax = (uint32_t)(0x3u);
L_0054711a:  // jmp 0x54712c
    goto L_0054712c;
L_0054711c:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_00547121:  // jmp 0x54712c
    goto L_0054712c;
L_00547123:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00547128:  // jmp 0x54712c
    goto L_0054712c;
L_0054712a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054712c:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00547130:  // mov bx, word ptr [esp + 0x3c]
    ebx = (ebx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x3cu))) & 0xffffu);
L_00547135:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_00547138:  // mov edx, dword ptr [edx + 8]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0054713b:  // mov edi, dword ptr [edx + ecx*4]
    edi = (uint32_t)(M32((uint32_t)(edx + ecx * 4u)));
L_0054713e:  // lea ecx, [edx + ecx*4]
    ecx = (uint32_t)((uint32_t)(edx + ecx * 4u));
L_00547141:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00547144:  // mov word ptr [edi + edx*2], bx
    M16((uint32_t)(edi + edx * 2u)) = (uint16_t)((ebx & 0xffffu));
L_00547148:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_0054714b:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0054714c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054714e:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00547151:  // je 0x5471c0
    if (f.zf) goto L_005471c0;
L_00547153:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_00547157:  // mov edi, dword ptr [esp + 0x3c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0054715b:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0054715e:  // and edi, 0xffff
    t0 = llog<32>(edi & 0xffffu, f);
    edi = (uint32_t)(t0);
L_00547164:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00547166:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_00547169:  // mov cl, byte ptr [eax + edx - 0x1c]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + edx + 0xffffffe4u))) & 0xffu);
L_0054716d:  // lea edx, [eax + edx - 0x50]
    edx = (uint32_t)((uint32_t)(eax + edx + 0xffffffb0u));
L_00547171:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00547173:  // mov ax, word ptr [edx + 0x4a]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edx + 0x4au))) & 0xffffu);
L_00547177:  // and eax, edi
    t0 = llog<32>(eax & edi, f);
    eax = (uint32_t)(t0);
L_00547179:  // shr eax, cl
    t0 = lshr<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_0054717b:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0054717d:  // mov cx, word ptr [edx + 0x48]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edx + 0x48u))) & 0xffffu);
L_00547181:  // and ecx, edi
    t0 = llog<32>(ecx & edi, f);
    ecx = (uint32_t)(t0);
L_00547183:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00547185:  // mov ecx, dword ptr [edx + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x40u)));
L_00547188:  // lea edi, [ecx + eax*2]
    edi = (uint32_t)((uint32_t)(ecx + eax * 2u));
L_0054718b:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0054718f:  // mov ax, word ptr [edi]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edi))) & 0xffffu);
L_00547192:  // cmp cx, ax
    t0 = lsub<16>((ecx & 0xffffu), (eax & 0xffffu), f);
L_00547195:  // je 0x5471c0
    if (f.zf) goto L_005471c0;
L_00547197:  // and ax, 0x7fff
    t0 = llog<16>((eax & 0xffffu) & 0x7fffu, f);
    eax = (eax & 0xffff0000u) | ((uint32_t)(t0) & 0xffffu);
L_0054719b:  // mov word ptr [edi], cx
    M16((uint32_t)(edi)) = (uint16_t)((ecx & 0xffffu));
L_0054719e:  // cmp ax, cx
    t0 = lsub<16>((eax & 0xffffu), (ecx & 0xffffu), f);
L_005471a1:  // sete al
    eax = (eax & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_005471a4:  // mov byte ptr [esp + 0x84], al
    M8((uint32_t)(esp + 0x84u)) = (uint8_t)((eax & 0xffu));
L_005471ab:  // mov eax, dword ptr [esp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_005471b2:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_005471b7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005471b8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005471b9:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_005471bb:  // call 0x48e880
    t0 = 0x0048e880u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005471c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005471c0:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005471c4:  // mov byte ptr [esi + 0x14], 6
    M8((uint32_t)(esi + 0x14u)) = (uint8_t)(0x6u);
L_005471c8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005471ca:  // je 0x5471e7
    if (f.zf) goto L_005471e7;
L_005471cc:  // movsx ecx, byte ptr [esi - 1]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esi + 0xffffffffu))));
L_005471d0:  // movsx eax, byte ptr [esi + 0x13]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esi + 0x13u))));
L_005471d4:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_005471d6:  // js 0x5471e7
    if (f.sf) goto L_005471e7;
L_005471d8:  // mov dl, byte ptr [esi]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi))) & 0xffu);
L_005471da:  // and dl, 0xfd
    t0 = llog<8>((edx & 0xffu) & 0xfdu, f);
    edx = (edx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_005471dd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005471df:  // mov byte ptr [esi], dl
    M8((uint32_t)(esi)) = (uint8_t)((edx & 0xffu));
L_005471e1:  // je 0x5471e7
    if (f.zf) goto L_005471e7;
L_005471e3:  // or byte ptr [esi + 0x14], 8
    t0 = llog<8>(M8((uint32_t)(esi + 0x14u)) | 0x8u, f);
    M8((uint32_t)(esi + 0x14u)) = (uint8_t)(t0);
L_005471e7:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_005471eb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005471ed:  // je 0x547215
    if (f.zf) goto L_00547215;
L_005471ef:  // movsx edx, byte ptr [esi - 0x4ed]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esi + 0xfffffb13u))));
L_005471f6:  // movsx eax, byte ptr [esi + 0x13]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esi + 0x13u))));
L_005471fa:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_005471fc:  // js 0x547215
    if (f.sf) goto L_00547215;
L_005471fe:  // mov dl, byte ptr [esi - 0x4ec]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0xfffffb14u))) & 0xffu);
L_00547204:  // and dl, 0xfb
    t0 = llog<8>((edx & 0xffu) & 0xfbu, f);
    edx = (edx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_00547207:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00547209:  // mov byte ptr [esi - 0x4ec], dl
    M8((uint32_t)(esi + 0xfffffb14u)) = (uint8_t)((edx & 0xffu));
L_0054720f:  // je 0x547215
    if (f.zf) goto L_00547215;
L_00547211:  // or byte ptr [esi + 0x14], 1
    t0 = llog<8>(M8((uint32_t)(esi + 0x14u)) | 0x1u, f);
    M8((uint32_t)(esi + 0x14u)) = (uint8_t)(t0);
L_00547215:  // mov edi, dword ptr [esp + 0xec]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_0054721c:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00547220:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00547224:  // mov ebx, dword ptr [esp + 0x40]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00547228:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0054722c:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00547230:  // fadd dword ptr [0x5d8c44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c44u)));
L_00547236:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00547237:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00547238:  // mov dword ptr [esp + 0x40], ebx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ebx);
L_0054723c:  // mov ebx, dword ptr [esp + 0x38]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00547240:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00547243:  // add ebx, 0x14
    t0 = ladd<32>(ebx, 0x14u, f);
    ebx = (uint32_t)(t0);
L_00547246:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0054724a:  // add esi, 0x14
    t0 = ladd<32>(esi, 0x14u, f);
    esi = (uint32_t)(t0);
L_0054724d:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0054724e:  // cmp edx, 0x40
    t0 = lsub<32>(edx, 0x40u, f);
L_00547251:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_00547255:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_00547259:  // mov dword ptr [esp + 0x38], ebx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ebx);
L_0054725d:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_00547261:  // jl 0x546e30
    if ((f.sf != f.of)) goto L_00546e30;
L_00547267:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054726b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0054726d:  // jne 0x547285
    if (!f.zf) goto L_00547285;
L_0054726f:  // lea eax, [ecx - 2]
    eax = (uint32_t)((uint32_t)(ecx + 0xfffffffeu));
L_00547272:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_0054727a:  // mov word ptr [ebp + 2], ax
    M16((uint32_t)(ebp + 0x2u)) = (uint16_t)((eax & 0xffffu));
L_0054727e:  // mov word ptr [ebp], ax
    M16((uint32_t)(ebp)) = (uint16_t)((eax & 0xffffu));
L_00547282:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_00547285:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00547289:  // fadd dword ptr [0x5d8c44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8c44u)));
L_0054728f:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00547293:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00547294:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00547295:  // mov dword ptr [esp + 0x30], ecx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ecx);
L_00547299:  // cmp ebx, 0x40
    t0 = lsub<32>(ebx, 0x40u, f);
L_0054729c:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_005472a0:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_005472a4:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_005472a8:  // fsub dword ptr [0x5d8c28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8c28u)));
L_005472ae:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_005472b2:  // jl 0x546dee
    if ((f.sf != f.of)) goto L_00546dee;
L_005472b8:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005472bc:  // mov eax, dword ptr [esp + 0x6c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_005472c0:  // sub ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_005472c2:  // mov ecx, dword ptr [eax + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x2cu)));
L_005472c5:  // sar ebp, 1
    t0 = lsar<32>(ebp, 0x1u, f);
    ebp = (uint32_t)(t0);
L_005472c7:  // mov dword ptr [eax + 0x34], ebp
    M32((uint32_t)(eax + 0x34u)) = (uint32_t)(ebp);
L_005472ca:  // call 0x4883f0
    t0 = 0x004883f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005472cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005472cf:  // call 0x48e7c0
    t0 = 0x0048e7c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005472d4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005472d4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005472d5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005472d6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005472d7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005472d8:  // add esp, 0xd8
    t0 = ladd<32>(esp, 0xd8u, f);
    esp = (uint32_t)(t0);
L_005472de:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_005472e1:  // mov edi, dword ptr [esp + 0xec]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xecu)));
L_005472e8:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_005472ec:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005472f0:  // jmp 0x5472f4
    goto L_005472f4;
L_005472f2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_005472f4:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_005472f8:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_005472fb:  // je 0x54732f
    if (f.zf) goto L_0054732f;
L_005472fd:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_005472fe:  // jne 0x54733f
    if (!f.zf) goto L_0054733f;
L_00547300:  // lea eax, [ecx - 1]
    eax = (uint32_t)((uint32_t)(ecx + 0xffffffffu));
L_00547303:  // mov word ptr [ebp + 8], cx
    M16((uint32_t)(ebp + 0x8u)) = (uint16_t)((ecx & 0xffffu));
L_00547307:  // mov word ptr [ebp + 4], ax
    M16((uint32_t)(ebp + 0x4u)) = (uint16_t)((eax & 0xffffu));
L_0054730b:  // mov word ptr [ebp + 2], ax
    M16((uint32_t)(ebp + 0x2u)) = (uint16_t)((eax & 0xffffu));
L_0054730f:  // mov word ptr [ebp], ax
    M16((uint32_t)(ebp)) = (uint16_t)((eax & 0xffffu));
L_00547313:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_00547317:  // mov word ptr [ebp + 0xa], ax
    M16((uint32_t)(ebp + 0xau)) = (uint16_t)((eax & 0xffffu));
L_0054731b:  // add ebp, 0xc
    t0 = ladd<32>(ebp, 0xcu, f);
    ebp = (uint32_t)(t0);
L_0054731e:  // lea ebx, [eax - 1]
    ebx = (uint32_t)((uint32_t)(eax + 0xffffffffu));
L_00547321:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00547329:  // mov word ptr [ebp - 6], bx
    M16((uint32_t)(ebp + 0xfffffffau)) = (uint16_t)((ebx & 0xffffu));
L_0054732d:  // jmp 0x54733f
    goto L_0054733f;
L_0054732f:  // mov ax, word ptr [esp + 0x40]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esp + 0x40u))) & 0xffffu);
L_00547334:  // mov word ptr [ebp], cx
    M16((uint32_t)(ebp)) = (uint16_t)((ecx & 0xffffu));
L_00547338:  // mov word ptr [ebp + 2], ax
    M16((uint32_t)(ebp + 0x2u)) = (uint16_t)((eax & 0xffffu));
L_0054733c:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_0054733f:  // mov eax, dword ptr [esi + 0xf]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xfu)));
L_00547342:  // mov byte ptr [esi + 0x13], 0xff
    M8((uint32_t)(esi + 0x13u)) = (uint8_t)(0xffu);
L_00547346:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00547348:  // je 0x547224
    if (f.zf) goto L_00547224;
L_0054734e:  // mov word ptr [eax + 0x3c], 0xffff
    M16((uint32_t)(eax + 0x3cu)) = (uint16_t)(0xffffu);
L_00547354:  // mov dword ptr [esi + 0xf], 0
    M32((uint32_t)(esi + 0xfu)) = (uint32_t)(0x0u);
L_0054735b:  // mov byte ptr [esi + 0x13], 0x9d
    M8((uint32_t)(esi + 0x13u)) = (uint8_t)(0x9du);
L_0054735f:  // jmp 0x547224
    goto L_00547224;
L_00547364:  // mov eax, dword ptr [esi + 0xf]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xfu)));
L_00547367:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00547369:  // je 0x547378
    if (f.zf) goto L_00547378;
L_0054736b:  // mov word ptr [eax + 0x3c], 0xffff
    M16((uint32_t)(eax + 0x3cu)) = (uint16_t)(0xffffu);
L_00547371:  // mov dword ptr [esi + 0xf], 0
    M32((uint32_t)(esi + 0xfu)) = (uint32_t)(0x0u);
L_00547378:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054737c:  // mov byte ptr [esi + 0x13], 0x9d
    M8((uint32_t)(esi + 0x13u)) = (uint8_t)(0x9du);
L_00547380:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00547382:  // jne 0x547224
    if (!f.zf) goto L_00547224;
L_00547388:  // lea eax, [ecx - 1]
    eax = (uint32_t)((uint32_t)(ecx + 0xffffffffu));
L_0054738b:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_00547393:  // mov word ptr [ebp + 2], ax
    M16((uint32_t)(ebp + 0x2u)) = (uint16_t)((eax & 0xffffu));
L_00547397:  // mov word ptr [ebp], ax
    M16((uint32_t)(ebp)) = (uint16_t)((eax & 0xffffu));
L_0054739b:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_0054739e:  // jmp 0x547224
    goto L_00547224;
}

LIFT_FUNCTION(0x00546b40, 00546b40)
