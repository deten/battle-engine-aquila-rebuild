// lifted from 004bbda0 (vslot66, 683 bytes, 178 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004bbda0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004bbda0;
L_004bbda0:  // mov eax, dword ptr [0x662dd0]
    eax = (uint32_t)(M32((uint32_t)(0x662dd0u)));
L_004bbda5:  // sub esp, 0xa8
    t0 = lsub<32>(esp, 0xa8u, f);
    esp = (uint32_t)(t0);
L_004bbdab:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004bbdae:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004bbdaf:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004bbdb1:  // jne 0x4bc03c
    if (!f.zf) goto L_004bc03c;
L_004bbdb7:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_004bbdbd:  // fcos 
    ST(0) = lfcos(ST(0));
L_004bbdbf:  // mov dword ptr [esp + 8], 0
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x0u);
L_004bbdc7:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_004bbdcb:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_004bbdcf:  // mov dword ptr [esp + 8], 0x3f800000
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(0x3f800000u);
L_004bbdd7:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bbdd8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004bbdd9:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004bbdde:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004bbde0:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004bbde2:  // fst dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
L_004bbde6:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_004bbdea:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_004bbdf0:  // fsin 
    ST(0) = lfsin(ST(0));
L_004bbdf2:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004bbdf6:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004bbdfe:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004bbe02:  // mov dword ptr [esp + 0x60], ecx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(ecx);
L_004bbe06:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004bbe0a:  // mov dword ptr [esp + 0x70], edx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(edx);
L_004bbe0e:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004bbe12:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_004bbe16:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_004bbe1a:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004bbe1e:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004bbe22:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004bbe26:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004bbe2a:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_004bbe32:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004bbe36:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_004bbe3a:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bbe3e:  // mov dword ptr [esp + 0x78], ecx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(ecx);
L_004bbe42:  // fchs 
    ST(0) = -ST(0);
L_004bbe44:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004bbe48:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_004bbe50:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bbe54:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004bbe58:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004bbe5c:  // mov dword ptr [esp + 0x74], eax
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(eax);
L_004bbe60:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004bbe64:  // mov dword ptr [esp + 0x84], ecx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(ecx);
L_004bbe6b:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_004bbe72:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004bbe76:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004bbe7a:  // mov dword ptr [esp + 0x88], edx
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(edx);
L_004bbe81:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bbe82:  // mov dword ptr [esp + 0x90], eax
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(eax);
L_004bbe89:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bbe8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bbe8e:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004bbe92:  // mov dword ptr [esp + 0xc], 0x3f800000
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x3f800000u);
L_004bbe9a:  // mov edx, dword ptr [esp + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004bbe9e:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004bbea6:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004bbeaa:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004bbeb2:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bbeb6:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004bbeba:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004bbebe:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004bbec2:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004bbec6:  // fchs 
    ST(0) = -ST(0);
L_004bbec8:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004bbecc:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004bbed0:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_004bbed8:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004bbedc:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004bbee0:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_004bbee4:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004bbee6:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004bbeea:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_004bbeee:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004bbef2:  // mov dword ptr [esp + 0x38], edx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edx);
L_004bbef6:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004bbefa:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_004bbefe:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004bbf02:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_004bbf06:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_004bbf0e:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004bbf12:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004bbf16:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004bbf1a:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_004bbf1e:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004bbf22:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_004bbf26:  // mov dword ptr [esp + 0x4c], eax
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(eax);
L_004bbf2a:  // lea edx, [esp + 0x54]
    edx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004bbf2e:  // lea eax, [esp + 0x84]
    eax = (uint32_t)((uint32_t)(esp + 0x84u));
L_004bbf35:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_004bbf39:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bbf3a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bbf3b:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004bbf3f:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bbf44u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bbf44:  // fld qword ptr [0x5dc7a8]
    lpush(x, (long double)F64((uint32_t)(0x5dc7a8u)));
L_004bbf4a:  // fsin 
    ST(0) = lfsin(ST(0));
L_004bbf4c:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004bbf51:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004bbf53:  // lea edi, [esp + 0x54]
    edi = (uint32_t)((uint32_t)(esp + 0x54u));
L_004bbf57:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004bbf59:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004bbf5b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bbf5c:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004bbf60:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004bbf64:  // fld qword ptr [0x5dc7a8]
    lpush(x, (long double)F64((uint32_t)(0x5dc7a8u)));
L_004bbf6a:  // fcos 
    ST(0) = lfcos(ST(0));
L_004bbf6c:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004bbf70:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004bbf74:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004bbf78:  // fchs 
    ST(0) = -ST(0);
L_004bbf7a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004bbf7d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bbf7e:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bbf83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bbf83:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004bbf85:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004bbf87:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_004bbf8b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004bbf8c:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004bbf8f:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004bbf93:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004bbf96:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_004bbf9a:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004bbf9e:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004bbfa1:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004bbfa5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bbfa6:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_004bbfaa:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bbfafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bbfaf:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004bbfb1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004bbfb6:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_004bbfba:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004bbfbc:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004bbfbf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004bbfc1:  // mov dword ptr [esp + 0x44], edx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(edx);
L_004bbfc5:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004bbfc8:  // mov dword ptr [esp + 0x48], ecx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(ecx);
L_004bbfcc:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004bbfd0:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004bbfd3:  // mov dword ptr [esp + 0x4c], edx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edx);
L_004bbfd7:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bbfdcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bbfdc:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004bbfde:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_004bbfe2:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004bbfe5:  // mov dword ptr [esp + 0x48], edx
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edx);
L_004bbfe9:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004bbfec:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_004bbff0:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_004bbff7:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004bbffa:  // lea eax, [esp + 0x54]
    eax = (uint32_t)((uint32_t)(esp + 0x54u));
L_004bbffe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bbfff:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004bc000:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004bc004:  // mov dword ptr [esp + 0x58], edx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edx);
L_004bc008:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bc00du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bc00d:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004bc012:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004bc014:  // lea edi, [esp + 0x54]
    edi = (uint32_t)((uint32_t)(esp + 0x54u));
L_004bc018:  // lea edx, [esp + 0x54]
    edx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004bc01c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004bc01e:  // lea edi, [ebx + 0x3c]
    edi = (uint32_t)((uint32_t)(ebx + 0x3cu));
L_004bc021:  // lea eax, [esp + 0x84]
    eax = (uint32_t)((uint32_t)(esp + 0x84u));
L_004bc028:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004bc029:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004bc02a:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004bc02c:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bc031u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bc031:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004bc036:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004bc038:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004bc03a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004bc03b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004bc03c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004bc03e:  // call 0x4015e0
    t0 = 0x004015e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004bc043u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004bc043:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004bc044:  // add esp, 0xa8
    t0 = ladd<32>(esp, 0xa8u, f);
    esp = (uint32_t)(t0);
L_004bc04a:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004bbda0, 004bbda0)
