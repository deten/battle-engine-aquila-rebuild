// lifted from 0043ed80 (FUN_0043ed80, 1164 bytes, 335 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0043ed80(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0043ed80;
L_0043ed80:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0043ed86:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0043ed88:  // push 0x5d200c
    t0 = 0x5d200cu; esp -= 4; M32(esp) = t0;
L_0043ed8d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043ed8e:  // mov eax, 0x1114
    eax = (uint32_t)(0x1114u);
L_0043ed93:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0043ed9a:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ed9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ed9f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0043eda0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043eda1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043eda2:  // push 0x6281e0
    t0 = 0x6281e0u; esp -= 4; M32(esp) = t0;
L_0043eda7:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0043eda9:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_0043edae:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043edb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043edb3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0043edb6:  // lea esi, [ebx + 0x5a8]
    esi = (uint32_t)((uint32_t)(ebx + 0x5a8u));
L_0043edbc:  // lea eax, [esp + 0x120]
    eax = (uint32_t)((uint32_t)(esp + 0x120u));
L_0043edc3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043edc4:  // push 0x628144
    t0 = 0x628144u; esp -= 4; M32(esp) = t0;
L_0043edc9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043edca:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043edcfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043edcf:  // movsx eax, byte ptr [0x62813f]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62813fu))));
L_0043edd6:  // movsx ecx, byte ptr [0x62813e]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62813eu))));
L_0043eddd:  // movsx edx, byte ptr [0x62813d]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62813du))));
L_0043ede4:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0043ede7:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0043ede9:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0043edec:  // movsx ecx, byte ptr [0x62813c]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62813cu))));
L_0043edf3:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0043edf6:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0043edf8:  // push 0xcb
    t0 = 0xcbu; esp -= 4; M32(esp) = t0;
L_0043edfd:  // shl eax, 8
    t0 = lshl<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0043ee00:  // push 0x62811c
    t0 = 0x62811cu; esp -= 4; M32(esp) = t0;
L_0043ee05:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0043ee07:  // push 0x1c
    t0 = 0x1cu; esp -= 4; M32(esp) = t0;
L_0043ee09:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0043ee0b:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043ee10:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0043ee14:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ee19u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ee19:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0043ee1d:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0043ee1f:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0043ee21:  // mov dword ptr [esp + 0x1128], ebp
    M32((uint32_t)(esp + 0x1128u)) = (uint32_t)(ebp);
L_0043ee28:  // je 0x43ee33
    if (f.zf) goto L_0043ee33;
L_0043ee2a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0043ee2c:  // call 0x4237d0
    t0 = 0x004237d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ee31u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ee31:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0043ee33:  // lea edx, [esp + 0x120]
    edx = (uint32_t)((uint32_t)(esp + 0x120u));
L_0043ee3a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043ee3c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0043ee3d:  // mov dword ptr [esp + 0x112c], 0xffffffff
    M32((uint32_t)(esp + 0x112cu)) = (uint32_t)(0xffffffffu);
L_0043ee48:  // call 0x4238c0
    t0 = 0x004238c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ee4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ee4d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043ee4f:  // jne 0x43ee64
    if (!f.zf) goto L_0043ee64;
L_0043ee51:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043ee52:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0043ee56:  // push 0x6281c0
    t0 = 0x6281c0u; esp -= 4; M32(esp) = t0;
L_0043ee5b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043ee5c:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ee61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ee61:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0043ee64:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043ee65:  // mov edi, 0x6281b8
    edi = (uint32_t)(0x6281b8u);
L_0043ee6a:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0043ee6d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0043ee6f:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0043ee71:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0043ee73:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0043ee75:  // lea edx, [ebx + 0x73c]
    edx = (uint32_t)((uint32_t)(ebx + 0x73cu));
L_0043ee7b:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0043ee7d:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0043ee7f:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0043ee81:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0043ee84:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0043ee86:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0043ee88:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0043ee8b:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0043ee8d:  // lea edi, [ebx + 0x83c]
    edi = (uint32_t)((uint32_t)(ebx + 0x83cu));
L_0043ee93:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043ee95:  // mov dword ptr [edi], 5
    M32((uint32_t)(edi)) = (uint32_t)(0x5u);
L_0043ee9b:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043eea0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043eea0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043eea2:  // je 0x43f1ca
    if (f.zf) goto L_0043f1ca;
L_0043eea8:  // movsx ecx, byte ptr [0x628117]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x628117u))));
L_0043eeaf:  // movsx edx, byte ptr [0x628116]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x628116u))));
L_0043eeb6:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043eeb9:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043eebb:  // movsx edx, byte ptr [0x628115]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x628115u))));
L_0043eec2:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043eec5:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043eec7:  // movsx edx, byte ptr [0x628114]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x628114u))));
L_0043eece:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043eed1:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043eed3:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0043eed5:  // jne 0x43ef30
    if (!f.zf) goto L_0043ef30;
L_0043eed7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043eed9:  // lea eax, [esp + 0x20]
    eax = (uint32_t)((uint32_t)(esp + 0x20u));
L_0043eedd:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043eedf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043eee0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043eee2:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043eee7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043eee7:  // movsx ecx, byte ptr [0x62813f]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62813fu))));
L_0043eeee:  // movsx edx, byte ptr [0x62813e]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62813eu))));
L_0043eef5:  // movsx eax, byte ptr [0x62813d]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62813du))));
L_0043eefc:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043eeff:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043ef01:  // movsx edx, byte ptr [0x62813c]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62813cu))));
L_0043ef08:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043ef0b:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0043ef0d:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0043ef11:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043ef14:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043ef16:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0043ef18:  // je 0x43f1bb
    if (f.zf) goto L_0043f1bb;
L_0043ef1e:  // push 0x62818c
    t0 = 0x62818cu; esp -= 4; M32(esp) = t0;
L_0043ef23:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ef28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ef28:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0043ef2b:  // jmp 0x43f1bb
    goto L_0043f1bb;
L_0043ef30:  // movsx ecx, byte ptr [0x62810f]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62810fu))));
L_0043ef37:  // movsx edx, byte ptr [0x62810e]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62810eu))));
L_0043ef3e:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043ef41:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043ef43:  // movsx edx, byte ptr [0x62810d]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62810du))));
L_0043ef4a:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043ef4d:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043ef4f:  // movsx edx, byte ptr [0x62810c]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x62810cu))));
L_0043ef56:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043ef59:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043ef5b:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0043ef5d:  // jne 0x43ef85
    if (!f.zf) goto L_0043ef85;
L_0043ef5f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043ef61:  // lea eax, [ebx + 0x1c]
    eax = (uint32_t)((uint32_t)(ebx + 0x1cu));
L_0043ef64:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_0043ef66:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043ef67:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043ef69:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ef6eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ef6e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043ef70:  // lea ecx, [ebx + 0x848]
    ecx = (uint32_t)((uint32_t)(ebx + 0x848u));
L_0043ef76:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043ef78:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043ef79:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043ef7b:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043ef80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043ef80:  // jmp 0x43f1bb
    goto L_0043f1bb;
L_0043ef85:  // movsx edx, byte ptr [0x628107]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x628107u))));
L_0043ef8c:  // movsx ecx, byte ptr [0x628106]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x628106u))));
L_0043ef93:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0043ef96:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0043ef98:  // movsx ecx, byte ptr [0x628105]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x628105u))));
L_0043ef9f:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0043efa2:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0043efa4:  // movsx ecx, byte ptr [0x628104]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x628104u))));
L_0043efab:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0043efae:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0043efb0:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0043efb2:  // jne 0x43efcb
    if (!f.zf) goto L_0043efcb;
L_0043efb4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043efb6:  // lea edx, [ebx + 0xf4]
    edx = (uint32_t)((uint32_t)(ebx + 0xf4u));
L_0043efbc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043efbe:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0043efbf:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043efc1:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043efc6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043efc6:  // jmp 0x43f1bb
    goto L_0043f1bb;
L_0043efcb:  // movsx ecx, byte ptr [0x6280f7]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280f7u))));
L_0043efd2:  // movsx edx, byte ptr [0x6280f6]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280f6u))));
L_0043efd9:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043efdc:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043efde:  // movsx edx, byte ptr [0x6280f5]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280f5u))));
L_0043efe5:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043efe8:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043efea:  // movsx edx, byte ptr [0x6280f4]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280f4u))));
L_0043eff1:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043eff4:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043eff6:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0043eff8:  // jne 0x43f067
    if (!f.zf) goto L_0043f067;
L_0043effa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043effc:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_0043f000:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f002:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043f003:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f005:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f00au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f00a:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0043f00e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f010:  // shl ecx, 5
    t0 = lshl<32>(ecx, 0x5u, f);
    ecx = (uint32_t)(t0);
L_0043f013:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_0043f015:  // lea edx, [ecx + ebx + 0x170]
    edx = (uint32_t)((uint32_t)(ecx + ebx + 0x170u));
L_0043f01c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f01e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0043f01f:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f024u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f024:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0043f028:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f02a:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f02c:  // lea ecx, [ebx + eax*4 + 0xf8]
    ecx = (uint32_t)((uint32_t)(ebx + eax * 4u + 0xf8u));
L_0043f033:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043f034:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f036:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f03bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f03b:  // mov edx, dword ptr [esp + 0x10]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0043f03f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f041:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f043:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f045:  // lea eax, [ebx + edx*4 + 0x530]
    eax = (uint32_t)((uint32_t)(ebx + edx * 4u + 0x530u));
L_0043f04c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043f04d:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f052u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f052:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f054:  // lea ecx, [esp + 0x24]
    ecx = (uint32_t)((uint32_t)(esp + 0x24u));
L_0043f058:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f05a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043f05b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f05d:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f062u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f062:  // jmp 0x43f1bb
    goto L_0043f1bb;
L_0043f067:  // movsx edx, byte ptr [0x6280ef]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280efu))));
L_0043f06e:  // movsx ecx, byte ptr [0x6280ee]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280eeu))));
L_0043f075:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0043f078:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0043f07a:  // movsx ecx, byte ptr [0x6280ed]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280edu))));
L_0043f081:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0043f084:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0043f086:  // movsx ecx, byte ptr [0x6280ec]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280ecu))));
L_0043f08d:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0043f090:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0043f092:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0043f094:  // jne 0x43f155
    if (!f.zf) goto L_0043f155;
L_0043f09a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f09c:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_0043f0a0:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f0a2:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0043f0a3:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f0a5:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f0aau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f0aa:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0043f0ae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0043f0b0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0043f0b2:  // push 0x662b2c
    t0 = 0x662b2cu; esp -= 4; M32(esp) = t0;
L_0043f0b7:  // push 0x662b2c
    t0 = 0x662b2cu; esp -= 4; M32(esp) = t0;
L_0043f0bc:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043f0bd:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0043f0bf:  // call 0x43f210
    t0 = 0x0043f210u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f0c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f0c4:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0043f0c6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f0c8:  // push 0x20
    t0 = 0x20u; esp -= 4; M32(esp) = t0;
L_0043f0ca:  // lea ecx, [esi + 0x108]
    ecx = (uint32_t)((uint32_t)(esi + 0x108u));
L_0043f0d0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043f0d1:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f0d3:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f0d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f0d8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f0da:  // lea edx, [esi + 0x12d]
    edx = (uint32_t)((uint32_t)(esi + 0x12du));
L_0043f0e0:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_0043f0e5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0043f0e6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f0e8:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f0edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f0ed:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f0ef:  // lea eax, [esi + 0x230]
    eax = (uint32_t)((uint32_t)(esi + 0x230u));
L_0043f0f5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f0f7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043f0f8:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f0fa:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f0ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f0ff:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f101:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_0043f104:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_0043f109:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0043f10a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f10c:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f111u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f111:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f113:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f115:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043f116:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f118:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f11du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f11d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f11f:  // lea edx, [esi + 0x234]
    edx = (uint32_t)((uint32_t)(esi + 0x234u));
L_0043f125:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f127:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0043f128:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f12a:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f12fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f12f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f131:  // lea eax, [esi + 0x23c]
    eax = (uint32_t)((uint32_t)(esi + 0x23cu));
L_0043f137:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f139:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043f13a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f13c:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f141u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f141:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f143:  // add esi, 0x240
    t0 = ladd<32>(esi, 0x240u, f);
    esi = (uint32_t)(t0);
L_0043f149:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f14b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0043f14c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f14e:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f153u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f153:  // jmp 0x43f1bb
    goto L_0043f1bb;
L_0043f155:  // movsx ecx, byte ptr [0x6280ff]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280ffu))));
L_0043f15c:  // movsx edx, byte ptr [0x6280fe]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280feu))));
L_0043f163:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043f166:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043f168:  // movsx edx, byte ptr [0x6280fd]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280fdu))));
L_0043f16f:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043f172:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043f174:  // movsx edx, byte ptr [0x6280fc]
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(0x6280fcu))));
L_0043f17b:  // shl ecx, 8
    t0 = lshl<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0043f17e:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0043f180:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0043f182:  // jne 0x43f1a7
    if (!f.zf) goto L_0043f1a7;
L_0043f184:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f186:  // lea eax, [ebx + 0x73c]
    eax = (uint32_t)((uint32_t)(ebx + 0x73cu));
L_0043f18c:  // push 0x100
    t0 = 0x100u; esp -= 4; M32(esp) = t0;
L_0043f191:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0043f192:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f194:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f199u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f199:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0043f19b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0043f19d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0043f19e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f1a0:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f1a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f1a5:  // jmp 0x43f1bb
    goto L_0043f1bb;
L_0043f1a7:  // push 0x62815c
    t0 = 0x62815cu; esp -= 4; M32(esp) = t0;
L_0043f1ac:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f1b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f1b1:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0043f1b4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f1b6:  // call 0x423990
    t0 = 0x00423990u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f1bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f1bb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f1bd:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f1c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f1c2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0043f1c4:  // jne 0x43eea8
    if (!f.zf) goto L_0043eea8;
L_0043f1ca:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f1cc:  // call 0x423900
    t0 = 0x00423900u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f1d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f1d1:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0043f1d3:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0043f1d4:  // je 0x43f1e8
    if (f.zf) goto L_0043f1e8;
L_0043f1d6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0043f1d8:  // call 0x423840
    t0 = 0x00423840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f1ddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f1dd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0043f1de:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0043f1e3:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0043f1e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0043f1e8:  // mov ecx, dword ptr [esp + 0x1120]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1120u)));
L_0043f1ef:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0043f1f0:  // mov byte ptr [ebx + 0x841], 1
    M8((uint32_t)(ebx + 0x841u)) = (uint8_t)(0x1u);
L_0043f1f7:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0043f1f8:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_0043f1fd:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0043f1fe:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0043f205:  // add esp, 0x1120
    t0 = ladd<32>(esp, 0x1120u, f);
    esp = (uint32_t)(t0);
L_0043f20b:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0043ed80, 0043ed80)
