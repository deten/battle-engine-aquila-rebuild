// lifted from 00544fc0 (FUN_00544fc0, 175 bytes, 57 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00544fc0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00544fc0;
L_00544fc0:  // sub esp, 0x1c
    t0 = lsub<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00544fc3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00544fc4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00544fc5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00544fc6:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_00544fca:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00544fcb:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00544fcf:  // mov ecx, dword ptr [ecx + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x28u)));
L_00544fd2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00544fd3:  // call 0x5001b0
    t0 = 0x005001b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00544fd8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00544fd8:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00544fdc:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00544fde:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_00544fe2:  // mov dword ptr [esp + 0x18], 0x41
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x41u);
L_00544fea:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00544fee:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00544ff0:  // mov ebx, 0x41
    ebx = (uint32_t)(0x41u);
L_00544ff5:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_00544ff9:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00544ffd:  // mov ecx, dword ptr [0x6fbdf4]
    ecx = (uint32_t)(M32((uint32_t)(0x6fbdf4u)));
L_00545003:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545004:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00545008:  // mov edx, edi
    edx = (uint32_t)(edi);
L_0054500a:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0054500f:  // call 0x47ea20
    t0 = 0x0047ea20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545014u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545014:  // movsx edx, ax
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)((eax & 0xffffu)));
L_00545017:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_0054501b:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0054501f:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00545023:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00545025:  // mov dword ptr [esi + 4], eax
    M32((uint32_t)(esi + 0x4u)) = (uint32_t)(eax);
L_00545028:  // mov dword ptr [esi + 0x10], ecx
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(ecx);
L_0054502b:  // add edi, 8
    t0 = ladd<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_0054502e:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00545032:  // add esi, 0x14
    t0 = ladd<32>(esi, 0x14u, f);
    esi = (uint32_t)(t0);
L_00545035:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_00545036:  // fstp dword ptr [esi - 0xc]
    F32((uint32_t)(esi + 0xfffffff4u)) = lf32(ST(0));
    lpop(x);
L_00545039:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_0054503d:  // mov dword ptr [esp + 0x14], edi
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edi);
L_00545041:  // fst dword ptr [esi - 0x14]
    F32((uint32_t)(esi + 0xffffffecu)) = lf32(ST(0));
L_00545044:  // fstp dword ptr [esi - 8]
    F32((uint32_t)(esi + 0xfffffff8u)) = lf32(ST(0));
    lpop(x);
L_00545047:  // jne 0x544ffd
    if (!f.zf) goto L_00544ffd;
L_00545049:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0054504d:  // add ebp, 8
    t0 = ladd<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_00545050:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00545051:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_00545055:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00545059:  // jne 0x544fea
    if (!f.zf) goto L_00544fea;
L_0054505b:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0054505f:  // mov ecx, dword ptr [edx + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(edx + 0x28u)));
L_00545062:  // call 0x5001e0
    t0 = 0x005001e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545067u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545067:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00545068:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00545069:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0054506a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054506b:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0054506e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00544fc0, 00544fc0)
