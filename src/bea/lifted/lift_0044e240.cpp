// lifted from 0044e240 (vslot0, 117 bytes, 37 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0044e240(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0044e240;
L_0044e240:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0044e244:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0044e245:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0044e247:  // cmp word ptr [eax + 4], 0x1b58
    t0 = lsub<16>(M16((uint32_t)(eax + 0x4u)), 0x1b58u, f);
L_0044e24d:  // je 0x44e259
    if (f.zf) goto L_0044e259;
L_0044e24f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044e250:  // call 0x4f9820
    t0 = 0x004f9820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044e255u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044e255:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044e256:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0044e259:  // mov ecx, dword ptr [esi + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0044e25c:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0044e25d:  // mov edi, dword ptr [esi]
    edi = (uint32_t)(M32((uint32_t)(esi)));
L_0044e25f:  // mov dword ptr [esi + 0x280], 1
    M32((uint32_t)(esi + 0x280u)) = (uint32_t)(0x1u);
L_0044e269:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0044e26b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0044e26d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0044e26f:  // push 0x628e9c
    t0 = 0x628e9cu; esp -= 4; M32(esp) = t0;
L_0044e274:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044e277u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044e277:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0044e279:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044e27eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044e27e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044e27f:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0044e281:  // call dword ptr [edi + 0xf0]
    t0 = M32((uint32_t)(edi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044e287u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044e287:  // mov edi, 0x32
    edi = (uint32_t)(0x32u);
L_0044e28c:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0044e28e:  // call 0x44e300
    t0 = 0x0044e300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044e293u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044e293:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0044e294:  // jne 0x44e28c
    if (!f.zf) goto L_0044e28c;
L_0044e296:  // push 0x628e88
    t0 = 0x628e88u; esp -= 4; M32(esp) = t0;
L_0044e29b:  // mov ecx, 0x89c590
    ecx = (uint32_t)(0x89c590u);
L_0044e2a0:  // call 0x538b70
    t0 = 0x00538b70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044e2a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044e2a5:  // and byte ptr [esi + 0x2c], 0xfb
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0xfbu, f);
    M8((uint32_t)(esi + 0x2cu)) = (uint8_t)(t0);
L_0044e2a9:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0044e2ab:  // call 0x403690
    t0 = 0x00403690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044e2b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044e2b0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0044e2b1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0044e2b2:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0044e240, 0044e240)
