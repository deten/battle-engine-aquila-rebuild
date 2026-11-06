// lifted from 004fd140 (vslot50, 230 bytes, 71 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004fd140(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004fd140;
L_004fd140:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fd141:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004fd143:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_004fd147:  // je 0x4fd14d
    if (f.zf) goto L_004fd14d;
L_004fd149:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fd14b:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fd14c:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004fd14d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fd14e:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004fd153:  // call 0x4e1130
    t0 = 0x004e1130u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fd158u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fd158:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004fd15e:  // or byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) | 0x4u, f);
    M8((uint32_t)(esi + 0x2cu)) = (uint8_t)(t0);
L_004fd162:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fd164:  // je 0x4fd1d2
    if (f.zf) goto L_004fd1d2;
L_004fd166:  // mov ecx, dword ptr [esi + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_004fd16c:  // sub ecx, 0
    t0 = lsub<32>(ecx, 0x0u, f);
    ecx = (uint32_t)(t0);
L_004fd16f:  // je 0x4fd19a
    if (f.zf) goto L_004fd19a;
L_004fd171:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004fd172:  // jne 0x4fd1d2
    if (!f.zf) goto L_004fd1d2;
L_004fd174:  // mov eax, dword ptr [eax + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xe0u)));
L_004fd17a:  // mov ecx, dword ptr [eax*4 + 0x855228]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x855228u)));
L_004fd181:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004fd182:  // mov dword ptr [eax*4 + 0x855228], ecx
    M32((uint32_t)(eax * 4u + 0x855228u)) = (uint32_t)(ecx);
L_004fd189:  // mov eax, dword ptr [esi + 0x164]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004fd18f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fd190:  // call 0x511510
    t0 = 0x00511510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fd195u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fd195:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004fd198:  // jmp 0x4fd1c0
    goto L_004fd1c0;
L_004fd19a:  // mov eax, dword ptr [eax + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xe0u)));
L_004fd1a0:  // mov ecx, dword ptr [eax*4 + 0x8551c0]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x8551c0u)));
L_004fd1a7:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004fd1a8:  // mov dword ptr [eax*4 + 0x8551c0], ecx
    M32((uint32_t)(eax * 4u + 0x8551c0u)) = (uint32_t)(ecx);
L_004fd1af:  // mov ecx, dword ptr [esi + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x164u)));
L_004fd1b5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004fd1b6:  // call 0x511510
    t0 = 0x00511510u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fd1bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fd1bb:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004fd1be:  // neg eax
    t0 = lneg<32>(eax, f);
    eax = (uint32_t)(t0);
L_004fd1c0:  // mov ecx, dword ptr [0x8a9b8c]
    ecx = (uint32_t)(M32((uint32_t)(0x8a9b8cu)));
L_004fd1c6:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004fd1c8:  // mov dword ptr [0x8a9b8c], ecx
    M32((uint32_t)(0x8a9b8cu)) = (uint32_t)(ecx);
L_004fd1ce:  // or byte ptr [esi + 0x2d], 1
    t0 = llog<8>(M8((uint32_t)(esi + 0x2du)) | 0x1u, f);
    M8((uint32_t)(esi + 0x2du)) = (uint8_t)(t0);
L_004fd1d2:  // mov ecx, dword ptr [esi + 0x178]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x178u)));
L_004fd1d8:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fd1da:  // je 0x4fd1e1
    if (f.zf) goto L_004fd1e1;
L_004fd1dc:  // call 0x4443f0
    t0 = 0x004443f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fd1e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fd1e1:  // mov ecx, dword ptr [esi + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_004fd1e4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fd1e6:  // je 0x4fd1ed
    if (f.zf) goto L_004fd1ed;
L_004fd1e8:  // call 0x533660
    t0 = 0x00533660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fd1edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fd1ed:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004fd1ee:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fd1f0:  // lea ecx, [esi + 0x144]
    ecx = (uint32_t)((uint32_t)(esi + 0x144u));
L_004fd1f6:  // call 0x401000
    t0 = 0x00401000u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fd1fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fd1fb:  // lea edi, [esi + 0x18c]
    edi = (uint32_t)((uint32_t)(esi + 0x18cu));
L_004fd201:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_004fd203:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fd205:  // je 0x4fd21e
    if (f.zf) goto L_004fd21e;
L_004fd207:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004fd209:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fd20b:  // je 0x4fd21e
    if (f.zf) goto L_004fd21e;
L_004fd20d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fd20e:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004fd210:  // call 0x4e5bd0
    t0 = 0x004e5bd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fd215u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fd215:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004fd217:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004fd219:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004fd21cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004fd21c:  // jmp 0x4fd201
    goto L_004fd201;
L_004fd21e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fd21f:  // mov eax, 1
    eax = (uint32_t)(0x1u);
L_004fd224:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fd225:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004fd140, 004fd140)
