// lifted from 0052ba50 (FUN_0052ba50, 237 bytes, 79 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0052ba50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0052ba50;
L_0052ba50:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052ba51:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0052ba52:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052ba53:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0052ba55:  // mov ebx, dword ptr [esp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0052ba59:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052ba5a:  // mov ecx, dword ptr [esi + 0x32e40]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x32e40u)));
L_0052ba60:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052ba63:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0052ba66:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0052ba68:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0052ba6b:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0052ba6e:  // lea ecx, [esi + eax*4 + 4]
    ecx = (uint32_t)((uint32_t)(esi + eax * 4u + 0x4u));
L_0052ba72:  // mov eax, dword ptr [esi + eax*4 + 0x516c]
    eax = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x516cu)));
L_0052ba79:  // lea edx, [eax + eax*4]
    edx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0052ba7c:  // lea edx, [eax + edx*8]
    edx = (uint32_t)((uint32_t)(eax + edx * 8u));
L_0052ba7f:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_0052ba82:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0052ba85:  // lea edx, [ecx + eax*8 + 0x460]
    edx = (uint32_t)((uint32_t)(ecx + eax * 8u + 0x460u));
L_0052ba8c:  // mov eax, dword ptr [ecx + eax*8 + 0x598]
    eax = (uint32_t)(M32((uint32_t)(ecx + eax * 8u + 0x598u)));
L_0052ba93:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0052ba95:  // je 0x52bae1
    if (f.zf) goto L_0052bae1;
L_0052ba97:  // mov ebp, dword ptr [esi + 0x32e3c]
    ebp = (uint32_t)(M32((uint32_t)(esi + 0x32e3cu)));
L_0052ba9d:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052ba9f:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0052baa1:  // jbe 0x52bb1e
    if ((f.cf || f.zf)) goto L_0052bb1e;
L_0052baa3:  // lea ecx, [esi + 0x464]
    ecx = (uint32_t)((uint32_t)(esi + 0x464u));
L_0052baa9:  // mov edx, dword ptr [ecx - 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xfffffffcu)));
L_0052baac:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052baae:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0052bab0:  // jbe 0x52bac8
    if ((f.cf || f.zf)) goto L_0052bac8;
L_0052bab2:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0052bab4:  // cmp dword ptr [edx + 0x138], ebx
    t0 = lsub<32>(M32((uint32_t)(edx + 0x138u)), ebx, f);
L_0052baba:  // je 0x52bad5
    if (f.zf) goto L_0052bad5;
L_0052babc:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0052babd:  // add edx, 0xf68
    t0 = ladd<32>(edx, 0xf68u, f);
    edx = (uint32_t)(t0);
L_0052bac3:  // cmp eax, dword ptr [ecx - 4]
    t0 = lsub<32>(eax, M32((uint32_t)(ecx + 0xfffffffcu)), f);
L_0052bac6:  // jb 0x52bab4
    if (f.cf) goto L_0052bab4;
L_0052bac8:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0052bac9:  // add ecx, 0x516c
    t0 = ladd<32>(ecx, 0x516cu, f);
    ecx = (uint32_t)(t0);
L_0052bacf:  // cmp edi, ebp
    t0 = lsub<32>(edi, ebp, f);
L_0052bad1:  // jae 0x52bb1e
    if (!f.cf) goto L_0052bb1e;
L_0052bad3:  // jmp 0x52baa9
    goto L_0052baa9;
L_0052bad5:  // mov dword ptr [esi + 0x32e40], edi
    M32((uint32_t)(esi + 0x32e40u)) = (uint32_t)(edi);
L_0052badb:  // mov dword ptr [ecx + 0x4d08], eax
    M32((uint32_t)(ecx + 0x4d08u)) = (uint32_t)(eax);
L_0052bae1:  // mov dword ptr [edx + 0xf54], ebx
    M32((uint32_t)(edx + 0xf54u)) = (uint32_t)(ebx);
L_0052bae7:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0052bae9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052baeb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052baed:  // mov dword ptr [esi + 0x32e44], ebx
    M32((uint32_t)(esi + 0x32e44u)) = (uint32_t)(ebx);
L_0052baf3:  // mov dword ptr [esi + 0x32e4c], 0
    M32((uint32_t)(esi + 0x32e4cu)) = (uint32_t)(0x0u);
L_0052bafd:  // call dword ptr [edx + 0x28]
    t0 = M32((uint32_t)(edx + 0x28u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052bb00u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052bb00:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0052bb02:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052bb04:  // call 0x52af00
    t0 = 0x0052af00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052bb09u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052bb09:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052bb0b:  // jge 0x52bb2a
    if ((f.sf == f.of)) goto L_0052bb2a;
L_0052bb0d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0052bb0f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052bb10:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0052bb12:  // call 0x52c4f0
    t0 = 0x0052c4f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0052bb17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0052bb17:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052bb18:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052bb19:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052bb1a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052bb1b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0052bb1e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052bb1f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052bb20:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052bb21:  // mov eax, 0x80004005
    eax = (uint32_t)(0x80004005u);
L_0052bb26:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052bb27:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0052bb2a:  // mov dword ptr [esi + 0x32e4c], 1
    M32((uint32_t)(esi + 0x32e4cu)) = (uint32_t)(0x1u);
L_0052bb34:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052bb35:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052bb36:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052bb37:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052bb39:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052bb3a:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0052ba50, 0052ba50)
