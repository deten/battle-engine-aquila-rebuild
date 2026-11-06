// lifted from 0042b120 (FUN_0042b120, 985 bytes, 340 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0042b120(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0042b120;
L_0042b120:  // mov al, byte ptr [esp + 4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x4u))) & 0xffu);
L_0042b124:  // sub esp, 0x204
    t0 = lsub<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b12a:  // cmp al, 0x29
    t0 = lsub<8>((eax & 0xffu), 0x29u, f);
L_0042b12c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042b12d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b12e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042b12f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0042b130:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0042b132:  // jne 0x42b185
    if (!f.zf) goto L_0042b185;
L_0042b134:  // mov dl, byte ptr [ebx + 0x238c]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x238cu))) & 0xffu);
L_0042b13a:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_0042b13c:  // sete al
    eax = (eax & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_0042b13f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0042b141:  // mov byte ptr [ebx + 0x238c], al
    M8((uint32_t)(ebx + 0x238cu)) = (uint8_t)((eax & 0xffu));
L_0042b147:  // je 0x42b16c
    if (f.zf) goto L_0042b16c;
L_0042b149:  // push 0x4295c0
    t0 = 0x4295c0u; esp -= 4; M32(esp) = t0;
L_0042b14e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0042b153:  // call 0x5159c0
    t0 = 0x005159c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b158u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b158:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b159:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b15a:  // mov byte ptr [ebx + 0x238d], 0
    M8((uint32_t)(ebx + 0x238du)) = (uint8_t)(0x0u);
L_0042b161:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b162:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b163:  // add esp, 0x204
    t0 = ladd<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b169:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0042b16c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0042b16e:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0042b173:  // call 0x5159c0
    t0 = 0x005159c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b178u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b178:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b179:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b17a:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b17b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b17c:  // add esp, 0x204
    t0 = ladd<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b182:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0042b185:  // cmp al, 0xc8
    t0 = lsub<8>((eax & 0xffu), 0xc8u, f);
L_0042b187:  // jne 0x42b1a3
    if (!f.zf) goto L_0042b1a3;
L_0042b189:  // mov eax, dword ptr [ebx + 0xb3c0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb3c0u)));
L_0042b18f:  // cmp eax, 9
    t0 = lsub<32>(eax, 0x9u, f);
L_0042b192:  // jge 0x42b19b
    if ((f.sf == f.of)) goto L_0042b19b;
L_0042b194:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0042b195:  // mov dword ptr [ebx + 0xb3c0], eax
    M32((uint32_t)(ebx + 0xb3c0u)) = (uint32_t)(eax);
L_0042b19b:  // mov eax, dword ptr [ebx + 0xb3c0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb3c0u)));
L_0042b1a1:  // jmp 0x42b1c7
    goto L_0042b1c7;
L_0042b1a3:  // cmp al, 0xd0
    t0 = lsub<8>((eax & 0xffu), 0xd0u, f);
L_0042b1a5:  // jne 0x42b236
    if (!f.zf) goto L_0042b236;
L_0042b1ab:  // mov eax, dword ptr [ebx + 0xb3c0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb3c0u)));
L_0042b1b1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042b1b3:  // jl 0x42b1bc
    if ((f.sf != f.of)) goto L_0042b1bc;
L_0042b1b5:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0042b1b6:  // mov dword ptr [ebx + 0xb3c0], eax
    M32((uint32_t)(ebx + 0xb3c0u)) = (uint32_t)(eax);
L_0042b1bc:  // mov eax, dword ptr [ebx + 0xb3c0]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xb3c0u)));
L_0042b1c2:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0042b1c5:  // jle 0x42b201
    if ((f.zf || f.sf != f.of)) goto L_0042b201;
L_0042b1c7:  // shl eax, 7
    t0 = lshl<32>(eax, 0x7u, f);
    eax = (uint32_t)(t0);
L_0042b1ca:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b1cd:  // lea edx, [ebx + 0x1e04]
    edx = (uint32_t)((uint32_t)(ebx + 0x1e04u));
L_0042b1d3:  // lea edi, [eax + ebx + 0x1e84]
    edi = (uint32_t)((uint32_t)(eax + ebx + 0x1e84u));
L_0042b1da:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b1dc:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b1de:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b1e0:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042b1e2:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0042b1e4:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042b1e6:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042b1e8:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042b1eb:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042b1ed:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042b1ef:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042b1f2:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042b1f4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b1f5:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b1f6:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b1f7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b1f8:  // add esp, 0x204
    t0 = ladd<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b1fe:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0042b201:  // mov edi, 0x662b2c
    edi = (uint32_t)(0x662b2cu);
L_0042b206:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b209:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b20b:  // lea edx, [ebx + 0x1e04]
    edx = (uint32_t)((uint32_t)(ebx + 0x1e04u));
L_0042b211:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b213:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b215:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042b217:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0042b219:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042b21b:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042b21d:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042b220:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042b222:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042b224:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042b227:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042b229:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b22a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b22b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b22c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b22d:  // add esp, 0x204
    t0 = ladd<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b233:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0042b236:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_0042b23b:  // cmp al, cl
    t0 = lsub<8>((eax & 0xffu), (ecx & 0xffu), f);
L_0042b23d:  // jne 0x42b26a
    if (!f.zf) goto L_0042b26a;
L_0042b23f:  // mov eax, dword ptr [0x8a9ac0]
    eax = (uint32_t)(M32((uint32_t)(0x8a9ac0u)));
L_0042b244:  // mov dword ptr [0x8a9acc], ecx
    M32((uint32_t)(0x8a9accu)) = (uint32_t)(ecx);
L_0042b24a:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0042b24d:  // jg 0x42b4ec
    if ((!f.zf && f.sf == f.of)) goto L_0042b4ec;
L_0042b253:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b254:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b255:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b256:  // mov dword ptr [0x8a9ac0], 9
    M32((uint32_t)(0x8a9ac0u)) = (uint32_t)(0x9u);
L_0042b260:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b261:  // add esp, 0x204
    t0 = ladd<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b267:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0042b26a:  // cmp al, 0xf
    t0 = lsub<8>((eax & 0xffu), 0xfu, f);
L_0042b26c:  // jne 0x42b3fb
    if (!f.zf) goto L_0042b3fb;
L_0042b272:  // mov eax, dword ptr [ebx + 0x23b4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x23b4u)));
L_0042b278:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0042b27b:  // je 0x42b287
    if (f.zf) goto L_0042b287;
L_0042b27d:  // mov byte ptr [eax + ebx + 0x1e04], 0
    M8((uint32_t)(eax + ebx + 0x1e04u)) = (uint8_t)(0x0u);
L_0042b285:  // jmp 0x42b28d
    goto L_0042b28d;
L_0042b287:  // mov dword ptr [ebx + 0x23b8], ecx
    M32((uint32_t)(ebx + 0x23b8u)) = (uint32_t)(ecx);
L_0042b28d:  // lea ebp, [ebx + 0x1e04]
    ebp = (uint32_t)((uint32_t)(ebx + 0x1e04u));
L_0042b293:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b296:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042b298:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b29a:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b29c:  // mov eax, dword ptr [ebx + 0x23b8]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x23b8u)));
L_0042b2a2:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0042b2a4:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b2a6:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042b2a7:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0042b2ab:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0042b2ac:  // push 0x625284
    t0 = 0x625284u; esp -= 4; M32(esp) = t0;
L_0042b2b1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b2b2:  // mov dword ptr [ebx + 0x23b4], ecx
    M32((uint32_t)(ebx + 0x23b4u)) = (uint32_t)(ecx);
L_0042b2b8:  // mov dword ptr [ebx + 0x23b8], eax
    M32((uint32_t)(ebx + 0x23b8u)) = (uint32_t)(eax);
L_0042b2be:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b2c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b2c3:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0042b2c6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042b2c8:  // je 0x42b377
    if (f.zf) goto L_0042b377;
L_0042b2ce:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0042b2d0:  // push 0x62527c
    t0 = 0x62527cu; esp -= 4; M32(esp) = t0;
L_0042b2d5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b2d6:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b2dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b2db:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0042b2de:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042b2e0:  // je 0x42b377
    if (f.zf) goto L_0042b377;
L_0042b2e6:  // mov esi, dword ptr [ebx + 0x2394]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x2394u)));
L_0042b2ec:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0042b2ee:  // je 0x42b320
    if (f.zf) goto L_0042b320;
L_0042b2f0:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042b2f2:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b2f5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b2f7:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b2f9:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b2fb:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042b2fc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042b2fd:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042b2fe:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b2ff:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b304u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b304:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0042b307:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042b309:  // jne 0x42b316
    if (!f.zf) goto L_0042b316;
L_0042b30b:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0042b30f:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0042b310:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0042b314:  // je 0x42b337
    if (f.zf) goto L_0042b337;
L_0042b316:  // mov esi, dword ptr [esi + 0xa8]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xa8u)));
L_0042b31c:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0042b31e:  // jne 0x42b2f0
    if (!f.zf) goto L_0042b2f0;
L_0042b320:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b321:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b322:  // mov dword ptr [ebx + 0x23b4], 0xffffffff
    M32((uint32_t)(ebx + 0x23b4u)) = (uint32_t)(0xffffffffu);
L_0042b32c:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b32d:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b32e:  // add esp, 0x204
    t0 = ladd<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b334:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0042b337:  // mov edi, esi
    edi = (uint32_t)(esi);
L_0042b339:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b33c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b33e:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b340:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b342:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042b344:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0042b346:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042b348:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042b34a:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042b34d:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042b34f:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0042b351:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042b354:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042b356:  // mov edi, 0x624624
    edi = (uint32_t)(0x624624u);
L_0042b35b:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b35e:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b360:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b362:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042b364:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042b366:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0042b368:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042b36a:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b36d:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b36f:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0042b370:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0042b372:  // jmp 0x42b4e0
    goto L_0042b4e0;
L_0042b377:  // lea eax, [esp + 0x14]
    eax = (uint32_t)((uint32_t)(esp + 0x14u));
L_0042b37b:  // lea ecx, [esp + 0x114]
    ecx = (uint32_t)((uint32_t)(esp + 0x114u));
L_0042b382:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042b383:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042b384:  // push 0x625274
    t0 = 0x625274u; esp -= 4; M32(esp) = t0;
L_0042b389:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b38a:  // call 0x55e14f
    t0 = 0x0055e14fu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b38fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b38f:  // mov esi, dword ptr [ebx + 0x2398]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x2398u)));
L_0042b395:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0042b398:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0042b39a:  // je 0x42b320
    if (f.zf) goto L_0042b320;
L_0042b39c:  // lea edi, [esp + 0x14]
    edi = (uint32_t)((uint32_t)(esp + 0x14u));
L_0042b3a0:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b3a3:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b3a5:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0042b3a9:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b3ab:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b3ad:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042b3ae:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0042b3af:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042b3b0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0042b3b1:  // call 0x56e170
    t0 = 0x0056e170u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b3b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b3b6:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0042b3b9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0042b3bb:  // jne 0x42b3c8
    if (!f.zf) goto L_0042b3c8;
L_0042b3bd:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0042b3c1:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0042b3c2:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0042b3c6:  // je 0x42b3d7
    if (f.zf) goto L_0042b3d7;
L_0042b3c8:  // mov esi, dword ptr [esi + 0xac]
    esi = (uint32_t)(M32((uint32_t)(esi + 0xacu)));
L_0042b3ce:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0042b3d0:  // jne 0x42b39c
    if (!f.zf) goto L_0042b39c;
L_0042b3d2:  // jmp 0x42b320
    goto L_0042b320;
L_0042b3d7:  // lea eax, [esp + 0x114]
    eax = (uint32_t)((uint32_t)(esp + 0x114u));
L_0042b3de:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0042b3df:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0042b3e0:  // push 0x62526c
    t0 = 0x62526cu; esp -= 4; M32(esp) = t0;
L_0042b3e5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b3e6:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b3ebu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b3eb:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0042b3ee:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b3ef:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b3f0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b3f1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b3f2:  // add esp, 0x204
    t0 = ladd<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b3f8:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0042b3fb:  // cmp al, 0x1c
    t0 = lsub<8>((eax & 0xffu), 0x1cu, f);
L_0042b3fd:  // je 0x42b441
    if (f.zf) goto L_0042b441;
L_0042b3ff:  // cmp al, 0x9c
    t0 = lsub<8>((eax & 0xffu), 0x9cu, f);
L_0042b401:  // je 0x42b441
    if (f.zf) goto L_0042b441;
L_0042b403:  // cmp al, 0xe
    t0 = lsub<8>((eax & 0xffu), 0xeu, f);
L_0042b405:  // jne 0x42b4ec
    if (!f.zf) goto L_0042b4ec;
L_0042b40b:  // lea edx, [ebx + 0x1e04]
    edx = (uint32_t)((uint32_t)(ebx + 0x1e04u));
L_0042b411:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b414:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042b416:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b418:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b41a:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b41c:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042b41d:  // je 0x42b4ec
    if (f.zf) goto L_0042b4ec;
L_0042b423:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042b425:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b428:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b42a:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b42c:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0042b42d:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b42e:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b42f:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b430:  // mov byte ptr [ecx + ebx + 0x1e03], al
    M8((uint32_t)(ecx + ebx + 0x1e03u)) = (uint8_t)((eax & 0xffu));
L_0042b437:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b438:  // add esp, 0x204
    t0 = ladd<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b43e:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0042b441:  // lea edx, [ebx + 0x2304]
    edx = (uint32_t)((uint32_t)(ebx + 0x2304u));
L_0042b447:  // mov dword ptr [esp + 0x10], 9
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x9u);
L_0042b44f:  // lea ebp, [edx - 0x80]
    ebp = (uint32_t)((uint32_t)(edx + 0xffffff80u));
L_0042b452:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b455:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042b457:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b459:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b45b:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b45d:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042b45f:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0042b461:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042b463:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042b465:  // mov edx, ebp
    edx = (uint32_t)(ebp);
L_0042b467:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042b46a:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042b46c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042b46e:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0042b472:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042b475:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0042b476:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042b478:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0042b47c:  // jne 0x42b44f
    if (!f.zf) goto L_0042b44f;
L_0042b47e:  // lea ebp, [ebx + 0x1e04]
    ebp = (uint32_t)((uint32_t)(ebx + 0x1e04u));
L_0042b484:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b487:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042b489:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b48b:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b48d:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b48f:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042b491:  // lea edx, [ebx + 0x1e84]
    edx = (uint32_t)((uint32_t)(ebx + 0x1e84u));
L_0042b497:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0042b499:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042b49b:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0042b49d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b49e:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042b4a1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042b4a3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0042b4a5:  // push 0x625264
    t0 = 0x625264u; esp -= 4; M32(esp) = t0;
L_0042b4aa:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042b4ad:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0042b4ae:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042b4b0:  // mov dword ptr [ebx + 0xb3c0], 0xffffffff
    M32((uint32_t)(ebx + 0xb3c0u)) = (uint32_t)(0xffffffffu);
L_0042b4ba:  // call 0x42b840
    t0 = 0x0042b840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b4bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b4bf:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0042b4c2:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0042b4c4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0042b4c5:  // call 0x42b9c0
    t0 = 0x0042b9c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0042b4cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0042b4ca:  // mov edi, 0x662b2c
    edi = (uint32_t)(0x662b2cu);
L_0042b4cf:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0042b4d2:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0042b4d4:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0042b4d6:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0042b4d8:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0042b4da:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0042b4dc:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0042b4de:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0042b4e0:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0042b4e3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0042b4e5:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0042b4e7:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0042b4ea:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0042b4ec:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0042b4ed:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0042b4ee:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0042b4ef:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0042b4f0:  // add esp, 0x204
    t0 = ladd<32>(esp, 0x204u, f);
    esp = (uint32_t)(t0);
L_0042b4f6:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0042b120, 0042b120)
