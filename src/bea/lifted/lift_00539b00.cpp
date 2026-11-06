// lifted from 00539b00 (FUN_00539b00, 369 bytes, 107 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00539b00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00539b00;
L_00539b00:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00539b01:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00539b02:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00539b04:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_00539b09:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00539b0a:  // cmp dword ptr [esi + 0x210], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0x210u)), eax, f);
L_00539b10:  // jne 0x539b28
    if (!f.zf) goto L_00539b28;
L_00539b12:  // push 0x650208
    t0 = 0x650208u; esp -= 4; M32(esp) = t0;
L_00539b17:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00539b1c:  // call 0x4418a0
    t0 = 0x004418a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00539b21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00539b21:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00539b24:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00539b25:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00539b26:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00539b27:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00539b28:  // mov ecx, dword ptr [esi + 0x214]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x214u)));
L_00539b2e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00539b2f:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00539b30:  // mov dword ptr [esi + 0x210], eax
    M32((uint32_t)(esi + 0x210u)) = (uint32_t)(eax);
L_00539b36:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00539b39:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_00539b3b:  // mov dword ptr [esi + 0x218], ebp
    M32((uint32_t)(esi + 0x218u)) = (uint32_t)(ebp);
L_00539b41:  // mov dword ptr [esi + 0x224], ebp
    M32((uint32_t)(esi + 0x224u)) = (uint32_t)(ebp);
L_00539b47:  // mov dword ptr [esi + 0x220], ebp
    M32((uint32_t)(esi + 0x220u)) = (uint32_t)(ebp);
L_00539b4d:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00539b50:  // mov eax, dword ptr [eax + 0x58]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x58u)));
L_00539b53:  // mov edi, dword ptr [edx + ecx*4]
    edi = (uint32_t)(M32((uint32_t)(edx + ecx * 4u)));
L_00539b56:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_00539b5a:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00539b5c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00539b5e:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00539b61u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00539b61:  // cmp eax, 0x17
    t0 = lsub<32>(eax, 0x17u, f);
L_00539b64:  // jne 0x539b74
    if (!f.zf) goto L_00539b74;
L_00539b66:  // mov eax, dword ptr [esi + 0x224]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x224u)));
L_00539b6c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00539b6e:  // jle 0x539c08
    if ((f.zf || f.sf != f.of)) goto L_00539c08;
L_00539b74:  // mov eax, dword ptr [esi + 0x220]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x220u)));
L_00539b7a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00539b7c:  // jne 0x539c08
    if (!f.zf) goto L_00539c08;
L_00539b82:  // mov ebx, dword ptr [esi + 0x214]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x214u)));
L_00539b88:  // lea ecx, [esi + 0xc]
    ecx = (uint32_t)((uint32_t)(esi + 0xcu));
L_00539b8b:  // lea eax, [ebx + 1]
    eax = (uint32_t)((uint32_t)(ebx + 0x1u));
L_00539b8e:  // mov dword ptr [esi + 0x214], eax
    M32((uint32_t)(esi + 0x214u)) = (uint32_t)(eax);
L_00539b94:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00539b98:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_00539b9a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00539b9b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00539b9c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00539b9d:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00539b9f:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00539ba1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00539ba1:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00539ba4:  // cmp dword ptr [edx + 0x60], 1
    t0 = lsub<32>(M32((uint32_t)(edx + 0x60u)), 0x1u, f);
L_00539ba8:  // jne 0x539bcb
    if (!f.zf) goto L_00539bcb;
L_00539baa:  // mov eax, dword ptr [esi + 0x218]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x218u)));
L_00539bb0:  // mov ecx, dword ptr [esi + 0x20c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20cu)));
L_00539bb6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00539bb7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00539bb8:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00539bb9:  // push 0x6501e4
    t0 = 0x6501e4u; esp -= 4; M32(esp) = t0;
L_00539bbe:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00539bc3:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00539bc8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00539bc8:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00539bcb:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00539bce:  // mov edx, dword ptr [esi + 0x214]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x214u)));
L_00539bd4:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_00539bd5:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00539bd8:  // cmp ebp, 0x2710
    t0 = lsub<32>(ebp, 0x2710u, f);
L_00539bde:  // mov edi, dword ptr [ecx + edx*4]
    edi = (uint32_t)(M32((uint32_t)(ecx + edx * 4u)));
L_00539be1:  // jle 0x539b5a
    if ((f.zf || f.sf != f.of)) goto L_00539b5a;
L_00539be7:  // push 0x6501bc
    t0 = 0x6501bcu; esp -= 4; M32(esp) = t0;
L_00539bec:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00539bf1:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00539bf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00539bf6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00539bf9:  // mov dword ptr [esi + 0x220], 1
    M32((uint32_t)(esi + 0x220u)) = (uint32_t)(0x1u);
L_00539c03:  // jmp 0x539b5a
    goto L_00539b5a;
L_00539c08:  // mov eax, dword ptr [esi + 0x220]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x220u)));
L_00539c0e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00539c0f:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00539c12:  // mov dword ptr [esi + 0x210], 0
    M32((uint32_t)(esi + 0x210u)) = (uint32_t)(0x0u);
L_00539c1c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00539c1d:  // jne 0x539c2d
    if (!f.zf) goto L_00539c2d;
L_00539c1f:  // mov dword ptr [esi + 0x20c], 0
    M32((uint32_t)(esi + 0x20cu)) = (uint32_t)(0x0u);
L_00539c29:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00539c2a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00539c2b:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00539c2c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00539c2d:  // mov edx, dword ptr [esi + 0x20c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x20cu)));
L_00539c33:  // mov eax, dword ptr [esi + 0x21c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x21cu)));
L_00539c39:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_00539c3b:  // je 0x539c4f
    if (f.zf) goto L_00539c4f;
L_00539c3d:  // push 0x650188
    t0 = 0x650188u; esp -= 4; M32(esp) = t0;
L_00539c42:  // push 0x66f580
    t0 = 0x66f580u; esp -= 4; M32(esp) = t0;
L_00539c47:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00539c4cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00539c4c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00539c4f:  // mov eax, dword ptr [esi + 0x20c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20cu)));
L_00539c55:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00539c57:  // je 0x539c6d
    if (f.zf) goto L_00539c6d;
L_00539c59:  // lea edi, [esi + 0xc]
    edi = (uint32_t)((uint32_t)(esi + 0xcu));
L_00539c5c:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00539c5e:  // call 0x5394a0
    t0 = 0x005394a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00539c63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00539c63:  // mov eax, dword ptr [esi + 0x20c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20cu)));
L_00539c69:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00539c6b:  // jne 0x539c5c
    if (!f.zf) goto L_00539c5c;
L_00539c6d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00539c6e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00539c6f:  // pop ecx
    t0 = M32(esp); esp += 4;
    ecx = (uint32_t)(t0);
L_00539c70:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00539b00, 00539b00)
