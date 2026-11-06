// lifted from 00404dd0 (vslot9, 2858 bytes, 710 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00404dd0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00404dd0;
L_00404dd0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00404dd2:  // push 0x5d1120
    t0 = 0x5d1120u; esp -= 4; M32(esp) = t0;
L_00404dd7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00404ddd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00404dde:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00404de5:  // sub esp, 0x484
    t0 = lsub<32>(esp, 0x484u, f);
    esp = (uint32_t)(t0);
L_00404deb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404dec:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00404ded:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00404def:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00404df0:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00404df2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404df3:  // push 0x623210
    t0 = 0x623210u; esp -= 4; M32(esp) = t0;
L_00404df8:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404dfd:  // mov dword ptr [ebp + 0x5b0], ebx
    M32((uint32_t)(ebp + 0x5b0u)) = (uint32_t)(ebx);
L_00404e03:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404e08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404e08:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404e09:  // push 0x6231fc
    t0 = 0x6231fcu; esp -= 4; M32(esp) = t0;
L_00404e0e:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404e13:  // mov dword ptr [ebp + 0x59c], eax
    M32((uint32_t)(ebp + 0x59cu)) = (uint32_t)(eax);
L_00404e19:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404e1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404e1e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404e1f:  // push 0x6231e8
    t0 = 0x6231e8u; esp -= 4; M32(esp) = t0;
L_00404e24:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404e29:  // mov dword ptr [ebp + 0x5a0], eax
    M32((uint32_t)(ebp + 0x5a0u)) = (uint32_t)(eax);
L_00404e2f:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404e34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404e34:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404e35:  // push 0x6231d4
    t0 = 0x6231d4u; esp -= 4; M32(esp) = t0;
L_00404e3a:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404e3f:  // mov dword ptr [ebp + 0x5a4], eax
    M32((uint32_t)(ebp + 0x5a4u)) = (uint32_t)(eax);
L_00404e45:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404e4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404e4a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404e4b:  // push 0x6231c4
    t0 = 0x6231c4u; esp -= 4; M32(esp) = t0;
L_00404e50:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404e55:  // mov dword ptr [ebp + 0x5a8], eax
    M32((uint32_t)(ebp + 0x5a8u)) = (uint32_t)(eax);
L_00404e5b:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404e60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404e60:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404e61:  // push 0x6231b4
    t0 = 0x6231b4u; esp -= 4; M32(esp) = t0;
L_00404e66:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404e6b:  // mov dword ptr [ebp + 0x5ac], eax
    M32((uint32_t)(ebp + 0x5acu)) = (uint32_t)(eax);
L_00404e71:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404e76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404e76:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404e77:  // push 0x6231a0
    t0 = 0x6231a0u; esp -= 4; M32(esp) = t0;
L_00404e7c:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404e81:  // mov dword ptr [ebp + 0x5b4], eax
    M32((uint32_t)(ebp + 0x5b4u)) = (uint32_t)(eax);
L_00404e87:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404e8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404e8c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404e8d:  // push 0x62318c
    t0 = 0x62318cu; esp -= 4; M32(esp) = t0;
L_00404e92:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404e97:  // mov dword ptr [ebp + 0x5bc], eax
    M32((uint32_t)(ebp + 0x5bcu)) = (uint32_t)(eax);
L_00404e9d:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404ea2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404ea2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404ea3:  // push 0x623180
    t0 = 0x623180u; esp -= 4; M32(esp) = t0;
L_00404ea8:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404ead:  // mov dword ptr [ebp + 0x5b8], eax
    M32((uint32_t)(ebp + 0x5b8u)) = (uint32_t)(eax);
L_00404eb3:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404eb8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404eb8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404eb9:  // push 0x623174
    t0 = 0x623174u; esp -= 4; M32(esp) = t0;
L_00404ebe:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404ec3:  // mov dword ptr [ebp + 0x5c0], eax
    M32((uint32_t)(ebp + 0x5c0u)) = (uint32_t)(eax);
L_00404ec9:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404eceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404ece:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404ecf:  // push 0x623160
    t0 = 0x623160u; esp -= 4; M32(esp) = t0;
L_00404ed4:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_00404ed9:  // mov dword ptr [ebp + 0x5c4], eax
    M32((uint32_t)(ebp + 0x5c4u)) = (uint32_t)(eax);
L_00404edf:  // call 0x4e1910
    t0 = 0x004e1910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404ee4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404ee4:  // push 0x62314c
    t0 = 0x62314cu; esp -= 4; M32(esp) = t0;
L_00404ee9:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_00404eee:  // mov dword ptr [ebp + 0x5c8], eax
    M32((uint32_t)(ebp + 0x5c8u)) = (uint32_t)(eax);
L_00404ef4:  // call 0x4cd7a0
    t0 = 0x004cd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404ef9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404ef9:  // push 0x623138
    t0 = 0x623138u; esp -= 4; M32(esp) = t0;
L_00404efe:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_00404f03:  // mov dword ptr [ebp + 0x614], eax
    M32((uint32_t)(ebp + 0x614u)) = (uint32_t)(eax);
L_00404f09:  // call 0x4cd7a0
    t0 = 0x004cd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404f0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404f0e:  // push 0x623120
    t0 = 0x623120u; esp -= 4; M32(esp) = t0;
L_00404f13:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_00404f18:  // mov dword ptr [ebp + 0x618], eax
    M32((uint32_t)(ebp + 0x618u)) = (uint32_t)(eax);
L_00404f1e:  // call 0x4cd7a0
    t0 = 0x004cd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404f23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404f23:  // push 0x623100
    t0 = 0x623100u; esp -= 4; M32(esp) = t0;
L_00404f28:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_00404f2d:  // mov dword ptr [ebp + 0x61c], eax
    M32((uint32_t)(ebp + 0x61cu)) = (uint32_t)(eax);
L_00404f33:  // call 0x4cd7a0
    t0 = 0x004cd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404f38u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404f38:  // push 0x6230e0
    t0 = 0x6230e0u; esp -= 4; M32(esp) = t0;
L_00404f3d:  // mov ecx, 0x82b400
    ecx = (uint32_t)(0x82b400u);
L_00404f42:  // mov dword ptr [0x6601b4], eax
    M32((uint32_t)(0x6601b4u)) = (uint32_t)(eax);
L_00404f47:  // call 0x4cd7a0
    t0 = 0x004cd7a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404f4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404f4c:  // mov dword ptr [0x6601b0], eax
    M32((uint32_t)(0x6601b0u)) = (uint32_t)(eax);
L_00404f51:  // mov esi, dword ptr [esp + 0x4a0]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x4a0u)));
L_00404f58:  // mov dword ptr [ebp + 0x57c], ebx
    M32((uint32_t)(ebp + 0x57cu)) = (uint32_t)(ebx);
L_00404f5e:  // mov dword ptr [ebp + 0x578], ebx
    M32((uint32_t)(ebp + 0x578u)) = (uint32_t)(ebx);
L_00404f64:  // mov dword ptr [ebp + 0x4a8], ebx
    M32((uint32_t)(ebp + 0x4a8u)) = (uint32_t)(ebx);
L_00404f6a:  // mov eax, dword ptr [esi + 0x3c0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x3c0u)));
L_00404f70:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00404f72:  // mov dword ptr [ebp + 0x600], eax
    M32((uint32_t)(ebp + 0x600u)) = (uint32_t)(eax);
L_00404f78:  // mov dword ptr [ebp + 0x4b0], ebx
    M32((uint32_t)(ebp + 0x4b0u)) = (uint32_t)(ebx);
L_00404f7e:  // call 0x40c650
    t0 = 0x0040c650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404f83u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404f83:  // push 0x63
    t0 = 0x63u; esp -= 4; M32(esp) = t0;
L_00404f85:  // push 0x6230bc
    t0 = 0x6230bcu; esp -= 4; M32(esp) = t0;
L_00404f8a:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_00404f8c:  // push 0x4c
    t0 = 0x4cu; esp -= 4; M32(esp) = t0;
L_00404f8e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00404f93:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404f98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404f98:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_00404f9c:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00404f9e:  // mov dword ptr [esp + 0x498], ebx
    M32((uint32_t)(esp + 0x498u)) = (uint32_t)(ebx);
L_00404fa5:  // je 0x404fb1
    if (f.zf) goto L_00404fb1;
L_00404fa7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00404fa8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00404faa:  // call 0x412bc0
    t0 = 0x00412bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404fafu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404faf:  // jmp 0x404fb3
    goto L_00404fb3;
L_00404fb1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00404fb3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00404fb4:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_00404fb6:  // push 0x6230bc
    t0 = 0x6230bcu; esp -= 4; M32(esp) = t0;
L_00404fbb:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_00404fbd:  // push 0x54
    t0 = 0x54u; esp -= 4; M32(esp) = t0;
L_00404fbf:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00404fc4:  // mov dword ptr [esp + 0x4ac], 0xffffffff
    M32((uint32_t)(esp + 0x4acu)) = (uint32_t)(0xffffffffu);
L_00404fcf:  // mov dword ptr [ebp + 0x578], eax
    M32((uint32_t)(ebp + 0x578u)) = (uint32_t)(eax);
L_00404fd5:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404fdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404fda:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00404fde:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_00404fe3:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00404fe5:  // mov dword ptr [esp + 0x49c], edi
    M32((uint32_t)(esp + 0x49cu)) = (uint32_t)(edi);
L_00404fec:  // je 0x404ff8
    if (f.zf) goto L_00404ff8;
L_00404fee:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00404fef:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00404ff1:  // call 0x410210
    t0 = 0x00410210u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00404ff6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00404ff6:  // jmp 0x404ffa
    goto L_00404ffa;
L_00404ff8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00404ffa:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00404ffb:  // lea ecx, [ebp + 0x4c8]
    ecx = (uint32_t)((uint32_t)(ebp + 0x4c8u));
L_00405001:  // mov dword ptr [esp + 0x4a0], 0xffffffff
    M32((uint32_t)(esp + 0x4a0u)) = (uint32_t)(0xffffffffu);
L_0040500c:  // mov dword ptr [ebp + 0x57c], eax
    M32((uint32_t)(ebp + 0x57cu)) = (uint32_t)(eax);
L_00405012:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405017u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405017:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00405018:  // lea ecx, [ebp + 0x4cc]
    ecx = (uint32_t)((uint32_t)(ebp + 0x4ccu));
L_0040501e:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405023u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405023:  // mov ecx, dword ptr [ebp + 0x4b0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x4b0u)));
L_00405029:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_00405031:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_00405039:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_00405041:  // mov edx, dword ptr [ecx + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x1cu)));
L_00405044:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00405045:  // mov dword ptr [ebp + 0xf8], edx
    M32((uint32_t)(ebp + 0xf8u)) = (uint32_t)(edx);
L_0040504b:  // mov eax, dword ptr [ebp + 0x4b0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x4b0u)));
L_00405051:  // lea edx, [ebp + 0x268]
    edx = (uint32_t)((uint32_t)(ebp + 0x268u));
L_00405057:  // mov ecx, dword ptr [eax + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_0040505a:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0040505e:  // mov dword ptr [ebp + 0xfc], ecx
    M32((uint32_t)(ebp + 0xfcu)) = (uint32_t)(ecx);
L_00405064:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00405068:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_0040506a:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0040506e:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_00405071:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00405075:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_00405078:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_0040507b:  // mov dword ptr [ebp + 0x310], ebx
    M32((uint32_t)(ebp + 0x310u)) = (uint32_t)(ebx);
L_00405081:  // mov dword ptr [ebp + 0x5cc], ebx
    M32((uint32_t)(ebp + 0x5ccu)) = (uint32_t)(ebx);
L_00405087:  // mov dword ptr [ebp + 0x5d0], ebx
    M32((uint32_t)(ebp + 0x5d0u)) = (uint32_t)(ebx);
L_0040508d:  // mov dword ptr [ebp + 0x2f4], ebx
    M32((uint32_t)(ebp + 0x2f4u)) = (uint32_t)(ebx);
L_00405093:  // mov dword ptr [ebp + 0x588], ebx
    M32((uint32_t)(ebp + 0x588u)) = (uint32_t)(ebx);
L_00405099:  // mov dword ptr [ebp + 0x58c], edi
    M32((uint32_t)(ebp + 0x58cu)) = (uint32_t)(edi);
L_0040509f:  // mov dword ptr [ebp + 0x4b4], 0xc1a00000
    M32((uint32_t)(ebp + 0x4b4u)) = (uint32_t)(0xc1a00000u);
L_004050a9:  // mov dword ptr [ebp + 0x5ec], ebx
    M32((uint32_t)(ebp + 0x5ecu)) = (uint32_t)(ebx);
L_004050af:  // mov dword ptr [ebp + 0x5f0], edi
    M32((uint32_t)(ebp + 0x5f0u)) = (uint32_t)(edi);
L_004050b5:  // mov dword ptr [ebp + 0x5f4], ebx
    M32((uint32_t)(ebp + 0x5f4u)) = (uint32_t)(ebx);
L_004050bb:  // mov dword ptr [ebp + 0x2ec], ebx
    M32((uint32_t)(ebp + 0x2ecu)) = (uint32_t)(ebx);
L_004050c1:  // mov dword ptr [ebp + 0x5d4], ebx
    M32((uint32_t)(ebp + 0x5d4u)) = (uint32_t)(ebx);
L_004050c7:  // mov dword ptr [ebp + 0x5d8], ebx
    M32((uint32_t)(ebp + 0x5d8u)) = (uint32_t)(ebx);
L_004050cd:  // mov dword ptr [ebp + 0x5dc], ebx
    M32((uint32_t)(ebp + 0x5dcu)) = (uint32_t)(ebx);
L_004050d3:  // mov dword ptr [ebp + 0x604], ebx
    M32((uint32_t)(ebp + 0x604u)) = (uint32_t)(ebx);
L_004050d9:  // mov dword ptr [ebp + 0x4d8], ebx
    M32((uint32_t)(ebp + 0x4d8u)) = (uint32_t)(ebx);
L_004050df:  // mov dword ptr [ebp + 0x5e0], ebx
    M32((uint32_t)(ebp + 0x5e0u)) = (uint32_t)(ebx);
L_004050e5:  // mov dword ptr [ebp + 0x314], edi
    M32((uint32_t)(ebp + 0x314u)) = (uint32_t)(edi);
L_004050eb:  // lea ecx, [ebp + 0x5e8]
    ecx = (uint32_t)((uint32_t)(ebp + 0x5e8u));
L_004050f1:  // mov dword ptr [ebp + 0x5e4], ebx
    M32((uint32_t)(ebp + 0x5e4u)) = (uint32_t)(ebx);
L_004050f7:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004050fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004050fc:  // cmp dword ptr [esi + 0x3c4], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x3c4u)), ebx, f);
L_00405102:  // je 0x405116
    if (f.zf) goto L_00405116;
L_00405104:  // mov dword ptr [ebp + 0x260], 3
    M32((uint32_t)(ebp + 0x260u)) = (uint32_t)(0x3u);
L_0040510e:  // mov dword ptr [ebp + 0x100], ebx
    M32((uint32_t)(ebp + 0x100u)) = (uint32_t)(ebx);
L_00405114:  // jmp 0x40512c
    goto L_0040512c;
L_00405116:  // mov dword ptr [ebp + 0x260], 2
    M32((uint32_t)(ebp + 0x260u)) = (uint32_t)(0x2u);
L_00405120:  // mov edx, dword ptr [ebp + 0xfc]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xfcu)));
L_00405126:  // mov dword ptr [ebp + 0x100], edx
    M32((uint32_t)(ebp + 0x100u)) = (uint32_t)(edx);
L_0040512c:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00405131:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405136u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405136:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00405138:  // jne 0x405140
    if (!f.zf) goto L_00405140;
L_0040513a:  // mov dword ptr [esi + 0x80], edi
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(edi);
L_00405140:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_00405145:  // push 0x403f40
    t0 = 0x403f40u; esp -= 4; M32(esp) = t0;
L_0040514a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0040514b:  // lea eax, [esp + 0x80]
    eax = (uint32_t)((uint32_t)(esp + 0x80u));
L_00405152:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_00405157:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00405158:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040515du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040515d:  // mov dword ptr [esp + 0x490], edi
    M32((uint32_t)(esp + 0x490u)) = (uint32_t)(edi);
L_00405164:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_00405166:  // mov dword ptr [esp + 0x49c], 2
    M32((uint32_t)(esp + 0x49cu)) = (uint32_t)(0x2u);
L_00405171:  // je 0x40517f
    if (f.zf) goto L_0040517f;
L_00405173:  // lea ecx, [ebp + 8]
    ecx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_00405176:  // mov dword ptr [esp + 0x474], ecx
    M32((uint32_t)(esp + 0x474u)) = (uint32_t)(ecx);
L_0040517d:  // jmp 0x405186
    goto L_00405186;
L_0040517f:  // mov dword ptr [esp + 0x474], ebx
    M32((uint32_t)(esp + 0x474u)) = (uint32_t)(ebx);
L_00405186:  // mov eax, dword ptr [esi + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xa0u)));
L_0040518c:  // mov dword ptr [esp + 0x70], edi
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(edi);
L_00405190:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00405192:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_00405196:  // mov edi, 0x6230b0
    edi = (uint32_t)(0x6230b0u);
L_0040519b:  // je 0x4051a2
    if (f.zf) goto L_004051a2;
L_0040519d:  // mov edi, 0x6230a4
    edi = (uint32_t)(0x6230a4u);
L_004051a2:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004051a5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004051a7:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004051a9:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004051ab:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004051ad:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004051af:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004051b1:  // mov edi, edx
    edi = (uint32_t)(edx);
L_004051b3:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004051b6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004051b8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004051ba:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004051bd:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004051bf:  // mov ecx, dword ptr [esp + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004051c3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004051c4:  // call 0x516580
    t0 = 0x00516580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004051c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004051c9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004051cc:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004051ce:  // mov dword ptr [ebp + 0x30], eax
    M32((uint32_t)(ebp + 0x30u)) = (uint32_t)(eax);
L_004051d1:  // je 0x4051df
    if (f.zf) goto L_004051df;
L_004051d3:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004051d5:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004051d9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004051da:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004051dc:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004051dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004051df:  // mov edx, dword ptr [esp + 0x4a4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4a4u)));
L_004051e6:  // mov edi, 0x623098
    edi = (uint32_t)(0x623098u);
L_004051eb:  // mov eax, dword ptr [edx + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xa0u)));
L_004051f1:  // lea edx, [esp + 0x74]
    edx = (uint32_t)((uint32_t)(esp + 0x74u));
L_004051f5:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004051f8:  // je 0x4051ff
    if (f.zf) goto L_004051ff;
L_004051fa:  // mov edi, 0x62308c
    edi = (uint32_t)(0x62308cu);
L_004051ff:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_00405202:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00405204:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00405206:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00405208:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0040520a:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0040520c:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0040520e:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00405210:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00405213:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00405215:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00405217:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0040521a:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0040521c:  // mov ecx, dword ptr [esp + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_00405220:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00405221:  // call 0x516580
    t0 = 0x00516580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405226u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405226:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00405229:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0040522b:  // mov dword ptr [ebp + 0x5ec], eax
    M32((uint32_t)(ebp + 0x5ecu)) = (uint32_t)(eax);
L_00405231:  // je 0x40523f
    if (f.zf) goto L_0040523f;
L_00405233:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00405235:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_00405239:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040523a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0040523c:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040523fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040523f:  // mov eax, dword ptr [ebp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_00405242:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_00405247:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00405249:  // je 0x4052ef
    if (f.zf) goto L_004052ef;
L_0040524f:  // mov ecx, dword ptr [ebp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_00405252:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00405253:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_00405257:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00405259:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0040525b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0040525c:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_00405260:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00405261:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00405262:  // push 0x623080
    t0 = 0x623080u; esp -= 4; M32(esp) = t0;
L_00405267:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040526au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040526a:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0040526e:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00405274:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00405276:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00405279:  // je 0x40529d
    if (f.zf) goto L_0040529d;
L_0040527b:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0040527f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00405285:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00405287:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0040528a:  // je 0x40529d
    if (f.zf) goto L_0040529d;
L_0040528c:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00405290:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00405296:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00405298:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0040529b:  // jne 0x4052ef
    if (!f.zf) goto L_004052ef;
L_0040529d:  // push 0xb1
    t0 = 0xb1u; esp -= 4; M32(esp) = t0;
L_004052a2:  // push 0x6230bc
    t0 = 0x6230bcu; esp -= 4; M32(esp) = t0;
L_004052a7:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004052a9:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004052ab:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004052b0:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004052b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004052b5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004052b7:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004052bb:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004052bd:  // mov byte ptr [esp + 0x49c], 3
    M8((uint32_t)(esp + 0x49cu)) = (uint8_t)(0x3u);
L_004052c5:  // je 0x4052d3
    if (f.zf) goto L_004052d3;
L_004052c7:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004052c9:  // mov dword ptr [esi + 4], ebx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ebx);
L_004052cc:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004052d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004052d1:  // jmp 0x4052d5
    goto L_004052d5;
L_004052d3:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004052d5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004052d6:  // lea ecx, [ebp + 0x1d4]
    ecx = (uint32_t)((uint32_t)(ebp + 0x1d4u));
L_004052dc:  // mov byte ptr [esp + 0x4a0], 2
    M8((uint32_t)(esp + 0x4a0u)) = (uint8_t)(0x2u);
L_004052e4:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004052e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004052e9:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004052ea:  // jmp 0x40524f
    goto L_0040524f;
L_004052ef:  // mov eax, dword ptr [ebp + 0x5ec]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x5ecu)));
L_004052f5:  // mov edi, 1
    edi = (uint32_t)(0x1u);
L_004052fa:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004052fc:  // je 0x4053a5
    if (f.zf) goto L_004053a5;
L_00405302:  // mov ecx, dword ptr [ebp + 0x5ec]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x5ecu)));
L_00405308:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00405309:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_0040530d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0040530f:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00405311:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00405312:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_00405316:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00405317:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00405318:  // push 0x622cec
    t0 = 0x622cecu; esp -= 4; M32(esp) = t0;
L_0040531d:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405320u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405320:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00405324:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0040532a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040532c:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0040532f:  // je 0x405353
    if (f.zf) goto L_00405353;
L_00405331:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00405335:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0040533b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040533d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00405340:  // je 0x405353
    if (f.zf) goto L_00405353;
L_00405342:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00405346:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0040534c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0040534e:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_00405351:  // jne 0x4053a5
    if (!f.zf) goto L_004053a5;
L_00405353:  // push 0xbd
    t0 = 0xbdu; esp -= 4; M32(esp) = t0;
L_00405358:  // push 0x6230bc
    t0 = 0x6230bcu; esp -= 4; M32(esp) = t0;
L_0040535d:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0040535f:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00405361:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00405366:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040536bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040536b:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0040536d:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00405371:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_00405373:  // mov byte ptr [esp + 0x49c], 4
    M8((uint32_t)(esp + 0x49cu)) = (uint8_t)(0x4u);
L_0040537b:  // je 0x405389
    if (f.zf) goto L_00405389;
L_0040537d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040537f:  // mov dword ptr [esi + 4], ebx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ebx);
L_00405382:  // call 0x4cb040
    t0 = 0x004cb040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405387u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405387:  // jmp 0x40538b
    goto L_0040538b;
L_00405389:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0040538b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040538c:  // lea ecx, [ebp + 0x620]
    ecx = (uint32_t)((uint32_t)(ebp + 0x620u));
L_00405392:  // mov byte ptr [esp + 0x4a0], 2
    M8((uint32_t)(esp + 0x4a0u)) = (uint8_t)(0x2u);
L_0040539a:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040539fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040539f:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004053a0:  // jmp 0x405302
    goto L_00405302;
L_004053a5:  // mov ecx, dword ptr [ebp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_004053a8:  // push 0x623074
    t0 = 0x623074u; esp -= 4; M32(esp) = t0;
L_004053ad:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004053af:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004053b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004053b2:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004053b4:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004053b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004053b9:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004053bc:  // mov edi, 0x3f800000
    edi = (uint32_t)(0x3f800000u);
L_004053c1:  // je 0x405498
    if (f.zf) goto L_00405498;
L_004053c7:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_004053cc:  // push 0x6230bc
    t0 = 0x6230bcu; esp -= 4; M32(esp) = t0;
L_004053d1:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_004053d3:  // push 0xf0
    t0 = 0xf0u; esp -= 4; M32(esp) = t0;
L_004053d8:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004053dd:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004053e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004053e2:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004053e4:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_004053e8:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004053ea:  // mov byte ptr [esp + 0x49c], 5
    M8((uint32_t)(esp + 0x49cu)) = (uint8_t)(0x5u);
L_004053f2:  // je 0x405411
    if (f.zf) goto L_00405411;
L_004053f4:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004053f6:  // je 0x4053fd
    if (f.zf) goto L_004053fd;
L_004053f8:  // lea eax, [ebp + 8]
    eax = (uint32_t)((uint32_t)(ebp + 0x8u));
L_004053fb:  // jmp 0x4053ff
    goto L_004053ff;
L_004053fd:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004053ff:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00405400:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00405402:  // call 0x4983b0
    t0 = 0x004983b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405407u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405407:  // mov dword ptr [esi], 0x5d88ec
    M32((uint32_t)(esi)) = (uint32_t)(0x5d88ecu);
L_0040540d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0040540f:  // jmp 0x405413
    goto L_00405413;
L_00405411:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00405413:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00405415:  // push 0x3d4ccccd
    t0 = 0x3d4ccccdu; esp -= 4; M32(esp) = t0;
L_0040541a:  // push 0x3f666666
    t0 = 0x3f666666u; esp -= 4; M32(esp) = t0;
L_0040541f:  // push 0x3ecccccd
    t0 = 0x3ecccccdu; esp -= 4; M32(esp) = t0;
L_00405424:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00405425:  // push 0x43c80000
    t0 = 0x43c80000u; esp -= 4; M32(esp) = t0;
L_0040542a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040542b:  // mov byte ptr [esp + 0x4b8], 2
    M8((uint32_t)(esp + 0x4b8u)) = (uint8_t)(0x2u);
L_00405433:  // mov dword ptr [ebp + 0x70], ecx
    M32((uint32_t)(ebp + 0x70u)) = (uint32_t)(ecx);
L_00405436:  // call 0x498bf0
    t0 = 0x00498bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040543bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040543b:  // mov eax, dword ptr [0x8a9d38]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d38u)));
L_00405440:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00405441:  // push 0x623054
    t0 = 0x623054u; esp -= 4; M32(esp) = t0;
L_00405446:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0040544b:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405450u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405450:  // mov eax, dword ptr [0x8a9d38]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d38u)));
L_00405455:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00405458:  // cmp eax, 0xe7
    t0 = lsub<32>(eax, 0xe7u, f);
L_0040545d:  // je 0x405490
    if (f.zf) goto L_00405490;
L_0040545f:  // cmp eax, 0xe8
    t0 = lsub<32>(eax, 0xe8u, f);
L_00405464:  // je 0x405490
    if (f.zf) goto L_00405490;
L_00405466:  // cmp eax, 0x14b
    t0 = lsub<32>(eax, 0x14bu, f);
L_0040546b:  // je 0x405490
    if (f.zf) goto L_00405490;
L_0040546d:  // cmp eax, 0xdd
    t0 = lsub<32>(eax, 0xddu, f);
L_00405472:  // je 0x405490
    if (f.zf) goto L_00405490;
L_00405474:  // cmp eax, 0xde
    t0 = lsub<32>(eax, 0xdeu, f);
L_00405479:  // je 0x405490
    if (f.zf) goto L_00405490;
L_0040547b:  // cmp eax, 0x20c
    t0 = lsub<32>(eax, 0x20cu, f);
L_00405480:  // je 0x405490
    if (f.zf) goto L_00405490;
L_00405482:  // cmp eax, 0x20b
    t0 = lsub<32>(eax, 0x20bu, f);
L_00405487:  // je 0x405490
    if (f.zf) goto L_00405490;
L_00405489:  // cmp eax, 0x14c
    t0 = lsub<32>(eax, 0x14cu, f);
L_0040548e:  // jne 0x40549b
    if (!f.zf) goto L_0040549b;
L_00405490:  // mov eax, dword ptr [ebp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x70u)));
L_00405493:  // mov dword ptr [eax + 0x2c], edi
    M32((uint32_t)(eax + 0x2cu)) = (uint32_t)(edi);
L_00405496:  // jmp 0x40549b
    goto L_0040549b;
L_00405498:  // mov dword ptr [ebp + 0x70], ebx
    M32((uint32_t)(ebp + 0x70u)) = (uint32_t)(ebx);
L_0040549b:  // lea eax, [ebp + 0x524]
    eax = (uint32_t)((uint32_t)(ebp + 0x524u));
L_004054a1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004054a2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004054a3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004054a4:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004054a6:  // push 0x623034
    t0 = 0x623034u; esp -= 4; M32(esp) = t0;
L_004054ab:  // push 0x62301c
    t0 = 0x62301cu; esp -= 4; M32(esp) = t0;
L_004054b0:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004054b5:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004054b7:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004054bcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004054bc:  // mov eax, dword ptr [esp + 0x4a4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4a4u)));
L_004054c3:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004054c5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004054c6:  // call 0x4f86d0
    t0 = 0x004f86d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004054cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004054cb:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004054ce:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004054d0:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004054d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004054d3:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004054d7:  // push 0x1f5
    t0 = 0x1f5u; esp -= 4; M32(esp) = t0;
L_004054dc:  // push 0x6230bc
    t0 = 0x6230bcu; esp -= 4; M32(esp) = t0;
L_004054e1:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_004054e3:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_004054e5:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004054ea:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004054efu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004054ef:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004054f1:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004054f5:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004054f7:  // mov byte ptr [esp + 0x49c], 6
    M8((uint32_t)(esp + 0x49cu)) = (uint8_t)(0x6u);
L_004054ff:  // je 0x405538
    if (f.zf) goto L_00405538;
L_00405501:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_00405504:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00405506:  // call dword ptr [eax + 0xc0]
    t0 = M32((uint32_t)(eax + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040550cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040550c:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00405512:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00405516:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0040551a:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0040551e:  // mov dword ptr [esi + 4], ebx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ebx);
L_00405521:  // mov dword ptr [esi + 8], ebx
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(ebx);
L_00405524:  // mov dword ptr [esi + 0xc], ebx
    M32((uint32_t)(esi + 0xcu)) = (uint32_t)(ebx);
L_00405527:  // mov dword ptr [esi + 0x14], ecx
    M32((uint32_t)(esi + 0x14u)) = (uint32_t)(ecx);
L_0040552a:  // mov dword ptr [esi], 0x5d88cc
    M32((uint32_t)(esi)) = (uint32_t)(0x5d88ccu);
L_00405530:  // fstp dword ptr [esi + 0x18]
    F32((uint32_t)(esi + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00405533:  // fstp dword ptr [esi + 0x1c]
    F32((uint32_t)(esi + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00405536:  // jmp 0x40553a
    goto L_0040553a;
L_00405538:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0040553a:  // mov ecx, dword ptr [ebp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x38u)));
L_0040553d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0040553e:  // mov byte ptr [esp + 0x4a0], 2
    M8((uint32_t)(esp + 0x4a0u)) = (uint8_t)(0x2u);
L_00405546:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00405548:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040554bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040554b:  // mov dword ptr [ebp + 0x278], ebx
    M32((uint32_t)(ebp + 0x278u)) = (uint32_t)(ebx);
L_00405551:  // mov dword ptr [ebp + 0x280], ebx
    M32((uint32_t)(ebp + 0x280u)) = (uint32_t)(ebx);
L_00405557:  // mov dword ptr [ebp + 0x27c], ebx
    M32((uint32_t)(ebp + 0x27cu)) = (uint32_t)(ebx);
L_0040555d:  // mov dword ptr [ebp + 0x2c8], edi
    M32((uint32_t)(ebp + 0x2c8u)) = (uint32_t)(edi);
L_00405563:  // mov dword ptr [ebp + 0x2cc], edi
    M32((uint32_t)(ebp + 0x2ccu)) = (uint32_t)(edi);
L_00405569:  // mov dword ptr [ebp + 0x2d0], edi
    M32((uint32_t)(ebp + 0x2d0u)) = (uint32_t)(edi);
L_0040556f:  // mov dword ptr [ebp + 0x580], 1
    M32((uint32_t)(ebp + 0x580u)) = (uint32_t)(0x1u);
L_00405579:  // mov dword ptr [ebp + 0x108], ebx
    M32((uint32_t)(ebp + 0x108u)) = (uint32_t)(ebx);
L_0040557f:  // mov dword ptr [ebp + 0x2d4], 0xbf800000
    M32((uint32_t)(ebp + 0x2d4u)) = (uint32_t)(0xbf800000u);
L_00405589:  // mov dword ptr [ebp + 0x4b8], ebx
    M32((uint32_t)(ebp + 0x4b8u)) = (uint32_t)(ebx);
L_0040558f:  // push 0x108
    t0 = 0x108u; esp -= 4; M32(esp) = t0;
L_00405594:  // mov dword ptr [ebp + 0x4c0], ebx
    M32((uint32_t)(ebp + 0x4c0u)) = (uint32_t)(ebx);
L_0040559a:  // push 0x6230bc
    t0 = 0x6230bcu; esp -= 4; M32(esp) = t0;
L_0040559f:  // mov dword ptr [ebp + 0x4bc], ebx
    M32((uint32_t)(ebp + 0x4bcu)) = (uint32_t)(ebx);
L_004055a5:  // mov edi, 0xc1a00000
    edi = (uint32_t)(0xc1a00000u);
L_004055aa:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_004055ac:  // mov dword ptr [ebp + 0x4c4], ebx
    M32((uint32_t)(ebp + 0x4c4u)) = (uint32_t)(ebx);
L_004055b2:  // push 0x130
    t0 = 0x130u; esp -= 4; M32(esp) = t0;
L_004055b7:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004055bc:  // mov dword ptr [ebp + 0x584], edi
    M32((uint32_t)(ebp + 0x584u)) = (uint32_t)(edi);
L_004055c2:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004055c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004055c7:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004055c9:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004055cd:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004055cf:  // mov byte ptr [esp + 0x49c], 7
    M8((uint32_t)(esp + 0x49cu)) = (uint8_t)(0x7u);
L_004055d7:  // je 0x4055f0
    if (f.zf) goto L_004055f0;
L_004055d9:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004055da:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004055dc:  // call 0x4244b0
    t0 = 0x004244b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004055e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004055e1:  // mov dword ptr [esi], 0x5d88b0
    M32((uint32_t)(esi)) = (uint32_t)(0x5d88b0u);
L_004055e7:  // mov dword ptr [esi + 8], 0x5d8838
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(0x5d8838u);
L_004055ee:  // jmp 0x4055f2
    goto L_004055f2;
L_004055f0:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004055f2:  // mov dword ptr [ebp + 0x528], esi
    M32((uint32_t)(ebp + 0x528u)) = (uint32_t)(esi);
L_004055f8:  // mov eax, dword ptr [ebp + 0xf8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xf8u)));
L_004055fe:  // mov dword ptr [ebp + 0x2d8], eax
    M32((uint32_t)(ebp + 0x2d8u)) = (uint32_t)(eax);
L_00405604:  // mov ecx, dword ptr [ebp + 0xfc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xfcu)));
L_0040560a:  // lea esi, [ebp + 0x318]
    esi = (uint32_t)((uint32_t)(ebp + 0x318u));
L_00405610:  // lea edx, [ebp + 0x1c]
    edx = (uint32_t)((uint32_t)(ebp + 0x1cu));
L_00405613:  // mov dword ptr [ebp + 0x2dc], ecx
    M32((uint32_t)(ebp + 0x2dcu)) = (uint32_t)(ecx);
L_00405619:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0040561b:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_0040561d:  // mov dword ptr [ebp + 0x2e0], edi
    M32((uint32_t)(ebp + 0x2e0u)) = (uint32_t)(edi);
L_00405623:  // mov dword ptr [ebp + 0x2e4], edi
    M32((uint32_t)(ebp + 0x2e4u)) = (uint32_t)(edi);
L_00405629:  // mov dword ptr [ebp + 0x2e8], edi
    M32((uint32_t)(ebp + 0x2e8u)) = (uint32_t)(edi);
L_0040562f:  // mov dword ptr [ebp + 0x300], edi
    M32((uint32_t)(ebp + 0x300u)) = (uint32_t)(edi);
L_00405635:  // mov dword ptr [ebp + 0x610], edi
    M32((uint32_t)(ebp + 0x610u)) = (uint32_t)(edi);
L_0040563b:  // mov dword ptr [ebp + 0x518], edi
    M32((uint32_t)(ebp + 0x518u)) = (uint32_t)(edi);
L_00405641:  // mov dword ptr [ebp + 0x514], edi
    M32((uint32_t)(ebp + 0x514u)) = (uint32_t)(edi);
L_00405647:  // mov dword ptr [ebp + 0x51c], edi
    M32((uint32_t)(ebp + 0x51cu)) = (uint32_t)(edi);
L_0040564d:  // mov dword ptr [ebp + 0x510], ebx
    M32((uint32_t)(ebp + 0x510u)) = (uint32_t)(ebx);
L_00405653:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_00405655:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00405658:  // lea edi, [esi + 0x10]
    edi = (uint32_t)((uint32_t)(esi + 0x10u));
L_0040565b:  // push 0x124
    t0 = 0x124u; esp -= 4; M32(esp) = t0;
L_00405660:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_00405663:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00405666:  // push 0x6230bc
    t0 = 0x6230bcu; esp -= 4; M32(esp) = t0;
L_0040566b:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_0040566d:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_00405670:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_00405673:  // mov ecx, 0x4c
    ecx = (uint32_t)(0x4cu);
L_00405678:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_0040567a:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_0040567d:  // mov byte ptr [esp + 0x4ac], 2
    M8((uint32_t)(esp + 0x4acu)) = (uint8_t)(0x2u);
L_00405685:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00405687:  // mov eax, dword ptr [0x672fd0]
    eax = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_0040568c:  // lea edi, [ebp + 0x458]
    edi = (uint32_t)((uint32_t)(ebp + 0x458u));
L_00405692:  // mov ecx, 0x14
    ecx = (uint32_t)(0x14u);
L_00405697:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0040569b:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0040569d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004056a2:  // mov word ptr [ebp + 0x2b4], bx
    M16((uint32_t)(ebp + 0x2b4u)) = (uint16_t)((ebx & 0xffffu));
L_004056a9:  // mov dword ptr [ebp + 0x638], ebx
    M32((uint32_t)(ebp + 0x638u)) = (uint32_t)(ebx);
L_004056af:  // mov dword ptr [esp + 0x3c], 0xffffffff
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(0xffffffffu);
L_004056b7:  // mov dword ptr [esp + 0x44], 0x42a00000
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(0x42a00000u);
L_004056bf:  // mov dword ptr [esp + 0x48], 0x3cf5c28f
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0x3cf5c28fu);
L_004056c7:  // mov dword ptr [esp + 0x38], ebp
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ebp);
L_004056cb:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004056d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004056d0:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004056d2:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004056d6:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004056d8:  // je 0x4056fb
    if (f.zf) goto L_004056fb;
L_004056da:  // mov dword ptr [esi + 4], ebx
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(ebx);
L_004056dd:  // mov dword ptr [esi], 0x5d8824
    M32((uint32_t)(esi)) = (uint32_t)(0x5d8824u);
L_004056e3:  // lea ecx, [esi + 0x1c]
    ecx = (uint32_t)((uint32_t)(esi + 0x1cu));
L_004056e6:  // mov byte ptr [esp + 0x49c], 9
    M8((uint32_t)(esp + 0x49cu)) = (uint8_t)(0x9u);
L_004056ee:  // call 0x4e5840
    t0 = 0x004e5840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004056f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004056f3:  // mov dword ptr [esi], 0x5d8810
    M32((uint32_t)(esi)) = (uint32_t)(0x5d8810u);
L_004056f9:  // jmp 0x4056fd
    goto L_004056fd;
L_004056fb:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004056fd:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004056ff:  // mov byte ptr [esp + 0x49c], 2
    M8((uint32_t)(esp + 0x49cu)) = (uint8_t)(0x2u);
L_00405707:  // je 0x405729
    if (f.zf) goto L_00405729;
L_00405709:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_0040570d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0040570e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00405710:  // call 0x4d65a0
    t0 = 0x004d65a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405715u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405715:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00405716:  // lea ecx, [ebp + 0x284]
    ecx = (uint32_t)((uint32_t)(ebp + 0x284u));
L_0040571c:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405721u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405721:  // mov dword ptr [ebp + 0x2b8], esi
    M32((uint32_t)(ebp + 0x2b8u)) = (uint32_t)(esi);
L_00405727:  // jmp 0x40572f
    goto L_0040572f;
L_00405729:  // mov dword ptr [ebp + 0x2b8], ebx
    M32((uint32_t)(ebp + 0x2b8u)) = (uint32_t)(ebx);
L_0040572f:  // mov edx, 0xfffffb44
    edx = (uint32_t)(0xfffffb44u);
L_00405734:  // mov esi, 0xfffffb5c
    esi = (uint32_t)(0xfffffb5cu);
L_00405739:  // sub edx, ebp
    t0 = lsub<32>(edx, ebp, f);
    edx = (uint32_t)(t0);
L_0040573b:  // lea eax, [ebp + 0x52c]
    eax = (uint32_t)((uint32_t)(ebp + 0x52cu));
L_00405741:  // sub esi, ebp
    t0 = lsub<32>(esi, ebp, f);
    esi = (uint32_t)(t0);
L_00405743:  // mov dword ptr [esp + 0x10], 6
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x6u);
L_0040574b:  // mov dword ptr [eax + 0x18], ebx
    M32((uint32_t)(eax + 0x18u)) = (uint32_t)(ebx);
L_0040574e:  // mov edi, dword ptr [ebp + 0x4b0]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x4b0u)));
L_00405754:  // lea ecx, [edx + eax]
    ecx = (uint32_t)((uint32_t)(edx + eax));
L_00405757:  // mov ecx, dword ptr [ecx + edi]
    ecx = (uint32_t)(M32((uint32_t)(ecx + edi)));
L_0040575a:  // cmp ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
L_0040575c:  // mov dword ptr [eax + 0x30], ecx
    M32((uint32_t)(eax + 0x30u)) = (uint32_t)(ecx);
L_0040575f:  // jne 0x405771
    if (!f.zf) goto L_00405771;
L_00405761:  // mov edi, dword ptr [ebp + 0x4b0]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x4b0u)));
L_00405767:  // lea ecx, [esi + eax]
    ecx = (uint32_t)((uint32_t)(esi + eax));
L_0040576a:  // mov ecx, dword ptr [ecx + edi]
    ecx = (uint32_t)(M32((uint32_t)(ecx + edi)));
L_0040576d:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_0040576f:  // jmp 0x405773
    goto L_00405773;
L_00405771:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00405773:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00405777:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0040577a:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0040577b:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0040577f:  // jne 0x40574b
    if (!f.zf) goto L_0040574b;
L_00405781:  // mov edx, dword ptr [esp + 0x4a4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4a4u)));
L_00405788:  // mov dword ptr [ebp + 0x520], 0xc1a00000
    M32((uint32_t)(ebp + 0x520u)) = (uint32_t)(0xc1a00000u);
L_00405792:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00405793:  // cmp dword ptr [edx + 0x3c4], ebx
    t0 = lsub<32>(M32((uint32_t)(edx + 0x3c4u)), ebx, f);
L_00405799:  // je 0x4057cf
    if (f.zf) goto L_004057cf;
L_0040579b:  // fld dword ptr [ebp + 0x60]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x60u)));
L_0040579e:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004057a4:  // fld dword ptr [ebp + 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x50u)));
L_004057a7:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004057ad:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_004057b0:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004057b6:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004057b9:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004057bd:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004057c1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004057c2:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004057c4:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004057c8:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004057cc:  // call dword ptr [eax + 0x74]
    t0 = M32((uint32_t)(eax + 0x74u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004057cfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004057cf:  // lea edx, [ebp + 0x114]
    edx = (uint32_t)((uint32_t)(ebp + 0x114u));
L_004057d5:  // lea eax, [ebp + 0x590]
    eax = (uint32_t)((uint32_t)(ebp + 0x590u));
L_004057db:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004057dc:  // mov dword ptr [ebp + 0x2fc], ebx
    M32((uint32_t)(ebp + 0x2fcu)) = (uint32_t)(ebx);
L_004057e2:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_004057e4:  // mov dword ptr [ebp + 0x2f8], ebx
    M32((uint32_t)(ebp + 0x2f8u)) = (uint32_t)(ebx);
L_004057ea:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004057ec:  // mov dword ptr [ebp + 0x4ac], ebx
    M32((uint32_t)(ebp + 0x4acu)) = (uint32_t)(ebx);
L_004057f2:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004057f5:  // mov dword ptr [ebp + 0x304], ebx
    M32((uint32_t)(ebp + 0x304u)) = (uint32_t)(ebx);
L_004057fb:  // mov dword ptr [eax + 4], ecx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ecx);
L_004057fe:  // lea ecx, [ebp + 0x4e0]
    ecx = (uint32_t)((uint32_t)(ebp + 0x4e0u));
L_00405804:  // mov edx, dword ptr [edx + 8]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00405807:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_0040580a:  // mov eax, 0xc7c34f80
    eax = (uint32_t)(0xc7c34f80u);
L_0040580f:  // mov dword ptr [ebp + 0x308], eax
    M32((uint32_t)(ebp + 0x308u)) = (uint32_t)(eax);
L_00405815:  // mov dword ptr [ebp + 0x30c], eax
    M32((uint32_t)(ebp + 0x30cu)) = (uint32_t)(eax);
L_0040581b:  // mov dword ptr [ebp + 0x608], eax
    M32((uint32_t)(ebp + 0x608u)) = (uint32_t)(eax);
L_00405821:  // mov dword ptr [ebp + 0x60c], eax
    M32((uint32_t)(ebp + 0x60cu)) = (uint32_t)(eax);
L_00405827:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0040582cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0040582c:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_00405831:  // mov dword ptr [ebp + 0x4ec], ebx
    M32((uint32_t)(ebp + 0x4ecu)) = (uint32_t)(ebx);
L_00405837:  // mov dword ptr [ebp + 0x4f8], ebx
    M32((uint32_t)(ebp + 0x4f8u)) = (uint32_t)(ebx);
L_0040583d:  // mov dword ptr [ebp + 0x4e4], ebx
    M32((uint32_t)(ebp + 0x4e4u)) = (uint32_t)(ebx);
L_00405843:  // mov dword ptr [ebp + 0x4f0], ebx
    M32((uint32_t)(ebp + 0x4f0u)) = (uint32_t)(ebx);
L_00405849:  // mov dword ptr [ebp + 0x4e8], ebx
    M32((uint32_t)(ebp + 0x4e8u)) = (uint32_t)(ebx);
L_0040584f:  // mov dword ptr [ebp + 0x4f4], ebx
    M32((uint32_t)(ebp + 0x4f4u)) = (uint32_t)(ebx);
L_00405855:  // mov dword ptr [ebp + 0x630], eax
    M32((uint32_t)(ebp + 0x630u)) = (uint32_t)(eax);
L_0040585b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0040585d:  // mov dword ptr [ebp + 0x634], eax
    M32((uint32_t)(ebp + 0x634u)) = (uint32_t)(eax);
L_00405863:  // call 0x406460
    t0 = 0x00406460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405868u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405868:  // mov ecx, dword ptr [0x8a9d9c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d9cu)));
L_0040586e:  // call 0x4de8d0
    t0 = 0x004de8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00405873u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00405873:  // and eax, 0x8000ffff
    t0 = llog<32>(eax & 0x8000ffffu, f);
    eax = (uint32_t)(t0);
L_00405878:  // jns 0x405881
    if (!f.sf) goto L_00405881;
L_0040587a:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0040587b:  // or eax, 0xffff0000
    t0 = llog<32>(eax | 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00405880:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00405881:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_00405885:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00405886:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_0040588a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0040588b:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_0040588f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00405890:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00405891:  // fmul dword ptr [0x5d8808]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8808u)));
L_00405897:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00405898:  // push 0x1772
    t0 = 0x1772u; esp -= 4; M32(esp) = t0;
L_0040589d:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004058a2:  // fadd dword ptr [0x672fd0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x672fd0u)));
L_004058a8:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_004058ae:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004058b2:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004058b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004058b7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004058b8:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004058ba:  // call 0x40b6d0
    t0 = 0x0040b6d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004058bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004058bf:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_004058c4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004058c6:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004058ca:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_004058cf:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004058d0:  // mov dword ptr [esp + 0x4a8], 0xffffffff
    M32((uint32_t)(esp + 0x4a8u)) = (uint32_t)(0xffffffffu);
L_004058db:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004058e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004058e0:  // mov ecx, dword ptr [esp + 0x490]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x490u)));
L_004058e7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004058e8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004058e9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004058ea:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004058f1:  // add esp, 0x490
    t0 = ladd<32>(esp, 0x490u, f);
    esp = (uint32_t)(t0);
L_004058f7:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00404dd0, 00404dd0)
