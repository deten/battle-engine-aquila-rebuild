// lifted from 004cc020 (FUN_004cc020, 2036 bytes, 485 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004cc020(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004cc020;
L_004cc020:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004cc026:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004cc028:  // push 0x5d4226
    t0 = 0x5d4226u; esp -= 4; M32(esp) = t0;
L_004cc02d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cc02e:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004cc032:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004cc039:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004cc03a:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004cc03c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004cc03d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cc03e:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004cc042:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cc044:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004cc046:  // je 0x4cc185
    if (f.zf) goto L_004cc185;
L_004cc04c:  // mov eax, dword ptr [0x82b450]
    eax = (uint32_t)(M32((uint32_t)(0x82b450u)));
L_004cc051:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cc053:  // je 0x4cc185
    if (f.zf) goto L_004cc185;
L_004cc059:  // cmp dword ptr [eax + 0x38], ebx
    t0 = lsub<32>(M32((uint32_t)(eax + 0x38u)), ebx, f);
L_004cc05c:  // jne 0x4cc185
    if (!f.zf) goto L_004cc185;
L_004cc062:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004cc065:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cc066:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cc067:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc06cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc06c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004cc06f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004cc071:  // jge 0x4cc185
    if ((f.sf == f.of)) goto L_004cc185;
L_004cc077:  // mov eax, dword ptr [0x82b450]
    eax = (uint32_t)(M32((uint32_t)(0x82b450u)));
L_004cc07c:  // add eax, 0x38
    t0 = ladd<32>(eax, 0x38u, f);
    eax = (uint32_t)(t0);
L_004cc07f:  // mov dword ptr [0x82b3f8], eax
    M32((uint32_t)(0x82b3f8u)) = (uint32_t)(eax);
L_004cc084:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004cc088:  // lea eax, [edx - 1]
    eax = (uint32_t)((uint32_t)(edx + 0xffffffffu));
L_004cc08b:  // cmp eax, 0xc
    t0 = lsub<32>(eax, 0xcu, f);
L_004cc08e:  // ja 0x4cc7d6
    if ((!f.cf && !f.zf)) goto L_004cc7d6;
L_004cc094:  // jmp dword ptr [eax*4 + 0x4cc814]
    t0 = M32((uint32_t)(eax * 4u + 0x4cc814u));
    switch (t0) {
    case 0x004cc09bu: goto L_004cc09b;
    case 0x004cc1ddu: goto L_004cc1dd;
    case 0x004cc2d5u: goto L_004cc2d5;
    case 0x004cc312u: goto L_004cc312;
    case 0x004cc362u: goto L_004cc362;
    case 0x004cc463u: goto L_004cc463;
    case 0x004cc4bdu: goto L_004cc4bd;
    case 0x004cc535u: goto L_004cc535;
    case 0x004cc635u: goto L_004cc635;
    case 0x004cc690u: goto L_004cc690;
    case 0x004cc73du: goto L_004cc73d;
    case 0x004cc76du: goto L_004cc76d;
    case 0x004cc79du: goto L_004cc79d;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return; }
L_004cc09b:  // push 0x5f
    t0 = 0x5fu; esp -= 4; M32(esp) = t0;
L_004cc09d:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc0a2:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc0a4:  // push 0xd0
    t0 = 0xd0u; esp -= 4; M32(esp) = t0;
L_004cc0a9:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc0ae:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc0b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc0b3:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc0b5:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc0b9:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc0bb:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_004cc0bf:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc0c5:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc0c7:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc0ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc0cc:  // mov dword ptr [esi + 0x5c], ebx
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(ebx);
L_004cc0cf:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc0d2:  // mov dword ptr [esi + 0x98], ebx
    M32((uint32_t)(esi + 0x98u)) = (uint32_t)(ebx);
L_004cc0d8:  // mov dword ptr [esi + 0x9c], ebx
    M32((uint32_t)(esi + 0x9cu)) = (uint32_t)(ebx);
L_004cc0de:  // mov dword ptr [esi], 0x5ddf60
    M32((uint32_t)(esi)) = (uint32_t)(0x5ddf60u);
L_004cc0e4:  // mov eax, 0x3f800000
    eax = (uint32_t)(0x3f800000u);
L_004cc0e9:  // mov dword ptr [esi + 0x5c], 0x3f000000
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(0x3f000000u);
L_004cc0f0:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc0f3:  // mov dword ptr [esi + 0x64], ebx
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(ebx);
L_004cc0f6:  // mov dword ptr [esi + 0x70], 0x64
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(0x64u);
L_004cc0fd:  // mov dword ptr [esi + 0x74], eax
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(eax);
L_004cc100:  // mov dword ptr [esi + 0x68], ebx
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(ebx);
L_004cc103:  // mov dword ptr [esi + 0x6c], ebx
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(ebx);
L_004cc106:  // mov dword ptr [esi + 0x78], ebx
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebx);
L_004cc109:  // mov dword ptr [esi + 0x7c], 1
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(0x1u);
L_004cc110:  // mov dword ptr [esi + 0x80], ebx
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(ebx);
L_004cc116:  // mov dword ptr [esi + 0x84], ebx
    M32((uint32_t)(esi + 0x84u)) = (uint32_t)(ebx);
L_004cc11c:  // mov dword ptr [esi + 0x88], ebx
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(ebx);
L_004cc122:  // mov dword ptr [esi + 0x8c], ebx
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(ebx);
L_004cc128:  // mov dword ptr [esi + 0x90], ebx
    M32((uint32_t)(esi + 0x90u)) = (uint32_t)(ebx);
L_004cc12e:  // mov dword ptr [esi + 0x94], eax
    M32((uint32_t)(esi + 0x94u)) = (uint32_t)(eax);
L_004cc134:  // mov dword ptr [esi + 0x98], eax
    M32((uint32_t)(esi + 0x98u)) = (uint32_t)(eax);
L_004cc13a:  // mov dword ptr [esi + 0x9c], ebx
    M32((uint32_t)(esi + 0x9cu)) = (uint32_t)(ebx);
L_004cc140:  // mov dword ptr [esi + 0xa0], ebx
    M32((uint32_t)(esi + 0xa0u)) = (uint32_t)(ebx);
L_004cc146:  // mov dword ptr [esi + 0xa4], ebx
    M32((uint32_t)(esi + 0xa4u)) = (uint32_t)(ebx);
L_004cc14c:  // mov dword ptr [esi + 0xa8], ebx
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(ebx);
L_004cc152:  // mov dword ptr [esi + 0xb0], eax
    M32((uint32_t)(esi + 0xb0u)) = (uint32_t)(eax);
L_004cc158:  // mov dword ptr [esi + 0xac], 2
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(0x2u);
L_004cc162:  // mov dword ptr [esi + 0xb4], ebx
    M32((uint32_t)(esi + 0xb4u)) = (uint32_t)(ebx);
L_004cc168:  // mov dword ptr [esi + 0xbc], ebx
    M32((uint32_t)(esi + 0xbcu)) = (uint32_t)(ebx);
L_004cc16e:  // mov dword ptr [esi + 0xb8], ebx
    M32((uint32_t)(esi + 0xb8u)) = (uint32_t)(ebx);
L_004cc174:  // mov dword ptr [esi + 0xc4], eax
    M32((uint32_t)(esi + 0xc4u)) = (uint32_t)(eax);
L_004cc17a:  // mov dword ptr [esi + 0xc0], eax
    M32((uint32_t)(esi + 0xc0u)) = (uint32_t)(eax);
L_004cc180:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc185:  // mov dword ptr [0x82b3f8], esi
    M32((uint32_t)(0x82b3f8u)) = (uint32_t)(esi);
L_004cc18b:  // mov esi, dword ptr [esi]
    esi = (uint32_t)(M32((uint32_t)(esi)));
L_004cc18d:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc18f:  // je 0x4cc084
    if (f.zf) goto L_004cc084;
L_004cc195:  // lea ecx, [esi + 4]
    ecx = (uint32_t)((uint32_t)(esi + 0x4u));
L_004cc198:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004cc199:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cc19a:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc19fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc19f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004cc1a2:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cc1a4:  // je 0x4cc1bf
    if (f.zf) goto L_004cc1bf;
L_004cc1a6:  // jl 0x4cc084
    if ((f.sf != f.of)) goto L_004cc084;
L_004cc1ac:  // lea eax, [esi + 0x38]
    eax = (uint32_t)((uint32_t)(esi + 0x38u));
L_004cc1af:  // mov dword ptr [0x82b3f8], eax
    M32((uint32_t)(0x82b3f8u)) = (uint32_t)(eax);
L_004cc1b4:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004cc1b6:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc1b8:  // jne 0x4cc195
    if (!f.zf) goto L_004cc195;
L_004cc1ba:  // jmp 0x4cc084
    goto L_004cc084;
L_004cc1bf:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc1c1:  // je 0x4cc084
    if (f.zf) goto L_004cc084;
L_004cc1c7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cc1c9:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_004cc1cd:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004cc1d4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cc1d5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cc1d6:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004cc1d7:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004cc1da:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_004cc1dd:  // push 0x60
    t0 = 0x60u; esp -= 4; M32(esp) = t0;
L_004cc1df:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc1e4:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc1e6:  // push 0xb4
    t0 = 0xb4u; esp -= 4; M32(esp) = t0;
L_004cc1eb:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc1f0:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc1f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc1f5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc1f7:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc1fb:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc1fd:  // mov dword ptr [esp + 0x14], 1
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x1u);
L_004cc205:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc20b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc20d:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc212u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc212:  // mov dword ptr [esi + 0x5c], ebx
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(ebx);
L_004cc215:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc218:  // mov dword ptr [esi + 0x6c], ebx
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(ebx);
L_004cc21b:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc21e:  // mov dword ptr [esi + 0x74], ebx
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(ebx);
L_004cc221:  // mov dword ptr [esi + 0x78], ebx
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebx);
L_004cc224:  // mov dword ptr [esi + 0x7c], ebx
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(ebx);
L_004cc227:  // mov dword ptr [esi + 0x80], ebx
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(ebx);
L_004cc22d:  // mov dword ptr [esi + 0x84], ebx
    M32((uint32_t)(esi + 0x84u)) = (uint32_t)(ebx);
L_004cc233:  // mov dword ptr [esi + 0x88], ebx
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(ebx);
L_004cc239:  // mov dword ptr [esi + 0x94], ebx
    M32((uint32_t)(esi + 0x94u)) = (uint32_t)(ebx);
L_004cc23f:  // mov dword ptr [esi + 0x98], ebx
    M32((uint32_t)(esi + 0x98u)) = (uint32_t)(ebx);
L_004cc245:  // mov dword ptr [esi + 0xa8], ebx
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(ebx);
L_004cc24b:  // mov dword ptr [esi + 0xac], ebx
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(ebx);
L_004cc251:  // mov dword ptr [esi], 0x5ddef8
    M32((uint32_t)(esi)) = (uint32_t)(0x5ddef8u);
L_004cc257:  // mov dword ptr [esi + 0x5c], 0x41200000
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(0x41200000u);
L_004cc25e:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc261:  // mov dword ptr [esi + 0x64], 0xa
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(0xau);
L_004cc268:  // mov dword ptr [esi + 0x68], ebx
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(ebx);
L_004cc26b:  // mov dword ptr [esi + 0x6c], ebx
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(ebx);
L_004cc26e:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc271:  // mov dword ptr [esi + 0x74], ebx
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(ebx);
L_004cc274:  // mov dword ptr [esi + 0x78], ebx
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebx);
L_004cc277:  // mov dword ptr [esi + 0x7c], 0xbdcccccd
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(0xbdcccccdu);
L_004cc27e:  // mov dword ptr [esi + 0x80], ebx
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(ebx);
L_004cc284:  // mov dword ptr [esi + 0x84], 0x3dcccccd
    M32((uint32_t)(esi + 0x84u)) = (uint32_t)(0x3dcccccdu);
L_004cc28e:  // mov dword ptr [esi + 0x88], ebx
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(ebx);
L_004cc294:  // mov dword ptr [esi + 0x8c], ebx
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(ebx);
L_004cc29a:  // mov dword ptr [esi + 0x90], ebx
    M32((uint32_t)(esi + 0x90u)) = (uint32_t)(ebx);
L_004cc2a0:  // mov dword ptr [esi + 0x94], ebx
    M32((uint32_t)(esi + 0x94u)) = (uint32_t)(ebx);
L_004cc2a6:  // mov dword ptr [esi + 0x98], ebx
    M32((uint32_t)(esi + 0x98u)) = (uint32_t)(ebx);
L_004cc2ac:  // mov dword ptr [esi + 0x9c], ebx
    M32((uint32_t)(esi + 0x9cu)) = (uint32_t)(ebx);
L_004cc2b2:  // mov dword ptr [esi + 0xa0], ebx
    M32((uint32_t)(esi + 0xa0u)) = (uint32_t)(ebx);
L_004cc2b8:  // mov dword ptr [esi + 0xa4], ebx
    M32((uint32_t)(esi + 0xa4u)) = (uint32_t)(ebx);
L_004cc2be:  // mov dword ptr [esi + 0xa8], ebx
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(ebx);
L_004cc2c4:  // mov dword ptr [esi + 0xac], ebx
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(ebx);
L_004cc2ca:  // mov dword ptr [esi + 0xb0], ebx
    M32((uint32_t)(esi + 0xb0u)) = (uint32_t)(ebx);
L_004cc2d0:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc2d5:  // push 0x61
    t0 = 0x61u; esp -= 4; M32(esp) = t0;
L_004cc2d7:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc2dc:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc2de:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_004cc2e0:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc2e5:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc2eau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc2ea:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc2ec:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc2f0:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc2f2:  // mov dword ptr [esp + 0x14], 2
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x2u);
L_004cc2fa:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc300:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc302:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc307u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc307:  // mov dword ptr [esi], 0x5dde90
    M32((uint32_t)(esi)) = (uint32_t)(0x5dde90u);
L_004cc30d:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc312:  // push 0x62
    t0 = 0x62u; esp -= 4; M32(esp) = t0;
L_004cc314:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc319:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc31b:  // push 0x7c
    t0 = 0x7cu; esp -= 4; M32(esp) = t0;
L_004cc31d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc322:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc327u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc327:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc329:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc32d:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc32f:  // mov dword ptr [esp + 0x14], 3
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x3u);
L_004cc337:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc33d:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc33f:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc344u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc344:  // mov dword ptr [esi], 0x5dde28
    M32((uint32_t)(esi)) = (uint32_t)(0x5dde28u);
L_004cc34a:  // lea eax, [esi + 0x6c]
    eax = (uint32_t)((uint32_t)(esi + 0x6cu));
L_004cc34d:  // mov ecx, 4
    ecx = (uint32_t)(0x4u);
L_004cc352:  // mov dword ptr [eax - 0x10], ebx
    M32((uint32_t)(eax + 0xfffffff0u)) = (uint32_t)(ebx);
L_004cc355:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004cc357:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004cc35a:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004cc35b:  // jne 0x4cc352
    if (!f.zf) goto L_004cc352;
L_004cc35d:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc362:  // push 0x63
    t0 = 0x63u; esp -= 4; M32(esp) = t0;
L_004cc364:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc369:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc36b:  // push 0xb0
    t0 = 0xb0u; esp -= 4; M32(esp) = t0;
L_004cc370:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc375:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc37au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc37a:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc37c:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc380:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc382:  // mov dword ptr [esp + 0x14], 4
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x4u);
L_004cc38a:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc390:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc392:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc397u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc397:  // mov dword ptr [esi + 0x5c], ebx
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(ebx);
L_004cc39a:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc39d:  // mov dword ptr [esi + 0x64], ebx
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(ebx);
L_004cc3a0:  // mov dword ptr [esi + 0x68], ebx
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(ebx);
L_004cc3a3:  // mov dword ptr [esi + 0x6c], ebx
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(ebx);
L_004cc3a6:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc3a9:  // mov dword ptr [esi + 0x74], ebx
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(ebx);
L_004cc3ac:  // mov dword ptr [esi + 0x78], ebx
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebx);
L_004cc3af:  // mov dword ptr [esi + 0x7c], ebx
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(ebx);
L_004cc3b2:  // mov dword ptr [esi + 0x80], ebx
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(ebx);
L_004cc3b8:  // mov dword ptr [esi + 0x84], ebx
    M32((uint32_t)(esi + 0x84u)) = (uint32_t)(ebx);
L_004cc3be:  // mov dword ptr [esi + 0x88], ebx
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(ebx);
L_004cc3c4:  // mov dword ptr [esi + 0x8c], ebx
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(ebx);
L_004cc3ca:  // mov dword ptr [esi + 0x90], ebx
    M32((uint32_t)(esi + 0x90u)) = (uint32_t)(ebx);
L_004cc3d0:  // mov dword ptr [esi + 0x94], ebx
    M32((uint32_t)(esi + 0x94u)) = (uint32_t)(ebx);
L_004cc3d6:  // mov dword ptr [esi + 0x98], ebx
    M32((uint32_t)(esi + 0x98u)) = (uint32_t)(ebx);
L_004cc3dc:  // mov dword ptr [esi + 0x9c], ebx
    M32((uint32_t)(esi + 0x9cu)) = (uint32_t)(ebx);
L_004cc3e2:  // mov dword ptr [esi + 0xa0], ebx
    M32((uint32_t)(esi + 0xa0u)) = (uint32_t)(ebx);
L_004cc3e8:  // mov eax, 0x3f800000
    eax = (uint32_t)(0x3f800000u);
L_004cc3ed:  // mov dword ptr [esi], 0x5dddc0
    M32((uint32_t)(esi)) = (uint32_t)(0x5dddc0u);
L_004cc3f3:  // mov dword ptr [esi + 0x5c], eax
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(eax);
L_004cc3f6:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc3f9:  // mov dword ptr [esi + 0x64], eax
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(eax);
L_004cc3fc:  // mov dword ptr [esi + 0x68], ebx
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(ebx);
L_004cc3ff:  // mov dword ptr [esi + 0x6c], eax
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(eax);
L_004cc402:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc405:  // mov dword ptr [esi + 0x74], ebx
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(ebx);
L_004cc408:  // mov dword ptr [esi + 0x78], ebx
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebx);
L_004cc40b:  // mov dword ptr [esi + 0x7c], ebx
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(ebx);
L_004cc40e:  // mov dword ptr [esi + 0x80], ebx
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(ebx);
L_004cc414:  // mov dword ptr [esi + 0x84], ebx
    M32((uint32_t)(esi + 0x84u)) = (uint32_t)(ebx);
L_004cc41a:  // mov dword ptr [esi + 0x88], ebx
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(ebx);
L_004cc420:  // mov dword ptr [esi + 0x8c], eax
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(eax);
L_004cc426:  // mov dword ptr [esi + 0x90], ebx
    M32((uint32_t)(esi + 0x90u)) = (uint32_t)(ebx);
L_004cc42c:  // mov dword ptr [esi + 0x94], ebx
    M32((uint32_t)(esi + 0x94u)) = (uint32_t)(ebx);
L_004cc432:  // mov dword ptr [esi + 0x98], ebx
    M32((uint32_t)(esi + 0x98u)) = (uint32_t)(ebx);
L_004cc438:  // mov dword ptr [esi + 0x9c], ebx
    M32((uint32_t)(esi + 0x9cu)) = (uint32_t)(ebx);
L_004cc43e:  // mov dword ptr [esi + 0xa0], ebx
    M32((uint32_t)(esi + 0xa0u)) = (uint32_t)(ebx);
L_004cc444:  // mov dword ptr [esi + 0xa4], 1
    M32((uint32_t)(esi + 0xa4u)) = (uint32_t)(0x1u);
L_004cc44e:  // mov dword ptr [esi + 0xa8], ebx
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(ebx);
L_004cc454:  // mov dword ptr [esi + 0xac], 0x3f000000
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(0x3f000000u);
L_004cc45e:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc463:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_004cc465:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc46a:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc46c:  // push 0xd8
    t0 = 0xd8u; esp -= 4; M32(esp) = t0;
L_004cc471:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc476:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc47bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc47b:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc47d:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc481:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc483:  // mov dword ptr [esp + 0x14], 5
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x5u);
L_004cc48b:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc491:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc493:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc498u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc498:  // push 0x4cce20
    t0 = 0x4cce20u; esp -= 4; M32(esp) = t0;
L_004cc49d:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_004cc49f:  // lea eax, [esi + 0x60]
    eax = (uint32_t)((uint32_t)(esi + 0x60u));
L_004cc4a2:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_004cc4a4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004cc4a5:  // mov byte ptr [esp + 0x24], 6
    M8((uint32_t)(esp + 0x24u)) = (uint8_t)(0x6u);
L_004cc4aa:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc4afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc4af:  // mov dword ptr [esi], 0x5ddd58
    M32((uint32_t)(esi)) = (uint32_t)(0x5ddd58u);
L_004cc4b5:  // mov dword ptr [esi + 0x5c], ebx
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(ebx);
L_004cc4b8:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc4bd:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_004cc4bf:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc4c4:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc4c6:  // push 0x84
    t0 = 0x84u; esp -= 4; M32(esp) = t0;
L_004cc4cb:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc4d0:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc4d5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc4d5:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc4d7:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc4db:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc4dd:  // mov dword ptr [esp + 0x14], 7
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x7u);
L_004cc4e5:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc4eb:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc4ed:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc4f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc4f2:  // mov dword ptr [esi + 0x6c], ebx
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(ebx);
L_004cc4f5:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc4f8:  // mov eax, 0x3f800000
    eax = (uint32_t)(0x3f800000u);
L_004cc4fd:  // mov dword ptr [esi], 0x5ddcf0
    M32((uint32_t)(esi)) = (uint32_t)(0x5ddcf0u);
L_004cc503:  // mov dword ptr [esi + 0x5c], ebx
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(ebx);
L_004cc506:  // mov dword ptr [esi + 0x60], 2
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x2u);
L_004cc50d:  // mov dword ptr [esi + 0x64], ebx
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(ebx);
L_004cc510:  // mov dword ptr [esi + 0x68], 0xa
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(0xau);
L_004cc517:  // mov dword ptr [esi + 0x6c], eax
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(eax);
L_004cc51a:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc51d:  // mov dword ptr [esi + 0x74], 1
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(0x1u);
L_004cc524:  // mov dword ptr [esi + 0x78], eax
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(eax);
L_004cc527:  // mov dword ptr [esi + 0x7c], eax
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(eax);
L_004cc52a:  // mov dword ptr [esi + 0x80], eax
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(eax);
L_004cc530:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc535:  // push 0x66
    t0 = 0x66u; esp -= 4; M32(esp) = t0;
L_004cc537:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc53c:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc53e:  // push 0xd0
    t0 = 0xd0u; esp -= 4; M32(esp) = t0;
L_004cc543:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc548:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc54du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc54d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc54f:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc553:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc555:  // mov dword ptr [esp + 0x14], 8
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x8u);
L_004cc55d:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc563:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc565:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc56au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc56a:  // mov dword ptr [esi + 0xac], ebx
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(ebx);
L_004cc570:  // mov dword ptr [esi + 0xb0], ebx
    M32((uint32_t)(esi + 0xb0u)) = (uint32_t)(ebx);
L_004cc576:  // mov eax, 0x3f800000
    eax = (uint32_t)(0x3f800000u);
L_004cc57b:  // mov dword ptr [esi + 0xb4], ebx
    M32((uint32_t)(esi + 0xb4u)) = (uint32_t)(ebx);
L_004cc581:  // mov dword ptr [esi + 0xb8], ebx
    M32((uint32_t)(esi + 0xb8u)) = (uint32_t)(ebx);
L_004cc587:  // mov dword ptr [esi], 0x5ddc88
    M32((uint32_t)(esi)) = (uint32_t)(0x5ddc88u);
L_004cc58d:  // mov dword ptr [esi + 0x5c], ebx
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(ebx);
L_004cc590:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc593:  // mov dword ptr [esi + 0x64], ebx
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(ebx);
L_004cc596:  // mov dword ptr [esi + 0x68], 0xa
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(0xau);
L_004cc59d:  // mov dword ptr [esi + 0x6c], eax
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(eax);
L_004cc5a0:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc5a3:  // mov dword ptr [esi + 0x74], ebx
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(ebx);
L_004cc5a6:  // mov dword ptr [esi + 0x78], ebx
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebx);
L_004cc5a9:  // mov dword ptr [esi + 0x7c], ebx
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(ebx);
L_004cc5ac:  // mov dword ptr [esi + 0x80], ebx
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(ebx);
L_004cc5b2:  // mov dword ptr [esi + 0x84], 0xfffffffe
    M32((uint32_t)(esi + 0x84u)) = (uint32_t)(0xfffffffeu);
L_004cc5bc:  // mov dword ptr [esi + 0x88], ebx
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(ebx);
L_004cc5c2:  // mov dword ptr [esi + 0x8c], ebx
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(ebx);
L_004cc5c8:  // mov dword ptr [esi + 0x90], ebx
    M32((uint32_t)(esi + 0x90u)) = (uint32_t)(ebx);
L_004cc5ce:  // mov dword ptr [esi + 0x94], ebx
    M32((uint32_t)(esi + 0x94u)) = (uint32_t)(ebx);
L_004cc5d4:  // mov dword ptr [esi + 0x98], 1
    M32((uint32_t)(esi + 0x98u)) = (uint32_t)(0x1u);
L_004cc5de:  // mov dword ptr [esi + 0x9c], ebx
    M32((uint32_t)(esi + 0x9cu)) = (uint32_t)(ebx);
L_004cc5e4:  // mov dword ptr [esi + 0xa0], ebx
    M32((uint32_t)(esi + 0xa0u)) = (uint32_t)(ebx);
L_004cc5ea:  // mov dword ptr [esi + 0xa4], 0x41200000
    M32((uint32_t)(esi + 0xa4u)) = (uint32_t)(0x41200000u);
L_004cc5f4:  // mov dword ptr [esi + 0xc4], ebx
    M32((uint32_t)(esi + 0xc4u)) = (uint32_t)(ebx);
L_004cc5fa:  // mov dword ptr [esi + 0xc0], ebx
    M32((uint32_t)(esi + 0xc0u)) = (uint32_t)(ebx);
L_004cc600:  // mov dword ptr [esi + 0xcc], eax
    M32((uint32_t)(esi + 0xccu)) = (uint32_t)(eax);
L_004cc606:  // mov dword ptr [esi + 0xc8], eax
    M32((uint32_t)(esi + 0xc8u)) = (uint32_t)(eax);
L_004cc60c:  // mov dword ptr [esi + 0xa8], ebx
    M32((uint32_t)(esi + 0xa8u)) = (uint32_t)(ebx);
L_004cc612:  // mov dword ptr [esi + 0xac], ebx
    M32((uint32_t)(esi + 0xacu)) = (uint32_t)(ebx);
L_004cc618:  // mov dword ptr [esi + 0xb0], ebx
    M32((uint32_t)(esi + 0xb0u)) = (uint32_t)(ebx);
L_004cc61e:  // mov dword ptr [esi + 0xb4], ebx
    M32((uint32_t)(esi + 0xb4u)) = (uint32_t)(ebx);
L_004cc624:  // mov dword ptr [esi + 0xb8], ebx
    M32((uint32_t)(esi + 0xb8u)) = (uint32_t)(ebx);
L_004cc62a:  // mov dword ptr [esi + 0xbc], ebx
    M32((uint32_t)(esi + 0xbcu)) = (uint32_t)(ebx);
L_004cc630:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc635:  // push 0x67
    t0 = 0x67u; esp -= 4; M32(esp) = t0;
L_004cc637:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc63c:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc63e:  // push 0x7c
    t0 = 0x7cu; esp -= 4; M32(esp) = t0;
L_004cc640:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc645:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc64au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc64a:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc64c:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc650:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc652:  // mov dword ptr [esp + 0x14], 9
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x9u);
L_004cc65a:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc660:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc662:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc667u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc667:  // mov dword ptr [esi + 0x5c], ebx
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(ebx);
L_004cc66a:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc66d:  // mov dword ptr [esi], 0x5ddc20
    M32((uint32_t)(esi)) = (uint32_t)(0x5ddc20u);
L_004cc673:  // mov dword ptr [esi + 0x5c], ebx
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(ebx);
L_004cc676:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc679:  // mov dword ptr [esi + 0x64], ebx
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(ebx);
L_004cc67c:  // mov dword ptr [esi + 0x68], ebx
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(ebx);
L_004cc67f:  // mov dword ptr [esi + 0x6c], ebx
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(ebx);
L_004cc682:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc685:  // mov dword ptr [esi + 0x74], ebx
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(ebx);
L_004cc688:  // mov dword ptr [esi + 0x78], ebx
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebx);
L_004cc68b:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc690:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_004cc692:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc697:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc699:  // push 0x94
    t0 = 0x94u; esp -= 4; M32(esp) = t0;
L_004cc69e:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc6a3:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc6a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc6a8:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc6aa:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_004cc6ae:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_004cc6b0:  // mov dword ptr [esp + 0x14], 0xa
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xau);
L_004cc6b8:  // je 0x4cc736
    if (f.zf) goto L_004cc736;
L_004cc6ba:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004cc6bc:  // call 0x4cc850
    t0 = 0x004cc850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc6c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc6c1:  // mov dword ptr [esi + 0x5c], ebx
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(ebx);
L_004cc6c4:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc6c7:  // mov dword ptr [esi + 0x64], ebx
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(ebx);
L_004cc6ca:  // mov dword ptr [esi + 0x68], ebx
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(ebx);
L_004cc6cd:  // mov dword ptr [esi + 0x6c], ebx
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(ebx);
L_004cc6d0:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc6d3:  // mov dword ptr [esi + 0x74], ebx
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(ebx);
L_004cc6d6:  // mov dword ptr [esi + 0x78], ebx
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebx);
L_004cc6d9:  // mov dword ptr [esi + 0x88], ebx
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(ebx);
L_004cc6df:  // mov dword ptr [esi + 0x8c], ebx
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(ebx);
L_004cc6e5:  // mov eax, 0x3f800000
    eax = (uint32_t)(0x3f800000u);
L_004cc6ea:  // mov dword ptr [esi], 0x5ddbb8
    M32((uint32_t)(esi)) = (uint32_t)(0x5ddbb8u);
L_004cc6f0:  // mov dword ptr [esi + 0x5c], eax
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(eax);
L_004cc6f3:  // mov dword ptr [esi + 0x60], ebx
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(ebx);
L_004cc6f6:  // mov dword ptr [esi + 0x64], eax
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(eax);
L_004cc6f9:  // mov dword ptr [esi + 0x68], ebx
    M32((uint32_t)(esi + 0x68u)) = (uint32_t)(ebx);
L_004cc6fc:  // mov dword ptr [esi + 0x6c], ebx
    M32((uint32_t)(esi + 0x6cu)) = (uint32_t)(ebx);
L_004cc6ff:  // mov dword ptr [esi + 0x70], ebx
    M32((uint32_t)(esi + 0x70u)) = (uint32_t)(ebx);
L_004cc702:  // mov dword ptr [esi + 0x74], ebx
    M32((uint32_t)(esi + 0x74u)) = (uint32_t)(ebx);
L_004cc705:  // mov dword ptr [esi + 0x78], ebx
    M32((uint32_t)(esi + 0x78u)) = (uint32_t)(ebx);
L_004cc708:  // mov dword ptr [esi + 0x7c], 1
    M32((uint32_t)(esi + 0x7cu)) = (uint32_t)(0x1u);
L_004cc70f:  // mov dword ptr [esi + 0x80], ebx
    M32((uint32_t)(esi + 0x80u)) = (uint32_t)(ebx);
L_004cc715:  // mov dword ptr [esi + 0x84], ebx
    M32((uint32_t)(esi + 0x84u)) = (uint32_t)(ebx);
L_004cc71b:  // mov dword ptr [esi + 0x88], 0x41a00000
    M32((uint32_t)(esi + 0x88u)) = (uint32_t)(0x41a00000u);
L_004cc725:  // mov dword ptr [esi + 0x8c], ebx
    M32((uint32_t)(esi + 0x8cu)) = (uint32_t)(ebx);
L_004cc72b:  // mov dword ptr [esi + 0x90], ebx
    M32((uint32_t)(esi + 0x90u)) = (uint32_t)(ebx);
L_004cc731:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc736:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004cc738:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc73d:  // push 0x69
    t0 = 0x69u; esp -= 4; M32(esp) = t0;
L_004cc73f:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc744:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc746:  // push 0x7c
    t0 = 0x7cu; esp -= 4; M32(esp) = t0;
L_004cc748:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc74d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc752u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc752:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004cc756:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cc758:  // mov dword ptr [esp + 0x14], 0xb
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xbu);
L_004cc760:  // je 0x4cc7d0
    if (f.zf) goto L_004cc7d0;
L_004cc762:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cc764:  // call 0x4cd290
    t0 = 0x004cd290u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc769u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc769:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc76b:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc76d:  // push 0x6a
    t0 = 0x6au; esp -= 4; M32(esp) = t0;
L_004cc76f:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc774:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc776:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_004cc778:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc77d:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc782u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc782:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004cc786:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cc788:  // mov dword ptr [esp + 0x14], 0xc
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xcu);
L_004cc790:  // je 0x4cc7d0
    if (f.zf) goto L_004cc7d0;
L_004cc792:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cc794:  // call 0x4cd2d0
    t0 = 0x004cd2d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc799u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc799:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc79b:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc79d:  // push 0x6b
    t0 = 0x6bu; esp -= 4; M32(esp) = t0;
L_004cc79f:  // push 0x630fb0
    t0 = 0x630fb0u; esp -= 4; M32(esp) = t0;
L_004cc7a4:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004cc7a6:  // push 0xe4
    t0 = 0xe4u; esp -= 4; M32(esp) = t0;
L_004cc7ab:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004cc7b0:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc7b5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc7b5:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_004cc7b9:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_004cc7bb:  // mov dword ptr [esp + 0x14], 0xd
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xdu);
L_004cc7c3:  // je 0x4cc7d0
    if (f.zf) goto L_004cc7d0;
L_004cc7c5:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004cc7c7:  // call 0x4cd3c0
    t0 = 0x004cd3c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc7ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc7cc:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc7ce:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc7d0:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004cc7d2:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004cc7d4:  // jmp 0x4cc7da
    goto L_004cc7da;
L_004cc7d6:  // mov esi, dword ptr [esp + 0x24]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004cc7da:  // push 0x31
    t0 = 0x31u; esp -= 4; M32(esp) = t0;
L_004cc7dc:  // lea ecx, [esi + 4]
    ecx = (uint32_t)((uint32_t)(esi + 0x4u));
L_004cc7df:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004cc7e0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004cc7e1:  // call 0x55e980
    t0 = 0x0055e980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004cc7e6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004cc7e6:  // mov byte ptr [esi + 0x35], bl
    M8((uint32_t)(esi + 0x35u)) = (uint8_t)((ebx & 0xffu));
L_004cc7e9:  // mov eax, dword ptr [0x82b3f8]
    eax = (uint32_t)(M32((uint32_t)(0x82b3f8u)));
L_004cc7ee:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004cc7f2:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004cc7f5:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004cc7f7:  // mov dword ptr [esi + 0x38], edx
    M32((uint32_t)(esi + 0x38u)) = (uint32_t)(edx);
L_004cc7fa:  // mov dword ptr [eax], esi
    M32((uint32_t)(eax)) = (uint32_t)(esi);
L_004cc7fc:  // mov dword ptr [0x82b450], esi
    M32((uint32_t)(0x82b450u)) = (uint32_t)(esi);
L_004cc802:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004cc804:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004cc805:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004cc806:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004cc80d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004cc80e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004cc811:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004cc020, 004cc020)
