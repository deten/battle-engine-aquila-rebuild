// lifted from 00441ea0 (FUN_00441ea0, 1066 bytes, 279 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00441ea0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00441ea0;
L_00441ea0:  // sub esp, 0x1d4
    t0 = lsub<32>(esp, 0x1d4u, f);
    esp = (uint32_t)(t0);
L_00441ea6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00441ea7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00441ea8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00441ea9:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_00441eab:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00441eac:  // mov ecx, 6
    ecx = (uint32_t)(0x6u);
L_00441eb1:  // mov esi, 0x89ce14
    esi = (uint32_t)(0x89ce14u);
L_00441eb6:  // lea edi, [esp + 0x24]
    edi = (uint32_t)((uint32_t)(esp + 0x24u));
L_00441eba:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00441ebc:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00441ec1:  // mov esi, 0x9c6994
    esi = (uint32_t)(0x9c6994u);
L_00441ec6:  // lea edi, [esp + 0x1a4]
    edi = (uint32_t)((uint32_t)(esp + 0x1a4u));
L_00441ecd:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00441ed1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00441ed3:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00441ed8:  // mov esi, 0x9c6914
    esi = (uint32_t)(0x9c6914u);
L_00441edd:  // lea edi, [esp + 0x164]
    edi = (uint32_t)((uint32_t)(esp + 0x164u));
L_00441ee4:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00441ee8:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00441eea:  // mov ecx, 0x10
    ecx = (uint32_t)(0x10u);
L_00441eef:  // mov esi, 0x9c6954
    esi = (uint32_t)(0x9c6954u);
L_00441ef4:  // lea edi, [esp + 0x124]
    edi = (uint32_t)((uint32_t)(esp + 0x124u));
L_00441efb:  // mov dword ptr [esp + 0x98], eax
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(eax);
L_00441f02:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00441f06:  // mov dword ptr [esp + 0x9c], edx
    M32((uint32_t)(esp + 0x9cu)) = (uint32_t)(edx);
L_00441f0d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00441f0f:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00441f13:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00441f17:  // mov dword ptr [esp + 0xa0], ecx
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(ecx);
L_00441f1e:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00441f22:  // mov dword ptr [esp + 0x94], eax
    M32((uint32_t)(esp + 0x94u)) = (uint32_t)(eax);
L_00441f29:  // mov eax, dword ptr [0x89ce4c]
    eax = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_00441f2e:  // mov dword ptr [esp + 0x8c], ecx
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(ecx);
L_00441f35:  // mov dword ptr [esp + 0x90], edx
    M32((uint32_t)(esp + 0x90u)) = (uint32_t)(edx);
L_00441f3c:  // mov ecx, dword ptr [eax*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x89c9a4u)));
L_00441f43:  // lea eax, [esp + 0xb4]
    eax = (uint32_t)((uint32_t)(esp + 0xb4u));
L_00441f4a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00441f4b:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00441f4d:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00441f4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00441f4f:  // mov ecx, dword ptr [0x89ce4c]
    ecx = (uint32_t)(M32((uint32_t)(0x89ce4cu)));
L_00441f55:  // lea eax, [esp + 0xf4]
    eax = (uint32_t)((uint32_t)(esp + 0xf4u));
L_00441f5c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00441f5d:  // mov ecx, dword ptr [ecx*4 + 0x89c9a4]
    ecx = (uint32_t)(M32((uint32_t)(ecx * 4u + 0x89c9a4u)));
L_00441f64:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00441f66:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00441f69u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00441f69:  // fld dword ptr [esp + 0x118]
    lpush(x, (long double)F32((uint32_t)(esp + 0x118u)));
L_00441f70:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00441f71:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00441f74:  // fld dword ptr [esp + 0x10c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10cu)));
L_00441f7b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00441f7c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00441f7f:  // fld dword ptr [esp + 0x100]
    lpush(x, (long double)F32((uint32_t)(esp + 0x100u)));
L_00441f86:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00441f87:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_00441f8b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00441f8e:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00441f93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00441f93:  // mov ebx, dword ptr [ebx]
    ebx = (uint32_t)(M32((uint32_t)(ebx)));
L_00441f95:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_00441f97:  // je 0x4422bf
    if (f.zf) goto L_004422bf;
L_00441f9d:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00441fa0:  // lea esi, [ebx + 0x54]
    esi = (uint32_t)((uint32_t)(ebx + 0x54u));
L_00441fa3:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_00441fa8:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00441faa:  // lea eax, [ebx + 0x44]
    eax = (uint32_t)((uint32_t)(ebx + 0x44u));
L_00441fad:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00441fb0:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00441fb2:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00441fb4:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_00441fb6:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_00441fb8:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00441fbb:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_00441fbe:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00441fc1:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00441fc4:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_00441fc7:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_00441fca:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00441fcf:  // call 0x550ca0
    t0 = 0x00550ca0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00441fd4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00441fd4:  // mov eax, dword ptr [0x89ce84]
    eax = (uint32_t)(M32((uint32_t)(0x89ce84u)));
L_00441fd9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00441fdb:  // jne 0x441ff7
    if (!f.zf) goto L_00441ff7;
L_00441fdd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00441fdf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00441fe1:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00441fe3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00441fe4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00441fe5:  // push 0x625498
    t0 = 0x625498u; esp -= 4; M32(esp) = t0;
L_00441fea:  // call 0x4f27f0
    t0 = 0x004f27f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00441fefu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00441fef:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_00441ff2:  // mov dword ptr [0x89ce84], eax
    M32((uint32_t)(0x89ce84u)) = (uint32_t)(eax);
L_00441ff7:  // lea ebp, [ebx + 4]
    ebp = (uint32_t)((uint32_t)(ebx + 0x4u));
L_00441ffa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00441ffb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00441ffd:  // sub esp, 0x30
    t0 = lsub<32>(esp, 0x30u, f);
    esp = (uint32_t)(t0);
L_00442000:  // lea esi, [ebx + 0x14]
    esi = (uint32_t)((uint32_t)(ebx + 0x14u));
L_00442003:  // mov edi, esp
    edi = (uint32_t)(esp);
L_00442005:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00442007:  // lea eax, [esp + 0xb0]
    eax = (uint32_t)((uint32_t)(esp + 0xb0u));
L_0044200e:  // mov dword ptr [esp + 0xb0], edx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edx);
L_00442015:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00442016:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00442019:  // mov dword ptr [esp + 0xb8], edx
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(edx);
L_00442020:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00442023:  // mov dword ptr [esp + 0xbc], edx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(edx);
L_0044202a:  // lea edx, [ebx + 0x84]
    edx = (uint32_t)((uint32_t)(ebx + 0x84u));
L_00442030:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00442033:  // mov dword ptr [esp + 0xc0], ecx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(ecx);
L_0044203a:  // mov ecx, dword ptr [edx]
    ecx = (uint32_t)(M32((uint32_t)(edx)));
L_0044203c:  // mov dword ptr [esp + 0xa4], ecx
    M32((uint32_t)(esp + 0xa4u)) = (uint32_t)(ecx);
L_00442043:  // mov ecx, dword ptr [edx + 4]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00442046:  // mov dword ptr [esp + 0xa8], ecx
    M32((uint32_t)(esp + 0xa8u)) = (uint32_t)(ecx);
L_0044204d:  // mov ecx, dword ptr [edx + 8]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_00442050:  // mov dword ptr [esp + 0xac], ecx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(ecx);
L_00442057:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0044205c:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_0044205f:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00442061:  // mov dword ptr [esp + 0xb0], edx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edx);
L_00442068:  // mov edx, dword ptr [ebx + 0x94]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_0044206e:  // lea ecx, [esp + 0xa4]
    ecx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_00442075:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00442076:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00442077:  // mov ecx, 0x89c9a0
    ecx = (uint32_t)(0x89c9a0u);
L_0044207c:  // call 0x53d760
    t0 = 0x0053d760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00442081u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00442081:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00442083:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_00442085:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0044208a:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044208fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044208f:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00442091:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_00442093:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00442098:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044209du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044209d:  // lea edi, [ebx + 0x98]
    edi = (uint32_t)((uint32_t)(ebx + 0x98u));
L_004420a3:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004420a6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004420a8:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004420aa:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004420ac:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004420ad:  // je 0x4422b5
    if (f.zf) goto L_004422b5;
L_004420b3:  // mov ecx, dword ptr [ebx + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x48u)));
L_004420b6:  // mov eax, dword ptr [ebx + 0x44]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x44u)));
L_004420b9:  // mov dword ptr [esp + 0x60], ecx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(ecx);
L_004420bd:  // mov ecx, dword ptr [ebp]
    ecx = (uint32_t)(M32((uint32_t)(ebp)));
L_004420c0:  // mov edx, dword ptr [ebx + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x4cu)));
L_004420c3:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_004420c7:  // mov ecx, dword ptr [ebp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xcu)));
L_004420ca:  // mov dword ptr [esp + 0x5c], eax
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(eax);
L_004420ce:  // mov eax, dword ptr [ebx + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x50u)));
L_004420d1:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004420d5:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004420da:  // lea esi, [ebx + 0x54]
    esi = (uint32_t)((uint32_t)(ebx + 0x54u));
L_004420dd:  // lea edi, [esp + 0xc4]
    edi = (uint32_t)((uint32_t)(esp + 0xc4u));
L_004420e4:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_004420e8:  // mov eax, dword ptr [ebp + 8]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x8u)));
L_004420eb:  // mov dword ptr [esp + 0x64], edx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edx);
L_004420ef:  // mov edx, dword ptr [ebp + 4]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x4u)));
L_004420f2:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004420f6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004420f8:  // fld dword ptr [esp + 0xcc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xccu)));
L_004420ff:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00442103:  // fld dword ptr [esp + 0xc8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc8u)));
L_0044210a:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0044210e:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00442112:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442114:  // fld dword ptr [esp + 0xc4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xc4u)));
L_0044211b:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0044211f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442121:  // fld dword ptr [esp + 0xdc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xdcu)));
L_00442128:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0044212c:  // fld dword ptr [esp + 0xd8]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd8u)));
L_00442133:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_00442137:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442139:  // fld dword ptr [esp + 0xd4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xd4u)));
L_00442140:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00442144:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442146:  // fstp dword ptr [esp + 0xa8]
    F32((uint32_t)(esp + 0xa8u)) = lf32(ST(0));
    lpop(x);
L_0044214d:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00442151:  // fmul dword ptr [esp + 0xec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xecu)));
L_00442158:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0044215c:  // fmul dword ptr [esp + 0xe8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xe8u)));
L_00442163:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442165:  // fld dword ptr [esp + 0xe4]
    lpush(x, (long double)F32((uint32_t)(esp + 0xe4u)));
L_0044216c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_00442170:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00442172:  // fstp dword ptr [esp + 0xac]
    F32((uint32_t)(esp + 0xacu)) = lf32(ST(0));
    lpop(x);
L_00442179:  // fadd dword ptr [esp + 0x5c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x5cu)));
L_0044217d:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_00442181:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_00442185:  // fadd dword ptr [esp + 0xa8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xa8u)));
L_0044218c:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_00442190:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_00442194:  // fadd dword ptr [esp + 0xac]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0xacu)));
L_0044219b:  // fstp dword ptr [esp + 0x54]
    F32((uint32_t)(esp + 0x54u)) = lf32(ST(0));
    lpop(x);
L_0044219f:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004421a3:  // fsub dword ptr [esp + 0xb4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb4u)));
L_004421aa:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004421ae:  // fsub dword ptr [esp + 0xb8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xb8u)));
L_004421b5:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004421b9:  // fsub dword ptr [esp + 0xbc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xbcu)));
L_004421c0:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004421c4:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004421c6:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_004421ca:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004421cc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004421ce:  // fxch st(3)
    v0 = ST(0); ST(0) = ST(3); ST(3) = v0;
L_004421d0:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004421d4:  // faddp st(3)
    ST(3) = (ST(3)) + (ST(0));
    lpop(x);
L_004421d6:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_004421d8:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004421de:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004421e0:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004421e2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004421e4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004421e6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004421e9:  // jne 0x4422b5
    if (!f.zf) goto L_004422b5;
L_004421ef:  // lea edx, [esp + 0x164]
    edx = (uint32_t)((uint32_t)(esp + 0x164u));
L_004421f6:  // lea eax, [esp + 0x124]
    eax = (uint32_t)((uint32_t)(esp + 0x124u));
L_004421fd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004421fe:  // lea ecx, [esp + 0x1a8]
    ecx = (uint32_t)((uint32_t)(esp + 0x1a8u));
L_00442205:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00442206:  // lea edx, [esp + 0x94]
    edx = (uint32_t)((uint32_t)(esp + 0x94u));
L_0044220d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044220e:  // lea eax, [esp + 0x58]
    eax = (uint32_t)((uint32_t)(esp + 0x58u));
L_00442212:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00442213:  // lea ecx, [esp + 0x4c]
    ecx = (uint32_t)((uint32_t)(esp + 0x4cu));
L_00442217:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00442218:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00442219:  // call 0x576297
    t0 = 0x00576297u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044221eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044221e:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00442222:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_00442228:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044222a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0044222d:  // jne 0x4422b5
    if (!f.zf) goto L_004422b5;
L_00442233:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00442238:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044223du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044223d:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00442241:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00442245:  // fcomp dword ptr [esp + 0x3c]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x3cu)));
    lpop(x);
L_00442249:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044224b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044224e:  // jne 0x4422b5
    if (!f.zf) goto L_004422b5;
L_00442250:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00442254:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0044225a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0044225c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0044225f:  // jne 0x4422b5
    if (!f.zf) goto L_004422b5;
L_00442261:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00442266:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044226bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044226b:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0044226f:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00442273:  // fcomp dword ptr [esp + 0x40]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x40u)));
    lpop(x);
L_00442277:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00442279:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0044227c:  // jne 0x4422b5
    if (!f.zf) goto L_004422b5;
L_0044227e:  // mov esi, dword ptr [ebx + 0x94]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x94u)));
L_00442284:  // mov edi, dword ptr [0x88a0c4]
    edi = (uint32_t)(M32((uint32_t)(0x88a0c4u)));
L_0044228a:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0044228f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00442291:  // lea eax, [ebx + 0x98]
    eax = (uint32_t)((uint32_t)(ebx + 0x98u));
L_00442297:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00442299:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044229a:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0044229fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0044229f:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_004422a3:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004422a6:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004422a8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004422a9:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004422ad:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004422ae:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004422af:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004422b0:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004422b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004422b5:  // mov ebx, dword ptr [ebx]
    ebx = (uint32_t)(M32((uint32_t)(ebx)));
L_004422b7:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004422b9:  // jne 0x441f9d
    if (!f.zf) goto L_00441f9d;
L_004422bf:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004422c0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004422c1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004422c2:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004422c3:  // add esp, 0x1d4
    t0 = ladd<32>(esp, 0x1d4u, f);
    esp = (uint32_t)(t0);
L_004422c9:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00441ea0, 00441ea0)
