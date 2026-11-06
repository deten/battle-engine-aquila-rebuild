// lifted from 0042b9c0 (FUN_0042b9c0, 193 bytes, 74 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0042b9c0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0042b9c0;
L_0042b9c0:  // sub esp, 0x104
    t0 = lsub<32>(esp, 0x104u, f);
    esp = (uint32_t)(t0);
L_0042b9c6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042b9c7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b9c8:  // mov ebp, dword ptr [esp + 0x110]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x110u)));
L_0042b9cf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042b9d0:  // mov dword ptr [esp + 0xc], ecx
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(ecx);
L_0042b9d4:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042b9d5:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042b9d7:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b9da:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b9dc:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b9de:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b9e0:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042b9e1:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_0042b9e4:  // jb 0x42ba74
    if (f.cf) goto L_0042ba74;
L_0042b9ea:  // mov al, byte ptr [ebp]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp))) & 0xffu);
L_0042b9ed:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0042b9ef:  // cmp al, 0x20
    t0 = lsub<8>((eax & 0xffu), 0x20u, f);
L_0042b9f1:  // je 0x42ba1d
    if (f.zf) goto L_0042ba1d;
L_0042b9f3:  // lea ebx, [esp + 0x14]
    ebx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0042b9f7:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_0042b9f9:  // sub ebx, ebp
    t0 = lsub<32>(ebx, ebp, f);
    ebx = (uint32_t)(t0);
L_0042b9fb:  // cmp al, 9
    t0 = lsub<8>((eax & 0xffu), 0x9u, f);
L_0042b9fd:  // je 0x42ba1d
    if (f.zf) goto L_0042ba1d;
L_0042b9ff:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042ba01:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042ba04:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042ba06:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042ba08:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042ba0a:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042ba0b:  // cmp esi, ecx
    t0 = lsub<32>(esi, ecx, f);
L_0042ba0d:  // jge 0x42ba1d
    if ((f.sf == f.of)) goto L_0042ba1d;
L_0042ba0f:  // mov al, byte ptr [edx]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx))) & 0xffu);
L_0042ba11:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0042ba12:  // mov byte ptr [ebx + edx], al
    M8((uint32_t)(ebx + edx)) = (uint8_t)((eax & 0xffu));
L_0042ba15:  // mov al, byte ptr [edx + 1]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edx + 0x1u))) & 0xffu);
L_0042ba18:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0042ba19:  // cmp al, 0x20
    t0 = lsub<8>((eax & 0xffu), 0x20u, f);
L_0042ba1b:  // jne 0x42b9fb
    if (!f.zf) goto L_0042b9fb;
L_0042ba1d:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0042ba21:  // mov byte ptr [esp + esi + 0x14], 0
    M8((uint32_t)(esp + esi + 0x14u)) = (uint8_t)(0x0u);
L_0042ba26:  // xor bl, bl
    t0 = llog<8>((ebx & 0xffu) ^ (ebx & 0xffu), f);
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0042ba28:  // mov esi, dword ptr [ecx + 0x2394]
    esi = (uint32_t)(M32((uint32_t)(ecx + 0x2394u)));
L_0042ba2e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0042ba30:  // je 0x42ba62
    if (f.zf) goto L_0042ba62;
L_0042ba32:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_0042ba34:  // jne 0x42ba74
    if (!f.zf) goto L_0042ba74;
L_0042ba36:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0042ba3a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042ba3b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042ba3c:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042ba41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042ba41:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042ba44:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042ba46:  // jne 0x42ba54
    if (!f.zf) goto L_0042ba54;
L_0042ba48:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042ba49:  // call dword ptr [esi + 0xa0]
    t0 = M32((uint32_t)(esi + 0xa0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042ba4fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042ba4f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0042ba52:  // mov bl, 1
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_0042ba54:  // mov esi, dword ptr [esi + 0xa8]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_0042ba5a:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0042ba5c:  // jne 0x42ba32
    if (!f.zf) goto L_0042ba32;
L_0042ba5e:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_0042ba60:  // jne 0x42ba74
    if (!f.zf) goto L_0042ba74;
L_0042ba62:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0042ba66:  // push 0x6252d4
    t0 = 0x6252d4u; esp -= 4; M32(esp) = t0;
L_0042ba6b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042ba6c:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042ba71u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042ba71:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0042ba74:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042ba75:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042ba76:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042ba77:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042ba78:  // add esp, 0x104
    t0 = ladd<32>(esp, 0x104u, f);
    esp = (uint32_t)(t0);
L_0042ba7e:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0042b9c0, 0042b9c0)
