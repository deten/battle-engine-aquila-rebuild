// lifted from 004ea780 (vslot67, 191 bytes, 65 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004ea780(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004ea780;
L_004ea780:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea783:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ea784:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ea785:  // mov esi, dword ptr [esp + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ea789:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ea78b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ea78c:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004ea78e:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_004ea790:  // je 0x4ea82a
    if (f.zf) goto L_004ea82a;
L_004ea796:  // cmp dword ptr [esi + 0x148], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x148u)), ebx, f);
L_004ea79c:  // jne 0x4ea82a
    if (!f.zf) goto L_004ea82a;
L_004ea7a2:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_004ea7a4:  // push 0x632918
    t0 = 0x632918u; esp -= 4; M32(esp) = t0;
L_004ea7a9:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_004ea7ab:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004ea7ad:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ea7b2:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea7b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea7b7:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004ea7b9:  // je 0x4ea7bf
    if (f.zf) goto L_004ea7bf;
L_004ea7bb:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004ea7bd:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004ea7bf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ea7c0:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004ea7c2:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea7c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea7c7:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004ea7c8:  // lea ecx, [edi + 0xa4]
    ecx = (uint32_t)((uint32_t)(edi + 0xa4u));
L_004ea7ce:  // call 0x4e5a80
    t0 = 0x004e5a80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea7d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea7d3:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004ea7d5:  // mov ebx, dword ptr [edi + 0xb0]
    ebx = (uint32_t)(M32((uint32_t)(edi + 0xb0u)));
L_004ea7db:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004ea7dd:  // call dword ptr [eax + 0x40]
    t0 = M32((uint32_t)(eax + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004ea7e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004ea7e0:  // dec ebx
    t0 = ldec<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004ea7e1:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ea7e5:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_004ea7e9:  // fimul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(esp + 0x24u)));
L_004ea7ed:  // fmul dword ptr [0x5d8bd8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8bd8u)));
L_004ea7f3:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ea7f5:  // fmul dword ptr [edi + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x3cu)));
L_004ea7f8:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_004ea7fc:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004ea7fe:  // fmul dword ptr [edi + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4cu)));
L_004ea801:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004ea805:  // fmul dword ptr [edi + 0x5c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x5cu)));
L_004ea808:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ea809:  // fadd dword ptr [esi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x24u)));
L_004ea80c:  // fld dword ptr [esp + 0xc]
    lpush(x, (long double)F32((uint32_t)(esp + 0xcu)));
L_004ea810:  // fadd dword ptr [esi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x20u)));
L_004ea813:  // fld dword ptr [esp + 8]
    lpush(x, (long double)F32((uint32_t)(esp + 0x8u)));
L_004ea817:  // fadd dword ptr [esi + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x1cu)));
L_004ea81a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ea81b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ea81c:  // fstp dword ptr [eax]
    F32((uint32_t)(eax)) = lf32(ST(0));
    lpop(x);
L_004ea81e:  // fstp dword ptr [eax + 4]
    F32((uint32_t)(eax + 0x4u)) = lf32(ST(0));
    lpop(x);
L_004ea821:  // fstp dword ptr [eax + 8]
    F32((uint32_t)(eax + 0x8u)) = lf32(ST(0));
    lpop(x);
L_004ea824:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea827:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004ea82a:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ea82e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ea82f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ea830:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004ea832:  // mov dword ptr [eax + 4], ebx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebx);
L_004ea835:  // mov dword ptr [eax + 8], ebx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebx);
L_004ea838:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ea839:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004ea83c:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004ea780, 004ea780)
