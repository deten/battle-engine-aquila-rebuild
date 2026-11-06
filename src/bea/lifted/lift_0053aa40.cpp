// lifted from 0053aa40 (FUN_0053aa40, 243 bytes, 94 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053aa40(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053aa40;
L_0053aa40:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053aa41:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053aa42:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0053aa44:  // lea edx, [esp + 4]
    edx = (uint32_t)((uint32_t)(esp + 0x4u));
L_0053aa48:  // push 0x2800
    t0 = 0x2800u; esp -= 4; M32(esp) = t0;
L_0053aa4d:  // mov eax, dword ptr [esi + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_0053aa50:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053aa51:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053aa53:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053aa55:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053aa58:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053aa59:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053aa5b:  // call dword ptr [ecx + 0x2c]
    t0 = M32((uint32_t)(ecx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aa5eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aa5e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053aa60:  // jl 0x53ab2e
    if ((f.sf != f.of)) goto L_0053ab2e;
L_0053aa66:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0053aa67:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053aa68:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0053aa6c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053aa6d:  // mov edi, dword ptr [esi + 0x18]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_0053aa70:  // mov ebx, 8
    ebx = (uint32_t)(0x8u);
L_0053aa75:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0053aa79:  // fild dword ptr [esi + 0x68]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x68u)));
L_0053aa7c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053aa7d:  // push 0x3f010000
    t0 = 0x3f010000u; esp -= 4; M32(esp) = t0;
L_0053aa82:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053aa83:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053aa84:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053aa87:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_0053aa8a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053aa8b:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0053aa8f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053aa92:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053aa93:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053aa94:  // call 0x53ab40
    t0 = 0x0053ab40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aa99u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aa99:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0053aa9d:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0053aaa0:  // add edi, 8
    t0 = ladd<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_0053aaa3:  // add ecx, 0x20
    t0 = ladd<32>(ecx, 0x20u, f);
    ecx = (uint32_t)(t0);
L_0053aaa6:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0053aaa7:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0053aaab:  // jne 0x53aa75
    if (!f.zf) goto L_0053aa75;
L_0053aaad:  // mov eax, dword ptr [0x67a748]
    eax = (uint32_t)(M32((uint32_t)(0x67a748u)));
L_0053aab2:  // lea ebx, [eax + 0x10]
    ebx = (uint32_t)((uint32_t)(eax + 0x10u));
L_0053aab5:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053aab8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053aaba:  // mov dword ptr [ebx], eax
    M32((uint32_t)(ebx)) = (uint32_t)(eax);
L_0053aabc:  // je 0x53aac2
    if (f.zf) goto L_0053aac2;
L_0053aabe:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0053aac0:  // jmp 0x53aac4
    goto L_0053aac4;
L_0053aac2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053aac4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053aac6:  // je 0x53ab23
    if (f.zf) goto L_0053ab23;
L_0053aac8:  // fld dword ptr [eax + 0xb4]
    lpush(x, (long double)F32((uint32_t)(eax + 0xb4u)));
L_0053aace:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0053aad2:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053aad6:  // fmul dword ptr [0x5e4f90]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5e4f90u)));
L_0053aadc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053aadd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053aade:  // fadd dword ptr [0x5e4f8c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4f8cu)));
L_0053aae4:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053aae7:  // fild dword ptr [esi + 0x68]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x68u)));
L_0053aaea:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053aaeb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053aaec:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053aaef:  // fild dword ptr [esi + 0x64]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esi + 0x64u)));
L_0053aaf2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053aaf3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053aaf6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053aaf7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053aaf8:  // call 0x53ab40
    t0 = 0x0053ab40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aafdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aafd:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0053ab01:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0053ab04:  // add edx, 0x20
    t0 = ladd<32>(edx, 0x20u, f);
    edx = (uint32_t)(t0);
L_0053ab07:  // add edi, 8
    t0 = ladd<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_0053ab0a:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_0053ab0e:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_0053ab10:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_0053ab13:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053ab15:  // mov dword ptr [ebx], eax
    M32((uint32_t)(ebx)) = (uint32_t)(eax);
L_0053ab17:  // je 0x53ab1d
    if (f.zf) goto L_0053ab1d;
L_0053ab19:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0053ab1b:  // jmp 0x53ab1f
    goto L_0053ab1f;
L_0053ab1d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0053ab1f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053ab21:  // jne 0x53aac8
    if (!f.zf) goto L_0053aac8;
L_0053ab23:  // mov ecx, dword ptr [esi + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_0053ab26:  // call 0x5001e0
    t0 = 0x005001e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ab2bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ab2b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053ab2c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053ab2d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0053ab2e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053ab2f:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_0053ab30:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053aa40, 0053aa40)
