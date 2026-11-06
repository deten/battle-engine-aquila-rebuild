// lifted from 004411a0 (vslot9, 371 bytes, 104 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004411a0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004411a0;
L_004411a0:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004411a2:  // push 0x5d207b
    t0 = 0x5d207bu; esp -= 4; M32(esp) = t0;
L_004411a7:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004411ad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004411ae:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004411b5:  // sub esp, 0x428
    t0 = lsub<32>(esp, 0x428u, f);
    esp = (uint32_t)(t0);
L_004411bb:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004411bc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004411bd:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_004411c2:  // mov esi, 1
    esi = (uint32_t)(0x1u);
L_004411c7:  // push 0x403f40
    t0 = 0x403f40u; esp -= 4; M32(esp) = t0;
L_004411cc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004411cd:  // lea eax, [esp + 0x1c]
    eax = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004411d1:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_004411d6:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_004411d8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004411d9:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004411deu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004411de:  // mov dword ptr [esp + 0x42c], esi
    M32((uint32_t)(esp + 0x42cu)) = (uint32_t)(esi);
L_004411e5:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004411e7:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004411e9:  // mov dword ptr [esp + 0x438], eax
    M32((uint32_t)(esp + 0x438u)) = (uint32_t)(eax);
L_004411f0:  // je 0x4411fe
    if (f.zf) goto L_004411fe;
L_004411f2:  // lea ecx, [ebx + 8]
    ecx = (uint32_t)((uint32_t)(ebx + 0x8u));
L_004411f5:  // mov dword ptr [esp + 0x410], ecx
    M32((uint32_t)(esp + 0x410u)) = (uint32_t)(ecx);
L_004411fc:  // jmp 0x441205
    goto L_00441205;
L_004411fe:  // mov dword ptr [esp + 0x410], eax
    M32((uint32_t)(esp + 0x410u)) = (uint32_t)(eax);
L_00441205:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00441206:  // mov edi, 0x6283b8
    edi = (uint32_t)(0x6283b8u);
L_0044120b:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0044120e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00441210:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00441212:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00441214:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_00441216:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_0044121a:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0044121e:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00441220:  // mov esi, edi
    esi = (uint32_t)(edi);
L_00441222:  // mov edi, edx
    edi = (uint32_t)(edx);
L_00441224:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_00441227:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_00441229:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0044122b:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0044122e:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_00441230:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_00441234:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00441235:  // call 0x516580
    t0 = 0x00516580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044123au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044123a:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0044123d:  // mov dword ptr [ebx + 0x30], eax
    M32((uint32_t)(ebx + 0x30u)) = (uint32_t)(eax);
L_00441240:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00441242:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00441243:  // je 0x441251
    if (f.zf) goto L_00441251;
L_00441245:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00441247:  // lea ecx, [esp + 0x10]
    ecx = (uint32_t)((uint32_t)(esp + 0x10u));
L_0044124b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0044124c:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0044124e:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00441251u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00441251:  // mov eax, dword ptr [esp + 0x440]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x440u)));
L_00441258:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0044125a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0044125b:  // mov dword ptr [eax + 0x70], 0xffffffff
    M32((uint32_t)(eax + 0x70u)) = (uint32_t)(0xffffffffu);
L_00441262:  // call 0x4f3fd0
    t0 = 0x004f3fd0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00441267u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00441267:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_00441269:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0044126b:  // call dword ptr [edx + 0x48]
    t0 = M32((uint32_t)(edx + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044126eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044126e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00441270:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00441272:  // push 0x6282fc
    t0 = 0x6282fcu; esp -= 4; M32(esp) = t0;
L_00441277:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00441279:  // push 0x62839c
    t0 = 0x62839cu; esp -= 4; M32(esp) = t0;
L_0044127e:  // push 0x62838c
    t0 = 0x62838cu; esp -= 4; M32(esp) = t0;
L_00441283:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_00441288:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0044128du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0044128d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0044128f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00441291:  // push 0x628300
    t0 = 0x628300u; esp -= 4; M32(esp) = t0;
L_00441296:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00441298:  // push 0x628360
    t0 = 0x628360u; esp -= 4; M32(esp) = t0;
L_0044129d:  // push 0x62834c
    t0 = 0x62834cu; esp -= 4; M32(esp) = t0;
L_004412a2:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004412a7:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004412acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004412ac:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004412ae:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004412b0:  // push 0x628304
    t0 = 0x628304u; esp -= 4; M32(esp) = t0;
L_004412b5:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004412b7:  // push 0x62831c
    t0 = 0x62831cu; esp -= 4; M32(esp) = t0;
L_004412bc:  // push 0x628308
    t0 = 0x628308u; esp -= 4; M32(esp) = t0;
L_004412c1:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004412c6:  // call 0x42b040
    t0 = 0x0042b040u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004412cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004412cb:  // mov eax, dword ptr [0x66eb78]
    eax = (uint32_t)(M32((uint32_t)(0x66eb78u)));
L_004412d0:  // push 0x403f80
    t0 = 0x403f80u; esp -= 4; M32(esp) = t0;
L_004412d5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004412d7:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004412db:  // push 0x41c
    t0 = 0x41cu; esp -= 4; M32(esp) = t0;
L_004412e0:  // mov dword ptr [ebx + 0x7c], eax
    M32((uint32_t)(ebx + 0x7cu)) = (uint32_t)(eax);
L_004412e3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004412e4:  // mov dword ptr [0x66eb78], ebx
    M32((uint32_t)(0x66eb78u)) = (uint32_t)(ebx);
L_004412ea:  // mov dword ptr [esp + 0x448], 0xffffffff
    M32((uint32_t)(esp + 0x448u)) = (uint32_t)(0xffffffffu);
L_004412f5:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004412fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004412fa:  // mov ecx, dword ptr [esp + 0x430]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x430u)));
L_00441301:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00441302:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00441303:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_0044130a:  // add esp, 0x434
    t0 = ladd<32>(esp, 0x434u, f);
    esp = (uint32_t)(t0);
L_00441310:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004411a0, 004411a0)
