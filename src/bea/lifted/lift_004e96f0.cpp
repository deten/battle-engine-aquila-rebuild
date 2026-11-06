// lifted from 004e96f0 (vslot21, 237 bytes, 88 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004e96f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004e96f0;
L_004e96f0:  // sub esp, 0x40
    t0 = lsub<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004e96f3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004e96f4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e96f5:  // mov ebp, dword ptr [esp + 0x4c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_004e96f9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004e96fa:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004e96fc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e96fd:  // call 0x4f4460
    t0 = 0x004f4460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9702u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9702:  // mov ebx, dword ptr [esi + 0xa4]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0xa4u)));
L_004e9708:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e970a:  // je 0x4e9710
    if (f.zf) goto L_004e9710;
L_004e970c:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_004e970e:  // jmp 0x4e9712
    goto L_004e9712;
L_004e9710:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004e9712:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e9714:  // je 0x4e97d4
    if (f.zf) goto L_004e97d4;
L_004e971a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004e971b:  // cmp dword ptr [esi], 0
    t0 = lsub<32>(M32((uint32_t)(esi)), 0x0u, f);
L_004e971e:  // je 0x4e97b2
    if (f.zf) goto L_004e97b2;
L_004e9724:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004e9727:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004e972a:  // mov edi, dword ptr [esi + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e972d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004e972f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9730:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004e9731:  // lea ecx, [esp + 0x3c]
    ecx = (uint32_t)((uint32_t)(esp + 0x3cu));
L_004e9735:  // add edi, 0x1c
    t0 = ladd<32>(edi, 0x1cu, f);
    edi = (uint32_t)(t0);
L_004e9738:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e973du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e973d:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e9740:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004e9744:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9745:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004e9746:  // add ecx, 0x3c
    t0 = ladd<32>(ecx, 0x3cu, f);
    ecx = (uint32_t)(t0);
L_004e9749:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e974eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e974e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e974f:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004e9753:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9754:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004e9756:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e975bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e975b:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e975d:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_004e9761:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e9762:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e9764:  // call dword ptr [edx + 0x50]
    t0 = M32((uint32_t)(edx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9767u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9767:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e9769:  // add ecx, 0x1c
    t0 = ladd<32>(ecx, 0x1cu, f);
    ecx = (uint32_t)(t0);
L_004e976c:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e976e:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_004e9772:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_004e9775:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004e9779:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_004e977c:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_004e9780:  // lea edx, [esp + 0x10]
    edx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e9784:  // mov eax, dword ptr [ecx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_004e9787:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_004e978c:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004e9790:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e9795u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e9795:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004e9798:  // fst dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
L_004e979c:  // fcomp dword ptr [ecx + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x24u)));
    lpop(x);
L_004e979f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004e97a1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004e97a4:  // je 0x4e97b2
    if (f.zf) goto L_004e97b2;
L_004e97a6:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e97a8:  // lea eax, [esp + 0x10]
    eax = (uint32_t)((uint32_t)(esp + 0x10u));
L_004e97ac:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004e97ad:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e97af:  // call dword ptr [edx + 0x50]
    t0 = M32((uint32_t)(edx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e97b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e97b2:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004e97b4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004e97b6:  // je 0x4e97be
    if (f.zf) goto L_004e97be;
L_004e97b8:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004e97ba:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004e97bb:  // call dword ptr [edx + 0x54]
    t0 = M32((uint32_t)(edx + 0x54u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004e97beu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004e97be:  // mov ebx, dword ptr [ebx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004e97c1:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004e97c3:  // je 0x4e97c9
    if (f.zf) goto L_004e97c9;
L_004e97c5:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_004e97c7:  // jmp 0x4e97cb
    goto L_004e97cb;
L_004e97c9:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004e97cb:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004e97cd:  // jne 0x4e971b
    if (!f.zf) goto L_004e971b;
L_004e97d3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004e97d4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004e97d5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004e97d6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004e97d7:  // add esp, 0x40
    t0 = ladd<32>(esp, 0x40u, f);
    esp = (uint32_t)(t0);
L_004e97da:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004e96f0, 004e96f0)
