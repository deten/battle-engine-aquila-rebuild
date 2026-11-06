// lifted from 00502060 (FUN_00502060, 549 bytes, 195 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00502060(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00502060;
L_00502060:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00502066:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00502068:  // push 0x5d5729
    t0 = 0x5d5729u; esp -= 4; M32(esp) = t0;
L_0050206d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050206e:  // mov al, byte ptr [0x63c108]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x63c108u))) & 0xffu);
L_00502073:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_0050207a:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050207d:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0050207f:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00502080:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00502081:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00502082:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00502083:  // jne 0x50209a
    if (!f.zf) goto L_0050209a;
L_00502085:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00502086:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00502087:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00502088:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0050208a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0050208b:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0050208f:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00502096:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00502099:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0050209a:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0050209e:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_005020a6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005020a8:  // mov byte ptr [esp + 0x13], 0
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x0u);
L_005020ad:  // je 0x5020b4
    if (f.zf) goto L_005020b4;
L_005020af:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_005020b4:  // mov ebp, dword ptr [0x854e68]
    ebp = (uint32_t)(M32((uint32_t)(0x854e68u)));
L_005020ba:  // mov ebx, dword ptr [esp + 0x38]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005020be:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_005020c0:  // je 0x502135
    if (f.zf) goto L_00502135;
L_005020c2:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_005020c6:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005020c8:  // jne 0x502267
    if (!f.zf) goto L_00502267;
L_005020ce:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_005020d2:  // mov cl, byte ptr [ebp + 0x34]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x34u))) & 0xffu);
L_005020d5:  // cmp al, cl
    t0 = lsub<8>((eax & 0xffu), (ecx & 0xffu), f);
L_005020d7:  // jne 0x502122
    if (!f.zf) goto L_00502122;
L_005020d9:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_005020dd:  // mov edx, dword ptr [ebp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_005020e0:  // cmp ecx, edx
    t0 = lsub<32>(ecx, edx, f);
L_005020e2:  // jne 0x502122
    if (!f.zf) goto L_00502122;
L_005020e4:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_005020e6:  // je 0x5020fe
    if (f.zf) goto L_005020fe;
L_005020e8:  // cmp ebx, dword ptr [ebp + 0x3c]
    t0 = lsub<32>(ebx, M32((uint32_t)(ebp + 0x3cu)), f);
L_005020eb:  // jne 0x502122
    if (!f.zf) goto L_00502122;
L_005020ed:  // mov edi, dword ptr [ebp + 0x38]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x38u)));
L_005020f0:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_005020f4:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_005020f6:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_005020f8:  // repe cmpsb byte ptr [esi], byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(esi); t1 = M8(edi); esi += 1; edi += 1; lsub<8>(t0, t1, f); if (!f.zf) break; }
L_005020fa:  // jne 0x502122
    if (!f.zf) goto L_00502122;
L_005020fc:  // jmp 0x50211e
    goto L_0050211e;
L_005020fe:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00502102:  // lea ecx, [ebp + 8]
    ecx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_00502105:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502106:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502107:  // call 0x568390
    t0 = 0x00568390u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050210cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050210c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0050210f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00502111:  // jne 0x502122
    if (!f.zf) goto L_00502122;
L_00502113:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00502117:  // mov eax, dword ptr [ebp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_0050211a:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0050211c:  // jne 0x502122
    if (!f.zf) goto L_00502122;
L_0050211e:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_00502122:  // mov ebp, dword ptr [ebp + 0x58]
    ebp = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_00502125:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00502127:  // jne 0x5020c2
    if (!f.zf) goto L_005020c2;
L_00502129:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050212d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050212f:  // jne 0x502267
    if (!f.zf) goto L_00502267;
L_00502135:  // push 0x2bd
    t0 = 0x2bdu; esp -= 4; M32(esp) = t0;
L_0050213a:  // push 0x63cf78
    t0 = 0x63cf78u; esp -= 4; M32(esp) = t0;
L_0050213f:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_00502141:  // push 0x5c
    t0 = 0x5cu; esp -= 4; M32(esp) = t0;
L_00502143:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00502148:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050214du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050214d:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_00502151:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00502153:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_0050215b:  // je 0x502168
    if (f.zf) goto L_00502168;
L_0050215d:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050215f:  // call 0x501800
    t0 = 0x00501800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00502164u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00502164:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00502166:  // jmp 0x50216a
    goto L_0050216a;
L_00502168:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0050216a:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0050216e:  // mov dword ptr [esp + 0x20], 0xffffffff
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0xffffffffu);
L_00502176:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00502178:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_0050217c:  // jne 0x5021c3
    if (!f.zf) goto L_005021c3;
L_0050217e:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00502182:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00502186:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0050218a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050218b:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0050218f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00502190:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00502191:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00502192:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00502194:  // call 0x5022a0
    t0 = 0x005022a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00502199u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00502199:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0050219b:  // jge 0x502267
    if ((f.sf == f.of)) goto L_00502267;
L_005021a1:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_005021a3:  // je 0x5021ae
    if (f.zf) goto L_005021ae;
L_005021a5:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_005021a8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_005021aa:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_005021ac:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005021aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005021ae:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005021af:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005021b0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005021b1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005021b3:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005021b4:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_005021b8:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_005021bf:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_005021c2:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_005021c3:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_005021c6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_005021c8:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005021cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005021cb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005021cd:  // jl 0x502245
    if ((f.sf != f.of)) goto L_00502245;
L_005021cf:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005021d3:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_005021d6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_005021d8:  // lea edx, [ebp + 8]
    edx = (uint32_t)((uint32_t)(ebp + 0x8u));
L_005021db:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_005021dd:  // not ecx
    ecx = (uint32_t)(~ecx);
L_005021df:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_005021e1:  // push 0x346
    t0 = 0x346u; esp -= 4; M32(esp) = t0;
L_005021e6:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_005021e8:  // mov esi, edi
    esi = (uint32_t)(edi);
L_005021ea:  // mov edi, edx
    edi = (uint32_t)(edx);
L_005021ec:  // mov edx, ebx
    edx = (uint32_t)(ebx);
L_005021ee:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_005021f1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_005021f3:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_005021f5:  // push 0x63cf78
    t0 = 0x63cf78u; esp -= 4; M32(esp) = t0;
L_005021fa:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_005021fd:  // push 0x50
    t0 = 0x50u; esp -= 4; M32(esp) = t0;
L_005021ff:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00502201:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_00502205:  // shr edx, 2
    t0 = lshr<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_00502208:  // shl edx, 2
    t0 = lshl<32>(edx, 0x2u, f);
    edx = (uint32_t)(t0);
L_0050220b:  // mov dword ptr [ebp + 0x2c], ecx
    M32((uint32_t)(ebp + 0x2cu)) = (uint32_t)(ecx);
L_0050220e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050220f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00502214:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00502219u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00502219:  // mov esi, dword ptr [esp + 0x34]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0050221d:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0050221f:  // mov dword ptr [ebp + 0x38], eax
    M32((uint32_t)(ebp + 0x38u)) = (uint32_t)(eax);
L_00502222:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00502224:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00502226:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00502229:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0050222b:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0050222d:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_00502230:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00502232:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_00502235:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00502237:  // mov dword ptr [ebp + 0x3c], ebx
    M32((uint32_t)(ebp + 0x3cu)) = (uint32_t)(ebx);
L_0050223a:  // mov byte ptr [ebp + 0x34], 1
    M8((uint32_t)(ebp + 0x34u)) = (uint8_t)(0x1u);
L_0050223e:  // call dword ptr [edx + 8]
    t0 = M32((uint32_t)(edx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00502241u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00502241:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00502243:  // jge 0x502267
    if ((f.sf == f.of)) goto L_00502267;
L_00502245:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_00502247:  // je 0x502252
    if (f.zf) goto L_00502252;
L_00502249:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0050224c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0050224e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00502250:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00502252u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00502252:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00502253:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00502254:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00502255:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00502257:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00502258:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0050225c:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00502263:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00502266:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_00502267:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0050226b:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0050226c:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0050226d:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0050226e:  // mov ecx, dword ptr [eax + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_00502271:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00502272:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00502273:  // mov dword ptr [eax + 0x30], ecx
    M32((uint32_t)(eax + 0x30u)) = (uint32_t)(ecx);
L_00502276:  // mov ecx, dword ptr [esp + 8]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8u)));
L_0050227a:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_00502281:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_00502284:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00502060, 00502060)
