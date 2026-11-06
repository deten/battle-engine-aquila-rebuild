// lifted from 00403a90 (vslot61, 194 bytes, 57 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00403a90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00403a90;
L_00403a90:  // sub esp, 0xc
    t0 = lsub<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00403a93:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00403a94:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00403a96:  // mov eax, dword ptr [esi + 0x208]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x208u)));
L_00403a9c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00403a9e:  // je 0x403b4b
    if (f.zf) goto L_00403b4b;
L_00403aa4:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00403aa8:  // mov eax, dword ptr [0x6fbdf4]
    eax = (uint32_t)(M32((uint32_t)(0x6fbdf4u)));
L_00403aad:  // fistp qword ptr [esp + 4]
    M64((uint32_t)(esp + 0x4u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00403ab1:  // mov ecx, dword ptr [esp + 4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_00403ab5:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_00403ab9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00403aba:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00403abf:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00403ac3:  // fistp qword ptr [esp + 8]
    M64((uint32_t)(esp + 0x8u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00403ac7:  // mov edx, dword ptr [esp + 8]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_00403acb:  // call 0x47ea20
    t0 = 0x0047ea20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403ad0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403ad0:  // movsx edx, ax
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)((eax & 0xffffu)));
L_00403ad3:  // mov dword ptr [esp + 4], edx
    M32((uint32_t)(esp + 0x4u)) = (uint32_t)(edx);
L_00403ad7:  // fild dword ptr [esp + 4]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x4u)));
L_00403adb:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00403adf:  // fld dword ptr [0x6fbdfc]
    lpush(x, (long double)F32((uint32_t)(0x6fbdfcu)));
L_00403ae5:  // fstp dword ptr [esp + 4]
    F32((uint32_t)(esp + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00403ae9:  // fcom dword ptr [esp + 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x4u)));
L_00403aed:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403aef:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00403af2:  // jne 0x403afa
    if (!f.zf) goto L_00403afa;
L_00403af4:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00403af6:  // fld dword ptr [esp + 4]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4u)));
L_00403afa:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_00403b00:  // fsub dword ptr [eax + 0x15c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x15cu)));
L_00403b06:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00403b0a:  // fcomp st(1)
    lcom(x, ST(0), ST(1));
    lpop(x);
L_00403b0c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00403b0e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00403b11:  // jne 0x403b19
    if (!f.zf) goto L_00403b19;
L_00403b13:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00403b17:  // jmp 0x403b1b
    goto L_00403b1b;
L_00403b19:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00403b1b:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00403b1f:  // mov ecx, dword ptr [esi + 0x208]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x208u)));
L_00403b25:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00403b29:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00403b2a:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00403b2d:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00403b2f:  // mov eax, esp
    eax = (uint32_t)(esp);
L_00403b31:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_00403b33:  // mov esi, dword ptr [esp + 0x2c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00403b37:  // mov dword ptr [eax + 4], esi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(esi);
L_00403b3a:  // mov esi, dword ptr [esp + 0x30]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00403b3e:  // mov dword ptr [eax + 8], esi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(esi);
L_00403b41:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_00403b45:  // mov dword ptr [eax + 0xc], esi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(esi);
L_00403b48:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00403b4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00403b4b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00403b4c:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00403b4f:  // ret 0x14
    c->target = M32(esp); esp += 24u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00403a90, 00403a90)
