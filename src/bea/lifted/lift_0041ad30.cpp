// lifted from 0041ad30 (FUN_0041ad30, 778 bytes, 220 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0041ad30(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0041ad30;
L_0041ad30:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0041ad32:  // push 0x5d174b
    t0 = 0x5d174bu; esp -= 4; M32(esp) = t0;
L_0041ad37:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0041ad3d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ad3e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0041ad45:  // sub esp, 0x1a8
    t0 = lsub<32>(esp, 0x1a8u, f);
    esp = (uint32_t)(t0);
L_0041ad4b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0041ad4c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0041ad4d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041ad4e:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0041ad50:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0041ad51:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_0041ad55:  // mov ebx, dword ptr [esp + 0x1c8]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1c8u)));
L_0041ad5c:  // mov dword ptr [esi], 0x5d93a8
    M32((uint32_t)(esi)) = (uint32_t)(0x5d93a8u);
L_0041ad62:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0041ad64:  // mov dword ptr [esp + 0x1c0], 0
    M32((uint32_t)(esp + 0x1c0u)) = (uint32_t)(0x0u);
L_0041ad6f:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0041ad71:  // lea ebp, [esi + 4]
    ebp = (uint32_t)((uint32_t)(esi + 0x4u));
L_0041ad74:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041ad77u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041ad77:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0041ad79:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_0041ad7d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ad7e:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0041ad80:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041ad82u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041ad82:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0041ad84:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_0041ad88:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ad89:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0041ad8b:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041ad8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041ad8e:  // fld dword ptr [0x8a9e48]
    lpush(x, (long double)F32((uint32_t)(0x8a9e48u)));
L_0041ad94:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_0041ad98:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_0041ad9c:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_0041ada0:  // fsub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0041ada4:  // add esi, 0x34
    t0 = ladd<32>(esi, 0x34u, f);
    esi = (uint32_t)(t0);
L_0041ada7:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0041adab:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_0041adaf:  // fsub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x30u)));
L_0041adb3:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0041adb7:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041adb9:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0041adbd:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0041adc1:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0041adc3:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0041adc7:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0041adcb:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_0041adcf:  // fadd dword ptr [esp + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x28u)));
L_0041add3:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0041add7:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_0041addb:  // fadd dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0041addf:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0041ade3:  // mov dword ptr [esi], ecx
    M32((uint32_t)(esi)) = (uint32_t)(ecx);
L_0041ade5:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0041ade9:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0041aded:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0041adf1:  // fadd dword ptr [esp + 0x30]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x30u)));
L_0041adf5:  // mov dword ptr [esi + 4], edx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(edx);
L_0041adf8:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0041adfc:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0041ae00:  // mov dword ptr [esi + 8], eax
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(eax);
L_0041ae03:  // lea eax, [esp + 0x98]
    eax = (uint32_t)((uint32_t)(esp + 0x98u));
L_0041ae0a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ae0b:  // mov dword ptr [esi + 0xc], ecx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ecx);
L_0041ae0e:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0041ae10:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0041ae12:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041ae15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041ae15:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0041ae17:  // lea eax, [esp + 0x68]
    eax = (uint32_t)((uint32_t)(esp + 0x68u));
L_0041ae1b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ae1c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0041ae1e:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041ae21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041ae21:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_0041ae28:  // mov ecx, dword ptr [0x8a9e48]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9e48u)));
L_0041ae2e:  // fsub dword ptr [esp + 0x90]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x90u)));
L_0041ae35:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ae36:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0041ae3a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041ae3d:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_0041ae44:  // fsub dword ptr [esp + 0x90]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x90u)));
L_0041ae4b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ae4c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041ae4f:  // fld dword ptr [esp + 0xc0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc0u)));
L_0041ae56:  // fsub dword ptr [esp + 0x90]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x90u)));
L_0041ae5d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ae5e:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_0041ae62:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041ae65:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041ae6au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041ae6a:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0041ae6e:  // lea eax, [esp + 0x78]
    eax = (uint32_t)((uint32_t)(esp + 0x78u));
L_0041ae72:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ae73:  // lea ecx, [esp + 0x15c]
    ecx = (uint32_t)((uint32_t)(esp + 0x15cu));
L_0041ae7a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ae7b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041ae7c:  // lea ecx, [esp + 0xb4]
    ecx = (uint32_t)((uint32_t)(esp + 0xb4u));
L_0041ae83:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041ae88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041ae88:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ae89:  // lea edx, [esp + 0x70]
    edx = (uint32_t)((uint32_t)(esp + 0x70u));
L_0041ae8d:  // lea eax, [esp + 0x180]
    eax = (uint32_t)((uint32_t)(esp + 0x180u));
L_0041ae94:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041ae95:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041ae96:  // lea ecx, [esp + 0xa8]
    ecx = (uint32_t)((uint32_t)(esp + 0xa8u));
L_0041ae9d:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041aea2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041aea2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041aea3:  // lea ecx, [esp + 0xd4]
    ecx = (uint32_t)((uint32_t)(esp + 0xd4u));
L_0041aeaa:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041aeafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041aeaf:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_0041aeb6:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0041aeba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041aebb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041aebe:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_0041aec5:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0041aec9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041aeca:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041aecd:  // fld dword ptr [esp + 0xf0]
    lpush(x, (long double)F32((uint32_t)(esp + 0xf0u)));
L_0041aed4:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0041aed8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041aed9:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0041aedd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0041aee0:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041aee5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041aee5:  // mov esi, dword ptr [esp + 0x10]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0041aee9:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0041aeed:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041aeee:  // lea edx, [esp + 0x12c]
    edx = (uint32_t)((uint32_t)(esp + 0x12cu));
L_0041aef5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041aef6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041aef7:  // lea ecx, [esp + 0xe4]
    ecx = (uint32_t)((uint32_t)(esp + 0xe4u));
L_0041aefe:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041af03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041af03:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041af04:  // lea eax, [esp + 0x140]
    eax = (uint32_t)((uint32_t)(esp + 0x140u));
L_0041af0b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041af0c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041af0d:  // lea ecx, [esp + 0xd8]
    ecx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_0041af14:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041af19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041af19:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041af1a:  // lea ecx, [esp + 0x104]
    ecx = (uint32_t)((uint32_t)(esp + 0x104u));
L_0041af21:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041af26u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041af26:  // lea ecx, [esp + 0x118]
    ecx = (uint32_t)((uint32_t)(esp + 0x118u));
L_0041af2d:  // lea edx, [esp + 0x148]
    edx = (uint32_t)((uint32_t)(esp + 0x148u));
L_0041af34:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041af35:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041af36:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_0041af3d:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041af42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041af42:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041af43:  // lea eax, [esp + 0x10c]
    eax = (uint32_t)((uint32_t)(esp + 0x10cu));
L_0041af4a:  // lea ecx, [esp + 0x16c]
    ecx = (uint32_t)((uint32_t)(esp + 0x16cu));
L_0041af51:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041af52:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041af53:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_0041af5a:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041af5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041af5f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041af60:  // lea edx, [esp + 0x100]
    edx = (uint32_t)((uint32_t)(esp + 0x100u));
L_0041af67:  // lea eax, [esp + 0x60]
    eax = (uint32_t)((uint32_t)(esp + 0x60u));
L_0041af6b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0041af6c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041af6d:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_0041af71:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041af76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041af76:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0041af77:  // lea ecx, [esp + 0x194]
    ecx = (uint32_t)((uint32_t)(esp + 0x194u));
L_0041af7e:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041af83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041af83:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0041af88:  // lea esi, [esp + 0x188]
    esi = (uint32_t)((uint32_t)(esp + 0x188u));
L_0041af8f:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0041af91:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0041af93:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0041af95:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041af9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041af9a:  // lea esi, [ebp + 0x10]
    esi = (uint32_t)((uint32_t)(ebp + 0x10u));
L_0041af9d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0041af9f:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041afa4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041afa4:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_0041afa8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0041afa9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041afaa:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0041afac:  // lea edi, [ebp + 0x20]
    edi = (uint32_t)((uint32_t)(ebp + 0x20u));
L_0041afaf:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041afb4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041afb4:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0041afb6:  // mov edx, edi
    edx = (uint32_t)(edi);
L_0041afb8:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_0041afba:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0041afbd:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_0041afc0:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0041afc3:  // mov dword ptr [edx + 8], ecx
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(ecx);
L_0041afc6:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0041afc9:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0041afcb:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_0041afce:  // call 0x406d50
    t0 = 0x00406d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041afd3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041afd3:  // lea ecx, [esp + 0x58]
    ecx = (uint32_t)((uint32_t)(esp + 0x58u));
L_0041afd7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0041afd8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0041afd9:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0041afdb:  // call 0x411a60
    t0 = 0x00411a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041afe0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041afe0:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0041afe2:  // mov dword ptr [esi], edx
    M32((uint32_t)(esi)) = (uint32_t)(edx);
L_0041afe4:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0041afe7:  // mov dword ptr [esi + 4], ecx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ecx);
L_0041afea:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0041afec:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0041afef:  // mov dword ptr [esi + 8], edx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(edx);
L_0041aff2:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0041aff5:  // mov dword ptr [esi + 0xc], eax
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(eax);
L_0041aff8:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_0041affa:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041affdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041affd:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0041afff:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0041b001:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0041b005:  // call dword ptr [eax + 0x14]
    t0 = M32((uint32_t)(eax + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0041b008u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0041b008:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0041b00c:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0041b00e:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0041b012:  // mov ecx, dword ptr [esp + 0x1b8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1b8u)));
L_0041b019:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0041b01a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0041b01b:  // fmul dword ptr [0x8a9e48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x8a9e48u)));
L_0041b021:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0041b022:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0041b023:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0041b025:  // fstp dword ptr [eax + 0x44]
    F32((uint32_t)(eax + 0x44u)) = lf32(ST(0));
    lpop(x);
L_0041b028:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0041b02f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0041b031:  // add esp, 0x1b4
    t0 = ladd<32>(esp, 0x1b4u, f);
    esp = (uint32_t)(t0);
L_0041b037:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0041ad30, 0041ad30)
