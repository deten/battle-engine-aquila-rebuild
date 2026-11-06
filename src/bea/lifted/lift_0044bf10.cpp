// lifted from 0044bf10 (vslot39, 479 bytes, 152 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0044bf10(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0044bf10;
L_0044bf10:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044bf13:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0044bf14:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0044bf15:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044bf16:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0044bf18:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044bf19:  // fld dword ptr [esi + 0x7c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x7cu)));
L_0044bf1c:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0044bf22:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044bf24:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044bf27:  // jne 0x44c0e5
    if (!f.zf) goto L_0044c0e5;
L_0044bf2d:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_0044bf33:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0044bf37:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0044bf39:  // cmp dword ptr [eax + 0x44], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x44u)), ebx, f);
L_0044bf3c:  // je 0x44bf58
    if (f.zf) goto L_0044bf58;
L_0044bf3e:  // test byte ptr [edi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x10u, f);
L_0044bf42:  // je 0x44bf58
    if (f.zf) goto L_0044bf58;
L_0044bf44:  // mov ecx, dword ptr [edi + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x138u)));
L_0044bf4a:  // mov eax, dword ptr [esi + 0x8c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8cu)));
L_0044bf50:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0044bf52:  // je 0x44c0e5
    if (f.zf) goto L_0044c0e5;
L_0044bf58:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0044bf5c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0044bf5e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0044bf5f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044bf60:  // call 0x4f4480
    t0 = 0x004f4480u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044bf65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044bf65:  // fld dword ptr [esi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esi + 0x1cu)));
L_0044bf68:  // fsub dword ptr [edi + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x1cu)));
L_0044bf6b:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_0044bf6e:  // fsub dword ptr [edi + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x20u)));
L_0044bf71:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_0044bf74:  // fsub dword ptr [edi + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(edi + 0x24u)));
L_0044bf77:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0044bf79:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0044bf7b:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0044bf7d:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0044bf7f:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0044bf81:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0044bf83:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0044bf85:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0044bf87:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0044bf89:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_0044bf8d:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0044bf91:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0044bf93:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0044bf95:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_0044bf97:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0044bf99:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0044bf9b:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0044bf9f:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044bfa2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044bfa2:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_0044bfa6:  // test byte ptr [edi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x10u, f);
L_0044bfaa:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0044bfae:  // je 0x44bfcd
    if (f.zf) goto L_0044bfcd;
L_0044bfb0:  // cmp dword ptr [edi + 0x178], ebx
    t0 = lsub<32>(M32((uint32_t)(edi + 0x178u)), ebx, f);
L_0044bfb6:  // je 0x44bfcd
    if (f.zf) goto L_0044bfcd;
L_0044bfb8:  // cmp dword ptr [ebp], ebx
    t0 = lsub<32>(M32((uint32_t)(ebp)), ebx, f);
L_0044bfbb:  // je 0x44bfcd
    if (f.zf) goto L_0044bfcd;
L_0044bfbd:  // cmp dword ptr [ebp + 0x80], ebx
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x80u)), ebx, f);
L_0044bfc3:  // jle 0x44bfcd
    if ((f.zf || f.sf != f.of)) goto L_0044bfcd;
L_0044bfc5:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_0044bfcd:  // lea ebx, [ebp + 0xac]
    ebx = (uint32_t)((uint32_t)(ebp + 0xacu));
L_0044bfd3:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0044bfd7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044bfd9:  // je 0x44bfec
    if (f.zf) goto L_0044bfec;
L_0044bfdb:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_0044bfe1:  // fadd dword ptr [ebx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx)));
L_0044bfe3:  // mov ecx, dword ptr [ebx - 0x44]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xffffffbcu)));
L_0044bfe6:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0044bfea:  // jmp 0x44bfef
    goto L_0044bfef;
L_0044bfec:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0044bfef:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0044bff3:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0044bff9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044bffb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0044bffe:  // je 0x44c008
    if (f.zf) goto L_0044c008;
L_0044c000:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0044c008:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0044c00c:  // fcomp dword ptr [esi + 0x7c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x7cu)));
    lpop(x);
L_0044c00f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044c011:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044c014:  // je 0x44c0c1
    if (f.zf) goto L_0044c0c1;
L_0044c01a:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_0044c020:  // fcomp dword ptr [0x5d8cc0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8cc0u)));
    lpop(x);
L_0044c026:  // movsx ebp, byte ptr [edi + 0x2c]
    ebp = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(edi + 0x2cu))));
L_0044c02a:  // and ebp, 4
    t0 = llog<32>(ebp & 0x4u, f);
    ebp = (uint32_t)(t0);
L_0044c02d:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044c02f:  // shr ebp, 2
    t0 = lshr<32>(ebp, 0x2u, f);
    ebp = (uint32_t)(t0);
L_0044c032:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044c035:  // jne 0x44c069
    if (!f.zf) goto L_0044c069;
L_0044c037:  // mov eax, dword ptr [esi + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_0044c03d:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0044c03f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044c040:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0044c042:  // fild dword ptr [eax + 0x40]
    lpush(x, (long double)(int32_t)M32((uint32_t)(eax + 0x40u)));
L_0044c045:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044c046:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044c047:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0044c049:  // fdivr dword ptr [eax + 0x38]
    ST(0) = ((long double)F32((uint32_t)(eax + 0x38u))) / (ST(0));
L_0044c04c:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_0044c052:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0044c056:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0044c058:  // fdiv dword ptr [esi + 0x80]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esi + 0x80u)));
L_0044c05e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0044c061:  // call dword ptr [edx + 0xa0]
    t0 = M32((uint32_t)(edx + 0xa0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044c067u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044c067:  // jmp 0x44c094
    goto L_0044c094;
L_0044c069:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_0044c06f:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0044c073:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044c074:  // mov ecx, dword ptr [esi + 0x84]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x84u)));
L_0044c07a:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0044c07c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0044c07e:  // fmul dword ptr [ecx + 0x38]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x38u)));
L_0044c081:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044c082:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044c083:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0044c085:  // fdiv dword ptr [esi + 0x80]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esi + 0x80u)));
L_0044c08b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0044c08e:  // call dword ptr [eax + 0xa0]
    t0 = M32((uint32_t)(eax + 0xa0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044c094u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044c094:  // mov ecx, dword ptr [esi + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x90u)));
L_0044c09a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0044c09c:  // je 0x44c0bd
    if (f.zf) goto L_0044c0bd;
L_0044c09e:  // test byte ptr [ecx + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(ecx + 0x34u)) & 0x10u, f);
L_0044c0a2:  // je 0x44c0bd
    if (f.zf) goto L_0044c0bd;
L_0044c0a4:  // test byte ptr [edi + 0x34], 0x10
    t0 = llog<8>(M8((uint32_t)(edi + 0x34u)) & 0x10u, f);
L_0044c0a8:  // je 0x44c0bd
    if (f.zf) goto L_0044c0bd;
L_0044c0aa:  // test byte ptr [edi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(edi + 0x2cu)) & 0x4u, f);
L_0044c0ae:  // je 0x44c0bd
    if (f.zf) goto L_0044c0bd;
L_0044c0b0:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0044c0b2:  // jne 0x44c0bd
    if (!f.zf) goto L_0044c0bd;
L_0044c0b4:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0044c0b6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044c0b7:  // call dword ptr [edx + 0x194]
    t0 = M32((uint32_t)(edx + 0x194u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044c0bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044c0bd:  // mov ebp, dword ptr [esp + 0x20]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0044c0c1:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0044c0c5:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0044c0c9:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0044c0ca:  // add ebx, 4
    t0 = ladd<32>(ebx, 0x4u, f);
    ebx = (uint32_t)(t0);
L_0044c0cd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0044c0cf:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0044c0d3:  // je 0x44c0e5
    if (f.zf) goto L_0044c0e5;
L_0044c0d5:  // mov ecx, dword ptr [ebp + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x80u)));
L_0044c0db:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0044c0dd:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0044c0df:  // jg 0x44bfd3
    if ((!f.zf && f.sf == f.of)) goto L_0044bfd3;
L_0044c0e5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044c0e6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044c0e7:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0044c0e8:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0044c0e9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0044c0ec:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0044bf10, 0044bf10)
