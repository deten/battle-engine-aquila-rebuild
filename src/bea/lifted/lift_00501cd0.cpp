// lifted from 00501cd0 (FUN_00501cd0, 906 bytes, 251 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00501cd0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00501cd0;
L_00501cd0:  // mov al, byte ptr [0x63c108]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x63c108u))) & 0xffu);
L_00501cd5:  // sub esp, 0x2b0
    t0 = lsub<32>(esp, 0x2b0u, f);
    esp = (uint32_t)(t0);
L_00501cdb:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00501cdd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00501cde:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00501ce0:  // je 0x502052
    if (f.zf) goto L_00502052;
L_00501ce6:  // mov al, byte ptr [ebx + 0x34]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x34u))) & 0xffu);
L_00501ce9:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00501ceb:  // je 0x501cfa
    if (f.zf) goto L_00501cfa;
L_00501ced:  // call 0x502920
    t0 = 0x00502920u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501cf2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501cf2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00501cf3:  // add esp, 0x2b0
    t0 = ladd<32>(esp, 0x2b0u, f);
    esp = (uint32_t)(t0);
L_00501cf9:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00501cfa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00501cfb:  // lea eax, [esp + 0x78]
    eax = (uint32_t)((uint32_t)(esp + 0x78u));
L_00501cff:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00501d00:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501d01:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00501d06:  // call 0x551510
    t0 = 0x00551510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501d0bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501d0b:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00501d10:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_00501d15:  // lea edi, [esp + 0xbc]
    edi = (uint32_t)((uint32_t)(esp + 0xbcu));
L_00501d1c:  // lea edx, [esp + 0x7c]
    edx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_00501d20:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00501d22:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00501d27:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_00501d2c:  // lea edi, [esp + 0x13c]
    edi = (uint32_t)((uint32_t)(esp + 0x13cu));
L_00501d33:  // lea eax, [esp + 0x1bc]
    eax = (uint32_t)((uint32_t)(esp + 0x1bcu));
L_00501d3a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00501d3c:  // lea ecx, [esp + 0xbc]
    ecx = (uint32_t)((uint32_t)(esp + 0xbcu));
L_00501d43:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501d44:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501d45:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501d46:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501d4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501d4b:  // lea ecx, [esp + 0x13c]
    ecx = (uint32_t)((uint32_t)(esp + 0x13cu));
L_00501d52:  // lea edx, [esp + 0x1bc]
    edx = (uint32_t)((uint32_t)(esp + 0x1bcu));
L_00501d59:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501d5a:  // lea eax, [esp + 0x100]
    eax = (uint32_t)((uint32_t)(esp + 0x100u));
L_00501d61:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501d62:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501d63:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501d68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501d68:  // lea ecx, [esp + 0xbc]
    ecx = (uint32_t)((uint32_t)(esp + 0xbcu));
L_00501d6f:  // lea edx, [esp + 0x7c]
    edx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_00501d73:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501d74:  // lea eax, [esp + 0x180]
    eax = (uint32_t)((uint32_t)(esp + 0x180u));
L_00501d7b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501d7c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501d7d:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501d82u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501d82:  // lea ecx, [esp + 0xfc]
    ecx = (uint32_t)((uint32_t)(esp + 0xfcu));
L_00501d89:  // lea edx, [esp + 0xfc]
    edx = (uint32_t)((uint32_t)(esp + 0xfcu));
L_00501d90:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501d91:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501d92:  // call 0x576b47
    t0 = 0x00576b47u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501d97u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501d97:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501d9c:  // lea edx, [esp + 0xfc]
    edx = (uint32_t)((uint32_t)(esp + 0xfcu));
L_00501da3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00501da5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501da6:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00501da8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00501daa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501dab:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501db1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501db1:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501db6:  // lea edx, [esp + 0xc]
    edx = (uint32_t)((uint32_t)(esp + 0xcu));
L_00501dba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501dbc:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00501dc4:  // mov dword ptr [esp + 0x14], 0x43800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x43800000u);
L_00501dcc:  // mov dword ptr [esp + 0x18], 0x3abb3ee7
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3abb3ee7u);
L_00501dd4:  // mov dword ptr [esp + 0x1c], 0x3f000000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x3f000000u);
L_00501ddc:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00501dde:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501ddf:  // push 0x5f
    t0 = 0x5fu; esp -= 4; M32(esp) = t0;
L_00501de1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501de2:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501de8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501de8:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501ded:  // lea edx, [esp + 0xc]
    edx = (uint32_t)((uint32_t)(esp + 0xcu));
L_00501df1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501df3:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_00501dfb:  // mov dword ptr [esp + 0x14], 0x3e800000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3e800000u);
L_00501e03:  // mov dword ptr [esp + 0x18], 0x3fb6db6e
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x3fb6db6eu);
L_00501e0b:  // mov dword ptr [esp + 0x1c], 0x3f800000
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x3f800000u);
L_00501e13:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00501e15:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501e16:  // push 0x5e
    t0 = 0x5eu; esp -= 4; M32(esp) = t0;
L_00501e18:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501e19:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501e1fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501e1f:  // lea eax, [esp + 0x13c]
    eax = (uint32_t)((uint32_t)(esp + 0x13cu));
L_00501e26:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00501e2b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501e2c:  // call 0x551510
    t0 = 0x00551510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501e31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501e31:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00501e36:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_00501e3b:  // lea edi, [esp + 0x7c]
    edi = (uint32_t)((uint32_t)(esp + 0x7cu));
L_00501e3f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00501e41:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00501e46:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_00501e4b:  // lea edi, [esp + 0xbc]
    edi = (uint32_t)((uint32_t)(esp + 0xbcu));
L_00501e52:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00501e54:  // lea ecx, [esp + 0x7c]
    ecx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_00501e58:  // lea edx, [esp + 0x23c]
    edx = (uint32_t)((uint32_t)(esp + 0x23cu));
L_00501e5f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501e60:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00501e62:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501e63:  // call 0x576e0a
    t0 = 0x00576e0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501e68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501e68:  // lea eax, [esp + 0x7c]
    eax = (uint32_t)((uint32_t)(esp + 0x7cu));
L_00501e6c:  // lea ecx, [esp + 0x27c]
    ecx = (uint32_t)((uint32_t)(esp + 0x27cu));
L_00501e73:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501e74:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00501e76:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501e77:  // call 0x576e0a
    t0 = 0x00576e0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501e7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501e7c:  // lea edx, [esp + 0xbc]
    edx = (uint32_t)((uint32_t)(esp + 0xbcu));
L_00501e83:  // lea eax, [esp + 0x7c]
    eax = (uint32_t)((uint32_t)(esp + 0x7cu));
L_00501e87:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501e88:  // lea ecx, [esp + 0x1c0]
    ecx = (uint32_t)((uint32_t)(esp + 0x1c0u));
L_00501e8f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501e90:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501e91:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501e96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501e96:  // lea edx, [esp + 0x13c]
    edx = (uint32_t)((uint32_t)(esp + 0x13cu));
L_00501e9d:  // lea eax, [esp + 0x1bc]
    eax = (uint32_t)((uint32_t)(esp + 0x1bcu));
L_00501ea4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501ea5:  // lea ecx, [esp + 0x100]
    ecx = (uint32_t)((uint32_t)(esp + 0x100u));
L_00501eac:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501ead:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501eae:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501eb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501eb3:  // lea edx, [esp + 0xbc]
    edx = (uint32_t)((uint32_t)(esp + 0xbcu));
L_00501eba:  // lea eax, [esp + 0x7c]
    eax = (uint32_t)((uint32_t)(esp + 0x7cu));
L_00501ebe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501ebf:  // lea ecx, [esp + 0x180]
    ecx = (uint32_t)((uint32_t)(esp + 0x180u));
L_00501ec6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501ec7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501ec8:  // call 0x5768fe
    t0 = 0x005768feu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501ecdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501ecd:  // lea edx, [esp + 0x17c]
    edx = (uint32_t)((uint32_t)(esp + 0x17cu));
L_00501ed4:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00501ed8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501ed9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501eda:  // call 0x576b47
    t0 = 0x00576b47u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501edfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501edf:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501ee4:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00501ee8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501eea:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501eeb:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00501eed:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00501eef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501ef0:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501ef6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501ef6:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501efb:  // lea edx, [esp + 0x3c]
    edx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00501eff:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501f01:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501f02:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00501f04:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00501f06:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501f07:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501f0du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501f0d:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501f12:  // lea edx, [esp + 0x4c]
    edx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00501f16:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501f18:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501f19:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00501f1b:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00501f1d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501f1e:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501f24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501f24:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501f29:  // lea edx, [esp + 0x5c]
    edx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00501f2d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501f2f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501f30:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00501f32:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_00501f34:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501f35:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501f3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501f3b:  // lea eax, [esp + 0x13c]
    eax = (uint32_t)((uint32_t)(esp + 0x13cu));
L_00501f42:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00501f46:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501f47:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501f48:  // call 0x576b47
    t0 = 0x00576b47u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501f4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501f4d:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501f52:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501f54:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00501f56:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_00501f5a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501f5b:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_00501f5d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501f5e:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501f64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501f64:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501f69:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_00501f6d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501f6f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501f70:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00501f72:  // push 9
    t0 = 0x9u; esp -= 4; M32(esp) = t0;
L_00501f74:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501f75:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501f7bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501f7b:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501f80:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00501f84:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501f86:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501f87:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00501f89:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_00501f8b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501f8c:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501f92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501f92:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501f97:  // lea ecx, [esp + 0x5c]
    ecx = (uint32_t)((uint32_t)(esp + 0x5cu));
L_00501f9b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501f9d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501f9e:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00501fa0:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_00501fa2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501fa3:  // call dword ptr [edx + 0x178]
    t0 = M32((uint32_t)(edx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501fa9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501fa9:  // lea edx, [esp + 0x17c]
    edx = (uint32_t)((uint32_t)(esp + 0x17cu));
L_00501fb0:  // lea eax, [esp + 0x1fc]
    eax = (uint32_t)((uint32_t)(esp + 0x1fcu));
L_00501fb7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501fb8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00501fba:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501fbb:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_00501fc3:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_00501fcb:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_00501fd3:  // call 0x576e0a
    t0 = 0x00576e0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501fd8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501fd8:  // lea ecx, [esp + 0x1fc]
    ecx = (uint32_t)((uint32_t)(esp + 0x1fcu));
L_00501fdf:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00501fe3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501fe4:  // lea eax, [esp + 0x70]
    eax = (uint32_t)((uint32_t)(esp + 0x70u));
L_00501fe8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501fe9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501fea:  // call 0x57600b
    t0 = 0x0057600bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00501fefu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00501fef:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501ff4:  // lea edx, [esp + 0x6c]
    edx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_00501ff8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00501ffa:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00501ffb:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00501ffd:  // push 0x19
    t0 = 0x19u; esp -= 4; M32(esp) = t0;
L_00501fff:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502000:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00502006u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00502006:  // fld dword ptr [0x9c68b0]
    lpush(x, (long double)F32((uint32_t)(0x9c68b0u)));
L_0050200c:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00502011:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00502015:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00502019:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050201b:  // mov dword ptr [esp + 0x24], 0x402df84d
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x402df84du);
L_00502023:  // mov dword ptr [esp + 0x28], 0
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(0x0u);
L_0050202b:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_00502033:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_00502035:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502036:  // push 0x1a
    t0 = 0x1au; esp -= 4; M32(esp) = t0;
L_00502038:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502039:  // call dword ptr [ecx + 0x178]
    t0 = M32((uint32_t)(ecx + 0x178u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050203fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050203f:  // add ebx, 8
    t0 = ladd<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_00502042:  // push 0x63cf68
    t0 = 0x63cf68u; esp -= 4; M32(esp) = t0;
L_00502047:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00502048:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0050204du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0050204d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00502050:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00502051:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00502052:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00502053:  // add esp, 0x2b0
    t0 = ladd<32>(esp, 0x2b0u, f);
    esp = (uint32_t)(t0);
L_00502059:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00501cd0, 00501cd0)
