// lifted from 0051fb90 (vslot5, 447 bytes, 128 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051fb90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051fb90;
L_0051fb90:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_0051fb94:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051fb9a:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051fb9d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051fb9e:  // mov ebx, dword ptr [esp + 0x14]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051fba2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051fba4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051fba5:  // mov edi, dword ptr [esp + 0x14]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0051fba9:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051fbac:  // je 0x51fbba
    if (f.zf) goto L_0051fbba;
L_0051fbae:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051fbaf:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051fbb0:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051fbb5:  // call 0x467200
    t0 = 0x00467200u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fbbau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fbba:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051fbbe:  // fsub dword ptr [0x5d85f8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85f8u)));
L_0051fbc4:  // fmul dword ptr [0x5db4b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db4b8u)));
L_0051fbca:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_0051fbce:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0051fbd4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051fbd6:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0051fbd9:  // je 0x51fbe5
    if (f.zf) goto L_0051fbe5;
L_0051fbdb:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0051fbe3:  // jmp 0x51fbfe
    goto L_0051fbfe;
L_0051fbe5:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0051fbe9:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051fbef:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051fbf1:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0051fbf4:  // jne 0x51fbfe
    if (!f.zf) goto L_0051fbfe;
L_0051fbf6:  // mov dword ptr [esp + 0x18], 0x3f800000
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3f800000u);
L_0051fbfe:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051fc02:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051fc08:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051fc0a:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051fc0d:  // je 0x51fcf3
    if (f.zf) goto L_0051fcf3;
L_0051fc13:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051fc14:  // push 0x63fcf0
    t0 = 0x63fcf0u; esp -= 4; M32(esp) = t0;
L_0051fc19:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fc1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fc1e:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051fc21:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0051fc23:  // lea eax, [esp + 0xc]
    eax = (uint32_t)((uint32_t)(esp + 0xcu));
L_0051fc27:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051fc2c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051fc2d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051fc2e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051fc30:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fc35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fc35:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051fc37:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fc3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fc3c:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_0051fc40:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0051fc42:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051fc44:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051fc49:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051fc4a:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051fc50:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0051fc52:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051fc57:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051fc5c:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051fc61:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_0051fc67:  // push 0x43898000
    t0 = 0x43898000u; esp -= 4; M32(esp) = t0;
L_0051fc6c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051fc6d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051fc72:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051fc75:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051fc77:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fc7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fc7c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051fc7e:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fc83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fc83:  // push 0x63fcc8
    t0 = 0x63fcc8u; esp -= 4; M32(esp) = t0;
L_0051fc88:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fc8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fc8d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051fc90:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_0051fc94:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0051fc96:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051fc97:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051fc98:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051fc9a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051fc9f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fca4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fca4:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051fca6:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fcabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fcab:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_0051fcaf:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0051fcb1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051fcb3:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_0051fcb8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051fcb9:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0051fcbf:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0051fcc1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051fcc6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0051fccb:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_0051fcd0:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_0051fcd6:  // push 0x43988000
    t0 = 0x43988000u; esp -= 4; M32(esp) = t0;
L_0051fcdb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0051fcdc:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051fce1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0051fce4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051fce6:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fcebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fceb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0051fced:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fcf2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fcf2:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051fcf3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051fcf4:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0051fcf6:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051fcfb:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fd00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fd00:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051fd01:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0051fd03:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051fd08:  // call 0x453140
    t0 = 0x00453140u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fd0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fd0d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051fd0e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051fd0f:  // push 0x63fcb0
    t0 = 0x63fcb0u; esp -= 4; M32(esp) = t0;
L_0051fd14:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fd19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fd19:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051fd1c:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051fd21:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0051fd22:  // call 0x467bd0
    t0 = 0x00467bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fd27u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fd27:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0051fd2b:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0051fd31:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051fd32:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0051fd33:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0051fd35:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0051fd38:  // je 0x51fd49
    if (f.zf) goto L_0051fd49;
L_0051fd3a:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0051fd3e:  // mov ecx, 0x89da08
    ecx = (uint32_t)(0x89da08u);
L_0051fd43:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0051fd44:  // call 0x452df0
    t0 = 0x00452df0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051fd49u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051fd49:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051fd4c:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0051fb90, 0051fb90)
