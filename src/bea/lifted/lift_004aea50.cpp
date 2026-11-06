// lifted from 004aea50 (FUN_004aea50, 912 bytes, 271 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004aea50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004aea50;
L_004aea50:  // mov eax, dword ptr [ecx + 0x84]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x84u)));
L_004aea56:  // sub esp, 0x3c
    t0 = lsub<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004aea59:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004aea5a:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004aea5c:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004aea5e:  // je 0x4aeddb
    if (f.zf) goto L_004aeddb;
L_004aea64:  // mov eax, dword ptr [ecx + 0xfc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aea6a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004aea6b:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004aea71:  // mov dword ptr [eax + 0x20], ebx
    M32((uint32_t)(eax + 0x20u)) = (uint32_t)(ebx);
L_004aea74:  // mov edx, dword ptr [ecx + 0x84]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x84u)));
L_004aea7a:  // mov eax, dword ptr [ecx + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xacu)));
L_004aea80:  // mov dword ptr [esp + 8], 0x497423f0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x497423f0u);
L_004aea88:  // mov esi, dword ptr [edx]
    esi = (uint32_t)(M32((uint32_t)(edx)));
L_004aea8a:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004aea8c:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004aea8e:  // mov dword ptr [esp + 0x10], 0x497423f0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x497423f0u);
L_004aea96:  // mov dword ptr [esp + 0x18], 0x497423f0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x497423f0u);
L_004aea9e:  // mov dword ptr [esp + 0xc], 0xc97423f0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0xc97423f0u);
L_004aeaa6:  // mov dword ptr [esp + 0x14], 0xc97423f0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xc97423f0u);
L_004aeaae:  // mov dword ptr [esp + 0x1c], 0xc97423f0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0xc97423f0u);
L_004aeab6:  // jle 0x4aebc2
    if ((f.zf || f.sf != f.of)) goto L_004aebc2;
L_004aeabc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004aeabd:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004aeabf:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_004aeac1:  // mov dword ptr [esp + 0x28], ebp
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ebp);
L_004aeac5:  // mov ebp, dword ptr [eax + 4]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004aeac8:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004aeacc:  // fcomp dword ptr [esp + 0xc]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0xcu)));
    lpop(x);
L_004aead0:  // mov dword ptr [esp + 0x2c], ebp
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebp);
L_004aead4:  // mov ebp, dword ptr [eax + 8]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004aead7:  // mov dword ptr [esp + 0x30], ebp
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(ebp);
L_004aeadb:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004aeade:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_004aeae2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aeae4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004aeae7:  // je 0x4aeaf1
    if (f.zf) goto L_004aeaf1;
L_004aeae9:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004aeaed:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_004aeaf1:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004aeaf5:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004aeaf9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aeafb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004aeafe:  // je 0x4aeb08
    if (f.zf) goto L_004aeb08;
L_004aeb00:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004aeb04:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004aeb08:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004aeb0c:  // fcomp dword ptr [esp + 0x1c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x1cu)));
    lpop(x);
L_004aeb10:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aeb12:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004aeb15:  // je 0x4aeb1f
    if (f.zf) goto L_004aeb1f;
L_004aeb17:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004aeb1b:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004aeb1f:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004aeb23:  // fcomp dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
    lpop(x);
L_004aeb27:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aeb29:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aeb2c:  // jne 0x4aeb36
    if (!f.zf) goto L_004aeb36;
L_004aeb2e:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004aeb32:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004aeb36:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004aeb3a:  // fcomp dword ptr [esp + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x18u)));
    lpop(x);
L_004aeb3e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aeb40:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aeb43:  // jne 0x4aeb4d
    if (!f.zf) goto L_004aeb4d;
L_004aeb45:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004aeb49:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004aeb4d:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004aeb51:  // fcomp dword ptr [esp + 0x20]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x20u)));
    lpop(x);
L_004aeb55:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aeb57:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aeb5a:  // jne 0x4aeb64
    if (!f.zf) goto L_004aeb64;
L_004aeb5c:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004aeb60:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004aeb64:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004aeb68:  // fadd dword ptr [ecx + 0x60]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x60u)));
L_004aeb6b:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004aeb6f:  // fadd dword ptr [ecx + 0x64]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x64u)));
L_004aeb72:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004aeb76:  // fadd dword ptr [ecx + 0x68]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ecx + 0x68u)));
L_004aeb79:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004aeb7b:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004aeb7d:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004aeb7f:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004aeb81:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004aeb83:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004aeb85:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004aeb87:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004aeb89:  // fst dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
L_004aeb8d:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004aeb8f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004aeb91:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004aeb93:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_004aeb95:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aeb97:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aeb9a:  // jne 0x4aeba2
    if (!f.zf) goto L_004aeba2;
L_004aeb9c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004aeb9e:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_004aeba2:  // mov eax, dword ptr [ecx + 0xfc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aeba8:  // add esi, 0x10
    t0 = ladd<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_004aebab:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004aebac:  // mov dword ptr [eax + 0x20], 1
    M32((uint32_t)(eax + 0x20u)) = (uint32_t)(0x1u);
L_004aebb3:  // mov eax, dword ptr [ecx + 0xac]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xacu)));
L_004aebb9:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_004aebbb:  // jl 0x4aeabd
    if ((f.sf != f.of)) goto L_004aeabd;
L_004aebc1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004aebc2:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004aebc6:  // fadd dword ptr [esp + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x8u)));
L_004aebca:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004aebce:  // fadd dword ptr [esp + 0x10]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x10u)));
L_004aebd2:  // mov edx, dword ptr [ecx + 0xfc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aebd8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004aebd9:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004aebdd:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004aebe1:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_004aebe5:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004aebe9:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004aebef:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004aebf3:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004aebf7:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004aebfd:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004aec01:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004aec03:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004aec07:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004aec0b:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004aec11:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004aec15:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004aec18:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004aec1c:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_004aec20:  // fsub dword ptr [esp + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x8u)));
L_004aec24:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004aec28:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_004aec2c:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004aec30:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004aec33:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004aec37:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004aec3b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004aec3f:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004aec43:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004aec46:  // mov edx, dword ptr [ecx + 0xfc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aec4c:  // add edx, 0x10
    t0 = ladd<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_004aec4f:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004aec53:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004aec59:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004aec5d:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004aec61:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004aec67:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004aec6b:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004aec6d:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004aec71:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004aec75:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004aec7b:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004aec7f:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004aec82:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004aec86:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004aec8a:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004aec8d:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004aec91:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004aec94:  // mov edx, dword ptr [ecx + 0xfc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aec9a:  // fld dword ptr [edx + 0x10]
    lpush(x, (long double)F32((uint32_t)(edx + 0x10u)));
L_004aec9d:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004aeca3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aeca5:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aeca8:  // je 0x4aecac
    if (f.zf) goto L_004aecac;
L_004aecaa:  // fchs 
    ST(0) = -ST(0);
L_004aecac:  // fstp dword ptr [edx + 0x10]
    F32((uint32_t)(edx + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004aecaf:  // mov edx, dword ptr [ecx + 0xfc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aecb5:  // fld dword ptr [edx + 0x14]
    lpush(x, (long double)F32((uint32_t)(edx + 0x14u)));
L_004aecb8:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004aecbe:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aecc0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aecc3:  // je 0x4aecc7
    if (f.zf) goto L_004aecc7;
L_004aecc5:  // fchs 
    ST(0) = -ST(0);
L_004aecc7:  // fstp dword ptr [edx + 0x14]
    F32((uint32_t)(edx + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004aecca:  // mov edx, dword ptr [ecx + 0xfc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aecd0:  // fld dword ptr [edx + 0x18]
    lpush(x, (long double)F32((uint32_t)(edx + 0x18u)));
L_004aecd3:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004aecd9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aecdb:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aecde:  // je 0x4aece2
    if (f.zf) goto L_004aece2;
L_004aece0:  // fchs 
    ST(0) = -ST(0);
L_004aece2:  // fstp dword ptr [edx + 0x18]
    F32((uint32_t)(edx + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004aece5:  // mov edx, dword ptr [ecx + 0xfc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aeceb:  // mov eax, dword ptr [edx + 0x18]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x18u)));
L_004aecee:  // mov dword ptr [ecx + 0x130], eax
    M32((uint32_t)(ecx + 0x130u)) = (uint32_t)(eax);
L_004aecf4:  // fld dword ptr [edx + 0x10]
    lpush(x, (long double)F32((uint32_t)(edx + 0x10u)));
L_004aecf7:  // fcomp dword ptr [edx + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0x14u)));
    lpop(x);
L_004aecfa:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aecfc:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aecff:  // je 0x4aed0e
    if (f.zf) goto L_004aed0e;
L_004aed01:  // fld dword ptr [edx + 0x14]
    lpush(x, (long double)F32((uint32_t)(edx + 0x14u)));
L_004aed04:  // fcomp dword ptr [edx + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0x18u)));
    lpop(x);
L_004aed07:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aed09:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aed0c:  // jne 0x4aed28
    if (!f.zf) goto L_004aed28;
L_004aed0e:  // fld dword ptr [edx + 0x18]
    lpush(x, (long double)F32((uint32_t)(edx + 0x18u)));
L_004aed11:  // fcomp dword ptr [edx + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0x14u)));
    lpop(x);
L_004aed14:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aed16:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aed19:  // je 0x4aed31
    if (f.zf) goto L_004aed31;
L_004aed1b:  // fld dword ptr [edx + 0x14]
    lpush(x, (long double)F32((uint32_t)(edx + 0x14u)));
L_004aed1e:  // fcomp dword ptr [edx + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0x10u)));
    lpop(x);
L_004aed21:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aed23:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aed26:  // je 0x4aed31
    if (f.zf) goto L_004aed31;
L_004aed28:  // mov eax, dword ptr [edx + 0x14]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x14u)));
L_004aed2b:  // mov dword ptr [ecx + 0x130], eax
    M32((uint32_t)(ecx + 0x130u)) = (uint32_t)(eax);
L_004aed31:  // fld dword ptr [edx + 0x14]
    lpush(x, (long double)F32((uint32_t)(edx + 0x14u)));
L_004aed34:  // fcomp dword ptr [edx + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0x10u)));
    lpop(x);
L_004aed37:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aed39:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aed3c:  // je 0x4aed4b
    if (f.zf) goto L_004aed4b;
L_004aed3e:  // fld dword ptr [edx + 0x10]
    lpush(x, (long double)F32((uint32_t)(edx + 0x10u)));
L_004aed41:  // fcomp dword ptr [edx + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0x18u)));
    lpop(x);
L_004aed44:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aed46:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aed49:  // jne 0x4aed65
    if (!f.zf) goto L_004aed65;
L_004aed4b:  // fld dword ptr [edx + 0x18]
    lpush(x, (long double)F32((uint32_t)(edx + 0x18u)));
L_004aed4e:  // fcomp dword ptr [edx + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0x10u)));
    lpop(x);
L_004aed51:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aed53:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aed56:  // je 0x4aed6e
    if (f.zf) goto L_004aed6e;
L_004aed58:  // fld dword ptr [edx + 0x10]
    lpush(x, (long double)F32((uint32_t)(edx + 0x10u)));
L_004aed5b:  // fcomp dword ptr [edx + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(edx + 0x14u)));
    lpop(x);
L_004aed5e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aed60:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aed63:  // je 0x4aed6e
    if (f.zf) goto L_004aed6e;
L_004aed65:  // mov eax, dword ptr [edx + 0x10]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x10u)));
L_004aed68:  // mov dword ptr [ecx + 0x130], eax
    M32((uint32_t)(ecx + 0x130u)) = (uint32_t)(eax);
L_004aed6e:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004aed70:  // fstp dword ptr [ecx + 0x12c]
    F32((uint32_t)(ecx + 0x12cu)) = lf32(ST(0));
    lpop(x);
L_004aed76:  // cmp dword ptr [edx + 0x20], ebx
    t0 = lsub<32>(M32((uint32_t)(edx + 0x20u)), ebx, f);
L_004aed79:  // jne 0x4aed9a
    if (!f.zf) goto L_004aed9a;
L_004aed7b:  // mov dword ptr [edx], ebx
    M32((uint32_t)(edx)) = (uint32_t)(ebx);
L_004aed7d:  // mov dword ptr [edx + 4], ebx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ebx);
L_004aed80:  // mov dword ptr [edx + 8], ebx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ebx);
L_004aed83:  // mov eax, dword ptr [ecx + 0xfc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aed89:  // add eax, 0x10
    t0 = ladd<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004aed8c:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004aed8e:  // mov dword ptr [eax + 4], ebx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebx);
L_004aed91:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004aed94:  // mov dword ptr [ecx + 0x12c], ebx
    M32((uint32_t)(ecx + 0x12cu)) = (uint32_t)(ebx);
L_004aed9a:  // mov ecx, dword ptr [ecx + 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xfcu)));
L_004aeda0:  // fld dword ptr [ecx + 0x18]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x18u)));
L_004aeda3:  // fld dword ptr [ecx + 0x14]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x14u)));
L_004aeda6:  // fld dword ptr [ecx + 0x10]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x10u)));
L_004aeda9:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004aedab:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004aedad:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004aedaf:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004aedb1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004aedb3:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_004aedb5:  // fmul st(4)
    ST(0) = (ST(0)) * (ST(4));
L_004aedb7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004aedb9:  // fstp st(3)
    ST(3) = ST(0);
    lpop(x);
L_004aedbb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004aedbd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004aedbf:  // fcom dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
L_004aedc5:  // fst dword ptr [ecx + 0x24]
    F32((uint32_t)(ecx + 0x24u)) = lf32(ST(0));
L_004aedc8:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004aedca:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004aedcd:  // jne 0x4aedd9
    if (!f.zf) goto L_004aedd9;
L_004aedcf:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004aedd1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004aedd2:  // fstp dword ptr [ecx + 0x24]
    F32((uint32_t)(ecx + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004aedd5:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004aedd8:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004aedd9:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004aeddb:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004aeddc:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_004aeddf:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004aea50, 004aea50)
