// lifted from 00503ef0 (vslot2, 146 bytes, 47 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00503ef0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00503ef0;
L_00503ef0:  // mov eax, 0x1000
    eax = (uint32_t)(0x1000u);
L_00503ef5:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00503efau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00503efa:  // mov edx, dword ptr [esp + 0x1004]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1004u)));
L_00503f01:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00503f02:  // mov esi, dword ptr [0x854e68]
    esi = (uint32_t)(M32((uint32_t)(0x854e68u)));
L_00503f08:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00503f0a:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00503f0c:  // je 0x503f1a
    if (f.zf) goto L_00503f1a;
L_00503f0e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00503f10:  // jle 0x503f1a
    if ((f.zf || f.sf != f.of)) goto L_00503f1a;
L_00503f12:  // mov esi, dword ptr [esi + 0x58]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x58u)));
L_00503f15:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00503f16:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00503f18:  // jne 0x503f0e
    if (!f.zf) goto L_00503f0e;
L_00503f1a:  // cmp edx, dword ptr [ecx + 0x14]
    t0 = lsub<32>(edx, M32((uint32_t)(ecx + 0x14u)), f);
L_00503f1d:  // jne 0x503f5f
    if (!f.zf) goto L_00503f5f;
L_00503f1f:  // mov al, byte ptr [esi + 0x34]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x34u))) & 0xffu);
L_00503f22:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00503f24:  // je 0x503f5f
    if (f.zf) goto L_00503f5f;
L_00503f26:  // mov eax, dword ptr [esi + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x38u)));
L_00503f29:  // lea ecx, [esp + 4]
    ecx = (uint32_t)((uint32_t)(esp + 0x4u));
L_00503f2d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503f2e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503f2f:  // call 0x503dd0
    t0 = 0x00503dd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00503f34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00503f34:  // mov eax, dword ptr [esp + 0x1014]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1014u)));
L_00503f3b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00503f3e:  // lea edx, [esp + 4]
    edx = (uint32_t)((uint32_t)(esp + 0x4u));
L_00503f42:  // add esi, 8
    t0 = ladd<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_00503f45:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00503f46:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00503f47:  // push 0x63d0f8
    t0 = 0x63d0f8u; esp -= 4; M32(esp) = t0;
L_00503f4c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00503f4d:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00503f52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00503f52:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00503f55:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00503f56:  // add esp, 0x1000
    t0 = ladd<32>(esp, 0x1000u, f);
    esp = (uint32_t)(t0);
L_00503f5c:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00503f5f:  // mov ecx, dword ptr [esp + 0x100c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x100cu)));
L_00503f66:  // add esi, 8
    t0 = ladd<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_00503f69:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00503f6a:  // push 0x6245d8
    t0 = 0x6245d8u; esp -= 4; M32(esp) = t0;
L_00503f6f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00503f70:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00503f75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00503f75:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00503f78:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00503f79:  // add esp, 0x1000
    t0 = ladd<32>(esp, 0x1000u, f);
    esp = (uint32_t)(t0);
L_00503f7f:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00503ef0, 00503ef0)
