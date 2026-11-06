// lifted from 00442f60 (vslot10, 1153 bytes, 334 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00442f60(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00442f60;
L_00442f60:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00442f66:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00442f68:  // push 0x5d20fb
    t0 = 0x5d20fbu; esp -= 4; M32(esp) = t0;
L_00442f6d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00442f6e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00442f75:  // sub esp, 0x94
    t0 = lsub<32>(esp, 0x94u, f);
    esp = (uint32_t)(t0);
L_00442f7b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00442f7c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00442f7d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00442f7e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00442f7f:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_00442f81:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00442f83:  // mov eax, dword ptr [edi + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x3cu)));
L_00442f86:  // mov eax, dword ptr [eax + 0x10]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_00442f89:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_00442f8c:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_00442f8e:  // je 0x4433c8
    if (f.zf) goto L_004433c8;
L_00442f94:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00442f96:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442f99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442f99:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00442f9b:  // je 0x4433c8
    if (f.zf) goto L_004433c8;
L_00442fa1:  // mov ecx, dword ptr [edi + 8]
    ecx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_00442fa4:  // mov edx, dword ptr [eax + 0x160]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x160u)));
L_00442faa:  // mov ebx, dword ptr [edx + ecx*4]
    ebx = (uint32_t)(M32((uint32_t)(edx + ecx * 4u)));
L_00442fad:  // cmp ebx, ebp
    t0 = lsub<32>(ebx, ebp, f);
L_00442faf:  // je 0x4433c8
    if (f.zf) goto L_004433c8;
L_00442fb5:  // mov eax, dword ptr [edi + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x3cu)));
L_00442fb8:  // push 0x623b94
    t0 = 0x623b94u; esp -= 4; M32(esp) = t0;
L_00442fbd:  // mov eax, dword ptr [eax + 0x10]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_00442fc0:  // mov ecx, dword ptr [eax + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x164u)));
L_00442fc6:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_00442fca:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_00442fcf:  // call 0x4cd7a0
    t0 = 0x004cd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442fd4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442fd4:  // fld dword ptr [edi + 0x34]
    lpush(x, (long double)F32((uint32_t)(edi + 0x34u)));
L_00442fd7:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_00442fdd:  // mov edx, dword ptr [edi + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x3cu)));
L_00442fe0:  // mov dword ptr [esp + 0x50], eax
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(eax);
L_00442fe4:  // mov eax, dword ptr [edx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x10u)));
L_00442fe7:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00442feb:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00442fef:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00442ff1:  // mov dword ptr [esp + 0x48], esi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(esi);
L_00442ff5:  // je 0x442ffc
    if (f.zf) goto L_00442ffc;
L_00442ff7:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_00442ffa:  // jmp 0x442ffe
    goto L_00442ffe;
L_00442ffc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00442ffe:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00442fff:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00443001:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00443005:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00443006:  // lea edx, [esp + 0x80]
    edx = (uint32_t)((uint32_t)(esp + 0x80u));
L_0044300d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044300e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0044300f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00443010:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00443011:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00443012:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00443013:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00443015:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044301au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044301a:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_0044301c:  // mov dword ptr [esp + 0x1c], ebp
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebp);
L_00443020:  // jle 0x4433c8
    if ((f.zf || f.sf != f.of)) goto L_004433c8;
L_00443026:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0044302c:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00443031u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00443031:  // mov ecx, dword ptr [ebx + 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xfcu)));
L_00443037:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_0044303c:  // jns 0x443045
    if (!f.sf) goto L_00443045;
L_0044303e:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044303f:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00443044:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00443045:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00443049:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0044304d:  // fmul dword ptr [ecx + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x10u)));
L_00443050:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_00443056:  // fsub dword ptr [ecx + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x10u)));
L_00443059:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0044305f:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00443063:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00443068u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00443068:  // mov ecx, dword ptr [ebx + 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xfcu)));
L_0044306e:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00443073:  // jns 0x44307c
    if (!f.sf) goto L_0044307c;
L_00443075:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00443076:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_0044307b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0044307c:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00443080:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00443084:  // fmul dword ptr [ecx + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x14u)));
L_00443087:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_0044308d:  // fsub dword ptr [ecx + 0x14]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x14u)));
L_00443090:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_00443096:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0044309a:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044309fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044309f:  // mov ecx, dword ptr [ebx + 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0xfcu)));
L_004430a5:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004430aa:  // jns 0x4430b3
    if (!f.sf) goto L_004430b3;
L_004430ac:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004430ad:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004430b2:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004430b3:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004430b7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004430b8:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004430bc:  // fmul dword ptr [ecx + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0x18u)));
L_004430bf:  // fmul dword ptr [0x5d8de4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8de4u)));
L_004430c5:  // fsub dword ptr [ecx + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ecx + 0x18u)));
L_004430c8:  // fadd dword ptr [ecx + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x8u)));
L_004430cb:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004430cf:  // fadd dword ptr [ecx + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x4u)));
L_004430d2:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004430d6:  // fadd dword ptr [ecx]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx)));
L_004430d8:  // fld dword ptr [esp + 0x98]
    lpush(x, (long double)F32((uint32_t)(esp + 0x98u)));
L_004430df:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004430e1:  // fld dword ptr [esp + 0x9c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x9cu)));
L_004430e8:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004430ea:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004430ec:  // fld dword ptr [esp + 0xa0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xa0u)));
L_004430f3:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004430f5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004430f7:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004430fa:  // fld dword ptr [esp + 0x88]
    lpush(x, (long double)F32((uint32_t)(esp + 0x88u)));
L_00443101:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00443103:  // fld dword ptr [esp + 0x8c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8cu)));
L_0044310a:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_0044310c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044310d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0044310f:  // fld dword ptr [esp + 0x94]
    lpush(x, (long double)F32((uint32_t)(esp + 0x94u)));
L_00443116:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_00443118:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0044311a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0044311d:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_00443124:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00443126:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_0044312d:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_0044312f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00443130:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_00443134:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00443136:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_0044313d:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0044313f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00443141:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00443144:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00443146:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00443148:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0044314a:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044314fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044314f:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_00443153:  // fadd dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00443157:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00443158:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0044315b:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0044315f:  // fadd dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x6cu)));
L_00443163:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00443164:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00443167:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0044316b:  // fadd dword ptr [esp + 0x6c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x6cu)));
L_0044316f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00443170:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_00443174:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00443177:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044317cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044317c:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_00443180:  // mov dword ptr [esp + 0x24], ebp
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebp);
L_00443184:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00443189u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00443189:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0044318d:  // mov dword ptr [esp + 0xac], ebp
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(ebp);
L_00443194:  // cmp dword ptr [eax + 0xe8], ebp
    t0 = lsub<32>(M32((uint32_t)(eax + 0xe8u)), ebp, f);
L_0044319a:  // je 0x4431f0
    if (f.zf) goto L_004431f0;
L_0044319c:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004431a0:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004431a5:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004431a6:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_004431a8:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_004431aa:  // jne 0x4431f0
    if (!f.zf) goto L_004431f0;
L_004431ac:  // mov ecx, dword ptr [0x89c9b0]
    ecx = (uint32_t)(M32((uint32_t)(0x89c9b0u)));
L_004431b2:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004431b4:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004431b8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004431b9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004431bc:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004431c0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004431c1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004431c4:  // call 0x5475d0
    t0 = 0x005475d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004431c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004431c9:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004431cd:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004431d1:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004431d4:  // mov edx, esp
    edx = (uint32_t)(esp);
L_004431d6:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004431d8:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004431dc:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004431df:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004431e3:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004431e6:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004431e9:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004431eb:  // call 0x442710
    t0 = 0x00442710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004431f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004431f0:  // mov eax, dword ptr [0x672710]
    eax = (uint32_t)(M32((uint32_t)(0x672710u)));
L_004431f5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004431f6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004431f7:  // mov ecx, dword ptr [0x672714]
    ecx = (uint32_t)(M32((uint32_t)(0x672714u)));
L_004431fd:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00443200:  // mov edx, esp
    edx = (uint32_t)(esp);
L_00443202:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_00443204:  // mov eax, dword ptr [0x672718]
    eax = (uint32_t)(M32((uint32_t)(0x672718u)));
L_00443209:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0044320c:  // mov ecx, dword ptr [0x67271c]
    ecx = (uint32_t)(M32((uint32_t)(0x67271cu)));
L_00443212:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00443215:  // mov eax, dword ptr [esp + 0x68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_00443219:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0044321c:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00443220:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00443221:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00443222:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_00443227:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044322cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044322c:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00443230:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_00443232:  // je 0x44323e
    if (f.zf) goto L_0044323e;
L_00443234:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00443238:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00443239:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044323eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044323e:  // mov eax, dword ptr [edi + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x3cu)));
L_00443241:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00443245:  // mov eax, dword ptr [eax + 0x10]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_00443248:  // fsub dword ptr [eax + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x24u)));
L_0044324b:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0044324f:  // fsub dword ptr [eax + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x20u)));
L_00443252:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00443256:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0044325a:  // fsub dword ptr [eax + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x1cu)));
L_0044325d:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00443261:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_00443265:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00443269:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0044326d:  // fst dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
L_00443271:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00443275:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00443279:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0044327d:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00443281:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00443285:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00443287:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00443289:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0044328b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0044328d:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0044328f:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_00443295:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00443297:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0044329a:  // jne 0x4432c0
    if (!f.zf) goto L_004432c0;
L_0044329c:  // fdivr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) / (ST(0));
L_004432a2:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004432a6:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004432a8:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004432ac:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004432b0:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004432b2:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004432b6:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004432b8:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004432ba:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004432be:  // jmp 0x4432c2
    goto L_004432c2;
L_004432c0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004432c2:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_004432c8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004432ca:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004432cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004432cf:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_004432d4:  // jns 0x4432dd
    if (!f.sf) goto L_004432dd;
L_004432d6:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004432d7:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_004432dc:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004432dd:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004432e1:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004432e5:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_004432e9:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004432eb:  // fmul dword ptr [0x5d8d54]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8d54u)));
L_004432f1:  // fmul dword ptr [0x5db064]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db064u)));
L_004432f7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004432f9:  // fmul dword ptr [esp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x28u)));
L_004432fd:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00443301:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00443305:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00443307:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0044330b:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0044330f:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00443311:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00443315:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00443317:  // je 0x44339f
    if (f.zf) goto L_0044339f;
L_0044331d:  // mov esi, dword ptr [eax + 0xa8]
    esi = (uint32_t)(M32((uint32_t)(eax + 0xa8u)));
L_00443323:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_00443325:  // je 0x44339f
    if (f.zf) goto L_0044339f;
L_00443327:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0044332b:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0044332f:  // lea eax, [esi + 0x48]
    eax = (uint32_t)((uint32_t)(esi + 0x48u));
L_00443332:  // mov dword ptr [esi + 0x48], ecx
    M32((uint32_t)(esi + 0x48u)) = (uint32_t)(ecx);
L_00443335:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00443339:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_0044333c:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00443340:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00443343:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_00443346:  // mov eax, dword ptr [edi + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x3cu)));
L_00443349:  // mov eax, dword ptr [eax + 0x10]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_0044334c:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_0044334f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00443351:  // call dword ptr [edx + 0x28]
    t0 = M32((uint32_t)(edx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00443354u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00443354:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00443356:  // jne 0x443390
    if (!f.zf) goto L_00443390;
L_00443358:  // cmp dword ptr [0x672720], ebp
    t0 = lsub<32>(M32((uint32_t)(0x672720u)), ebp, f);
L_0044335e:  // jne 0x44339f
    if (!f.zf) goto L_0044339f;
L_00443360:  // mov dword ptr [0x672720], 1
    M32((uint32_t)(0x672720u)) = (uint32_t)(0x1u);
L_0044336a:  // mov eax, dword ptr [edi + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x3cu)));
L_0044336d:  // mov eax, dword ptr [eax + 0x10]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_00443370:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_00443373:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00443375:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00443378u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00443378:  // add eax, 0x24
    t0 = ladd<32>(eax, 0x24u, f);
    eax = (uint32_t)(t0);
L_0044337b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044337c:  // push 0x62858c
    t0 = 0x62858cu; esp -= 4; M32(esp) = t0;
L_00443381:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00443386:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044338bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044338b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0044338e:  // jmp 0x44339f
    goto L_0044339f;
L_00443390:  // mov dword ptr [esi + 0x8c], eax
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(eax);
L_00443396:  // mov eax, dword ptr [eax + 0x164]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x164u)));
L_0044339c:  // mov dword ptr [esi + 0x74], eax
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(eax);
L_0044339f:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004433a3:  // mov dword ptr [esp + 0xac], 0xffffffff
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(0xffffffffu);
L_004433ae:  // call 0x4cb050
    t0 = 0x004cb050u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004433b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004433b3:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004433b7:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004433bb:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004433bc:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004433be:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004433c2:  // jl 0x443026
    if ((f.sf != f.of)) goto L_00443026;
L_004433c8:  // mov ecx, dword ptr [esp + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_004433cf:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004433d0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004433d1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004433d2:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004433d9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004433da:  // add esp, 0xa0
    t0 = ladd<32>(esp, 0xa0u, f);
    esp = (uint32_t)(t0);
L_004433e0:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00442f60, 00442f60)
