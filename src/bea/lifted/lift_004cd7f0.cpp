// lifted from 004cd7f0 (FUN_004cd7f0, 617 bytes, 210 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cd7f0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cd7f0;
L_004cd7f0:  // sub esp, 0xe0
    t0 = lsub<32>(esp, 0xe0u, f);
    esp = (uint32_t)(t0);
L_004cd7f6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004cd7f7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd7f8:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004cd7fa:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cd7fb:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004cd7fd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cd7fe:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004cd803:  // mov dword ptr [0x82b450], ebp
    M32((uint32_t)(0x82b450u)) = (uint32_t)(ebp);
L_004cd809:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd80eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd80e:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004cd810:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004cd814:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004cd816:  // je 0x4cd82f
    if (f.zf) goto L_004cd82f;
L_004cd818:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004cd81a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cd81c:  // mov esi, dword ptr [eax + 0x38]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x38u)));
L_004cd81f:  // cmp ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
L_004cd821:  // je 0x4cd829
    if (f.zf) goto L_004cd829;
L_004cd823:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004cd825:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004cd827:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd829u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd829:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_004cd82b:  // mov dword ptr [ebx], esi
    M32((uint32_t)(ebx)) = (uint32_t)(esi);
L_004cd82d:  // jne 0x4cd818
    if (!f.zf) goto L_004cd818;
L_004cd82f:  // push 0x13b
    t0 = 0x13bu; esp -= 4; M32(esp) = t0;
L_004cd834:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cd839:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_004cd83b:  // push 0x1388c
    t0 = 0x1388cu; esp -= 4; M32(esp) = t0;
L_004cd840:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cd845:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd84au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd84a:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004cd84c:  // je 0x4cd861
    if (f.zf) goto L_004cd861;
L_004cd84e:  // mov ecx, dword ptr [esp + 0xf4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xf4u)));
L_004cd855:  // mov dword ptr [eax + 4], ebp
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(ebp);
L_004cd858:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004cd85a:  // mov dword ptr [eax + 8], ebp
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ebp);
L_004cd85d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cd85f:  // jmp 0x4cd863
    goto L_004cd863;
L_004cd861:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004cd863:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd864:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd865:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004cd869:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd86a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004cd86b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cd86d:  // call 0x4f57b0
    t0 = 0x004f57b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd872u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd872:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004cd874:  // jne 0x4cd896
    if (!f.zf) goto L_004cd896;
L_004cd876:  // cmp dword ptr [esp + 0x10], ebp
    t0 = lsub<32>(M32((uint32_t)(esp + 0x10u)), ebp, f);
L_004cd87a:  // je 0x4cd896
    if (f.zf) goto L_004cd896;
L_004cd87c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cd87d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cd882:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd887u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd887:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cd888:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cd889:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004cd88a:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cd88c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004cd88d:  // add esp, 0xe0
    t0 = ladd<32>(esp, 0xe0u, f);
    esp = (uint32_t)(t0);
L_004cd893:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004cd896:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_004cd89a:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd89b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cd89c:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004cd8a0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd8a1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004cd8a2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cd8a4:  // call 0x4f57b0
    t0 = 0x004f57b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd8a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd8a9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004cd8ab:  // jne 0x4cd8ce
    if (!f.zf) goto L_004cd8ce;
L_004cd8ad:  // cmp dword ptr [esp + 0x10], 1
    t0 = lsub<32>(M32((uint32_t)(esp + 0x10u)), 0x1u, f);
L_004cd8b2:  // je 0x4cd8ce
    if (f.zf) goto L_004cd8ce;
L_004cd8b4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cd8b5:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cd8ba:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd8bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd8bf:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cd8c0:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cd8c1:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004cd8c2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cd8c4:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004cd8c5:  // add esp, 0xe0
    t0 = ladd<32>(esp, 0xe0u, f);
    esp = (uint32_t)(t0);
L_004cd8cb:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004cd8ce:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd8cf:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004cd8d3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd8d4:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004cd8d8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004cd8d9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cd8da:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cd8dc:  // call 0x4f57b0
    t0 = 0x004f57b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd8e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd8e1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004cd8e3:  // jne 0x4cd906
    if (!f.zf) goto L_004cd906;
L_004cd8e5:  // cmp dword ptr [esp + 0x10], 2
    t0 = lsub<32>(M32((uint32_t)(esp + 0x10u)), 0x2u, f);
L_004cd8ea:  // je 0x4cd906
    if (f.zf) goto L_004cd906;
L_004cd8ec:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cd8ed:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cd8f2:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd8f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd8f7:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cd8f8:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cd8f9:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004cd8fa:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cd8fc:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004cd8fd:  // add esp, 0xe0
    t0 = ladd<32>(esp, 0xe0u, f);
    esp = (uint32_t)(t0);
L_004cd903:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004cd906:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004cd90a:  // mov dword ptr [esp + 0x1c], ebp
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ebp);
L_004cd90e:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004cd910:  // jle 0x4cd9ba
    if ((f.zf || f.sf != f.of)) goto L_004cd9ba;
L_004cd916:  // push 0x15c
    t0 = 0x15cu; esp -= 4; M32(esp) = t0;
L_004cd91b:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cd920:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_004cd922:  // push 0x3e8
    t0 = 0x3e8u; esp -= 4; M32(esp) = t0;
L_004cd927:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cd92c:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd931u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd931:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd932:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004cd936:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd937:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004cd93b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004cd93c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004cd93d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cd93f:  // mov edi, eax
    edi = (uint32_t)(eax);
L_004cd941:  // call 0x4f57b0
    t0 = 0x004f57b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd946u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd946:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004cd948:  // jne 0x4cd955
    if (!f.zf) goto L_004cd955;
L_004cd94a:  // cmp dword ptr [esp + 0x10], 3
    t0 = lsub<32>(M32((uint32_t)(esp + 0x10u)), 0x3u, f);
L_004cd94f:  // jne 0x4cda34
    if (!f.zf) goto L_004cda34;
L_004cd955:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cd956:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd957:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_004cd95b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cd95c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cd95d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cd95f:  // call 0x4f57b0
    t0 = 0x004f57b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd964u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd964:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004cd966:  // jne 0x4cd973
    if (!f.zf) goto L_004cd973;
L_004cd968:  // cmp dword ptr [esp + 0x10], 4
    t0 = lsub<32>(M32((uint32_t)(esp + 0x10u)), 0x4u, f);
L_004cd96d:  // jne 0x4cda34
    if (!f.zf) goto L_004cda34;
L_004cd973:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004cd977:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004cd979:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004cd97a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cd97b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004cd97d:  // call 0x4cc020
    t0 = 0x004cc020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd982u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd982:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_004cd984:  // je 0x4cda34
    if (f.zf) goto L_004cda34;
L_004cd98a:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004cd98c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cd98d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cd98f:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd992u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd992:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004cd994:  // je 0x4cda34
    if (f.zf) goto L_004cda34;
L_004cd99a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cd99b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cd9a0:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd9a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd9a5:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004cd9a9:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004cd9ad:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_004cd9ae:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_004cd9b0:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_004cd9b4:  // jl 0x4cd916
    if ((f.sf != f.of)) goto L_004cd916;
L_004cd9ba:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004cd9bf:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd9c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd9c4:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004cd9c8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004cd9c9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cd9cb:  // call 0x4f5ba0
    t0 = 0x004f5ba0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd9d0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd9d0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004cd9d5:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd9dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd9da:  // fsub dword ptr [esp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x20u)));
L_004cd9de:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004cd9e1:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_004cd9e6:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004cd9e9:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cd9eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cd9ee:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004cd9f2:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004cd9f5:  // lea eax, [esp + 0x38]
    eax = (uint32_t)((uint32_t)(esp + 0x38u));
L_004cd9f9:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004cd9fc:  // push 0x6310c4
    t0 = 0x6310c4u; esp -= 4; M32(esp) = t0;
L_004cda01:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cda02:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cda07u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cda07:  // add esp, 0x18
    t0 = ladd<32>(esp, 0x18u, f);
    esp = (uint32_t)(t0);
L_004cda0a:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004cda0e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004cda0f:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cda14u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cda14:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004cda17:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cda1c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cda1d:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cda22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cda22:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cda23:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cda24:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004cda25:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004cda2a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004cda2b:  // add esp, 0xe0
    t0 = ladd<32>(esp, 0xe0u, f);
    esp = (uint32_t)(t0);
L_004cda31:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004cda34:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cda35:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cda3a:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cda3fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cda3f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cda40:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cda45:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004cda4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004cda4a:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cda4b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cda4c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004cda4d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cda4f:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004cda50:  // add esp, 0xe0
    t0 = ladd<32>(esp, 0xe0u, f);
    esp = (uint32_t)(t0);
L_004cda56:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004cd7f0, 004cd7f0)
