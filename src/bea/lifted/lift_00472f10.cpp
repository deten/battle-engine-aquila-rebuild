// lifted from 00472f10 (FUN_00472f10, 4527 bytes, 1415 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00472f10(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00472f10;
L_00472f10:  // sub esp, 0x9c
    t0 = lsub<32>(esp, 0x9cu, f);
    esp = (uint32_t)(t0);
L_00472f16:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00472f1d:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00472f24:  // mov eax, 0xff
    eax = (uint32_t)(0xffu);
L_00472f29:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00472f2a:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00472f2c:  // mov cl, byte ptr [esi + 0x14]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x14u))) & 0xffu);
L_00472f2f:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_00472f31:  // je 0x472f47
    if (f.zf) goto L_00472f47;
L_00472f33:  // mov edx, dword ptr [esi + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00472f36:  // add edx, 0x10
    t0 = ladd<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_00472f39:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_00472f3b:  // mov dword ptr [esi + 0x10], edx
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(edx);
L_00472f3e:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00472f40:  // jle 0x472f5c
    if ((f.zf || f.sf != f.of)) goto L_00472f5c;
L_00472f42:  // mov dword ptr [esi + 0x10], eax
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(eax);
L_00472f45:  // jmp 0x472f59
    goto L_00472f59;
L_00472f47:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00472f4a:  // add ecx, -0x10
    t0 = ladd<32>(ecx, 0xfffffff0u, f);
    ecx = (uint32_t)(t0);
L_00472f4d:  // mov dword ptr [esi + 0x10], ecx
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(ecx);
L_00472f50:  // jns 0x472f59
    if (!f.sf) goto L_00472f59;
L_00472f52:  // mov dword ptr [esi + 0x10], 0
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(0x0u);
L_00472f59:  // cmp dword ptr [esi + 0x10], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0x10u)), eax, f);
L_00472f5c:  // je 0x472f71
    if (f.zf) goto L_00472f71;
L_00472f5e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00472f60:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00472f65:  // call 0x46f2c0
    t0 = 0x0046f2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472f6au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472f6a:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00472f6c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00472f6e:  // call dword ptr [edx + 0x1c]
    t0 = M32((uint32_t)(edx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472f71u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472f71:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_00472f74:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00472f75:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00472f76:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00472f77:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00472f79:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00472f7d:  // je 0x47312a
    if (f.zf) goto L_0047312a;
L_00472f83:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_00472f87:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00472f8a:  // fmul dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00472f90:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00472f94:  // mov ebx, dword ptr [esp + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00472f98:  // shl ebx, 0x18
    t0 = lshl<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_00472f9b:  // or ebx, 0xffffff
    t0 = llog<32>(ebx | 0xffffffu, f);
    ebx = (uint32_t)(t0);
L_00472fa1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00472fa3:  // je 0x47312a
    if (f.zf) goto L_0047312a;
L_00472fa9:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00472fb0:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00472fb7:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00472fba:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00472fbf:  // mov edi, dword ptr [eax + 0xac]
    edi = (uint32_t)(M32((uint32_t)(eax + 0xacu)));
L_00472fc5:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472fcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472fca:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00472fcb:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00472fcd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00472fcf:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00472fd1:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00472fd2:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00472fd4:  // mov edx, dword ptr [esi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00472fd7:  // sar ecx, 1
    t0 = lsar<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_00472fd9:  // movsx edi, word ptr [edx + 0xb0]
    edi = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(edx + 0xb0u))));
L_00472fe0:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00472fe2:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00472fe4:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_00472fe8:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00472fed:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00472ff2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00472ff2:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00472ff3:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00472ff5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00472ff7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00472ff9:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00472ffb:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00472ffc:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00472ffe:  // mov edx, dword ptr [esi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_00473001:  // sar ecx, 1
    t0 = lsar<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_00473003:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473005:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_00473007:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047300c:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_00473010:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473012:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00473016:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473018:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047301d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473022:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00473023:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00473027:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_0047302b:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0047302f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473030:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00473035:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473036:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0047303a:  // mov ecx, dword ptr [esp + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0047303e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047303f:  // call 0x5563d0
    t0 = 0x005563d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473044u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473044:  // add esp, 0x2c
    t0 = ladd<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00473047:  // mov ebp, 0x62c65c
    ebp = (uint32_t)(0x62c65cu);
L_0047304c:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0047304e:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00473052:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473053:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00473054:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473059u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473059:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0047305c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473061:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473062:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473064:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473069u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473069:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047306b:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473070u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473070:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00473074:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473076:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473077:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473079:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047307b:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0047307d:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00473081:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00473085:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473086:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473088:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00473089:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0047308b:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0047308f:  // mov eax, dword ptr [edi + 0x62c854]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x62c854u)));
L_00473095:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00473097:  // je 0x4730cc
    if (f.zf) goto L_004730cc;
L_00473099:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047309eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047309e:  // fild dword ptr [edi + 0x62c838]
    lpush(x, (long double)(int32_t)M32((uint32_t)(edi + 0x62c838u)));
L_004730a4:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004730a7:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_004730ab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004730ac:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004730ad:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_004730b2:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_004730b7:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004730bc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004730bd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004730c0:  // fild dword ptr [edi + 0x62c81c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(edi + 0x62c81cu)));
L_004730c6:  // fadd dword ptr [esp + 0x44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x44u)));
L_004730ca:  // jmp 0x473101
    goto L_00473101;
L_004730cc:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004730d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004730d1:  // fild dword ptr [edi + 0x62c838]
    lpush(x, (long double)(int32_t)M32((uint32_t)(edi + 0x62c838u)));
L_004730d7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004730da:  // fadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x20u)));
L_004730de:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004730df:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004730e0:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_004730e5:  // push 0x3f000000
    t0 = 0x3f000000u; esp -= 4; M32(esp) = t0;
L_004730ea:  // push 0x3dcccccd
    t0 = 0x3dcccccdu; esp -= 4; M32(esp) = t0;
L_004730ef:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004730f0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004730f3:  // fild dword ptr [edi + 0x62c81c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(edi + 0x62c81cu)));
L_004730f9:  // fadd dword ptr [esp + 0x44]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x44u)));
L_004730fd:  // fisub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)(int32_t)M32((uint32_t)(esp + 0x3cu)));
L_00473101:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473102:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473107:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047310a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047310c:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473111u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473111:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473113:  // call 0x540010
    t0 = 0x00540010u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473118u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473118:  // add ebp, 0x40
    t0 = ladd<32>(ebp, 0x40u, f);
    ebp = (uint32_t)(t0);
L_0047311b:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0047311e:  // cmp ebp, 0x62c81c
    t0 = lsub<32>(ebp, 0x62c81cu, f);
L_00473124:  // jl 0x47304e
    if ((f.sf != f.of)) goto L_0047304e;
L_0047312a:  // mov al, byte ptr [esi + 0x1c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x1cu))) & 0xffu);
L_0047312d:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0047312f:  // je 0x47314a
    if (f.zf) goto L_0047314a;
L_00473131:  // mov edx, dword ptr [esi + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00473134:  // mov eax, 0xff
    eax = (uint32_t)(0xffu);
L_00473139:  // add edx, 0x20
    t0 = ladd<32>(edx, 0x20u, f);
    edx = (uint32_t)(t0);
L_0047313c:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0047313e:  // mov dword ptr [esi + 0x18], edx
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(edx);
L_00473141:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00473143:  // jle 0x47315c
    if ((f.zf || f.sf != f.of)) goto L_0047315c;
L_00473145:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_00473148:  // jmp 0x47315c
    goto L_0047315c;
L_0047314a:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0047314d:  // add eax, -0x20
    t0 = ladd<32>(eax, 0xffffffe0u, f);
    eax = (uint32_t)(t0);
L_00473150:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_00473153:  // jns 0x47315c
    if (!f.sf) goto L_0047315c;
L_00473155:  // mov dword ptr [esi + 0x18], 0
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(0x0u);
L_0047315c:  // mov eax, dword ptr [esi + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x44u)));
L_0047315f:  // mov byte ptr [esp + 0x2b], 0
    M8((uint32_t)(esp + 0x2bu)) = (uint8_t)(0x0u);
L_00473164:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00473167:  // jne 0x473ade
    if (!f.zf) goto L_00473ade;
L_0047316d:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00473170:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00473172:  // je 0x473ade
    if (f.zf) goto L_00473ade;
L_00473178:  // mov eax, dword ptr [0x8aa468]
    eax = (uint32_t)(M32((uint32_t)(0x8aa468u)));
L_0047317d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047317f:  // jne 0x473ade
    if (!f.zf) goto L_00473ade;
L_00473185:  // mov byte ptr [0x679b40], 1
    M8((uint32_t)(0x679b40u)) = (uint8_t)(0x1u);
L_0047318c:  // fild dword ptr [esi + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x18u)));
L_0047318f:  // fmul dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00473195:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00473199:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0047319d:  // cmp edi, 0xa0
    t0 = lsub<32>(edi, 0xa0u, f);
L_004731a3:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004731a5:  // fild dword ptr [0x89ce18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89ce18u)));
L_004731ab:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004731ad:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004731b3:  // fsubr st(1)
    ST(0) = (ST(1)) - (ST(0));
L_004731b5:  // fadd dword ptr [0x5d85d4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85d4u)));
L_004731bb:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004731bf:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004731c1:  // fild dword ptr [0x89ce14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89ce14u)));
L_004731c7:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_004731cd:  // fild dword ptr [0x89ce1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89ce1cu)));
L_004731d3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004731d5:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_004731d9:  // jle 0x4731e0
    if ((f.zf || f.sf != f.of)) goto L_004731e0;
L_004731db:  // mov eax, 0xa0
    eax = (uint32_t)(0xa0u);
L_004731e0:  // mov cl, byte ptr [esi + 0x24]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x24u))) & 0xffu);
L_004731e3:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004731e5:  // je 0x47322e
    if (f.zf) goto L_0047322e;
L_004731e7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004731ec:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004731ee:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004731f3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004731f5:  // shl eax, 0x18
    t0 = lshl<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_004731f8:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004731fc:  // push 0x3f4ccccd
    t0 = 0x3f4ccccdu; esp -= 4; M32(esp) = t0;
L_00473201:  // or eax, 0x505050
    t0 = llog<32>(eax | 0x505050u, f);
    eax = (uint32_t)(t0);
L_00473206:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0047320a:  // push 0x3eae147b
    t0 = 0x3eae147bu; esp -= 4; M32(esp) = t0;
L_0047320f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473210:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00473213:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473215:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047321a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047321c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0047321e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047321f:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00473224:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473225:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473226:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047322bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047322b:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0047322e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473230:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473235:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047323au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047323a:  // mov eax, dword ptr [eax + 0x54]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x54u)));
L_0047323d:  // mov ebx, dword ptr [esi + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_00473240:  // push 0x130ed7
    t0 = 0x130ed7u; esp -= 4; M32(esp) = t0;
L_00473245:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0047324a:  // lea eax, [eax + eax*4]
    eax = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0047324d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0047324e:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473250:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473252:  // sub ebx, eax
    t0 = lsub<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_00473254:  // add ebx, 0xf0
    t0 = ladd<32>(ebx, 0xf0u, f);
    ebx = (uint32_t)(t0);
L_0047325a:  // mov dword ptr [esp + 0x1c], ebx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebx);
L_0047325e:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473263u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473263:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473264:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_00473268:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473269:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047326eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047326e:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00473271:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00473275:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473279:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047327a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047327b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047327d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473282:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473287u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473287:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473289:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047328eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047328e:  // mov al, byte ptr [esi + 0x24]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x24u))) & 0xffu);
L_00473291:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00473293:  // je 0x4732e5
    if (f.zf) goto L_004732e5;
L_00473295:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047329a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047329c:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_004732a0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004732a2:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004732a6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004732a7:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004732ab:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004732ad:  // shl ecx, 0x18
    t0 = lshl<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_004732b0:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004732b1:  // or ecx, 0x505050
    t0 = llog<32>(ecx | 0x505050u, f);
    ecx = (uint32_t)(t0);
L_004732b7:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004732b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004732ba:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004732bb:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004732bd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004732c0:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004732c4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004732c5:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_004732c9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004732ce:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_004732d4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004732d7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004732d9:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004732deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004732de:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004732e0:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004732e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004732e5:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004732e9:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004732ec:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_004732ee:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004732f0:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_004732f4:  // jne 0x473354
    if (!f.zf) goto L_00473354;
L_004732f6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004732fb:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473300u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473300:  // fmul dword ptr [0x5dbc44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc44u)));
L_00473306:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_0047330c:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00473310:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00473314:  // and eax, 0x800000ff
    t0 = llog<32>(eax & 0x800000ffu, f);
    eax = (uint32_t)(t0);
L_00473319:  // jns 0x473322
    if (!f.sf) goto L_00473322;
L_0047331b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047331c:  // or eax, 0xffffff00
    t0 = llog<32>(eax | 0xffffff00u, f);
    eax = (uint32_t)(t0);
L_00473321:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473322:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_00473327:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473328:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047332a:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_0047332c:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0047332e:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00473330:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473331:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_00473334:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473336:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00473339:  // shl edi, 0x18
    t0 = lshl<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_0047333c:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0047333e:  // mov edx, edi
    edx = (uint32_t)(edi);
L_00473340:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00473343:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473345:  // or edx, 0x400000
    t0 = llog<32>(edx | 0x400000u, f);
    edx = (uint32_t)(t0);
L_0047334b:  // add ebp, edx
    t0 = ladd<32>(ebp, edx, f);
    ebp = (uint32_t)(t0);
L_0047334d:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00473350:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_00473352:  // jmp 0x473372
    goto L_00473372;
L_00473354:  // cmp dword ptr [esi + 0x2c], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x2cu)), 0x1u, f);
L_00473358:  // jne 0x473367
    if (!f.zf) goto L_00473367;
L_0047335a:  // shl edi, 0x18
    t0 = lshl<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_0047335d:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_0047335f:  // or ebp, 0xf0f0f0
    t0 = llog<32>(ebp | 0xf0f0f0u, f);
    ebp = (uint32_t)(t0);
L_00473365:  // jmp 0x473372
    goto L_00473372;
L_00473367:  // shl edi, 0x18
    t0 = lshl<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_0047336a:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_0047336c:  // or ebp, 0x202020
    t0 = llog<32>(ebp | 0x202020u, f);
    ebp = (uint32_t)(t0);
L_00473372:  // push 0x41d6e9
    t0 = 0x41d6e9u; esp -= 4; M32(esp) = t0;
L_00473377:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0047337c:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473381u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473381:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473382:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_00473386:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473387:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047338cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047338c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0047338f:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00473393:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473397:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473398:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473399:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047339b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004733a0:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004733a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004733a5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004733a7:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004733acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004733ac:  // mov eax, dword ptr [esi + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_004733af:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004733b1:  // jne 0x4733b9
    if (!f.zf) goto L_004733b9;
L_004733b3:  // cmp byte ptr [esi + 0x24], 1
    t0 = lsub<8>(M8((uint32_t)(esi + 0x24u)), 0x1u, f);
L_004733b7:  // jne 0x4733fe
    if (!f.zf) goto L_004733fe;
L_004733b9:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004733be:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004733c0:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_004733c4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004733c6:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004733ca:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004733cb:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004733cf:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004733d0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004733d1:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004733d3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004733d4:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004733d6:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004733d9:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_004733dd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004733de:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_004733e2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004733e7:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_004733ed:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004733f0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004733f2:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004733f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004733f7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004733f9:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004733feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004733fe:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00473401:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00473406:  // add ebx, 0x18
    t0 = ladd<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_00473409:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0047340b:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_0047340f:  // jne 0x47346c
    if (!f.zf) goto L_0047346c;
L_00473411:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473416:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047341bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047341b:  // fmul dword ptr [0x5dbc44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc44u)));
L_00473421:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_00473427:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047342b:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047342f:  // and eax, 0x800000ff
    t0 = llog<32>(eax & 0x800000ffu, f);
    eax = (uint32_t)(t0);
L_00473434:  // jns 0x47343d
    if (!f.sf) goto L_0047343d;
L_00473436:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473437:  // or eax, 0xffffff00
    t0 = llog<32>(eax | 0xffffff00u, f);
    eax = (uint32_t)(t0);
L_0047343c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047343d:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_00473442:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473443:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473445:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_00473447:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00473449:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0047344b:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0047344c:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_0047344f:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473451:  // mov edx, edi
    edx = (uint32_t)(edi);
L_00473453:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00473456:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00473458:  // or edx, 0x400000
    t0 = llog<32>(edx | 0x400000u, f);
    edx = (uint32_t)(t0);
L_0047345e:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00473461:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473463:  // add ebp, edx
    t0 = ladd<32>(ebp, edx, f);
    ebp = (uint32_t)(t0);
L_00473465:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00473468:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_0047346a:  // jmp 0x473483
    goto L_00473483;
L_0047346c:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0047346f:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_00473471:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00473473:  // jne 0x47347d
    if (!f.zf) goto L_0047347d;
L_00473475:  // or ebp, 0xf0f0f0
    t0 = llog<32>(ebp | 0xf0f0f0u, f);
    ebp = (uint32_t)(t0);
L_0047347b:  // jmp 0x473483
    goto L_00473483;
L_0047347d:  // or ebp, 0x202020
    t0 = llog<32>(ebp | 0x202020u, f);
    ebp = (uint32_t)(t0);
L_00473483:  // push 0x1f08cea
    t0 = 0x1f08ceau; esp -= 4; M32(esp) = t0;
L_00473488:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_0047348d:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473492u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473492:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473493:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_00473497:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473498:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047349du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047349d:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004734a0:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004734a4:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004734a8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004734a9:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004734aa:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004734ac:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004734b1:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004734b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004734b6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004734b8:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004734bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004734bd:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004734c0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004734c2:  // jne 0x4734ca
    if (!f.zf) goto L_004734ca;
L_004734c4:  // cmp byte ptr [esi + 0x24], 1
    t0 = lsub<8>(M8((uint32_t)(esi + 0x24u)), 0x1u, f);
L_004734c8:  // jne 0x473514
    if (!f.zf) goto L_00473514;
L_004734ca:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004734cf:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004734d4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004734d6:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_004734da:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004734de:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004734e0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004734e1:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004734e5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004734e6:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004734e7:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004734e9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004734ea:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004734ec:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004734ef:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_004734f3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004734f4:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_004734f8:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004734fd:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00473503:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473506:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473508:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047350du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047350d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047350f:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473514u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473514:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00473517:  // add ebx, 0x18
    t0 = ladd<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_0047351a:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0047351d:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_00473521:  // jne 0x47357e
    if (!f.zf) goto L_0047357e;
L_00473523:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473528:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047352du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047352d:  // fmul dword ptr [0x5dbc44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc44u)));
L_00473533:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_00473539:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047353d:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00473541:  // and eax, 0x800000ff
    t0 = llog<32>(eax & 0x800000ffu, f);
    eax = (uint32_t)(t0);
L_00473546:  // jns 0x47354f
    if (!f.sf) goto L_0047354f;
L_00473548:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473549:  // or eax, 0xffffff00
    t0 = llog<32>(eax | 0xffffff00u, f);
    eax = (uint32_t)(t0);
L_0047354e:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047354f:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_00473554:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473555:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473557:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_00473559:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0047355b:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0047355d:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0047355e:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_00473561:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473563:  // mov edx, edi
    edx = (uint32_t)(edi);
L_00473565:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00473568:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0047356a:  // or edx, 0x400000
    t0 = llog<32>(edx | 0x400000u, f);
    edx = (uint32_t)(t0);
L_00473570:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00473573:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473575:  // add ebp, edx
    t0 = ladd<32>(ebp, edx, f);
    ebp = (uint32_t)(t0);
L_00473577:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0047357a:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_0047357c:  // jmp 0x473596
    goto L_00473596;
L_0047357e:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_00473581:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_00473583:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00473586:  // jne 0x473590
    if (!f.zf) goto L_00473590;
L_00473588:  // or ebp, 0xf0f0f0
    t0 = llog<32>(ebp | 0xf0f0f0u, f);
    ebp = (uint32_t)(t0);
L_0047358e:  // jmp 0x473596
    goto L_00473596;
L_00473590:  // or ebp, 0x202020
    t0 = llog<32>(ebp | 0x202020u, f);
    ebp = (uint32_t)(t0);
L_00473596:  // push 0x3fc4f9
    t0 = 0x3fc4f9u; esp -= 4; M32(esp) = t0;
L_0047359b:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004735a0:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004735a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004735a5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004735a6:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_004735aa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004735ab:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004735b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004735b0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004735b3:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004735b7:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004735bb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004735bc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004735bd:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004735bf:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004735c4:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004735c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004735c9:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004735cb:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004735d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004735d0:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_004735d3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004735d5:  // jne 0x4735dd
    if (!f.zf) goto L_004735dd;
L_004735d7:  // cmp byte ptr [esi + 0x24], 1
    t0 = lsub<8>(M8((uint32_t)(esi + 0x24u)), 0x1u, f);
L_004735db:  // jne 0x473627
    if (!f.zf) goto L_00473627;
L_004735dd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004735e2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004735e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004735e9:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_004735ed:  // fild dword ptr [esp + 0x24]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004735f1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004735f3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004735f4:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004735f8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004735f9:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004735fa:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004735fc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004735fd:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004735ff:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473602:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00473606:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473607:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_0047360b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473610:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00473616:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473619:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047361b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473620u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473620:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473622:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473627u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473627:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0047362a:  // add ebx, 0x18
    t0 = ladd<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_0047362d:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_00473630:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_00473634:  // jne 0x473691
    if (!f.zf) goto L_00473691;
L_00473636:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0047363b:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473640u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473640:  // fmul dword ptr [0x5dbc44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc44u)));
L_00473646:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_0047364c:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00473650:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00473654:  // and eax, 0x800000ff
    t0 = llog<32>(eax & 0x800000ffu, f);
    eax = (uint32_t)(t0);
L_00473659:  // jns 0x473662
    if (!f.sf) goto L_00473662;
L_0047365b:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047365c:  // or eax, 0xffffff00
    t0 = llog<32>(eax | 0xffffff00u, f);
    eax = (uint32_t)(t0);
L_00473661:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473662:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_00473667:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473668:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047366a:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_0047366c:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0047366e:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00473670:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473671:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_00473674:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473676:  // mov edx, edi
    edx = (uint32_t)(edi);
L_00473678:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0047367b:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0047367d:  // or edx, 0x400000
    t0 = llog<32>(edx | 0x400000u, f);
    edx = (uint32_t)(t0);
L_00473683:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00473686:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473688:  // add ebp, edx
    t0 = ladd<32>(ebp, edx, f);
    ebp = (uint32_t)(t0);
L_0047368a:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0047368d:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_0047368f:  // jmp 0x4736a9
    goto L_004736a9;
L_00473691:  // mov eax, dword ptr [esi + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x38u)));
L_00473694:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_00473696:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00473699:  // jne 0x4736a3
    if (!f.zf) goto L_004736a3;
L_0047369b:  // or ebp, 0xf0f0f0
    t0 = llog<32>(ebp | 0xf0f0f0u, f);
    ebp = (uint32_t)(t0);
L_004736a1:  // jmp 0x4736a9
    goto L_004736a9;
L_004736a3:  // or ebp, 0x202020
    t0 = llog<32>(ebp | 0x202020u, f);
    ebp = (uint32_t)(t0);
L_004736a9:  // push 0xcada9
    t0 = 0xcada9u; esp -= 4; M32(esp) = t0;
L_004736ae:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_004736b3:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004736b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004736b8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004736b9:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_004736bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004736be:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004736c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004736c3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004736c6:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004736ca:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004736ce:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004736cf:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004736d0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004736d2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004736d7:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004736dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004736dc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004736de:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004736e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004736e3:  // cmp dword ptr [esi + 0x38], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x38u)), 0x1u, f);
L_004736e7:  // je 0x4736f3
    if (f.zf) goto L_004736f3;
L_004736e9:  // cmp byte ptr [esi + 0x24], 1
    t0 = lsub<8>(M8((uint32_t)(esi + 0x24u)), 0x1u, f);
L_004736ed:  // jne 0x4737f5
    if (!f.zf) goto L_004737f5;
L_004736f3:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004736f7:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004736fb:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004736fc:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004736fe:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004736ff:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473701:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00473705:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00473709:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0047370d:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_00473711:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_00473713:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00473717:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0047371b:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0047371f:  // mov ebx, dword ptr [esp + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00473723:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473726:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473727:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00473729:  // fadd dword ptr [0x5db3e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3e8u)));
L_0047372f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473732:  // fld dword ptr [0x5db3e8]
    lpush(x, (long double)F32((uint32_t)(0x5db3e8u)));
L_00473738:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0047373a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047373b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047373c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047373f:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00473741:  // call 0x523b50
    t0 = 0x00523b50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473746u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473746:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00473749:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0047374b:  // je 0x473754
    if (f.zf) goto L_00473754;
L_0047374d:  // mov dword ptr [esi + 0x20], 3
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(0x3u);
L_00473754:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00473758:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473759:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0047375a:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047375c:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00473760:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473762:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00473766:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0047376a:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0047376e:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00473770:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00473774:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00473778:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047377b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047377c:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047377e:  // fadd dword ptr [0x5db3e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3e8u)));
L_00473784:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473787:  // fld dword ptr [0x5db3e8]
    lpush(x, (long double)F32((uint32_t)(0x5db3e8u)));
L_0047378d:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0047378f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00473790:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473791:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473794:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00473796:  // call 0x523cc0
    t0 = 0x00523cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047379bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047379b:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047379e:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004737a0:  // je 0x4737ae
    if (f.zf) goto L_004737ae;
L_004737a2:  // mov dword ptr [esi + 0x20], 3
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(0x3u);
L_004737a9:  // mov byte ptr [esp + 0x2b], 1
    M8((uint32_t)(esp + 0x2bu)) = (uint8_t)(0x1u);
L_004737ae:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004737b2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004737b7:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004737b8:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004737ba:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004737bf:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004737c1:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004737c5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004737c7:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_004737cb:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004737cf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004737d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004737d2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004737d3:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_004737d9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004737da:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004737db:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004737e0:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004737e3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004737e5:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004737eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004737ea:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004737ec:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004737f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004737f1:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004737f5:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004737f8:  // add ebx, 0x18
    t0 = ladd<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_004737fb:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004737fe:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_00473802:  // jne 0x47385f
    if (!f.zf) goto L_0047385f;
L_00473804:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473809:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047380eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047380e:  // fmul dword ptr [0x5dbc44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc44u)));
L_00473814:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_0047381a:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0047381e:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00473822:  // and eax, 0x800000ff
    t0 = llog<32>(eax & 0x800000ffu, f);
    eax = (uint32_t)(t0);
L_00473827:  // jns 0x473830
    if (!f.sf) goto L_00473830;
L_00473829:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047382a:  // or eax, 0xffffff00
    t0 = llog<32>(eax | 0xffffff00u, f);
    eax = (uint32_t)(t0);
L_0047382f:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473830:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_00473835:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473836:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473838:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_0047383a:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0047383c:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0047383e:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0047383f:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_00473842:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473844:  // mov edx, edi
    edx = (uint32_t)(edi);
L_00473846:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00473849:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0047384b:  // or edx, 0x400000
    t0 = llog<32>(edx | 0x400000u, f);
    edx = (uint32_t)(t0);
L_00473851:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00473854:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473856:  // add ebp, edx
    t0 = ladd<32>(ebp, edx, f);
    ebp = (uint32_t)(t0);
L_00473858:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_0047385b:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_0047385d:  // jmp 0x473877
    goto L_00473877;
L_0047385f:  // mov eax, dword ptr [esi + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x3cu)));
L_00473862:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_00473864:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00473867:  // jne 0x473871
    if (!f.zf) goto L_00473871;
L_00473869:  // or ebp, 0xf0f0f0
    t0 = llog<32>(ebp | 0xf0f0f0u, f);
    ebp = (uint32_t)(t0);
L_0047386f:  // jmp 0x473877
    goto L_00473877;
L_00473871:  // or ebp, 0x202020
    t0 = llog<32>(ebp | 0x202020u, f);
    ebp = (uint32_t)(t0);
L_00473877:  // push 0x7a211
    t0 = 0x7a211u; esp -= 4; M32(esp) = t0;
L_0047387c:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00473881:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473886u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473886:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473887:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_0047388b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0047388c:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473891u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473891:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00473894:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00473898:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0047389c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047389d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0047389e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004738a0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004738a5:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004738aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004738aa:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004738ac:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004738b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004738b1:  // cmp dword ptr [esi + 0x3c], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x3cu)), 0x1u, f);
L_004738b5:  // je 0x4738c1
    if (f.zf) goto L_004738c1;
L_004738b7:  // cmp byte ptr [esi + 0x24], 1
    t0 = lsub<8>(M8((uint32_t)(esi + 0x24u)), 0x1u, f);
L_004738bb:  // jne 0x4739c3
    if (!f.zf) goto L_004739c3;
L_004738c1:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004738c5:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004738c9:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004738ca:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004738cc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004738cd:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004738cf:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004738d3:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004738d7:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004738db:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_004738df:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004738e1:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004738e5:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004738e9:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_004738ed:  // mov ebx, dword ptr [esp + 0x28]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004738f1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004738f4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004738f5:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004738f7:  // fadd dword ptr [0x5db3e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3e8u)));
L_004738fd:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473900:  // fld dword ptr [0x5db3e8]
    lpush(x, (long double)F32((uint32_t)(0x5db3e8u)));
L_00473906:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_00473908:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00473909:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047390a:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047390d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0047390f:  // call 0x523b50
    t0 = 0x00523b50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473914u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473914:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00473917:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00473919:  // je 0x473922
    if (f.zf) goto L_00473922;
L_0047391b:  // mov dword ptr [esi + 0x20], 4
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(0x4u);
L_00473922:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00473926:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473927:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473928:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047392a:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0047392e:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473930:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_00473934:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00473938:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0047393c:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0047393e:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_00473942:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00473946:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473949:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047394a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0047394c:  // fadd dword ptr [0x5db3e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db3e8u)));
L_00473952:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473955:  // fld dword ptr [0x5db3e8]
    lpush(x, (long double)F32((uint32_t)(0x5db3e8u)));
L_0047395b:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0047395d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047395e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0047395f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473962:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00473964:  // call 0x523cc0
    t0 = 0x00523cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473969u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473969:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0047396c:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0047396e:  // je 0x47397c
    if (f.zf) goto L_0047397c;
L_00473970:  // mov dword ptr [esi + 0x20], 4
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(0x4u);
L_00473977:  // mov byte ptr [esp + 0x2b], 1
    M8((uint32_t)(esp + 0x2bu)) = (uint8_t)(0x1u);
L_0047397c:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00473980:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473985:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473986:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473988:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0047398d:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0047398f:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00473993:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473995:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_00473999:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0047399d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047399f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004739a0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004739a1:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_004739a7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004739a8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004739a9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004739ae:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004739b1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004739b3:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004739b8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004739b8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004739ba:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004739bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004739bf:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004739c3:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004739c6:  // add ebx, 0x18
    t0 = ladd<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_004739c9:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_004739cc:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_004739d0:  // jne 0x473a2b
    if (!f.zf) goto L_00473a2b;
L_004739d2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004739d7:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004739dcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004739dc:  // fmul dword ptr [0x5dbc44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc44u)));
L_004739e2:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_004739e8:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004739ec:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004739f0:  // and eax, 0x800000ff
    t0 = llog<32>(eax & 0x800000ffu, f);
    eax = (uint32_t)(t0);
L_004739f5:  // jns 0x4739fe
    if (!f.sf) goto L_004739fe;
L_004739f7:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004739f8:  // or eax, 0xffffff00
    t0 = llog<32>(eax | 0xffffff00u, f);
    eax = (uint32_t)(t0);
L_004739fd:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004739fe:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_00473a03:  // or edi, 0x400000
    t0 = llog<32>(edi | 0x400000u, f);
    edi = (uint32_t)(t0);
L_00473a09:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473a0a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473a0c:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_00473a0e:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00473a10:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00473a12:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473a13:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_00473a16:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473a18:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00473a1b:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00473a1d:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00473a20:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473a22:  // add ebp, edi
    t0 = ladd<32>(ebp, edi, f);
    ebp = (uint32_t)(t0);
L_00473a24:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00473a27:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_00473a29:  // jmp 0x473a41
    goto L_00473a41;
L_00473a2b:  // cmp dword ptr [esi + 0x40], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x40u)), 0x1u, f);
L_00473a2f:  // jne 0x473a39
    if (!f.zf) goto L_00473a39;
L_00473a31:  // or edi, 0xf0f0f0
    t0 = llog<32>(edi | 0xf0f0f0u, f);
    edi = (uint32_t)(t0);
L_00473a37:  // jmp 0x473a3f
    goto L_00473a3f;
L_00473a39:  // or edi, 0x202020
    t0 = llog<32>(edi | 0x202020u, f);
    edi = (uint32_t)(t0);
L_00473a3f:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_00473a41:  // push 0x265233
    t0 = 0x265233u; esp -= 4; M32(esp) = t0;
L_00473a46:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00473a4b:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473a50u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473a50:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473a54:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473a55:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473a56:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473a5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473a5b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00473a5e:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00473a62:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473a66:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473a67:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473a68:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473a6a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473a6f:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473a74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473a74:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473a76:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473a7bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473a7b:  // mov eax, dword ptr [esi + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x40u)));
L_00473a7e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00473a80:  // jne 0x473a88
    if (!f.zf) goto L_00473a88;
L_00473a82:  // cmp byte ptr [esi + 0x24], 1
    t0 = lsub<8>(M8((uint32_t)(esi + 0x24u)), 0x1u, f);
L_00473a86:  // jne 0x473ad2
    if (!f.zf) goto L_00473ad2;
L_00473a88:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00473a8c:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473a91:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_00473a95:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473a9a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473a9c:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00473aa0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473aa2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473aa3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00473aa4:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473aa5:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473aa7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473aa8:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473aaa:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473aad:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00473ab1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473ab2:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00473ab6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473abb:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00473ac1:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473ac4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473ac6:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473acbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473acb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473acd:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473ad2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473ad2:  // call 0x523a70
    t0 = 0x00523a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473ad7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473ad7:  // mov byte ptr [0x679b40], 0
    M8((uint32_t)(0x679b40u)) = (uint8_t)(0x0u);
L_00473ade:  // cmp dword ptr [esi + 0x44], 2
    t0 = lsub<32>(M32((uint32_t)(esi + 0x44u)), 0x2u, f);
L_00473ae2:  // jne 0x474038
    if (!f.zf) goto L_00474038;
L_00473ae8:  // mov eax, dword ptr [esi + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_00473aeb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00473aed:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00473af1:  // je 0x474038
    if (f.zf) goto L_00474038;
L_00473af7:  // mov eax, dword ptr [0x8aa468]
    eax = (uint32_t)(M32((uint32_t)(0x8aa468u)));
L_00473afc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00473afe:  // jne 0x474038
    if (!f.zf) goto L_00474038;
L_00473b04:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00473b08:  // fmul dword ptr [0x5d8bc4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bc4u)));
L_00473b0e:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00473b12:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00473b16:  // cmp edi, 0xa0
    t0 = lsub<32>(edi, 0xa0u, f);
L_00473b1c:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00473b1e:  // fild dword ptr [0x89ce18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89ce18u)));
L_00473b24:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00473b26:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00473b2c:  // fsubr st(1)
    ST(0) = (ST(1)) - (ST(0));
L_00473b2e:  // fsub dword ptr [0x5d85cc]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85ccu)));
L_00473b34:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00473b38:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00473b3a:  // fild dword ptr [0x89ce14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89ce14u)));
L_00473b40:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00473b46:  // fild dword ptr [0x89ce1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(0x89ce1cu)));
L_00473b4c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00473b4e:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00473b52:  // jle 0x473b59
    if ((f.zf || f.sf != f.of)) goto L_00473b59;
L_00473b54:  // mov eax, 0xa0
    eax = (uint32_t)(0xa0u);
L_00473b59:  // mov cl, byte ptr [esi + 0x24]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x24u))) & 0xffu);
L_00473b5c:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_00473b5e:  // je 0x473ba7
    if (f.zf) goto L_00473ba7;
L_00473b60:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473b65:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473b67:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473b6c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473b6e:  // shl eax, 0x18
    t0 = lshl<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_00473b71:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00473b75:  // push 0x3f19999a
    t0 = 0x3f19999au; esp -= 4; M32(esp) = t0;
L_00473b7a:  // or eax, 0x505050
    t0 = llog<32>(eax | 0x505050u, f);
    eax = (uint32_t)(t0);
L_00473b7f:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00473b83:  // push 0x3eae147b
    t0 = 0x3eae147bu; esp -= 4; M32(esp) = t0;
L_00473b88:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473b89:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00473b8c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473b8e:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473b93:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473b95:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00473b97:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473b98:  // push 0x3a83126f
    t0 = 0x3a83126fu; esp -= 4; M32(esp) = t0;
L_00473b9d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473b9e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473b9f:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473ba4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473ba4:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_00473ba7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473ba9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473bae:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473bb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473bb3:  // mov ebp, dword ptr [eax + 0x54]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x54u)));
L_00473bb6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473bbb:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473bc0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473bc0:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473bc1:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473bc3:  // mov ecx, dword ptr [esi + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x28u)));
L_00473bc6:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00473bc8:  // lea eax, [ebp + ebp*4]
    eax = (uint32_t)((uint32_t)(ebp + ebp * 4u));
L_00473bcc:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473bcd:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473bcf:  // push 0x265233
    t0 = 0x265233u; esp -= 4; M32(esp) = t0;
L_00473bd4:  // sar ebx, 1
    t0 = lsar<32>(ebx, 0x1u, f);
    ebx = (uint32_t)(t0);
L_00473bd6:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473bd8:  // sub ebx, eax
    t0 = lsub<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_00473bda:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_00473bdc:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00473be1:  // mov dword ptr [esp + 0x1c], ebx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebx);
L_00473be5:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473beau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473bea:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473beb:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_00473bef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473bf0:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473bf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473bf5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00473bf8:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00473bfc:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473c00:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473c01:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473c02:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473c04:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473c09:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473c0eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473c0e:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473c10:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473c15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473c15:  // mov al, byte ptr [esi + 0x24]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x24u))) & 0xffu);
L_00473c18:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00473c1a:  // je 0x473c7d
    if (f.zf) goto L_00473c7d;
L_00473c1c:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00473c20:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00473c22:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473c27:  // shl ecx, 0x18
    t0 = lshl<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_00473c2a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473c2c:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_00473c30:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473c32:  // or ecx, 0x505050
    t0 = llog<32>(ecx | 0x505050u, f);
    ecx = (uint32_t)(t0);
L_00473c38:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473c39:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473c3a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473c3b:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473c40:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473c43:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473c48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473c48:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473c49:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473c4b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473c4c:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473c4e:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00473c52:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_00473c56:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_00473c5a:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473c5b:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473c5d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473c62:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473c64:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_00473c68:  // fisub dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) - ((long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_00473c6c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473c6f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473c71:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473c76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473c76:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473c78:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473c7du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473c7d:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00473c81:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00473c84:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_00473c86:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00473c88:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_00473c8c:  // jne 0x473cec
    if (!f.zf) goto L_00473cec;
L_00473c8e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473c93:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473c98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473c98:  // fmul dword ptr [0x5dbc44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc44u)));
L_00473c9e:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_00473ca4:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00473ca8:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00473cac:  // and eax, 0x800000ff
    t0 = llog<32>(eax & 0x800000ffu, f);
    eax = (uint32_t)(t0);
L_00473cb1:  // jns 0x473cba
    if (!f.sf) goto L_00473cba;
L_00473cb3:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473cb4:  // or eax, 0xffffff00
    t0 = llog<32>(eax | 0xffffff00u, f);
    eax = (uint32_t)(t0);
L_00473cb9:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473cba:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_00473cbf:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473cc0:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473cc2:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_00473cc4:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00473cc6:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00473cc8:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473cc9:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_00473ccc:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473cce:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00473cd1:  // shl edi, 0x18
    t0 = lshl<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_00473cd4:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00473cd6:  // mov edx, edi
    edx = (uint32_t)(edi);
L_00473cd8:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00473cdb:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473cdd:  // or edx, 0x400000
    t0 = llog<32>(edx | 0x400000u, f);
    edx = (uint32_t)(t0);
L_00473ce3:  // add ebp, edx
    t0 = ladd<32>(ebp, edx, f);
    ebp = (uint32_t)(t0);
L_00473ce5:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00473ce8:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_00473cea:  // jmp 0x473d0a
    goto L_00473d0a;
L_00473cec:  // cmp dword ptr [esi + 0x2c], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x2cu)), 0x1u, f);
L_00473cf0:  // jne 0x473cff
    if (!f.zf) goto L_00473cff;
L_00473cf2:  // shl edi, 0x18
    t0 = lshl<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_00473cf5:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_00473cf7:  // or ebp, 0xf0f0f0
    t0 = llog<32>(ebp | 0xf0f0f0u, f);
    ebp = (uint32_t)(t0);
L_00473cfd:  // jmp 0x473d0a
    goto L_00473d0a;
L_00473cff:  // shl edi, 0x18
    t0 = lshl<32>(edi, 0x18u, f);
    edi = (uint32_t)(t0);
L_00473d02:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_00473d04:  // or ebp, 0x202020
    t0 = llog<32>(ebp | 0x202020u, f);
    ebp = (uint32_t)(t0);
L_00473d0a:  // mov eax, dword ptr [0x8a9d3c]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d3cu)));
L_00473d0f:  // mov ecx, dword ptr [eax + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x20u)));
L_00473d12:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_00473d14:  // je 0x473d2d
    if (f.zf) goto L_00473d2d;
L_00473d16:  // push 0x148fe9
    t0 = 0x148fe9u; esp -= 4; M32(esp) = t0;
L_00473d1b:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00473d20:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473d25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473d25:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473d29:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473d2a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473d2b:  // jmp 0x473d42
    goto L_00473d42;
L_00473d2d:  // push 0x226f16
    t0 = 0x226f16u; esp -= 4; M32(esp) = t0;
L_00473d32:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00473d37:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473d3cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473d3c:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473d40:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473d41:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473d42:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473d47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473d47:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00473d4a:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00473d4e:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473d52:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473d53:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473d54:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473d56:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473d5b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473d60u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473d60:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473d62:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473d67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473d67:  // mov eax, dword ptr [esi + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x2cu)));
L_00473d6a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00473d6c:  // jne 0x473d74
    if (!f.zf) goto L_00473d74;
L_00473d6e:  // cmp byte ptr [esi + 0x24], 1
    t0 = lsub<8>(M8((uint32_t)(esi + 0x24u)), 0x1u, f);
L_00473d72:  // jne 0x473dcf
    if (!f.zf) goto L_00473dcf;
L_00473d74:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00473d78:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473d7d:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473d82:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473d84:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00473d88:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473d8a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473d8b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00473d8c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473d8d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473d92:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473d95:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473d9au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473d9a:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473d9b:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473d9d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473d9e:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473da0:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00473da4:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00473da8:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00473dac:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473dad:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473daf:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473db4:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473db6:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00473dba:  // fisub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00473dbe:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473dc1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473dc3:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473dc8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473dc8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473dca:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473dcfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473dcf:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00473dd2:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00473dd7:  // add ebx, 0x18
    t0 = ladd<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_00473dda:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00473ddc:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_00473de0:  // jne 0x473e41
    if (!f.zf) goto L_00473e41;
L_00473de2:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473de7:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473decu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473dec:  // fmul dword ptr [0x5dbc44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc44u)));
L_00473df2:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_00473df8:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00473dfc:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00473e00:  // and eax, 0x800000ff
    t0 = llog<32>(eax & 0x800000ffu, f);
    eax = (uint32_t)(t0);
L_00473e05:  // jns 0x473e0e
    if (!f.sf) goto L_00473e0e;
L_00473e07:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473e08:  // or eax, 0xffffff00
    t0 = llog<32>(eax | 0xffffff00u, f);
    eax = (uint32_t)(t0);
L_00473e0d:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473e0e:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_00473e13:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473e14:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473e16:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_00473e18:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00473e1a:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00473e1c:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473e1d:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_00473e20:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473e22:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00473e25:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00473e27:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00473e2a:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473e2c:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00473e2e:  // or eax, 0x400000
    t0 = llog<32>(eax | 0x400000u, f);
    eax = (uint32_t)(t0);
L_00473e33:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473e35:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00473e3a:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00473e3d:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_00473e3f:  // jmp 0x473e58
    goto L_00473e58;
L_00473e41:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00473e44:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_00473e46:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00473e48:  // jne 0x473e52
    if (!f.zf) goto L_00473e52;
L_00473e4a:  // or ebp, 0xf0f0f0
    t0 = llog<32>(ebp | 0xf0f0f0u, f);
    ebp = (uint32_t)(t0);
L_00473e50:  // jmp 0x473e58
    goto L_00473e58;
L_00473e52:  // or ebp, 0x202020
    t0 = llog<32>(ebp | 0x202020u, f);
    ebp = (uint32_t)(t0);
L_00473e58:  // cmp dword ptr [0x8a9ab8], eax
    t0 = lsub<32>(M32((uint32_t)(0x8a9ab8u)), eax, f);
L_00473e5e:  // jne 0x473e77
    if (!f.zf) goto L_00473e77;
L_00473e60:  // push 0x20df719
    t0 = 0x20df719u; esp -= 4; M32(esp) = t0;
L_00473e65:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00473e6a:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473e6fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473e6f:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473e73:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473e74:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473e75:  // jmp 0x473e8c
    goto L_00473e8c;
L_00473e77:  // push 0x3ba2e96
    t0 = 0x3ba2e96u; esp -= 4; M32(esp) = t0;
L_00473e7c:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00473e81:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473e86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473e86:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473e8a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473e8b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473e8c:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473e91u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473e91:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00473e94:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00473e98:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473e9c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473e9d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473e9e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473ea0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473ea5:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473eaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473eaa:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473eac:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473eb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473eb1:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_00473eb4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00473eb6:  // jne 0x473ebe
    if (!f.zf) goto L_00473ebe;
L_00473eb8:  // cmp byte ptr [esi + 0x24], 1
    t0 = lsub<8>(M8((uint32_t)(esi + 0x24u)), 0x1u, f);
L_00473ebc:  // jne 0x473f19
    if (!f.zf) goto L_00473f19;
L_00473ebe:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00473ec2:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473ec7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473ecc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473ece:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_00473ed2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473ed4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473ed5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00473ed6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473ed7:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473edc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473edf:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473ee4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473ee4:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473ee5:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473ee7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473ee8:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473eea:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00473eee:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00473ef2:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00473ef6:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473ef7:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473ef9:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473efe:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00473f00:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00473f04:  // fisub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00473f08:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473f0b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473f0d:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473f12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473f12:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473f14:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473f19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473f19:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_00473f1c:  // add ebx, 0x18
    t0 = ladd<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_00473f1f:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_00473f22:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_00473f26:  // jne 0x473f81
    if (!f.zf) goto L_00473f81;
L_00473f28:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473f2d:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473f32u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473f32:  // fmul dword ptr [0x5dbc44]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc44u)));
L_00473f38:  // fmul dword ptr [0x5db020]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db020u)));
L_00473f3e:  // fistp qword ptr [esp + 0x10]
    M64((uint32_t)(esp + 0x10u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00473f42:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00473f46:  // and eax, 0x800000ff
    t0 = llog<32>(eax & 0x800000ffu, f);
    eax = (uint32_t)(t0);
L_00473f4b:  // jns 0x473f54
    if (!f.sf) goto L_00473f54;
L_00473f4d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473f4e:  // or eax, 0xffffff00
    t0 = llog<32>(eax | 0xffffff00u, f);
    eax = (uint32_t)(t0);
L_00473f53:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_00473f54:  // sub eax, 0x80
    t0 = lsub<32>(eax, 0x80u, f);
    eax = (uint32_t)(t0);
L_00473f59:  // or edi, 0x400000
    t0 = llog<32>(edi | 0x400000u, f);
    edi = (uint32_t)(t0);
L_00473f5f:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473f60:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473f62:  // xor ecx, edx
    t0 = llog<32>(ecx ^ edx, f);
    ecx = (uint32_t)(t0);
L_00473f64:  // sub ecx, edx
    t0 = lsub<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00473f66:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00473f68:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00473f69:  // and edx, 3
    t0 = llog<32>(edx & 0x3u, f);
    edx = (uint32_t)(t0);
L_00473f6c:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00473f6e:  // sar eax, 2
    t0 = lsar<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00473f71:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00473f73:  // shl ebp, 8
    t0 = lshl<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00473f76:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_00473f78:  // add ebp, edi
    t0 = ladd<32>(ebp, edi, f);
    ebp = (uint32_t)(t0);
L_00473f7a:  // shl ecx, 0x10
    t0 = lshl<32>(ecx, 0x10u, f);
    ecx = (uint32_t)(t0);
L_00473f7d:  // add ebp, ecx
    t0 = ladd<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_00473f7f:  // jmp 0x473f97
    goto L_00473f97;
L_00473f81:  // cmp dword ptr [esi + 0x34], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x34u)), 0x1u, f);
L_00473f85:  // jne 0x473f8f
    if (!f.zf) goto L_00473f8f;
L_00473f87:  // or edi, 0xf0f0f0
    t0 = llog<32>(edi | 0xf0f0f0u, f);
    edi = (uint32_t)(t0);
L_00473f8d:  // jmp 0x473f95
    goto L_00473f95;
L_00473f8f:  // or edi, 0x202020
    t0 = llog<32>(edi | 0x202020u, f);
    edi = (uint32_t)(t0);
L_00473f95:  // mov ebp, edi
    ebp = (uint32_t)(edi);
L_00473f97:  // push 0x6f9da
    t0 = 0x6f9dau; esp -= 4; M32(esp) = t0;
L_00473f9c:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00473fa1:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473fa6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473fa6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473fa7:  // lea eax, [esp + 0x30]
    eax = (uint32_t)((uint32_t)(esp + 0x30u));
L_00473fab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473fac:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473fb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473fb1:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00473fb4:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_00473fb8:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00473fbc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473fbd:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00473fbe:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00473fc0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473fc5:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473fcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473fca:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00473fcc:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00473fd1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00473fd1:  // cmp dword ptr [esi + 0x38], 1
    t0 = lsub<32>(M32((uint32_t)(esi + 0x38u)), 0x1u, f);
L_00473fd5:  // je 0x473fdd
    if (f.zf) goto L_00473fdd;
L_00473fd7:  // cmp byte ptr [esi + 0x24], 1
    t0 = lsub<8>(M8((uint32_t)(esi + 0x24u)), 0x1u, f);
L_00473fdb:  // jne 0x474038
    if (!f.zf) goto L_00474038;
L_00473fdd:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00473fe1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473fe6:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00473feb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473fed:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_00473ff1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00473ff3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00473ff4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00473ff5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00473ff6:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00473ffb:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00473ffe:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00474003u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00474003:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00474004:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00474006:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00474007:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00474009:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0047400d:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00474011:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00474015:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00474016:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00474018:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0047401d:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0047401f:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_00474023:  // fisub dword ptr [esp + 0x30]
    ST(0) = (ST(0)) - ((long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00474027:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0047402a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047402c:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00474031u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00474031:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00474033:  // call 0x4659a0
    t0 = 0x004659a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00474038u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00474038:  // mov al, byte ptr [esp + 0x2b]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x2bu))) & 0xffu);
L_0047403c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047403d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047403e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047403f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00474041:  // je 0x4740a9
    if (f.zf) goto L_004740a9;
L_00474043:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00474045:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0047404a:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047404fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047404f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00474051:  // je 0x47406e
    if (f.zf) goto L_0047406e;
L_00474053:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00474055:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0047405a:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047405fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047405f:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00474061:  // call 0x42e4b0
    t0 = 0x0042e4b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00474066u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00474066:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00474068:  // jne 0x47406e
    if (!f.zf) goto L_0047406e;
L_0047406a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0047406c:  // jmp 0x474097
    goto L_00474097;
L_0047406e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00474070:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00474075:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047407au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047407a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047407c:  // je 0x4740a9
    if (f.zf) goto L_004740a9;
L_0047407e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00474080:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00474085:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0047408au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0047408a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047408c:  // call 0x42e4b0
    t0 = 0x0042e4b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00474091u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00474091:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00474093:  // jne 0x4740a9
    if (!f.zf) goto L_004740a9;
L_00474095:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00474097:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0047409c:  // call 0x4705d0
    t0 = 0x004705d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004740a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004740a1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004740a2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004740a4:  // call 0x472b40
    t0 = 0x00472b40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004740a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004740a9:  // mov byte ptr [0x9c68ac], 1
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x1u);
L_004740b0:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_004740b7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004740b8:  // add esp, 0x9c
    t0 = ladd<32>(esp, 0x9cu, f);
    esp = (uint32_t)(t0);
L_004740be:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00472f10, 00472f10)
