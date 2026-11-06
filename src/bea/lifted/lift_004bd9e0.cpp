// lifted from 004bd9e0 (FUN_004bd9e0, 1410 bytes, 318 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004bd9e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004bd9e0;
L_004bd9e0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd9e1:  // mov ebp, esp
    ebp = (uint32_t)(esp);
L_004bd9e3:  // and esp, 0xfffffff8
    t0 = llog<32>(esp & 0xfffffff8u, f);
    esp = (uint32_t)(t0);
L_004bd9e6:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004bd9e8:  // push 0x5d3ca6
    t0 = 0x5d3ca6u; esp -= 4; M32(esp) = t0;
L_004bd9ed:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004bd9f3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd9f4:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004bd9fb:  // sub esp, 0x23c
    t0 = lsub<32>(esp, 0x23cu, f);
    esp = (uint32_t)(t0);
L_004bda01:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bda02:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bda03:  // mov esi, dword ptr [ebp + 8]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004bda06:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bda07:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004bda09:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004bda0b:  // call dword ptr [eax + 0x44]
    t0 = M32((uint32_t)(eax + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bda0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bda0e:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004bda12:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004bda16:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bda17:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004bda19:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bda1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bda1e:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004bda22:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004bda26:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bda29:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bda2c:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bda31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bda31:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bda35:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bda39:  // mov dword ptr [esp + 0x34], ebx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebx);
L_004bda3d:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004bda41:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_004bda45:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bda48:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bda4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bda4d:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bda51:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bda55:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bda58:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004bda5a:  // jge 0x4bdf4d
    if ((f.sf == f.of)) goto L_004bdf4d;
L_004bda60:  // lea edx, [ebx + 1]
    edx = (uint32_t)((uint32_t)(ebx + 0x1u));
L_004bda63:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004bda65:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004bda69:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004bda6d:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004bda71:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bda74:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bda77:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bda7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bda7c:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bda80:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bda84:  // mov dword ptr [esp + 0x38], edi
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edi);
L_004bda88:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004bda8c:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_004bda90:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bda93:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bda98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bda98:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bda9c:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bdaa0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bdaa3:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004bdaa5:  // jge 0x4bdf15
    if ((f.sf == f.of)) goto L_004bdf15;
L_004bdaab:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_004bdaaf:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004bdab0:  // mov dword ptr [esp + 0x44], 0
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x0u);
L_004bdab8:  // mov dword ptr [esp + 0x48], 0
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x0u);
L_004bdac0:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_004bdac8:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004bdace:  // mov dword ptr [esp + 0x94], 0
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0x0u);
L_004bdad9:  // mov dword ptr [esp + 0x98], 0
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(0x0u);
L_004bdae4:  // mov dword ptr [esp + 0x9c], 0xc2c80000
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0xc2c80000u);
L_004bdaef:  // mov dword ptr [esp + 0x64], 0
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(0x0u);
L_004bdaf7:  // mov dword ptr [esp + 0x68], 0
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(0x0u);
L_004bdaff:  // mov dword ptr [esp + 0x6c], 0
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x0u);
L_004bdb07:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004bdb0b:  // mov dword ptr [esp + 0x84], 0
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x0u);
L_004bdb16:  // mov dword ptr [esp + 0x88], 0
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(0x0u);
L_004bdb21:  // mov dword ptr [esp + 0x8c], 0
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(0x0u);
L_004bdb2c:  // mov dword ptr [esp + 0x74], 0
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x0u);
L_004bdb34:  // mov dword ptr [esp + 0x78], 0
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(0x0u);
L_004bdb3c:  // mov dword ptr [esp + 0x7c], 0
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x0u);
L_004bdb44:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_004bdb48:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004bdb4f:  // call 0x40b100
    t0 = 0x0040b100u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bdb54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bdb54:  // mov eax, dword ptr [esp + 0x94]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004bdb5b:  // mov ecx, dword ptr [esp + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_004bdb62:  // mov edx, dword ptr [esp + 0x9c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004bdb69:  // mov dword ptr [esp + 0x124], eax
    M32((uint32_t)(esp + 0x124u)) = (uint32_t)(eax);
L_004bdb70:  // mov eax, dword ptr [esp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_004bdb77:  // mov dword ptr [esp + 0x128], ecx
    M32((uint32_t)(esp + 0x128u)) = (uint32_t)(ecx);
L_004bdb7e:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_004bdb82:  // mov dword ptr [esp + 0x12c], edx
    M32((uint32_t)(esp + 0x12cu)) = (uint32_t)(edx);
L_004bdb89:  // mov edx, dword ptr [esp + 0x48]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_004bdb8d:  // mov dword ptr [esp + 0x130], eax
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(eax);
L_004bdb94:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004bdb98:  // mov dword ptr [esp + 0x134], ecx
    M32((uint32_t)(esp + 0x134u)) = (uint32_t)(ecx);
L_004bdb9f:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004bdba3:  // mov dword ptr [esp + 0x138], edx
    M32((uint32_t)(esp + 0x138u)) = (uint32_t)(edx);
L_004bdbaa:  // mov dword ptr [esp + 0x13c], eax
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(eax);
L_004bdbb1:  // mov dword ptr [esp + 0x140], ecx
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(ecx);
L_004bdbb8:  // mov dword ptr [esp + 0x110], 0x5d8bfc
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(0x5d8bfcu);
L_004bdbc3:  // lea ecx, [esp + 0x144]
    ecx = (uint32_t)((uint32_t)(esp + 0x144u));
L_004bdbca:  // mov dword ptr [esp + 0x250], esi
    M32((uint32_t)(esp + 0x250u)) = (uint32_t)(esi);
L_004bdbd1:  // call 0x40b100
    t0 = 0x0040b100u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bdbd6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bdbd6:  // mov dword ptr [esp + 0x158], 0x3f800000
    M32((uint32_t)(esp + 0x158u)) = (uint32_t)(0x3f800000u);
L_004bdbe1:  // mov dword ptr [esp + 0x15c], 0x3f800000
    M32((uint32_t)(esp + 0x15cu)) = (uint32_t)(0x3f800000u);
L_004bdbec:  // mov dword ptr [esp + 0x144], 0x5d95e8
    M32((uint32_t)(esp + 0x144u)) = (uint32_t)(0x5d95e8u);
L_004bdbf7:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_004bdbfb:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004bdbff:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004bdc04:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004bdc08:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004bdc0c:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004bdc12:  // mov byte ptr [esp + 0x250], 1
    M8((uint32_t)(esp + 0x250u)) = (uint8_t)(0x1u);
L_004bdc1a:  // mov dword ptr [esp + 0xc4], esi
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(esi);
L_004bdc21:  // mov dword ptr [esp + 0xe8], esi
    M32((uint32_t)(esp + 0xe8u)) = (uint32_t)(esi);
L_004bdc28:  // mov dword ptr [esp + 0x10c], esi
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(esi);
L_004bdc2f:  // mov dword ptr [esp + 0x3c], 0
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0x0u);
L_004bdc37:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004bdc3b:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bdc40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bdc40:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004bdc44:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004bdc48:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004bdc4c:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004bdc50:  // mov dword ptr [esp + 0xfc], eax
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(eax);
L_004bdc57:  // mov dword ptr [esp + 0x100], ecx
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(ecx);
L_004bdc5e:  // mov dword ptr [esp + 0xd8], eax
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(eax);
L_004bdc65:  // mov eax, dword ptr [esp + 0x84]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004bdc6c:  // mov dword ptr [esp + 0xdc], ecx
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(ecx);
L_004bdc73:  // mov ecx, dword ptr [esp + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004bdc7a:  // mov ebx, dword ptr [esp + 0x64]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004bdc7e:  // mov dword ptr [esp + 0xc8], eax
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(eax);
L_004bdc85:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004bdc8c:  // mov dword ptr [esp + 0xcc], ecx
    M32((uint32_t)(esp + 0xccu)) = (uint32_t)(ecx);
L_004bdc93:  // mov ecx, dword ptr [ebp + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004bdc96:  // mov dword ptr [esp + 0x104], edx
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(edx);
L_004bdc9d:  // mov dword ptr [esp + 0xe0], edx
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(edx);
L_004bdca4:  // mov edx, dword ptr [esp + 0x8c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004bdcab:  // mov dword ptr [esp + 0xd4], eax
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(eax);
L_004bdcb2:  // lea eax, [ecx + 0x1c]
    eax = (uint32_t)((uint32_t)(ecx + 0x1cu));
L_004bdcb5:  // mov dword ptr [esp + 0xd0], edx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(edx);
L_004bdcbc:  // mov edi, dword ptr [esp + 0x40]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_004bdcc0:  // mov dword ptr [esp + 0xec], ebx
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(ebx);
L_004bdcc7:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004bdcc9:  // mov ebx, dword ptr [esp + 0x68]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_004bdccd:  // mov dword ptr [esp + 0xb4], edx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(edx);
L_004bdcd4:  // mov dword ptr [esp + 0xf0], ebx
    M32((uint32_t)(esp + 0xf0u)) = (uint32_t)(ebx);
L_004bdcdb:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004bdcde:  // mov ebx, dword ptr [esp + 0x6c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004bdce2:  // mov dword ptr [esp + 0xb8], edx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(edx);
L_004bdce9:  // mov dword ptr [esp + 0xf4], ebx
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(ebx);
L_004bdcf0:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004bdcf3:  // mov ebx, dword ptr [esp + 0x70]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004bdcf7:  // mov dword ptr [esp + 0xbc], edx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(edx);
L_004bdcfe:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004bdd02:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004bdd05:  // mov dword ptr [esp + 0x108], edi
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(edi);
L_004bdd0c:  // mov dword ptr [esp + 0xf8], ebx
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(ebx);
L_004bdd13:  // mov dword ptr [esp + 0xe4], edi
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(edi);
L_004bdd1a:  // mov dword ptr [esp + 0xc0], eax
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(eax);
L_004bdd21:  // mov dword ptr [esp + 0xa4], edx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(edx);
L_004bdd28:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004bdd2c:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004bdd30:  // mov dword ptr [esp + 0xa8], eax
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(eax);
L_004bdd37:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004bdd3e:  // mov dword ptr [esp + 0xb0], eax
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(eax);
L_004bdd45:  // mov eax, dword ptr [ecx + 0x38]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x38u)));
L_004bdd48:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004bdd4d:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004bdd4f:  // lea ecx, [esp + 0x170]
    ecx = (uint32_t)((uint32_t)(esp + 0x170u));
L_004bdd56:  // mov dword ptr [esp + 0xb4], edx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(edx);
L_004bdd5d:  // mov edi, dword ptr [eax + 0x18]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_004bdd60:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004bdd62:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bdd63:  // mov dword ptr [esp + 0x170], esi
    M32((uint32_t)(esp + 0x170u)) = (uint32_t)(esi);
L_004bdd6a:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bdd6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bdd6f:  // lea eax, [esp + 0x160]
    eax = (uint32_t)((uint32_t)(esp + 0x160u));
L_004bdd76:  // lea ecx, [esp + 0x110]
    ecx = (uint32_t)((uint32_t)(esp + 0x110u));
L_004bdd7d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bdd7e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bdd7f:  // lea eax, [esp + 0xf4]
    eax = (uint32_t)((uint32_t)(esp + 0xf4u));
L_004bdd86:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_004bdd8d:  // mov dword ptr [esp + 0x1e8], esi
    M32((uint32_t)(esp + 0x1e8u)) = (uint32_t)(esi);
L_004bdd94:  // mov dword ptr [esp + 0x210], esi
    M32((uint32_t)(esp + 0x210u)) = (uint32_t)(esi);
L_004bdd9b:  // mov dword ptr [esp + 0x230], esi
    M32((uint32_t)(esp + 0x230u)) = (uint32_t)(esi);
L_004bdda2:  // mov dword ptr [esp + 0x234], esi
    M32((uint32_t)(esp + 0x234u)) = (uint32_t)(esi);
L_004bdda9:  // mov dword ptr [esp + 0x238], 1
    M32((uint32_t)(esp + 0x238u)) = (uint32_t)(0x1u);
L_004bddb4:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004bddb6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bddb7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bddb8:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004bddba:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bddbdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bddbd:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004bddbf:  // jne 0x4bddf0
    if (!f.zf) goto L_004bddf0;
L_004bddc1:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_004bddc3:  // lea eax, [esp + 0x160]
    eax = (uint32_t)((uint32_t)(esp + 0x160u));
L_004bddca:  // lea ecx, [esp + 0x144]
    ecx = (uint32_t)((uint32_t)(esp + 0x144u));
L_004bddd1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bddd2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bddd3:  // lea eax, [esp + 0xd0]
    eax = (uint32_t)((uint32_t)(esp + 0xd0u));
L_004bddda:  // lea ecx, [esp + 0xac]
    ecx = (uint32_t)((uint32_t)(esp + 0xacu));
L_004bdde1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bdde2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bdde3:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004bdde5:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bdde8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bdde8:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004bddea:  // je 0x4bdeb7
    if (f.zf) goto L_004bdeb7;
L_004bddf0:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bddf4:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bddf8:  // mov ecx, dword ptr [0x855290]
    ecx = (uint32_t)(M32((uint32_t)(0x855290u)));
L_004bddfe:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bddff:  // lea eax, [edx - 2]
    eax = (uint32_t)((uint32_t)(edx + 0xfffffffeu));
L_004bde02:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bde03:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bde04:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004bde08:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bde0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bde0d:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004bde11:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004bde15:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bde19:  // add eax, -2
    t0 = ladd<32>(eax, 0xfffffffeu, f);
    eax = (uint32_t)(t0);
L_004bde1c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bde1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bde1e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bde1f:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bde24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bde24:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bde28:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bde29:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bde2a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bde2b:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bde30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bde30:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bde34:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bde35:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bde36:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bde37:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004bde3b:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bde40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bde40:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004bde44:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bde48:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bde49:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bde4a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bde4b:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bde50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bde50:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bde54:  // mov ecx, dword ptr [0x855294]
    ecx = (uint32_t)(M32((uint32_t)(0x855294u)));
L_004bde5a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bde5b:  // add eax, -2
    t0 = ladd<32>(eax, 0xfffffffeu, f);
    eax = (uint32_t)(t0);
L_004bde5e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bde5f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bde60:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004bde64:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bde69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bde69:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004bde6d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bde6e:  // lea eax, [ecx - 2]
    eax = (uint32_t)((uint32_t)(ecx + 0xfffffffeu));
L_004bde71:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004bde75:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bde76:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bde77:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bde7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bde7c:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bde80:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bde81:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bde82:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bde83:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bde88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bde88:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bde8c:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bde90:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bde91:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bde92:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bde93:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bde98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bde98:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004bde9c:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bdea0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bdea1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bdea2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bdea3:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bdea8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bdea8:  // mov ecx, dword ptr [0x855298]
    ecx = (uint32_t)(M32((uint32_t)(0x855298u)));
L_004bdeae:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bdeaf:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bdeb0:  // call 0x4bd440
    t0 = 0x004bd440u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bdeb5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bdeb5:  // jmp 0x4bdebf
    goto L_004bdebf;
L_004bdeb7:  // mov edi, dword ptr [esp + 0x30]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004bdebb:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bdebf:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004bdec3:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_004bdec7:  // mov eax, 0x5d892c
    eax = (uint32_t)(0x5d892cu);
L_004bdecc:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bdecf:  // mov dword ptr [esp + 0x14c], eax
    M32((uint32_t)(esp + 0x14cu)) = (uint32_t)(eax);
L_004bded6:  // mov dword ptr [esp + 0x118], eax
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(eax);
L_004bdedd:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bdee1:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_004bdee4:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bdee7:  // add eax, 2
    t0 = ladd<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004bdeea:  // mov dword ptr [esp + 0x258], 0xffffffff
    M32((uint32_t)(esp + 0x258u)) = (uint32_t)(0xffffffffu);
L_004bdef5:  // mov dword ptr [esp + 0x38], edi
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edi);
L_004bdef9:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004bdefd:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bdf02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bdf02:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bdf06:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004bdf0a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bdf0d:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004bdf0f:  // jl 0x4bdb48
    if ((f.sf != f.of)) goto L_004bdb48;
L_004bdf15:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004bdf19:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_004bdf1d:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004bdf21:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bdf24:  // add ebx, 2
    t0 = ladd<32>(ebx, 0x2u, f);
    ebx = (uint32_t)(t0);
L_004bdf27:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_004bdf2a:  // mov dword ptr [esp + 0x34], ebx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebx);
L_004bdf2e:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_004bdf32:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bdf35:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bdf3au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bdf3a:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bdf3e:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bdf42:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bdf45:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004bdf47:  // jl 0x4bda69
    if ((f.sf != f.of)) goto L_004bda69;
L_004bdf4d:  // mov ecx, dword ptr [esp + 0x248]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x248u)));
L_004bdf54:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004bdf55:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004bdf56:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004bdf5d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004bdf5e:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_004bdf60:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004bdf61:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004bd9e0, 004bd9e0)
