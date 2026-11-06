// lifted from 004cda60 (FUN_004cda60, 297 bytes, 94 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cda60(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cda60;
L_004cda60:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004cda66:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004cda68:  // push 0x5d423b
    t0 = 0x5d423bu; esp -= 4; M32(esp) = t0;
L_004cda6d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cda6e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004cda75:  // sub esp, 0x134
    t0 = lsub<32>(esp, 0x134u, f);
    esp = (uint32_t)(t0);
L_004cda7b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004cda7c:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004cda7e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cda7f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cda80:  // cmp dword ptr [ebx], 0
    t0 = lsub<32>(M32((uint32_t)(ebx)), 0x0u, f);
L_004cda83:  // je 0x4cda9c
    if (f.zf) goto L_004cda9c;
L_004cda85:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004cda87:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cda89:  // mov esi, dword ptr [eax + 0x38]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x38u)));
L_004cda8c:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004cda8e:  // je 0x4cda96
    if (f.zf) goto L_004cda96;
L_004cda90:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004cda92:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004cda94:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cda96u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cda96:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004cda98:  // mov dword ptr [ebx], esi
    M32((uint32_t)(ebx)) = (uint32_t)(esi);
L_004cda9a:  // jne 0x4cda85
    if (!f.zf) goto L_004cda85;
L_004cda9c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cda9d:  // push 0x1b5
    t0 = 0x1b5u; esp -= 4; M32(esp) = t0;
L_004cdaa2:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cdaa7:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_004cdaa9:  // push 0xc8
    t0 = 0xc8u; esp -= 4; M32(esp) = t0;
L_004cdaae:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cdab3:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cdab8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cdab8:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004cdaba:  // mov eax, dword ptr [esp + 0x154]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x154u)));
L_004cdac1:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_004cdac4:  // je 0x4cdaf1
    if (f.zf) goto L_004cdaf1;
L_004cdac6:  // sub eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004cdac9:  // je 0x4cdad2
    if (f.zf) goto L_004cdad2;
L_004cdacb:  // mov edi, 0x631148
    edi = (uint32_t)(0x631148u);
L_004cdad0:  // jmp 0x4cdaf6
    goto L_004cdaf6;
L_004cdad2:  // mov edi, 0x631128
    edi = (uint32_t)(0x631128u);
L_004cdad7:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004cdada:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cdadc:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004cdade:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004cdae0:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004cdae2:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004cdae4:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004cdae6:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004cdae8:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004cdaeb:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004cdaed:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_004cdaef:  // jmp 0x4cdb0e
    goto L_004cdb0e;
L_004cdaf1:  // mov edi, 0x631128
    edi = (uint32_t)(0x631128u);
L_004cdaf6:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_004cdaf9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cdafb:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_004cdafd:  // not ecx
    ecx = (uint32_t)(~ecx);
L_004cdaff:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_004cdb01:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_004cdb03:  // mov esi, edi
    esi = (uint32_t)(edi);
L_004cdb05:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004cdb07:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_004cdb0a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004cdb0c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cdb0e:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_004cdb11:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_004cdb13:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_004cdb17:  // call 0x547d70
    t0 = 0x00547d70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cdb1cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cdb1c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cdb1d:  // lea ecx, [esp + 0x14]
    ecx = (uint32_t)((uint32_t)(esp + 0x14u));
L_004cdb21:  // mov dword ptr [esp + 0x150], 0
    M32((uint32_t)(esp + 0x150u)) = (uint32_t)(0x0u);
L_004cdb2c:  // call 0x48ddd0
    t0 = 0x0048ddd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cdb31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cdb31:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004cdb33:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cdb34:  // je 0x4cdb4b
    if (f.zf) goto L_004cdb4b;
L_004cdb36:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_004cdb3a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004cdb3b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004cdb3d:  // call 0x4cd7f0
    t0 = 0x004cd7f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cdb42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cdb42:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_004cdb46:  // call 0x48ddf0
    t0 = 0x0048ddf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cdb4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cdb4b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004cdb4c:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cdb51:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cdb56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cdb56:  // lea ecx, [esp + 0xc]
    ecx = (uint32_t)((uint32_t)(esp + 0xcu));
L_004cdb5a:  // mov dword ptr [esp + 0x148], 0xffffffff
    M32((uint32_t)(esp + 0x148u)) = (uint32_t)(0xffffffffu);
L_004cdb65:  // call 0x547d90
    t0 = 0x00547d90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cdb6au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cdb6a:  // mov ecx, dword ptr [esp + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x140u)));
L_004cdb71:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cdb72:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004cdb73:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004cdb78:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004cdb79:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004cdb80:  // add esp, 0x140
    t0 = ladd<32>(esp, 0x140u, f);
    esp = (uint32_t)(t0);
L_004cdb86:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cda60, 004cda60)
