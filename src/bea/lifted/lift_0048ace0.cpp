// lifted from 0048ace0 (FUN_0048ace0, 477 bytes, 149 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0048ace0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0048ace0;
L_0048ace0:  // sub esp, 0x28
    t0 = lsub<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0048ace3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048ace4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ace5:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0048ace7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048ace8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048ace9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048aceb:  // lea edi, [ebp + 0x44]
    edi = (uint32_t)((uint32_t)(ebp + 0x44u));
L_0048acee:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048acf0:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048acf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048acf5:  // mov eax, dword ptr [ebp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_0048acf8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0048acfd:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_0048ad00:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0048ad03:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_0048ad05:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0048ad07:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_0048ad09:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0048ad0c:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_0048ad0f:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0048ad12:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_0048ad15:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0048ad18:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_0048ad1b:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0048ad20:  // call 0x491ea0
    t0 = 0x00491ea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ad25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ad25:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0048ad27:  // mov dword ptr [esp + 0x10], 0x497423f0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x497423f0u);
L_0048ad2f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048ad31:  // je 0x48aeb5
    if (f.zf) goto L_0048aeb5;
L_0048ad37:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048ad39:  // call 0x492c90
    t0 = 0x00492c90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ad3eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ad3e:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048ad40:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048ad42:  // je 0x48aea3
    if (f.zf) goto L_0048aea3;
L_0048ad48:  // mov eax, dword ptr [ebp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x18u)));
L_0048ad4b:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0048ad4d:  // je 0x48aea3
    if (f.zf) goto L_0048aea3;
L_0048ad53:  // mov ecx, dword ptr [esi + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0048ad56:  // test ecx, 0x20800
    t0 = llog<32>(ecx & 0x20800u, f);
L_0048ad5c:  // je 0x48ae07
    if (f.zf) goto L_0048ae07;
L_0048ad62:  // mov edx, dword ptr [esi + 0x138]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_0048ad68:  // cmp edx, dword ptr [eax + 0x138]
    t0 = lsub<32>(edx, M32((uint32_t)(eax + 0x138u)), f);
L_0048ad6e:  // je 0x48ae07
    if (f.zf) goto L_0048ae07;
L_0048ad74:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_0048ad77:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_0048ad7a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048ad7c:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0048ad80:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_0048ad83:  // fsub dword ptr [eax + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x20u)));
L_0048ad86:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0048ad8a:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_0048ad8d:  // fsub dword ptr [eax + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x24u)));
L_0048ad90:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_0048ad92:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0048ad96:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ad99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ad99:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0048ad9d:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0048ada1:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0048ada3:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0048ada5:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0048ada9:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0048adad:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048adaf:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0048adb1:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0048adb3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048adb5:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0048adb7:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0048adb9:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0048adbb:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0048adbf:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048adc1:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048adc3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048adc5:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0048adc9:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_0048adcd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048adcf:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048add2:  // je 0x48aea3
    if (f.zf) goto L_0048aea3;
L_0048add8:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0048addc:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0048ade2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048ade4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048ade7:  // je 0x48aea3
    if (f.zf) goto L_0048aea3;
L_0048aded:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048adee:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048adf0:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048adf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048adf5:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048adf9:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_0048adfe:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0048ae02:  // jmp 0x48aea3
    goto L_0048aea3;
L_0048ae07:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_0048ae09:  // jne 0x48aea3
    if (!f.zf) goto L_0048aea3;
L_0048ae0f:  // test ch, 0x40
    t0 = llog<8>(((ecx >> 8) & 0xffu) & 0x40u, f);
L_0048ae12:  // je 0x48aea3
    if (f.zf) goto L_0048aea3;
L_0048ae18:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_0048ae1c:  // jne 0x48aea3
    if (!f.zf) goto L_0048aea3;
L_0048ae22:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_0048ae25:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_0048ae28:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0048ae2a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048ae2c:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0048ae30:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_0048ae33:  // fsub dword ptr [eax + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x20u)));
L_0048ae36:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0048ae3a:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_0048ae3d:  // fsub dword ptr [eax + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x24u)));
L_0048ae40:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0048ae44:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ae47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ae47:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0048ae4b:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_0048ae4f:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_0048ae53:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_0048ae57:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0048ae59:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0048ae5b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048ae5d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0048ae5f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0048ae61:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048ae63:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0048ae65:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0048ae67:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0048ae69:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0048ae6d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048ae6f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048ae71:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048ae73:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0048ae77:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_0048ae7b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048ae7d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048ae80:  // je 0x48aea3
    if (f.zf) goto L_0048aea3;
L_0048ae82:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0048ae86:  // fcomp dword ptr [0x5dbfd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbfd0u)));
    lpop(x);
L_0048ae8c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048ae8e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048ae91:  // je 0x48aea3
    if (f.zf) goto L_0048aea3;
L_0048ae93:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048ae94:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048ae96:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048ae9bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048ae9b:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048ae9f:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0048aea3:  // mov ecx, 0x704200
    ecx = (uint32_t)(0x704200u);
L_0048aea8:  // call 0x492020
    t0 = 0x00492020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048aeadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048aead:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048aeaf:  // jne 0x48ad37
    if (!f.zf) goto L_0048ad37;
L_0048aeb5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048aeb6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048aeb7:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048aeb8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048aeb9:  // add esp, 0x28
    t0 = ladd<32>(esp, 0x28u, f);
    esp = (uint32_t)(t0);
L_0048aebc:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0048ace0, 0048ace0)
