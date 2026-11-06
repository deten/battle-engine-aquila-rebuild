// lifted from 00557060 (vslot2, 463 bytes, 137 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00557060(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00557060;
L_00557060:  // mov eax, dword ptr [0x888c8c]
    eax = (uint32_t)(M32((uint32_t)(0x888c8cu)));
L_00557065:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00557066:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00557068:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0055706a:  // jne 0x557070
    if (!f.zf) goto L_00557070;
L_0055706c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0055706e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0055706f:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00557070:  // mov al, byte ptr [esi + 0x14c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x14cu))) & 0xffu);
L_00557076:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00557077:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00557079:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0055707b:  // je 0x55722a
    if (f.zf) goto L_0055722a;
L_00557081:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00557086:  // call 0x513760
    t0 = 0x00513760u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0055708bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0055708b:  // mov edx, dword ptr [esi + 0xb8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xb8u)));
L_00557091:  // lea ecx, [esi + 0xb8]
    ecx = (uint32_t)((uint32_t)(esi + 0xb8u));
L_00557097:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_00557099:  // mov dword ptr [esi + 0x144], eax
    M32((uint32_t)(esi + 0x144u)) = (uint32_t)(eax);
L_0055709f:  // jne 0x557126
    if (!f.zf) goto L_00557126;
L_005570a5:  // cmp eax, 0xa
    t0 = lsub<32>(eax, 0xau, f);
L_005570a8:  // ja 0x5570f7
    if ((!f.cf && !f.zf)) goto L_005570f7;
L_005570aa:  // jmp dword ptr [eax*4 + 0x557230]
    t0 = M32((uint32_t)(eax * 4u + 0x557230u));
    switch (t0) {
    case 0x005570b1u: goto L_005570b1;
    case 0x005570b8u: goto L_005570b8;
    case 0x005570bfu: goto L_005570bf;
    case 0x005570c6u: goto L_005570c6;
    case 0x005570cdu: goto L_005570cd;
    case 0x005570d4u: goto L_005570d4;
    case 0x005570dbu: goto L_005570db;
    case 0x005570e2u: goto L_005570e2;
    case 0x005570e9u: goto L_005570e9;
    case 0x005570f0u: goto L_005570f0;
    case 0x005570f7u: goto L_005570f7;
    case 0x00557138u: goto L_00557138;
    case 0x0055713fu: goto L_0055713f;
    case 0x00557146u: goto L_00557146;
    case 0x0055714du: goto L_0055714d;
    case 0x00557154u: goto L_00557154;
    case 0x0055715bu: goto L_0055715b;
    case 0x00557162u: goto L_00557162;
    case 0x00557169u: goto L_00557169;
    case 0x00557170u: goto L_00557170;
    case 0x00557177u: goto L_00557177;
    case 0x0055717eu: goto L_0055717e;
    case 0x0055718du: goto L_0055718d;
    case 0x00557194u: goto L_00557194;
    case 0x0055719bu: goto L_0055719b;
    case 0x005571a2u: goto L_005571a2;
    case 0x005571a9u: goto L_005571a9;
    case 0x005571b0u: goto L_005571b0;
    case 0x005571b7u: goto L_005571b7;
    case 0x005571beu: goto L_005571be;
    case 0x005571c5u: goto L_005571c5;
    case 0x005571ccu: goto L_005571cc;
    case 0x005571d3u: goto L_005571d3;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_005570b1:  // mov eax, 0x19
    eax = (uint32_t)(0x19u);
L_005570b6:  // jmp 0x5570f9
    goto L_005570f9;
L_005570b8:  // mov eax, 0x1a
    eax = (uint32_t)(0x1au);
L_005570bd:  // jmp 0x5570f9
    goto L_005570f9;
L_005570bf:  // mov eax, 0x16
    eax = (uint32_t)(0x16u);
L_005570c4:  // jmp 0x5570f9
    goto L_005570f9;
L_005570c6:  // mov eax, 0x15
    eax = (uint32_t)(0x15u);
L_005570cb:  // jmp 0x5570f9
    goto L_005570f9;
L_005570cd:  // mov eax, 0x17
    eax = (uint32_t)(0x17u);
L_005570d2:  // jmp 0x5570f9
    goto L_005570f9;
L_005570d4:  // mov eax, 0x31545844
    eax = (uint32_t)(0x31545844u);
L_005570d9:  // jmp 0x5570f9
    goto L_005570f9;
L_005570db:  // mov eax, 0x32545844
    eax = (uint32_t)(0x32545844u);
L_005570e0:  // jmp 0x5570f9
    goto L_005570f9;
L_005570e2:  // mov eax, 0x34545844
    eax = (uint32_t)(0x34545844u);
L_005570e7:  // jmp 0x5570f9
    goto L_005570f9;
L_005570e9:  // mov eax, 0x3c
    eax = (uint32_t)(0x3cu);
L_005570ee:  // jmp 0x5570f9
    goto L_005570f9;
L_005570f0:  // mov eax, 0x3f
    eax = (uint32_t)(0x3fu);
L_005570f5:  // jmp 0x5570f9
    goto L_005570f9;
L_005570f7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005570f9:  // mov edx, dword ptr [esi + 0x148]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x148u)));
L_005570ff:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557100:  // mov ecx, dword ptr [esi + 0x150]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x150u)));
L_00557106:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00557107:  // mov ecx, dword ptr [esi + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_0055710d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055710e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00557110:  // movsx eax, word ptr [esi + 0xb0]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esi + 0xb0u))));
L_00557117:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00557118:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00557119:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0055711a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0055711f:  // call 0x5139a0
    t0 = 0x005139a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557124u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557124:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00557126:  // mov ecx, dword ptr [esi + 0x144]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x144u)));
L_0055712c:  // cmp ecx, 0xa
    t0 = lsub<32>(ecx, 0xau, f);
L_0055712f:  // ja 0x55717e
    if ((!f.cf && !f.zf)) goto L_0055717e;
L_00557131:  // jmp dword ptr [ecx*4 + 0x55725c]
    t0 = M32((uint32_t)(ecx * 4u + 0x55725cu));
    switch (t0) {
    case 0x00557138u: goto L_00557138;
    case 0x0055713fu: goto L_0055713f;
    case 0x00557146u: goto L_00557146;
    case 0x0055714du: goto L_0055714d;
    case 0x00557154u: goto L_00557154;
    case 0x0055715bu: goto L_0055715b;
    case 0x00557162u: goto L_00557162;
    case 0x00557169u: goto L_00557169;
    case 0x00557170u: goto L_00557170;
    case 0x00557177u: goto L_00557177;
    case 0x0055717eu: goto L_0055717e;
    case 0x0055718du: goto L_0055718d;
    case 0x00557194u: goto L_00557194;
    case 0x0055719bu: goto L_0055719b;
    case 0x005571a2u: goto L_005571a2;
    case 0x005571a9u: goto L_005571a9;
    case 0x005571b0u: goto L_005571b0;
    case 0x005571b7u: goto L_005571b7;
    case 0x005571beu: goto L_005571be;
    case 0x005571c5u: goto L_005571c5;
    case 0x005571ccu: goto L_005571cc;
    case 0x005571d3u: goto L_005571d3;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_00557138:  // mov eax, 0x19
    eax = (uint32_t)(0x19u);
L_0055713d:  // jmp 0x557180
    goto L_00557180;
L_0055713f:  // mov eax, 0x1a
    eax = (uint32_t)(0x1au);
L_00557144:  // jmp 0x557180
    goto L_00557180;
L_00557146:  // mov eax, 0x16
    eax = (uint32_t)(0x16u);
L_0055714b:  // jmp 0x557180
    goto L_00557180;
L_0055714d:  // mov eax, 0x15
    eax = (uint32_t)(0x15u);
L_00557152:  // jmp 0x557180
    goto L_00557180;
L_00557154:  // mov eax, 0x17
    eax = (uint32_t)(0x17u);
L_00557159:  // jmp 0x557180
    goto L_00557180;
L_0055715b:  // mov eax, 0x31545844
    eax = (uint32_t)(0x31545844u);
L_00557160:  // jmp 0x557180
    goto L_00557180;
L_00557162:  // mov eax, 0x32545844
    eax = (uint32_t)(0x32545844u);
L_00557167:  // jmp 0x557180
    goto L_00557180;
L_00557169:  // mov eax, 0x34545844
    eax = (uint32_t)(0x34545844u);
L_0055716e:  // jmp 0x557180
    goto L_00557180;
L_00557170:  // mov eax, 0x3c
    eax = (uint32_t)(0x3cu);
L_00557175:  // jmp 0x557180
    goto L_00557180;
L_00557177:  // mov eax, 0x3f
    eax = (uint32_t)(0x3fu);
L_0055717c:  // jmp 0x557180
    goto L_00557180;
L_0055717e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00557180:  // cmp ecx, 0xa
    t0 = lsub<32>(ecx, 0xau, f);
L_00557183:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00557184:  // ja 0x5571d3
    if ((!f.cf && !f.zf)) goto L_005571d3;
L_00557186:  // jmp dword ptr [ecx*4 + 0x557288]
    t0 = M32((uint32_t)(ecx * 4u + 0x557288u));
    switch (t0) {
    case 0x0055718du: goto L_0055718d;
    case 0x00557194u: goto L_00557194;
    case 0x0055719bu: goto L_0055719b;
    case 0x005571a2u: goto L_005571a2;
    case 0x005571a9u: goto L_005571a9;
    case 0x005571b0u: goto L_005571b0;
    case 0x005571b7u: goto L_005571b7;
    case 0x005571beu: goto L_005571be;
    case 0x005571c5u: goto L_005571c5;
    case 0x005571ccu: goto L_005571cc;
    case 0x005571d3u: goto L_005571d3;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_0055718d:  // mov edi, 0x19
    edi = (uint32_t)(0x19u);
L_00557192:  // jmp 0x5571d5
    goto L_005571d5;
L_00557194:  // mov edi, 0x1a
    edi = (uint32_t)(0x1au);
L_00557199:  // jmp 0x5571d5
    goto L_005571d5;
L_0055719b:  // mov edi, 0x16
    edi = (uint32_t)(0x16u);
L_005571a0:  // jmp 0x5571d5
    goto L_005571d5;
L_005571a2:  // mov edi, 0x15
    edi = (uint32_t)(0x15u);
L_005571a7:  // jmp 0x5571d5
    goto L_005571d5;
L_005571a9:  // mov edi, 0x17
    edi = (uint32_t)(0x17u);
L_005571ae:  // jmp 0x5571d5
    goto L_005571d5;
L_005571b0:  // mov edi, 0x31545844
    edi = (uint32_t)(0x31545844u);
L_005571b5:  // jmp 0x5571d5
    goto L_005571d5;
L_005571b7:  // mov edi, 0x32545844
    edi = (uint32_t)(0x32545844u);
L_005571bc:  // jmp 0x5571d5
    goto L_005571d5;
L_005571be:  // mov edi, 0x34545844
    edi = (uint32_t)(0x34545844u);
L_005571c3:  // jmp 0x5571d5
    goto L_005571d5;
L_005571c5:  // mov edi, 0x3c
    edi = (uint32_t)(0x3cu);
L_005571ca:  // jmp 0x5571d5
    goto L_005571d5;
L_005571cc:  // mov edi, 0x3f
    edi = (uint32_t)(0x3fu);
L_005571d1:  // jmp 0x5571d5
    goto L_005571d5;
L_005571d3:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005571d5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005571d6:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005571db:  // call 0x513640
    t0 = 0x00513640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005571e0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005571e0:  // movsx edx, word ptr [esi + 0xb0]
    edx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esi + 0xb0u))));
L_005571e7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005571e8:  // mov eax, dword ptr [esi + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_005571ee:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_005571ef:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005571f0:  // push 0x652680
    t0 = 0x652680u; esp -= 4; M32(esp) = t0;
L_005571f5:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005571f6:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005571fb:  // call 0x513640
    t0 = 0x00513640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557200u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557200:  // movsx ecx, word ptr [esi + 0xb0]
    ecx = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esi + 0xb0u))));
L_00557207:  // imul eax, ecx
    t0 = limul32(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0055720a:  // imul eax, dword ptr [esi + 0xac]
    t0 = limul32(eax, M32((uint32_t)(esi + 0xacu)), f);
    eax = (uint32_t)(t0);
L_00557211:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00557212:  // and edx, 7
    t0 = llog<32>(edx & 0x7u, f);
    edx = (uint32_t)(t0);
L_00557215:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00557217:  // sar eax, 3
    t0 = lsar<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_0055721a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0055721b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0055721c:  // push 0x9c3df0
    t0 = 0x9c3df0u; esp -= 4; M32(esp) = t0;
L_00557221:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00557226u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00557226:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_00557229:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0055722a:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_0055722c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0055722d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0055722e:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00557060, 00557060)
