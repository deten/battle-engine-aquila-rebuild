// lifted from 004b81d0 (vslot0, 175 bytes, 52 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b81d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b81d0;
L_004b81d0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_004b81d4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b81d5:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004b81d7:  // movsx eax, word ptr [eax + 4]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(eax + 0x4u))));
L_004b81db:  // add eax, 0xfffff448
    t0 = ladd<32>(eax, 0xfffff448u, f);
    eax = (uint32_t)(t0);
L_004b81e0:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004b81e3:  // ja 0x4b827b
    if ((!f.cf && !f.zf)) goto L_004b827b;
L_004b81e9:  // jmp dword ptr [eax*4 + 0x4b8280]
    t0 = M32((uint32_t)(eax * 4u + 0x4b8280u));
    switch (t0) {
    case 0x004b81f0u: goto L_004b81f0;
    case 0x004b81fbu: goto L_004b81fb;
    case 0x004b8206u: goto L_004b8206;
    case 0x004b826du: goto L_004b826d;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_004b81f0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b81f2:  // call 0x4b7ea0
    t0 = 0x004b7ea0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b81f7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b81f7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b81f8:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004b81fb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b81fd:  // call 0x4b8020
    t0 = 0x004b8020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b8202u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b8202:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b8203:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004b8206:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b8207:  // mov edi, dword ptr [esi + 8]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004b820a:  // mov eax, dword ptr [edi + 0x28]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x28u)));
L_004b820d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b820f:  // je 0x4b8223
    if (f.zf) goto L_004b8223;
L_004b8211:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b8212:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004b8217:  // call 0x44b310
    t0 = 0x0044b310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b821cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b821c:  // mov dword ptr [edi + 0x28], 0
    M32((uint32_t)(edi + 0x28u)) = (uint32_t)(0x0u);
L_004b8223:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004b8226:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b8227:  // lea ecx, [esi + 0xc]
    ecx = (uint32_t)((uint32_t)(esi + 0xcu));
L_004b822a:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b822fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b822f:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004b8232:  // mov ecx, dword ptr [0x8a9d88]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9d88u)));
L_004b8238:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b8239:  // call 0x4b8ef0
    t0 = 0x004b8ef0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b823eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b823e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b8240:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b8242:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b8244:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b8245:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004b8249:  // push 0xbb9
    t0 = 0xbb9u; esp -= 4; M32(esp) = t0;
L_004b824e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b824f:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_004b8254:  // mov dword ptr [esi + 8], 0
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(0x0u);
L_004b825b:  // mov dword ptr [esp + 0x24], 0x3e4ccccd
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0x3e4ccccdu);
L_004b8263:  // call 0x44b2d0
    t0 = 0x0044b2d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b8268u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b8268:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b8269:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b826a:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004b826d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b826f:  // mov dword ptr [esi + 0x30], 1
    M32((uint32_t)(esi + 0x30u)) = (uint32_t)(0x1u);
L_004b8276:  // call 0x4b7b80
    t0 = 0x004b7b80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004b827bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004b827b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b827c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004b81d0, 004b81d0)
