// lifted from 004bcd60 (FUN_004bcd60, 1750 bytes, 441 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004bcd60(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004bcd60;
L_004bcd60:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bcd61:  // mov ebp, esp
    ebp = (uint32_t)(esp);
L_004bcd63:  // and esp, 0xfffffff8
    t0 = llog<32>(esp & 0xfffffff8u, f);
    esp = (uint32_t)(t0);
L_004bcd66:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004bcd68:  // push 0x5d3c86
    t0 = 0x5d3c86u; esp -= 4; M32(esp) = t0;
L_004bcd6d:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004bcd73:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bcd74:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004bcd7b:  // sub esp, 0x240
    t0 = lsub<32>(esp, 0x240u, f);
    esp = (uint32_t)(t0);
L_004bcd81:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bcd82:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bcd83:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bcd84:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004bcd86:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bcd87:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_004bcd89:  // lea eax, [edx + 0x807580]
    eax = (uint32_t)((uint32_t)(edx + 0x807580u));
L_004bcd8f:  // mov ecx, 0x20
    ecx = (uint32_t)(0x20u);
L_004bcd94:  // mov byte ptr [eax], 0xff
    M8((uint32_t)(eax)) = (uint8_t)(0xffu);
L_004bcd97:  // add eax, 0x100
    t0 = ladd<32>(eax, 0x100u, f);
    eax = (uint32_t)(t0);
L_004bcd9c:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004bcd9d:  // jne 0x4bcd94
    if (!f.zf) goto L_004bcd94;
L_004bcd9f:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_004bcda0:  // cmp edx, 0x100
    t0 = lsub<32>(edx, 0x100u, f);
L_004bcda6:  // jl 0x4bcd89
    if ((f.sf != f.of)) goto L_004bcd89;
L_004bcda8:  // mov ecx, 0x809588
    ecx = (uint32_t)(0x809588u);
L_004bcdad:  // call 0x406d20
    t0 = 0x00406d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bcdb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bcdb2:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004bcdb4:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_004bcdb6:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_004bcdba:  // je 0x4bd416
    if (f.zf) goto L_004bd416;
L_004bcdc0:  // jmp 0x4bcdc6
    goto L_004bcdc6;
L_004bcdc2:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bcdc6:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004bcdc8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004bcdca:  // call dword ptr [eax + 0x44]
    t0 = M32((uint32_t)(eax + 0x44u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bcdcdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bcdcd:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004bcdd1:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_004bcdd5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bcdd6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004bcdd8:  // call 0x4f3ac0
    t0 = 0x004f3ac0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bcdddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bcddd:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004bcde1:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004bcde5:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bcde8:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bcdeb:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bcdf0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bcdf0:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bcdf4:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bcdf8:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_004bcdfc:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004bce00:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_004bce04:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bce07:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bce0cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bce0c:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bce10:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bce14:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bce17:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004bce19:  // jge 0x4bd400
    if ((f.sf == f.of)) goto L_004bd400;
L_004bce1f:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004bce23:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004bce27:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bce2a:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bce2d:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bce32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bce32:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bce36:  // mov edi, dword ptr [esp + 0x2c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bce3a:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_004bce3e:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004bce42:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_004bce46:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bce49:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bce4eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bce4e:  // fistp qword ptr [esp + 0x2c]
    M64((uint32_t)(esp + 0x2cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bce52:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bce56:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bce59:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004bce5b:  // jge 0x4bd3d5
    if ((f.sf == f.of)) goto L_004bd3d5;
L_004bce61:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004bce65:  // lea ebx, [edi + 1]
    ebx = (uint32_t)((uint32_t)(edi + 0x1u));
L_004bce68:  // mov dword ptr [esp + 0x4c], 0
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(0x0u);
L_004bce70:  // mov dword ptr [esp + 0x50], 0
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x0u);
L_004bce78:  // mov dword ptr [esp + 0x54], 0
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x0u);
L_004bce80:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_004bce86:  // mov dword ptr [esp + 0x9c], 0
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(0x0u);
L_004bce91:  // mov dword ptr [esp + 0xa0], 0
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(0x0u);
L_004bce9c:  // mov dword ptr [esp + 0xa4], 0xc2c80000
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(0xc2c80000u);
L_004bcea7:  // mov dword ptr [esp + 0x6c], 0
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(0x0u);
L_004bceaf:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bceb3:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004bceb7:  // mov dword ptr [esp + 0x70], 0
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(0x0u);
L_004bcebf:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004bcec3:  // mov dword ptr [esp + 0x74], 0
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(0x0u);
L_004bcecb:  // mov dword ptr [esp + 0x8c], 0
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(0x0u);
L_004bced6:  // mov dword ptr [esp + 0x90], 0
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(0x0u);
L_004bcee1:  // mov dword ptr [esp + 0x94], 0
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(0x0u);
L_004bceec:  // mov dword ptr [esp + 0x7c], 0
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(0x0u);
L_004bcef4:  // mov dword ptr [esp + 0x80], 0
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(0x0u);
L_004bceff:  // mov dword ptr [esp + 0x84], 0
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(0x0u);
L_004bcf0a:  // fst dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
L_004bcf0e:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_004bcf12:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_004bcf19:  // call 0x40b100
    t0 = 0x0040b100u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bcf1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bcf1e:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_004bcf25:  // mov ecx, dword ptr [esp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_004bcf2c:  // mov edx, dword ptr [esp + 0xa4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_004bcf33:  // mov dword ptr [esp + 0x12c], eax
    M32((uint32_t)(esp + 0x12cu)) = (uint32_t)(eax);
L_004bcf3a:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_004bcf41:  // mov dword ptr [esp + 0x130], ecx
    M32((uint32_t)(esp + 0x130u)) = (uint32_t)(ecx);
L_004bcf48:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004bcf4c:  // mov dword ptr [esp + 0x134], edx
    M32((uint32_t)(esp + 0x134u)) = (uint32_t)(edx);
L_004bcf53:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004bcf57:  // mov dword ptr [esp + 0x138], eax
    M32((uint32_t)(esp + 0x138u)) = (uint32_t)(eax);
L_004bcf5e:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_004bcf62:  // mov dword ptr [esp + 0x13c], ecx
    M32((uint32_t)(esp + 0x13cu)) = (uint32_t)(ecx);
L_004bcf69:  // mov ecx, dword ptr [esp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_004bcf6d:  // mov dword ptr [esp + 0x140], edx
    M32((uint32_t)(esp + 0x140u)) = (uint32_t)(edx);
L_004bcf74:  // mov dword ptr [esp + 0x144], eax
    M32((uint32_t)(esp + 0x144u)) = (uint32_t)(eax);
L_004bcf7b:  // mov dword ptr [esp + 0x148], ecx
    M32((uint32_t)(esp + 0x148u)) = (uint32_t)(ecx);
L_004bcf82:  // mov dword ptr [esp + 0x118], 0x5d8bfc
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(0x5d8bfcu);
L_004bcf8d:  // lea ecx, [esp + 0x14c]
    ecx = (uint32_t)((uint32_t)(esp + 0x14cu));
L_004bcf94:  // mov dword ptr [esp + 0x258], ebp
    M32((uint32_t)(esp + 0x258u)) = (uint32_t)(ebp);
L_004bcf9b:  // call 0x40b100
    t0 = 0x0040b100u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bcfa0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bcfa0:  // mov dword ptr [esp + 0x160], 0x3f800000
    M32((uint32_t)(esp + 0x160u)) = (uint32_t)(0x3f800000u);
L_004bcfab:  // mov dword ptr [esp + 0x164], 0x3f800000
    M32((uint32_t)(esp + 0x164u)) = (uint32_t)(0x3f800000u);
L_004bcfb6:  // mov dword ptr [esp + 0x14c], 0x5d95e8
    M32((uint32_t)(esp + 0x14cu)) = (uint32_t)(0x5d95e8u);
L_004bcfc1:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_004bcfc5:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004bcfc9:  // mov eax, dword ptr [0x6fbdf4]
    eax = (uint32_t)(M32((uint32_t)(0x6fbdf4u)));
L_004bcfce:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bcfcf:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004bcfd4:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_004bcfda:  // mov byte ptr [esp + 0x25c], 1
    M8((uint32_t)(esp + 0x25cu)) = (uint8_t)(0x1u);
L_004bcfe2:  // mov dword ptr [esp + 0xd0], ebp
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(ebp);
L_004bcfe9:  // mov dword ptr [esp + 0xf4], ebp
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(ebp);
L_004bcff0:  // mov dword ptr [esp + 0x118], ebp
    M32((uint32_t)(esp + 0x118u)) = (uint32_t)(ebp);
L_004bcff7:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bcffb:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004bcfff:  // mov dword ptr [esp + 0x44], eax
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(eax);
L_004bd003:  // fst dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
L_004bd007:  // call 0x47ea20
    t0 = 0x0047ea20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd00cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd00c:  // movsx edx, ax
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)((eax & 0xffffu)));
L_004bd00f:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004bd013:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004bd017:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_004bd01b:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004bd01f:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004bd023:  // mov dword ptr [esp + 0x110], edx
    M32((uint32_t)(esp + 0x110u)) = (uint32_t)(edx);
L_004bd02a:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004bd02e:  // fmul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x40u)));
L_004bd032:  // mov dword ptr [esp + 0x108], ecx
    M32((uint32_t)(esp + 0x108u)) = (uint32_t)(ecx);
L_004bd039:  // mov dword ptr [esp + 0xf4], edx
    M32((uint32_t)(esp + 0xf4u)) = (uint32_t)(edx);
L_004bd040:  // mov edx, dword ptr [esp + 0x70]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004bd044:  // mov dword ptr [esp + 0x104], eax
    M32((uint32_t)(esp + 0x104u)) = (uint32_t)(eax);
L_004bd04b:  // mov dword ptr [esp + 0xf8], edx
    M32((uint32_t)(esp + 0xf8u)) = (uint32_t)(edx);
L_004bd052:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004bd056:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_004bd05a:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004bd05e:  // mov dword ptr [esp + 0xfc], edx
    M32((uint32_t)(esp + 0xfcu)) = (uint32_t)(edx);
L_004bd065:  // mov edx, dword ptr [esp + 0x78]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004bd069:  // mov dword ptr [esp + 0x10c], ecx
    M32((uint32_t)(esp + 0x10cu)) = (uint32_t)(ecx);
L_004bd070:  // mov dword ptr [esp + 0xe8], ecx
    M32((uint32_t)(esp + 0xe8u)) = (uint32_t)(ecx);
L_004bd077:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_004bd07b:  // mov dword ptr [esp + 0xe0], eax
    M32((uint32_t)(esp + 0xe0u)) = (uint32_t)(eax);
L_004bd082:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004bd086:  // mov dword ptr [esp + 0xec], ecx
    M32((uint32_t)(esp + 0xecu)) = (uint32_t)(ecx);
L_004bd08d:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_004bd094:  // mov dword ptr [esp + 0x100], edx
    M32((uint32_t)(esp + 0x100u)) = (uint32_t)(edx);
L_004bd09b:  // mov edx, dword ptr [esp + 0x8c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_004bd0a2:  // mov dword ptr [esp + 0xe4], eax
    M32((uint32_t)(esp + 0xe4u)) = (uint32_t)(eax);
L_004bd0a9:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_004bd0b0:  // mov dword ptr [esp + 0xd8], ecx
    M32((uint32_t)(esp + 0xd8u)) = (uint32_t)(ecx);
L_004bd0b7:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004bd0bb:  // mov dword ptr [esp + 0xd0], edx
    M32((uint32_t)(esp + 0xd0u)) = (uint32_t)(edx);
L_004bd0c2:  // mov edx, dword ptr [esp + 0x98]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_004bd0c9:  // mov dword ptr [esp + 0xd4], eax
    M32((uint32_t)(esp + 0xd4u)) = (uint32_t)(eax);
L_004bd0d0:  // lea eax, [ecx + 0x1c]
    eax = (uint32_t)((uint32_t)(ecx + 0x1cu));
L_004bd0d3:  // mov dword ptr [esp + 0xdc], edx
    M32((uint32_t)(esp + 0xdcu)) = (uint32_t)(edx);
L_004bd0da:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004bd0dc:  // mov dword ptr [esp + 0xbc], edx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(edx);
L_004bd0e3:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004bd0e6:  // mov dword ptr [esp + 0xc0], edx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(edx);
L_004bd0ed:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004bd0f0:  // mov dword ptr [esp + 0xc4], edx
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(edx);
L_004bd0f7:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_004bd0fb:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004bd0fe:  // mov dword ptr [esp + 0xac], edx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(edx);
L_004bd105:  // mov edx, dword ptr [esp + 0x84]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_004bd10c:  // mov dword ptr [esp + 0xc8], eax
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(eax);
L_004bd113:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004bd11a:  // mov dword ptr [esp + 0xb4], edx
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(edx);
L_004bd121:  // mov dword ptr [esp + 0xb0], eax
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(eax);
L_004bd128:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_004bd12f:  // mov dword ptr [esp + 0xb8], eax
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(eax);
L_004bd136:  // mov eax, dword ptr [ecx + 0x38]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x38u)));
L_004bd139:  // mov ecx, dword ptr [eax + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_004bd13c:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_004bd13e:  // je 0x4bd316
    if (f.zf) goto L_004bd316;
L_004bd144:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004bd149:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_004bd14b:  // lea edx, [esp + 0x178]
    edx = (uint32_t)((uint32_t)(esp + 0x178u));
L_004bd152:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004bd154:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd155:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004bd159:  // mov dword ptr [esp + 0x178], ebp
    M32((uint32_t)(esp + 0x178u)) = (uint32_t)(ebp);
L_004bd160:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd165u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd165:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bd169:  // lea edx, [esp + 0x168]
    edx = (uint32_t)((uint32_t)(esp + 0x168u));
L_004bd170:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd171:  // lea edx, [esp + 0x11c]
    edx = (uint32_t)((uint32_t)(esp + 0x11cu));
L_004bd178:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd179:  // lea edx, [esp + 0xfc]
    edx = (uint32_t)((uint32_t)(esp + 0xfcu));
L_004bd180:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd181:  // mov dword ptr [esp + 0x1f4], ebp
    M32((uint32_t)(esp + 0x1f4u)) = (uint32_t)(ebp);
L_004bd188:  // mov dword ptr [esp + 0x21c], ebp
    M32((uint32_t)(esp + 0x21cu)) = (uint32_t)(ebp);
L_004bd18f:  // mov dword ptr [esp + 0x23c], ebp
    M32((uint32_t)(esp + 0x23cu)) = (uint32_t)(ebp);
L_004bd196:  // mov dword ptr [esp + 0x240], ebp
    M32((uint32_t)(esp + 0x240u)) = (uint32_t)(ebp);
L_004bd19d:  // mov dword ptr [esp + 0x244], 1
    M32((uint32_t)(esp + 0x244u)) = (uint32_t)(0x1u);
L_004bd1a8:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004bd1aa:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004bd1b1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd1b2:  // call dword ptr [eax + 0x10]
    t0 = M32((uint32_t)(eax + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd1b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd1b5:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004bd1b7:  // jne 0x4bd1ea
    if (!f.zf) goto L_004bd1ea;
L_004bd1b9:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bd1bd:  // lea edx, [esp + 0x168]
    edx = (uint32_t)((uint32_t)(esp + 0x168u));
L_004bd1c4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd1c5:  // lea edx, [esp + 0x150]
    edx = (uint32_t)((uint32_t)(esp + 0x150u));
L_004bd1cc:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004bd1ce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd1cf:  // lea edx, [esp + 0xd8]
    edx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_004bd1d6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd1d7:  // lea edx, [esp + 0xb8]
    edx = (uint32_t)((uint32_t)(esp + 0xb8u));
L_004bd1de:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd1df:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd1e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd1e2:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004bd1e4:  // je 0x4bd387
    if (f.zf) goto L_004bd387;
L_004bd1ea:  // lea eax, [ebx - 2]
    eax = (uint32_t)((uint32_t)(ebx + 0xfffffffeu));
L_004bd1ed:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd1ee:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd1ef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd1f0:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd1f5:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd1fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd1fa:  // lea eax, [esi - 1]
    eax = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_004bd1fd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd1fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd1ff:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd200:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd205:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd20au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd20a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd20b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd20c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd20d:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd212:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd217u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd217:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd218:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd219:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bd21a:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd21f:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd224u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd224:  // lea eax, [esi + 1]
    eax = (uint32_t)((uint32_t)(esi + 0x1u));
L_004bd227:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd228:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd229:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd22a:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd22f:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd234u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd234:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bd238:  // mov ebx, dword ptr [0x855290]
    ebx = (uint32_t)(M32((uint32_t)(0x855290u)));
L_004bd23e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd23f:  // add eax, -2
    t0 = ladd<32>(eax, 0xfffffffeu, f);
    eax = (uint32_t)(t0);
L_004bd242:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd243:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd244:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd246:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd24bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd24b:  // lea eax, [esi - 1]
    eax = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_004bd24e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd24f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd250:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd251:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd253:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd258u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd258:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd259:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd25a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd25b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd25d:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd262u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd262:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bd266:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd267:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd268:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bd269:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd26b:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd270u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd270:  // lea eax, [esi + 1]
    eax = (uint32_t)((uint32_t)(esi + 0x1u));
L_004bd273:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd274:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd275:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd276:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd278:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd27du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd27d:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bd281:  // mov ebx, dword ptr [0x855294]
    ebx = (uint32_t)(M32((uint32_t)(0x855294u)));
L_004bd287:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd288:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd289:  // lea eax, [edx - 2]
    eax = (uint32_t)((uint32_t)(edx + 0xfffffffeu));
L_004bd28c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd28e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd28f:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004bd293:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd298u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd298:  // lea eax, [esi - 1]
    eax = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_004bd29b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd29c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd29d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd29e:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd2a0:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd2a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd2a5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd2a6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd2a7:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd2a8:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd2aa:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd2afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd2af:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd2b0:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd2b1:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bd2b5:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd2b7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd2b8:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd2bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd2bd:  // lea eax, [esi + 1]
    eax = (uint32_t)((uint32_t)(esi + 0x1u));
L_004bd2c0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd2c1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd2c2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd2c3:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd2c5:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd2cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd2ca:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bd2ce:  // mov ebx, dword ptr [0x855298]
    ebx = (uint32_t)(M32((uint32_t)(0x855298u)));
L_004bd2d4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd2d5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd2d6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bd2d7:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd2d9:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd2deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd2de:  // lea eax, [esi - 1]
    eax = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_004bd2e1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd2e2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd2e3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd2e4:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd2e6:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd2ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd2eb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd2ec:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd2ed:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd2ee:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd2f0:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd2f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd2f5:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bd2f9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd2fa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd2fb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd2fc:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd2fe:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd303u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd303:  // lea eax, [esi + 1]
    eax = (uint32_t)((uint32_t)(esi + 0x1u));
L_004bd306:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd307:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd308:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd309:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bd30b:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd310u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd310:  // mov ebx, dword ptr [esp + 0x14]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bd314:  // jmp 0x4bd387
    goto L_004bd387;
L_004bd316:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd317:  // lea eax, [ebx - 2]
    eax = (uint32_t)((uint32_t)(ebx + 0xfffffffeu));
L_004bd31a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd31b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bd31c:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd321:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd326u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd326:  // lea ecx, [esi - 1]
    ecx = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_004bd329:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd32a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bd32b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd32c:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd331:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd336u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd336:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd337:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd338:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd339:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd33e:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd343u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd343:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd344:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd345:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bd346:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd34b:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd350u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd350:  // lea edx, [esi + 1]
    edx = (uint32_t)((uint32_t)(esi + 0x1u));
L_004bd353:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004bd354:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bd355:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd356:  // mov ecx, 0x807580
    ecx = (uint32_t)(0x807580u);
L_004bd35b:  // call 0x4bdf70
    t0 = 0x004bdf70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd360u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd360:  // mov ecx, dword ptr [0x855290]
    ecx = (uint32_t)(M32((uint32_t)(0x855290u)));
L_004bd366:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd367:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd368:  // call 0x4bd440
    t0 = 0x004bd440u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd36du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd36d:  // mov ecx, dword ptr [0x855294]
    ecx = (uint32_t)(M32((uint32_t)(0x855294u)));
L_004bd373:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd374:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd375:  // call 0x4bd440
    t0 = 0x004bd440u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd37au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd37a:  // mov ecx, dword ptr [0x855298]
    ecx = (uint32_t)(M32((uint32_t)(0x855298u)));
L_004bd380:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bd381:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bd382:  // call 0x4bd440
    t0 = 0x004bd440u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd387u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd387:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004bd38b:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_004bd38f:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bd392:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004bd393:  // mov eax, 0x5d892c
    eax = (uint32_t)(0x5d892cu);
L_004bd398:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004bd399:  // mov dword ptr [esp + 0x154], eax
    M32((uint32_t)(esp + 0x154u)) = (uint32_t)(eax);
L_004bd3a0:  // mov dword ptr [esp + 0x260], 0xffffffff
    M32((uint32_t)(esp + 0x260u)) = (uint32_t)(0xffffffffu);
L_004bd3ab:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bd3ae:  // mov dword ptr [esp + 0x120], eax
    M32((uint32_t)(esp + 0x120u)) = (uint32_t)(eax);
L_004bd3b5:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_004bd3b9:  // mov dword ptr [esp + 0x1c], ebx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebx);
L_004bd3bd:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd3c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd3c2:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bd3c6:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004bd3ca:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bd3cd:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004bd3cf:  // jl 0x4bcf12
    if ((f.sf != f.of)) goto L_004bcf12;
L_004bd3d5:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004bd3d9:  // fadd dword ptr [esp + 0x18]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x18u)));
L_004bd3dd:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bd3e0:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_004bd3e1:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_004bd3e5:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004bd3e8:  // call 0x55eb3d
    t0 = 0x0055eb3du; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd3edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd3ed:  // fistp qword ptr [esp + 0x4c]
    M64((uint32_t)(esp + 0x4cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004bd3f1:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004bd3f5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004bd3f8:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_004bd3fa:  // jl 0x4bce1f
    if ((f.sf != f.of)) goto L_004bce1f;
L_004bd400:  // mov ecx, 0x809588
    ecx = (uint32_t)(0x809588u);
L_004bd405:  // call 0x406d30
    t0 = 0x00406d30u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bd40au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bd40a:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004bd40c:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004bd410:  // jne 0x4bcdc2
    if (!f.zf) goto L_004bcdc2;
L_004bd416:  // mov ecx, dword ptr [esp + 0x250]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x250u)));
L_004bd41d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004bd41e:  // mov dword ptr [0x809598], 1
    M32((uint32_t)(0x809598u)) = (uint32_t)(0x1u);
L_004bd428:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004bd42f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004bd430:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004bd431:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004bd432:  // mov esp, ebp
    esp = (uint32_t)(ebp);
L_004bd434:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004bd435:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004bcd60, 004bcd60)
