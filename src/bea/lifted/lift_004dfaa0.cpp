// lifted from 004dfaa0 (vslot66, 433 bytes, 119 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004dfaa0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004dfaa0;
L_004dfaa0:  // sub esp, 0x3f0
    t0 = lsub<32>(esp, 0x3f0u, f);
    esp = (uint32_t)(t0);
L_004dfaa6:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004dfaa7:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004dfaa9:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_004dfaad:  // je 0x4dfc49
    if (f.zf) goto L_004dfc49;
L_004dfab3:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004dfab5:  // call dword ptr [eax + 0xb4]
    t0 = M32((uint32_t)(eax + 0xb4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dfabbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dfabb:  // fadd dword ptr [esi + 0x84]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x84u)));
L_004dfac1:  // lea edx, [esi + 0x1c]
    edx = (uint32_t)((uint32_t)(esi + 0x1cu));
L_004dfac4:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004dfac9:  // fstp dword ptr [esi + 0x84]
    F32((uint32_t)(esi + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004dfacf:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dfad4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dfad4:  // fadd dword ptr [0x5d85ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ecu)));
L_004dfada:  // fcomp dword ptr [esi + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x24u)));
    lpop(x);
L_004dfadd:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004dfadf:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004dfae2:  // je 0x4dfaee
    if (f.zf) goto L_004dfaee;
L_004dfae4:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004dfae6:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004dfae8:  // call dword ptr [edx + 0x110]
    t0 = M32((uint32_t)(edx + 0x110u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dfaeeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dfaee:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004dfaef:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004dfaf3:  // call 0x48dcf0
    t0 = 0x0048dcf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dfaf8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dfaf8:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_004dfafb:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004dfafd:  // mov dword ptr [esp + 0x20], 0x5d8c80
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x5d8c80u);
L_004dfb05:  // mov dword ptr [esp + 0x3dc], edi
    M32((uint32_t)(esp + 0x3dcu)) = (uint32_t)(edi);
L_004dfb0c:  // mov dword ptr [esp + 0x3e0], edi
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(edi);
L_004dfb13:  // mov dword ptr [esp + 0x3e4], edi
    M32((uint32_t)(esp + 0x3e4u)) = (uint32_t)(edi);
L_004dfb1a:  // mov dword ptr [esp + 0x3e8], edi
    M32((uint32_t)(esp + 0x3e8u)) = (uint32_t)(edi);
L_004dfb21:  // mov dword ptr [esp + 0x3ec], edi
    M32((uint32_t)(esp + 0x3ecu)) = (uint32_t)(edi);
L_004dfb28:  // mov dword ptr [esp + 0x3f4], edi
    M32((uint32_t)(esp + 0x3f4u)) = (uint32_t)(edi);
L_004dfb2f:  // mov dword ptr [esp + 0x3f0], edi
    M32((uint32_t)(esp + 0x3f0u)) = (uint32_t)(edi);
L_004dfb36:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004dfb38:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004dfb3c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004dfb3d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004dfb3e:  // call dword ptr [eax + 0x20]
    t0 = M32((uint32_t)(eax + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dfb41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dfb41:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004dfb43:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_004dfb47:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004dfb4a:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_004dfb4e:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004dfb51:  // mov dword ptr [esp + 0x2c], ecx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ecx);
L_004dfb55:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004dfb5a:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004dfb5d:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_004dfb61:  // lea edx, [esp + 0x24]
    edx = (uint32_t)((uint32_t)(esp + 0x24u));
L_004dfb65:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dfb6au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dfb6a:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004dfb70:  // fstp dword ptr [esp + 8]
    F32((uint32_t)(esp + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004dfb74:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_004dfb7a:  // mov eax, dword ptr [eax + 0xec]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xecu)));
L_004dfb80:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004dfb84:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dfb85:  // call 0x50ff10
    t0 = 0x0050ff10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dfb8au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dfb8a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004dfb8c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004dfb8f:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004dfb91:  // je 0x4dfc41
    if (f.zf) goto L_004dfc41;
L_004dfb97:  // mov edx, dword ptr [esi + 0x138]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_004dfb9d:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004dfba3:  // mov dword ptr [esp + 0xc0], edx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(edx);
L_004dfbaa:  // mov edx, dword ptr [0x8553f8]
    edx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004dfbb0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004dfbb1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004dfbb2:  // mov ebp, dword ptr [eax + 0xec]
    ebp = (uint32_t)(M32((uint32_t)(eax + 0xecu)));
L_004dfbb8:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_004dfbba:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004dfbbc:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004dfbbe:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004dfbc1:  // je 0x4dfbc7
    if (f.zf) goto L_004dfbc7;
L_004dfbc3:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004dfbc5:  // jmp 0x4dfbc9
    goto L_004dfbc9;
L_004dfbc7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004dfbc9:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004dfbcb:  // je 0x4dfbef
    if (f.zf) goto L_004dfbef;
L_004dfbcd:  // cmp ebx, ebp
    t0 = lsub<32>(ebx, ebp, f);
L_004dfbcf:  // je 0x4dfbf1
    if (f.zf) goto L_004dfbf1;
L_004dfbd1:  // mov edx, dword ptr [0x8553f8]
    edx = (uint32_t)(M32((uint32_t)(0x8553f8u)));
L_004dfbd7:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004dfbd8:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004dfbdb:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004dfbde:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004dfbe0:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004dfbe3:  // je 0x4dfbe9
    if (f.zf) goto L_004dfbe9;
L_004dfbe5:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_004dfbe7:  // jmp 0x4dfbeb
    goto L_004dfbeb;
L_004dfbe9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004dfbeb:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004dfbed:  // jne 0x4dfbcd
    if (!f.zf) goto L_004dfbcd;
L_004dfbef:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004dfbf1:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_004dfbf5:  // fcomp dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
    lpop(x);
L_004dfbf9:  // mov dword ptr [esp + 0x3e4], eax
    M32((uint32_t)(esp + 0x3e4u)) = (uint32_t)(eax);
L_004dfc00:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004dfc01:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004dfc02:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004dfc04:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004dfc07:  // jne 0x4dfc16
    if (!f.zf) goto L_004dfc16;
L_004dfc09:  // mov dword ptr [esp + 0x3e0], 2
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(0x2u);
L_004dfc14:  // jmp 0x4dfc37
    goto L_004dfc37;
L_004dfc16:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_004dfc1a:  // fcomp dword ptr [esp + 8]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x8u)));
    lpop(x);
L_004dfc1e:  // mov dword ptr [esp + 0x3e0], 1
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(0x1u);
L_004dfc29:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004dfc2b:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004dfc2e:  // je 0x4dfc37
    if (f.zf) goto L_004dfc37;
L_004dfc30:  // mov dword ptr [esp + 0x3e0], edi
    M32((uint32_t)(esp + 0x3e0u)) = (uint32_t)(edi);
L_004dfc37:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004dfc39:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_004dfc3d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004dfc3e:  // call dword ptr [edx + 0x24]
    t0 = M32((uint32_t)(edx + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dfc41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dfc41:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004dfc43:  // call 0x4fa8d0
    t0 = 0x004fa8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004dfc48u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004dfc48:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004dfc49:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004dfc4a:  // add esp, 0x3f0
    t0 = ladd<32>(esp, 0x3f0u, f);
    esp = (uint32_t)(t0);
L_004dfc50:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004dfaa0, 004dfaa0)
