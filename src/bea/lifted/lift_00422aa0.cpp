// lifted from 00422aa0 (vslot8, 234 bytes, 90 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00422aa0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00422aa0;
L_00422aa0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00422aa1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00422aa2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00422aa3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00422aa4:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00422aa6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00422aa7:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_00422aaa:  // lea edi, [esi + 0x24]
    edi = (uint32_t)((uint32_t)(esi + 0x24u));
L_00422aad:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00422aaf:  // je 0x422b73
    if (f.zf) goto L_00422b73;
L_00422ab5:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00422ab8:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00422aba:  // call dword ptr [eax + 0x130]
    t0 = M32((uint32_t)(eax + 0x130u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422ac0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422ac0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00422ac2:  // je 0x422b35
    if (f.zf) goto L_00422b35;
L_00422ac4:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_00422ac6:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00422ac8:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00422acb:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00422ace:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00422ad1:  // mov ebx, esp
    ebx = (uint32_t)(esp);
L_00422ad3:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_00422ad5:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00422ad7:  // mov dword ptr [ebx], ebp
    M32((uint32_t)(ebx)) = (uint32_t)(ebp);
L_00422ad9:  // mov ebp, dword ptr [eax + 4]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00422adc:  // mov dword ptr [ebx + 4], ebp
    M32((uint32_t)(ebx + 0x4u)) = (uint32_t)(ebp);
L_00422adf:  // mov ebp, dword ptr [eax + 8]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_00422ae2:  // mov dword ptr [ebx + 8], ebp
    M32((uint32_t)(ebx + 0x8u)) = (uint32_t)(ebp);
L_00422ae5:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_00422ae8:  // mov dword ptr [ebx + 0xc], eax
    M32((uint32_t)(ebx + 0xcu)) = (uint32_t)(eax);
L_00422aeb:  // call dword ptr [edx + 0xf4]
    t0 = M32((uint32_t)(edx + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422af1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422af1:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00422af4:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_00422af6:  // add eax, 0x1c
    t0 = ladd<32>(eax, 0x1cu, f);
    eax = (uint32_t)(t0);
L_00422af9:  // fld dword ptr [ecx + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x1cu)));
L_00422afc:  // fsub dword ptr [eax]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax)));
L_00422afe:  // fld dword ptr [ecx + 0x20]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x20u)));
L_00422b01:  // fsub dword ptr [eax + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x4u)));
L_00422b04:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00422b06:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_00422b08:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_00422b0a:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_00422b0c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00422b0e:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00422b10:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_00422b12:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00422b14:  // fcomp dword ptr [0x5d85bc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85bcu)));
    lpop(x);
L_00422b1a:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00422b1c:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00422b1f:  // je 0x422b2c
    if (f.zf) goto L_00422b2c;
L_00422b21:  // mov ecx, dword ptr [ecx + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x3cu)));
L_00422b24:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00422b25:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00422b27:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422b2cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422b2c:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00422b2e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00422b30:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422b33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422b33:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00422b35:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00422b39:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_00422b3d:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_00422b43:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00422b49:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00422b4a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00422b4c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00422b4e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00422b4f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00422b50:  // push 0xbb9
    t0 = 0xbb9u; esp -= 4; M32(esp) = t0;
L_00422b55:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00422b59:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_00422b5e:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422b63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422b63:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00422b66:  // call 0x4227a0
    t0 = 0x004227a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422b6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422b6b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00422b6c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00422b6d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00422b6e:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00422b6f:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00422b70:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00422b73:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00422b75:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00422b77:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422b7au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422b7a:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00422b7d:  // call 0x4227a0
    t0 = 0x004227a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00422b82u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00422b82:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00422b83:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00422b84:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00422b85:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00422b86:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00422b87:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00422aa0, 00422aa0)
