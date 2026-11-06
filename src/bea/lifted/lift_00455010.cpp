// lifted from 00455010 (FUN_00455010, 3467 bytes, 922 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00455010(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00455010;
L_00455010:  // sub esp, 0x720
    t0 = lsub<32>(esp, 0x720u, f);
    esp = (uint32_t)(t0);
L_00455016:  // mov eax, dword ptr [esp + 0x72c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x72cu)));
L_0045501d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045501e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045501f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00455020:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00455021:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00455023:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00455025:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00455027:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00455029:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0045502e:  // mov dword ptr [esp + 0x2c], esi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(esi);
L_00455032:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_00455036:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045503bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045503b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0045503d:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0045503f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00455041:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00455046:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045504bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045504b:  // mov esi, dword ptr [esi + 0x20]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0045504e:  // cmp esi, 0x16
    t0 = lsub<32>(esi, 0x16u, f);
L_00455051:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_00455055:  // jge 0x455d6e
    if ((f.sf == f.of)) goto L_00455d6e;
L_0045505b:  // fld dword ptr [esp + 0x73c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x73cu)));
L_00455062:  // fadd dword ptr [0x5d85f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85f4u)));
L_00455068:  // mov edx, dword ptr [esp + 0x734]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x734u)));
L_0045506f:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00455073:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00455077:  // fcomp dword ptr [esp + 0x34]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x34u)));
    lpop(x);
L_0045507b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045507d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00455080:  // je 0x455d6e
    if (f.zf) goto L_00455d6e;
L_00455086:  // mov cx, word ptr [0x677d78]
    ecx = (ecx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(0x677d78u))) & 0xffffu);
L_0045508d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0045508f:  // mov word ptr [esp + 0x80], cx
    M16((uint32_t)(esp + 0x80u)) = (uint16_t)((ecx & 0xffffu));
L_00455097:  // mov ecx, 0x95
    ecx = (uint32_t)(0x95u);
L_0045509c:  // lea edi, [esp + 0x82]
    edi = (uint32_t)((uint32_t)(esp + 0x82u));
L_004550a3:  // lea ebx, [esi + 0x36]
    ebx = (uint32_t)((uint32_t)(esi + 0x36u));
L_004550a6:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_004550a8:  // cmp ebx, 0x46
    t0 = lsub<32>(ebx, 0x46u, f);
L_004550ab:  // mov ebp, 0xff7f7f7f
    ebp = (uint32_t)(0xff7f7f7fu);
L_004550b0:  // stosw word ptr es:[edi], ax
    M16(edi) = (uint16_t)eax; edi += 2;
L_004550b2:  // mov byte ptr [esp + 0x13], 0
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x0u);
L_004550b7:  // lea ecx, [esi + 0x37]
    ecx = (uint32_t)((uint32_t)(esi + 0x37u));
L_004550ba:  // ja 0x4550cb
    if ((!f.cf && !f.zf)) goto L_004550cb;
L_004550bc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004550be:  // mov al, byte ptr [ebx + 0x455da4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x455da4u))) & 0xffu);
L_004550c4:  // jmp dword ptr [eax*4 + 0x455d9c]
    t0 = M32((uint32_t)(eax * 4u + 0x455d9cu));
    switch (t0) {
    case 0x004550cbu: goto L_004550cb;
    case 0x00455a28u: goto L_00455a28;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004550cb:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_004550ce:  // je 0x455a28
    if (f.zf) goto L_00455a28;
L_004550d4:  // cmp ecx, 0x38
    t0 = lsub<32>(ecx, 0x38u, f);
L_004550d7:  // jne 0x455107
    if (!f.zf) goto L_00455107;
L_004550d9:  // mov eax, edx
    eax = (uint32_t)(edx);
L_004550db:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004550dc:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004550de:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004550e0:  // mov ecx, dword ptr [eax*4 + 0x662ac4]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x662ac4u)));
L_004550e7:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004550e9:  // je 0x455100
    if (f.zf) goto L_00455100;
L_004550eb:  // push 0x36
    t0 = 0x36u; esp -= 4; M32(esp) = t0;
L_004550ed:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004550f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004550f2:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_004550f9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004550fa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004550fb:  // jmp 0x455a5f
    goto L_00455a5f;
L_00455100:  // push 0x35
    t0 = 0x35u; esp -= 4; M32(esp) = t0;
L_00455102:  // jmp 0x455a51
    goto L_00455a51;
L_00455107:  // cmp ecx, 0x39
    t0 = lsub<32>(ecx, 0x39u, f);
L_0045510a:  // jne 0x455148
    if (!f.zf) goto L_00455148;
L_0045510c:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0045510e:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0045510f:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00455111:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00455113:  // mov ecx, dword ptr [eax*4 + 0x662abc]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x662abcu)));
L_0045511a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0045511c:  // je 0x455133
    if (f.zf) goto L_00455133;
L_0045511e:  // push 0x36
    t0 = 0x36u; esp -= 4; M32(esp) = t0;
L_00455120:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455125u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455125:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455126:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_0045512d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045512e:  // jmp 0x455a5f
    goto L_00455a5f;
L_00455133:  // push 0x35
    t0 = 0x35u; esp -= 4; M32(esp) = t0;
L_00455135:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045513au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045513a:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00455141:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455142:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455143:  // jmp 0x455a5f
    goto L_00455a5f;
L_00455148:  // cmp dword ptr [0x67786c], ecx
    t0 = lsub<32>(M32((uint32_t)(0x67786cu)), ecx, f);
L_0045514e:  // jne 0x455189
    if (!f.zf) goto L_00455189;
L_00455150:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00455152:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00455153:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00455155:  // mov edx, dword ptr [0x677868]
    edx = (uint32_t)(M32((uint32_t)(0x677868u)));
L_0045515b:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0045515d:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0045515f:  // jne 0x455189
    if (!f.zf) goto L_00455189;
L_00455161:  // mov al, byte ptr [0x6290b4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x6290b4u))) & 0xffu);
L_00455166:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00455168:  // jne 0x455189
    if (!f.zf) goto L_00455189;
L_0045516a:  // lea edx, [esp + 0x80]
    edx = (uint32_t)((uint32_t)(esp + 0x80u));
L_00455171:  // push 0x629124
    t0 = 0x629124u; esp -= 4; M32(esp) = t0;
L_00455176:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455177:  // mov byte ptr [esp + 0x1b], 1
    M8((uint32_t)(esp + 0x1bu)) = (uint8_t)(0x1u);
L_0045517c:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455181u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455181:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00455184:  // jmp 0x455a67
    goto L_00455a67;
L_00455189:  // push 0x456060
    t0 = 0x456060u; esp -= 4; M32(esp) = t0;
L_0045518e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00455190:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455191:  // call 0x453f50
    t0 = 0x00453f50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455196u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455196:  // mov eax, dword ptr [0x67787c]
    eax = (uint32_t)(M32((uint32_t)(0x67787cu)));
L_0045519b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045519c:  // call 0x42db10
    t0 = 0x0042db10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004551a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004551a1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004551a3:  // mov eax, dword ptr [esp + 0x744]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x744u)));
L_004551aa:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004551ab:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004551ad:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004551b0:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_004551b2:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004551b5:  // lea esi, [ecx + edx*4 + 8]
    esi = (uint32_t)((uint32_t)(ecx + edx * 4u + 0x8u));
L_004551b9:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004551bb:  // je 0x455a11
    if (f.zf) goto L_00455a11;
L_004551c1:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004551c3:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_004551c6:  // je 0x455a11
    if (f.zf) goto L_00455a11;
L_004551cc:  // mov edi, dword ptr [esi + 4]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004551cf:  // cmp edi, 0x11
    t0 = lsub<32>(edi, 0x11u, f);
L_004551d2:  // ja 0x455a67
    if ((!f.cf && !f.zf)) goto L_00455a67;
L_004551d8:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004551da:  // mov cl, byte ptr [edi + 0x455e08]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x455e08u))) & 0xffu);
L_004551e0:  // jmp dword ptr [ecx*4 + 0x455dec]
    t0 = M32((uint32_t)(ecx * 4u + 0x455decu));
    switch (t0) {
    case 0x004551e7u: goto L_004551e7;
    case 0x0045570du: goto L_0045570d;
    case 0x00455727u: goto L_00455727;
    case 0x0045572eu: goto L_0045572e;
    case 0x004557b1u: goto L_004557b1;
    case 0x00455843u: goto L_00455843;
    case 0x00455a67u: goto L_00455a67;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_004551e7:  // mov di, word ptr [esi + 0xa]
    edi = (edi & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + 0xau))) & 0xffffu);
L_004551eb:  // lea edx, [esp + 0x58]
    edx = (uint32_t)((uint32_t)(esp + 0x58u));
L_004551ef:  // movsx esi, word ptr [esi + 8]
    esi = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esi + 0x8u))));
L_004551f3:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004551f5:  // push 0x28
    t0 = 0x28u; esp -= 4; M32(esp) = t0;
L_004551f7:  // shl eax, 0x10
    t0 = lshl<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_004551fa:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004551fb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004551fc:  // call dword ptr [0x5d824c]
    t0 = M32((uint32_t)(0x5d824cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455202u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455202:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00455204:  // je 0x455269
    if (f.zf) goto L_00455269;
L_00455206:  // lea edi, [esp + 0x58]
    edi = (uint32_t)((uint32_t)(esp + 0x58u));
L_0045520a:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0045520d:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0045520f:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_00455211:  // not ecx
    ecx = (uint32_t)(~ecx);
L_00455213:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00455214:  // cmp ecx, 1
    t0 = lsub<32>(ecx, 0x1u, f);
L_00455217:  // jne 0x455257
    if (!f.zf) goto L_00455257;
L_00455219:  // push 0x51
    t0 = 0x51u; esp -= 4; M32(esp) = t0;
L_0045521b:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455220u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455220:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455221:  // push 0x677880
    t0 = 0x677880u; esp -= 4; M32(esp) = t0;
L_00455226:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045522bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045522b:  // push 0x629120
    t0 = 0x629120u; esp -= 4; M32(esp) = t0;
L_00455230:  // push 0x677880
    t0 = 0x677880u; esp -= 4; M32(esp) = t0;
L_00455235:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045523au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045523a:  // lea ecx, [esp + 0x6c]
    ecx = (uint32_t)((uint32_t)(esp + 0x6cu));
L_0045523e:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045523f:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455244u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455244:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455245:  // push 0x677880
    t0 = 0x677880u; esp -= 4; M32(esp) = t0;
L_0045524a:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045524fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045524f:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_00455252:  // jmp 0x4556f2
    goto L_004556f2;
L_00455257:  // lea edx, [esp + 0x58]
    edx = (uint32_t)((uint32_t)(esp + 0x58u));
L_0045525b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045525c:  // call 0x4f7bf0
    t0 = 0x004f7bf0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455261u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455261:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455264:  // jmp 0x4556f7
    goto L_004556f7;
L_00455269:  // lea eax, [esi - 1]
    eax = (uint32_t)((uint32_t)(esi + 0xffffffffu));
L_0045526c:  // cmp eax, 0xdc
    t0 = lsub<32>(eax, 0xdcu, f);
L_00455271:  // ja 0x4556a0
    if ((!f.cf && !f.zf)) goto L_004556a0;
L_00455277:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00455279:  // mov cl, byte ptr [eax + 0x455f10]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x455f10u))) & 0xffu);
L_0045527f:  // jmp dword ptr [ecx*4 + 0x455e1c]
    t0 = M32((uint32_t)(ecx * 4u + 0x455e1cu));
    switch (t0) {
    case 0x00455286u: goto L_00455286;
    case 0x00455295u: goto L_00455295;
    case 0x004552a4u: goto L_004552a4;
    case 0x004552b3u: goto L_004552b3;
    case 0x004552c2u: goto L_004552c2;
    case 0x004552d1u: goto L_004552d1;
    case 0x004552e0u: goto L_004552e0;
    case 0x004552efu: goto L_004552ef;
    case 0x00455301u: goto L_00455301;
    case 0x00455313u: goto L_00455313;
    case 0x00455325u: goto L_00455325;
    case 0x00455337u: goto L_00455337;
    case 0x00455349u: goto L_00455349;
    case 0x0045535bu: goto L_0045535b;
    case 0x0045536du: goto L_0045536d;
    case 0x0045537fu: goto L_0045537f;
    case 0x00455391u: goto L_00455391;
    case 0x004553a3u: goto L_004553a3;
    case 0x004553b5u: goto L_004553b5;
    case 0x004553c7u: goto L_004553c7;
    case 0x004553d9u: goto L_004553d9;
    case 0x004553ebu: goto L_004553eb;
    case 0x004553fdu: goto L_004553fd;
    case 0x0045540fu: goto L_0045540f;
    case 0x00455421u: goto L_00455421;
    case 0x00455433u: goto L_00455433;
    case 0x00455445u: goto L_00455445;
    case 0x00455457u: goto L_00455457;
    case 0x00455469u: goto L_00455469;
    case 0x0045547bu: goto L_0045547b;
    case 0x0045548du: goto L_0045548d;
    case 0x0045549fu: goto L_0045549f;
    case 0x004554b1u: goto L_004554b1;
    case 0x004554c3u: goto L_004554c3;
    case 0x004554d5u: goto L_004554d5;
    case 0x004554e7u: goto L_004554e7;
    case 0x004554f9u: goto L_004554f9;
    case 0x0045550bu: goto L_0045550b;
    case 0x0045551du: goto L_0045551d;
    case 0x0045552fu: goto L_0045552f;
    case 0x00455541u: goto L_00455541;
    case 0x00455553u: goto L_00455553;
    case 0x00455565u: goto L_00455565;
    case 0x00455577u: goto L_00455577;
    case 0x00455589u: goto L_00455589;
    case 0x0045559bu: goto L_0045559b;
    case 0x004555adu: goto L_004555ad;
    case 0x004555bfu: goto L_004555bf;
    case 0x004555d1u: goto L_004555d1;
    case 0x004555e3u: goto L_004555e3;
    case 0x004555f5u: goto L_004555f5;
    case 0x00455607u: goto L_00455607;
    case 0x00455619u: goto L_00455619;
    case 0x0045562bu: goto L_0045562b;
    case 0x0045563du: goto L_0045563d;
    case 0x0045564fu: goto L_0045564f;
    case 0x00455661u: goto L_00455661;
    case 0x00455673u: goto L_00455673;
    case 0x00455682u: goto L_00455682;
    case 0x00455691u: goto L_00455691;
    case 0x004556a0u: goto L_004556a0;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00455286:  // push 0x79
    t0 = 0x79u; esp -= 4; M32(esp) = t0;
L_00455288:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045528du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045528d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455290:  // jmp 0x4556f7
    goto L_004556f7;
L_00455295:  // push 0x7a
    t0 = 0x7au; esp -= 4; M32(esp) = t0;
L_00455297:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045529cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045529c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045529f:  // jmp 0x4556f7
    goto L_004556f7;
L_004552a4:  // push 0x7b
    t0 = 0x7bu; esp -= 4; M32(esp) = t0;
L_004552a6:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004552abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004552ab:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004552ae:  // jmp 0x4556f7
    goto L_004556f7;
L_004552b3:  // push 0x7c
    t0 = 0x7cu; esp -= 4; M32(esp) = t0;
L_004552b5:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004552bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004552ba:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004552bd:  // jmp 0x4556f7
    goto L_004556f7;
L_004552c2:  // push 0x7d
    t0 = 0x7du; esp -= 4; M32(esp) = t0;
L_004552c4:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004552c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004552c9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004552cc:  // jmp 0x4556f7
    goto L_004556f7;
L_004552d1:  // push 0x7e
    t0 = 0x7eu; esp -= 4; M32(esp) = t0;
L_004552d3:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004552d8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004552d8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004552db:  // jmp 0x4556f7
    goto L_004556f7;
L_004552e0:  // push 0x7f
    t0 = 0x7fu; esp -= 4; M32(esp) = t0;
L_004552e2:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004552e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004552e7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004552ea:  // jmp 0x4556f7
    goto L_004556f7;
L_004552ef:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004552f4:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004552f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004552f9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004552fc:  // jmp 0x4556f7
    goto L_004556f7;
L_00455301:  // push 0x81
    t0 = 0x81u; esp -= 4; M32(esp) = t0;
L_00455306:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045530bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045530b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045530e:  // jmp 0x4556f7
    goto L_004556f7;
L_00455313:  // push 0x82
    t0 = 0x82u; esp -= 4; M32(esp) = t0;
L_00455318:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045531du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045531d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455320:  // jmp 0x4556f7
    goto L_004556f7;
L_00455325:  // push 0x83
    t0 = 0x83u; esp -= 4; M32(esp) = t0;
L_0045532a:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045532fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045532f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455332:  // jmp 0x4556f7
    goto L_004556f7;
L_00455337:  // push 0x84
    t0 = 0x84u; esp -= 4; M32(esp) = t0;
L_0045533c:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455341u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455341:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455344:  // jmp 0x4556f7
    goto L_004556f7;
L_00455349:  // push 0x85
    t0 = 0x85u; esp -= 4; M32(esp) = t0;
L_0045534e:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455353u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455353:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455356:  // jmp 0x4556f7
    goto L_004556f7;
L_0045535b:  // push 0x86
    t0 = 0x86u; esp -= 4; M32(esp) = t0;
L_00455360:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455365u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455365:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455368:  // jmp 0x4556f7
    goto L_004556f7;
L_0045536d:  // push 0x87
    t0 = 0x87u; esp -= 4; M32(esp) = t0;
L_00455372:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455377u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455377:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045537a:  // jmp 0x4556f7
    goto L_004556f7;
L_0045537f:  // push 0x88
    t0 = 0x88u; esp -= 4; M32(esp) = t0;
L_00455384:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455389u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455389:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045538c:  // jmp 0x4556f7
    goto L_004556f7;
L_00455391:  // push 0x89
    t0 = 0x89u; esp -= 4; M32(esp) = t0;
L_00455396:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045539bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045539b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045539e:  // jmp 0x4556f7
    goto L_004556f7;
L_004553a3:  // push 0x8a
    t0 = 0x8au; esp -= 4; M32(esp) = t0;
L_004553a8:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004553adu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004553ad:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004553b0:  // jmp 0x4556f7
    goto L_004556f7;
L_004553b5:  // push 0x8b
    t0 = 0x8bu; esp -= 4; M32(esp) = t0;
L_004553ba:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004553bfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004553bf:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004553c2:  // jmp 0x4556f7
    goto L_004556f7;
L_004553c7:  // push 0x8c
    t0 = 0x8cu; esp -= 4; M32(esp) = t0;
L_004553cc:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004553d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004553d1:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004553d4:  // jmp 0x4556f7
    goto L_004556f7;
L_004553d9:  // push 0x8d
    t0 = 0x8du; esp -= 4; M32(esp) = t0;
L_004553de:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004553e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004553e3:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004553e6:  // jmp 0x4556f7
    goto L_004556f7;
L_004553eb:  // push 0x8e
    t0 = 0x8eu; esp -= 4; M32(esp) = t0;
L_004553f0:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004553f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004553f5:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004553f8:  // jmp 0x4556f7
    goto L_004556f7;
L_004553fd:  // push 0x8f
    t0 = 0x8fu; esp -= 4; M32(esp) = t0;
L_00455402:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455407u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455407:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045540a:  // jmp 0x4556f7
    goto L_004556f7;
L_0045540f:  // push 0x90
    t0 = 0x90u; esp -= 4; M32(esp) = t0;
L_00455414:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455419u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455419:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045541c:  // jmp 0x4556f7
    goto L_004556f7;
L_00455421:  // push 0x91
    t0 = 0x91u; esp -= 4; M32(esp) = t0;
L_00455426:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045542bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045542b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045542e:  // jmp 0x4556f7
    goto L_004556f7;
L_00455433:  // push 0x92
    t0 = 0x92u; esp -= 4; M32(esp) = t0;
L_00455438:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045543du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045543d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455440:  // jmp 0x4556f7
    goto L_004556f7;
L_00455445:  // push 0x93
    t0 = 0x93u; esp -= 4; M32(esp) = t0;
L_0045544a:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045544fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045544f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455452:  // jmp 0x4556f7
    goto L_004556f7;
L_00455457:  // push 0x94
    t0 = 0x94u; esp -= 4; M32(esp) = t0;
L_0045545c:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455461u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455461:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455464:  // jmp 0x4556f7
    goto L_004556f7;
L_00455469:  // push 0x95
    t0 = 0x95u; esp -= 4; M32(esp) = t0;
L_0045546e:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455473u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455473:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455476:  // jmp 0x4556f7
    goto L_004556f7;
L_0045547b:  // push 0x96
    t0 = 0x96u; esp -= 4; M32(esp) = t0;
L_00455480:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455485u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455485:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455488:  // jmp 0x4556f7
    goto L_004556f7;
L_0045548d:  // push 0x97
    t0 = 0x97u; esp -= 4; M32(esp) = t0;
L_00455492:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455497u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455497:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045549a:  // jmp 0x4556f7
    goto L_004556f7;
L_0045549f:  // push 0x98
    t0 = 0x98u; esp -= 4; M32(esp) = t0;
L_004554a4:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004554a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004554a9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004554ac:  // jmp 0x4556f7
    goto L_004556f7;
L_004554b1:  // push 0x99
    t0 = 0x99u; esp -= 4; M32(esp) = t0;
L_004554b6:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004554bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004554bb:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004554be:  // jmp 0x4556f7
    goto L_004556f7;
L_004554c3:  // push 0x9a
    t0 = 0x9au; esp -= 4; M32(esp) = t0;
L_004554c8:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004554cdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004554cd:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004554d0:  // jmp 0x4556f7
    goto L_004556f7;
L_004554d5:  // push 0x9b
    t0 = 0x9bu; esp -= 4; M32(esp) = t0;
L_004554da:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004554dfu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004554df:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004554e2:  // jmp 0x4556f7
    goto L_004556f7;
L_004554e7:  // push 0x9c
    t0 = 0x9cu; esp -= 4; M32(esp) = t0;
L_004554ec:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004554f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004554f1:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004554f4:  // jmp 0x4556f7
    goto L_004556f7;
L_004554f9:  // push 0x9d
    t0 = 0x9du; esp -= 4; M32(esp) = t0;
L_004554fe:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455503u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455503:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455506:  // jmp 0x4556f7
    goto L_004556f7;
L_0045550b:  // push 0x9e
    t0 = 0x9eu; esp -= 4; M32(esp) = t0;
L_00455510:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455515u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455515:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455518:  // jmp 0x4556f7
    goto L_004556f7;
L_0045551d:  // push 0x9f
    t0 = 0x9fu; esp -= 4; M32(esp) = t0;
L_00455522:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455527u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455527:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045552a:  // jmp 0x4556f7
    goto L_004556f7;
L_0045552f:  // push 0xa0
    t0 = 0xa0u; esp -= 4; M32(esp) = t0;
L_00455534:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455539u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455539:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045553c:  // jmp 0x4556f7
    goto L_004556f7;
L_00455541:  // push 0xa1
    t0 = 0xa1u; esp -= 4; M32(esp) = t0;
L_00455546:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045554bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045554b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045554e:  // jmp 0x4556f7
    goto L_004556f7;
L_00455553:  // push 0xa2
    t0 = 0xa2u; esp -= 4; M32(esp) = t0;
L_00455558:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045555du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045555d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455560:  // jmp 0x4556f7
    goto L_004556f7;
L_00455565:  // push 0xa3
    t0 = 0xa3u; esp -= 4; M32(esp) = t0;
L_0045556a:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045556fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045556f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455572:  // jmp 0x4556f7
    goto L_004556f7;
L_00455577:  // push 0xa4
    t0 = 0xa4u; esp -= 4; M32(esp) = t0;
L_0045557c:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455581u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455581:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455584:  // jmp 0x4556f7
    goto L_004556f7;
L_00455589:  // push 0xa5
    t0 = 0xa5u; esp -= 4; M32(esp) = t0;
L_0045558e:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455593u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455593:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455596:  // jmp 0x4556f7
    goto L_004556f7;
L_0045559b:  // push 0xa6
    t0 = 0xa6u; esp -= 4; M32(esp) = t0;
L_004555a0:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004555a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004555a5:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004555a8:  // jmp 0x4556f7
    goto L_004556f7;
L_004555ad:  // push 0xa7
    t0 = 0xa7u; esp -= 4; M32(esp) = t0;
L_004555b2:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004555b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004555b7:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004555ba:  // jmp 0x4556f7
    goto L_004556f7;
L_004555bf:  // push 0xa8
    t0 = 0xa8u; esp -= 4; M32(esp) = t0;
L_004555c4:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004555c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004555c9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004555cc:  // jmp 0x4556f7
    goto L_004556f7;
L_004555d1:  // push 0xa9
    t0 = 0xa9u; esp -= 4; M32(esp) = t0;
L_004555d6:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004555dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004555db:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004555de:  // jmp 0x4556f7
    goto L_004556f7;
L_004555e3:  // push 0xaa
    t0 = 0xaau; esp -= 4; M32(esp) = t0;
L_004555e8:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004555edu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004555ed:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004555f0:  // jmp 0x4556f7
    goto L_004556f7;
L_004555f5:  // push 0xab
    t0 = 0xabu; esp -= 4; M32(esp) = t0;
L_004555fa:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004555ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004555ff:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455602:  // jmp 0x4556f7
    goto L_004556f7;
L_00455607:  // push 0xac
    t0 = 0xacu; esp -= 4; M32(esp) = t0;
L_0045560c:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455611u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455611:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455614:  // jmp 0x4556f7
    goto L_004556f7;
L_00455619:  // push 0xad
    t0 = 0xadu; esp -= 4; M32(esp) = t0;
L_0045561e:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455623u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455623:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455626:  // jmp 0x4556f7
    goto L_004556f7;
L_0045562b:  // push 0xae
    t0 = 0xaeu; esp -= 4; M32(esp) = t0;
L_00455630:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455635u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455635:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455638:  // jmp 0x4556f7
    goto L_004556f7;
L_0045563d:  // push 0xaf
    t0 = 0xafu; esp -= 4; M32(esp) = t0;
L_00455642:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455647u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455647:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045564a:  // jmp 0x4556f7
    goto L_004556f7;
L_0045564f:  // push 0xb0
    t0 = 0xb0u; esp -= 4; M32(esp) = t0;
L_00455654:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455659u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455659:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045565c:  // jmp 0x4556f7
    goto L_004556f7;
L_00455661:  // push 0xb1
    t0 = 0xb1u; esp -= 4; M32(esp) = t0;
L_00455666:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045566bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045566b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045566e:  // jmp 0x4556f7
    goto L_004556f7;
L_00455673:  // push 0xb2
    t0 = 0xb2u; esp -= 4; M32(esp) = t0;
L_00455678:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045567du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045567d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00455680:  // jmp 0x4556f7
    goto L_004556f7;
L_00455682:  // push 0xb3
    t0 = 0xb3u; esp -= 4; M32(esp) = t0;
L_00455687:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045568cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045568c:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045568f:  // jmp 0x4556f7
    goto L_004556f7;
L_00455691:  // push 0xb4
    t0 = 0xb4u; esp -= 4; M32(esp) = t0;
L_00455696:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045569bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045569b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045569e:  // jmp 0x4556f7
    goto L_004556f7;
L_004556a0:  // push 0x51
    t0 = 0x51u; esp -= 4; M32(esp) = t0;
L_004556a2:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004556a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004556a7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004556a8:  // push 0x677880
    t0 = 0x677880u; esp -= 4; M32(esp) = t0;
L_004556ad:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004556b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004556b2:  // push 0x629118
    t0 = 0x629118u; esp -= 4; M32(esp) = t0;
L_004556b7:  // push 0x677880
    t0 = 0x677880u; esp -= 4; M32(esp) = t0;
L_004556bc:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004556c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004556c1:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_004556c4:  // test di, di
    t0 = llog<16>((edi & 0xffffu) & (edi & 0xffffu), f);
L_004556c7:  // push 0x677880
    t0 = 0x677880u; esp -= 4; M32(esp) = t0;
L_004556cc:  // je 0x4556e0
    if (f.zf) goto L_004556e0;
L_004556ce:  // call 0x55e607
    t0 = 0x0055e607u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004556d3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004556d3:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004556d6:  // mov word ptr [eax*2 + 0x67787e], di
    M16((uint32_t)(eax * 2u + 0x67787eu)) = (uint16_t)((edi & 0xffffu));
L_004556de:  // jmp 0x4556f2
    goto L_004556f2;
L_004556e0:  // call 0x55e607
    t0 = 0x0055e607u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004556e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004556e5:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004556e8:  // mov word ptr [eax*2 + 0x67787e], 0x3f
    M16((uint32_t)(eax * 2u + 0x67787eu)) = (uint16_t)(0x3fu);
L_004556f2:  // mov eax, 0x677880
    eax = (uint32_t)(0x677880u);
L_004556f7:  // lea edx, [esp + 0x80]
    edx = (uint32_t)((uint32_t)(esp + 0x80u));
L_004556fe:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004556ff:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455700:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455705u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455705:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00455708:  // jmp 0x455a67
    goto L_00455a67;
L_0045570d:  // push 0x52
    t0 = 0x52u; esp -= 4; M32(esp) = t0;
L_0045570f:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455714u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455714:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455715:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_0045571c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045571d:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455722u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455722:  // jmp 0x455a64
    goto L_00455a64;
L_00455727:  // push 0x53
    t0 = 0x53u; esp -= 4; M32(esp) = t0;
L_00455729:  // jmp 0x455a13
    goto L_00455a13;
L_0045572e:  // movsx eax, word ptr [esi + 8]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esi + 0x8u))));
L_00455732:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_00455735:  // ja 0x455a67
    if ((!f.cf && !f.zf)) goto L_00455a67;
L_0045573b:  // jmp dword ptr [eax*4 + 0x455ff0]
    t0 = M32((uint32_t)(eax * 4u + 0x455ff0u));
    switch (t0) {
    case 0x00455742u: goto L_00455742;
    case 0x0045575cu: goto L_0045575c;
    case 0x00455776u: goto L_00455776;
    case 0x0045577du: goto L_0045577d;
    case 0x00455797u: goto L_00455797;
    case 0x00455ae1u: goto L_00455ae1;
    case 0x00455bc3u: goto L_00455bc3;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00455742:  // push 0x54
    t0 = 0x54u; esp -= 4; M32(esp) = t0;
L_00455744:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455749u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455749:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00455750:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455751:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455752:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455757u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455757:  // jmp 0x455a64
    goto L_00455a64;
L_0045575c:  // push 0x73
    t0 = 0x73u; esp -= 4; M32(esp) = t0;
L_0045575e:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455763u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455763:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455764:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_0045576b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045576c:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455771u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455771:  // jmp 0x455a64
    goto L_00455a64;
L_00455776:  // push 0x72
    t0 = 0x72u; esp -= 4; M32(esp) = t0;
L_00455778:  // jmp 0x455a13
    goto L_00455a13;
L_0045577d:  // push 0x55
    t0 = 0x55u; esp -= 4; M32(esp) = t0;
L_0045577f:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455784u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455784:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_0045578b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045578c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045578d:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455792u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455792:  // jmp 0x455a64
    goto L_00455a64;
L_00455797:  // push 0x56
    t0 = 0x56u; esp -= 4; M32(esp) = t0;
L_00455799:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045579eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045579e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045579f:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_004557a6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004557a7:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004557acu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004557ac:  // jmp 0x455a64
    goto L_00455a64;
L_004557b1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004557b3:  // jl 0x4557f7
    if ((f.sf != f.of)) goto L_004557f7;
L_004557b5:  // cmp eax, dword ptr [0x888ff8]
    t0 = lsub<32>(eax, M32((uint32_t)(0x888ff8u)), f);
L_004557bb:  // jge 0x4557f7
    if ((f.sf == f.of)) goto L_004557f7;
L_004557bd:  // add eax, 0x58
    t0 = ladd<32>(eax, 0x58u, f);
    eax = (uint32_t)(t0);
L_004557c0:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004557c2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004557c3:  // mov dword ptr [esp + 0x304], 0x218
    M32((uint32_t)(esp + 0x304u)) = (uint32_t)(0x218u);
L_004557ce:  // mov dword ptr [esp + 0x308], 0x10
    M32((uint32_t)(esp + 0x308u)) = (uint32_t)(0x10u);
L_004557d9:  // mov dword ptr [esp + 0x30c], ecx
    M32((uint32_t)(esp + 0x30cu)) = (uint32_t)(ecx);
L_004557e0:  // mov dword ptr [esp + 0x310], ecx
    M32((uint32_t)(esp + 0x310u)) = (uint32_t)(ecx);
L_004557e7:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004557ecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004557ec:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_004557f3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004557f4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004557f5:  // jmp 0x455807
    goto L_00455807;
L_004557f7:  // push 0x57
    t0 = 0x57u; esp -= 4; M32(esp) = t0;
L_004557f9:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004557feu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004557fe:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00455805:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455806:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455807:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045580cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045580c:  // movsx eax, word ptr [esi + 8]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(esi + 0x8u))));
L_00455810:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00455813:  // lea ecx, [esp + 0x2d8]
    ecx = (uint32_t)((uint32_t)(esp + 0x2d8u));
L_0045581a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045581b:  // push 0x629110
    t0 = 0x629110u; esp -= 4; M32(esp) = t0;
L_00455820:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455821:  // call 0x55e598
    t0 = 0x0055e598u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455826u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455826:  // lea edx, [esp + 0x2e4]
    edx = (uint32_t)((uint32_t)(esp + 0x2e4u));
L_0045582d:  // lea eax, [esp + 0x8c]
    eax = (uint32_t)((uint32_t)(esp + 0x8cu));
L_00455834:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455835:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455836:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045583bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045583b:  // add esp, 0x14
    t0 = ladd<32>(esp, 0x14u, f);
    esp = (uint32_t)(t0);
L_0045583e:  // jmp 0x455a67
    goto L_00455a67;
L_00455843:  // cmp edi, 6
    t0 = lsub<32>(edi, 0x6u, f);
L_00455846:  // jne 0x45584f
    if (!f.zf) goto L_0045584f;
L_00455848:  // mov edi, 4
    edi = (uint32_t)(0x4u);
L_0045584d:  // jmp 0x455859
    goto L_00455859;
L_0045584f:  // cmp edi, 7
    t0 = lsub<32>(edi, 0x7u, f);
L_00455852:  // jne 0x455859
    if (!f.zf) goto L_00455859;
L_00455854:  // mov edi, 5
    edi = (uint32_t)(0x5u);
L_00455859:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0045585b:  // jl 0x45589f
    if ((f.sf != f.of)) goto L_0045589f;
L_0045585d:  // cmp eax, dword ptr [0x888ff8]
    t0 = lsub<32>(eax, M32((uint32_t)(0x888ff8u)), f);
L_00455863:  // jge 0x45589f
    if ((f.sf == f.of)) goto L_0045589f;
L_00455865:  // add eax, 0x5e
    t0 = ladd<32>(eax, 0x5eu, f);
    eax = (uint32_t)(t0);
L_00455868:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0045586a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045586b:  // mov dword ptr [esp + 0x51c], 0x218
    M32((uint32_t)(esp + 0x51cu)) = (uint32_t)(0x218u);
L_00455876:  // mov dword ptr [esp + 0x520], 0x10
    M32((uint32_t)(esp + 0x520u)) = (uint32_t)(0x10u);
L_00455881:  // mov dword ptr [esp + 0x524], ecx
    M32((uint32_t)(esp + 0x524u)) = (uint32_t)(ecx);
L_00455888:  // mov dword ptr [esp + 0x528], ecx
    M32((uint32_t)(esp + 0x528u)) = (uint32_t)(ecx);
L_0045588f:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455894u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455894:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_0045589b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045589c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045589d:  // jmp 0x4558af
    goto L_004558af;
L_0045589f:  // push 0x5d
    t0 = 0x5du; esp -= 4; M32(esp) = t0;
L_004558a1:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004558a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004558a6:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_004558ad:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004558ae:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004558af:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004558b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004558b4:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004558b7:  // lea eax, [esp + 0x80]
    eax = (uint32_t)((uint32_t)(esp + 0x80u));
L_004558be:  // push 0x629120
    t0 = 0x629120u; esp -= 4; M32(esp) = t0;
L_004558c3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004558c4:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004558c9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004558c9:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004558cc:  // cmp edi, 4
    t0 = lsub<32>(edi, 0x4u, f);
L_004558cf:  // jne 0x4558e2
    if (!f.zf) goto L_004558e2;
L_004558d1:  // mov si, word ptr [esi + 8]
    esi = (esi & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + 0x8u))) & 0xffffu);
L_004558d5:  // cmp si, -1
    t0 = lsub<16>((esi & 0xffffu), 0xffffu, f);
L_004558d9:  // jne 0x45590f
    if (!f.zf) goto L_0045590f;
L_004558db:  // push 0x66
    t0 = 0x66u; esp -= 4; M32(esp) = t0;
L_004558dd:  // jmp 0x455a13
    goto L_00455a13;
L_004558e2:  // cmp edi, 5
    t0 = lsub<32>(edi, 0x5u, f);
L_004558e5:  // jne 0x455a67
    if (!f.zf) goto L_00455a67;
L_004558eb:  // mov si, word ptr [esi + 8]
    esi = (esi & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + 0x8u))) & 0xffffu);
L_004558ef:  // cmp si, -1
    t0 = lsub<16>((esi & 0xffffu), 0xffffu, f);
L_004558f3:  // jne 0x45592f
    if (!f.zf) goto L_0045592f;
L_004558f5:  // push 0x67
    t0 = 0x67u; esp -= 4; M32(esp) = t0;
L_004558f7:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004558fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004558fc:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00455903:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455904:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455905:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045590au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045590a:  // jmp 0x455a64
    goto L_00455a64;
L_0045590f:  // cmp si, -2
    t0 = lsub<16>((esi & 0xffffu), 0xfffeu, f);
L_00455913:  // jne 0x45593c
    if (!f.zf) goto L_0045593c;
L_00455915:  // push 0x68
    t0 = 0x68u; esp -= 4; M32(esp) = t0;
L_00455917:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045591cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045591c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045591d:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_00455924:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455925:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045592au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045592a:  // jmp 0x455a64
    goto L_00455a64;
L_0045592f:  // cmp si, -2
    t0 = lsub<16>((esi & 0xffffu), 0xfffeu, f);
L_00455933:  // jne 0x45595c
    if (!f.zf) goto L_0045595c;
L_00455935:  // push 0x69
    t0 = 0x69u; esp -= 4; M32(esp) = t0;
L_00455937:  // jmp 0x455a13
    goto L_00455a13;
L_0045593c:  // cmp si, -3
    t0 = lsub<16>((esi & 0xffffu), 0xfffdu, f);
L_00455940:  // jne 0x45597c
    if (!f.zf) goto L_0045597c;
L_00455942:  // push 0x6a
    t0 = 0x6au; esp -= 4; M32(esp) = t0;
L_00455944:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455949u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455949:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00455950:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455951:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455952:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455957u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455957:  // jmp 0x455a64
    goto L_00455a64;
L_0045595c:  // cmp si, -3
    t0 = lsub<16>((esi & 0xffffu), 0xfffdu, f);
L_00455960:  // jne 0x455989
    if (!f.zf) goto L_00455989;
L_00455962:  // push 0x6b
    t0 = 0x6bu; esp -= 4; M32(esp) = t0;
L_00455964:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455969u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455969:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045596a:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_00455971:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455972:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455977u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455977:  // jmp 0x455a64
    goto L_00455a64;
L_0045597c:  // cmp si, -4
    t0 = lsub<16>((esi & 0xffffu), 0xfffcu, f);
L_00455980:  // jne 0x4559a9
    if (!f.zf) goto L_004559a9;
L_00455982:  // push 0x6c
    t0 = 0x6cu; esp -= 4; M32(esp) = t0;
L_00455984:  // jmp 0x455a13
    goto L_00455a13;
L_00455989:  // cmp si, -4
    t0 = lsub<16>((esi & 0xffffu), 0xfffcu, f);
L_0045598d:  // jne 0x4559c9
    if (!f.zf) goto L_004559c9;
L_0045598f:  // push 0x6d
    t0 = 0x6du; esp -= 4; M32(esp) = t0;
L_00455991:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455996u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455996:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_0045599d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045599e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045599f:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004559a4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004559a4:  // jmp 0x455a64
    goto L_00455a64;
L_004559a9:  // cmp si, -5
    t0 = lsub<16>((esi & 0xffffu), 0xfffbu, f);
L_004559ad:  // jne 0x4559d3
    if (!f.zf) goto L_004559d3;
L_004559af:  // push 0x6e
    t0 = 0x6eu; esp -= 4; M32(esp) = t0;
L_004559b1:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004559b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004559b6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004559b7:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_004559be:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004559bf:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004559c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004559c4:  // jmp 0x455a64
    goto L_00455a64;
L_004559c9:  // cmp si, -5
    t0 = lsub<16>((esi & 0xffffu), 0xfffbu, f);
L_004559cd:  // jne 0x4559f4
    if (!f.zf) goto L_004559f4;
L_004559cf:  // push 0x6f
    t0 = 0x6fu; esp -= 4; M32(esp) = t0;
L_004559d1:  // jmp 0x455a13
    goto L_00455a13;
L_004559d3:  // cmp si, -6
    t0 = lsub<16>((esi & 0xffffu), 0xfffau, f);
L_004559d7:  // jne 0x455a67
    if (!f.zf) goto L_00455a67;
L_004559dd:  // push 0x70
    t0 = 0x70u; esp -= 4; M32(esp) = t0;
L_004559df:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004559e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004559e4:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_004559eb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004559ec:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004559ed:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004559f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004559f2:  // jmp 0x455a64
    goto L_00455a64;
L_004559f4:  // cmp si, -6
    t0 = lsub<16>((esi & 0xffffu), 0xfffau, f);
L_004559f8:  // jne 0x455a67
    if (!f.zf) goto L_00455a67;
L_004559fa:  // push 0x71
    t0 = 0x71u; esp -= 4; M32(esp) = t0;
L_004559fc:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455a01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455a01:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455a02:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_00455a09:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455a0a:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455a0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455a0f:  // jmp 0x455a64
    goto L_00455a64;
L_00455a11:  // push 0x78
    t0 = 0x78u; esp -= 4; M32(esp) = t0;
L_00455a13:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455a18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455a18:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00455a1f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455a20:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455a21:  // call 0x55e624
    t0 = 0x0055e624u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455a26u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455a26:  // jmp 0x455a64
    goto L_00455a64;
L_00455a28:  // cmp ecx, 0x37
    t0 = lsub<32>(ecx, 0x37u, f);
L_00455a2b:  // jne 0x455a47
    if (!f.zf) goto L_00455a47;
L_00455a2d:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00455a2f:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_00455a32:  // je 0x455a40
    if (f.zf) goto L_00455a40;
L_00455a34:  // sub eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_00455a37:  // jne 0x455a50
    if (!f.zf) goto L_00455a50;
L_00455a39:  // mov ecx, 0x34
    ecx = (uint32_t)(0x34u);
L_00455a3e:  // jmp 0x455a50
    goto L_00455a50;
L_00455a40:  // mov ecx, 0x33
    ecx = (uint32_t)(0x33u);
L_00455a45:  // jmp 0x455a50
    goto L_00455a50;
L_00455a47:  // cmp edx, 1
    t0 = lsub<32>(edx, 0x1u, f);
L_00455a4a:  // jne 0x455d52
    if (!f.zf) goto L_00455d52;
L_00455a50:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455a51:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455a56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455a56:  // lea edx, [esp + 0x84]
    edx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00455a5d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455a5e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455a5f:  // call 0x55e64e
    t0 = 0x0055e64eu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455a64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455a64:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_00455a67:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00455a6b:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_00455a72:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455a73:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455a74:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00455a76:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00455a7b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455a80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455a80:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00455a82:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455a87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455a87:  // mov edi, dword ptr [esp + 0x734]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x734u)));
L_00455a8e:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00455a90:  // sub eax, 0
    t0 = lsub<32>(eax, 0x0u, f);
    eax = (uint32_t)(t0);
L_00455a93:  // je 0x455ac1
    if (f.zf) goto L_00455ac1;
L_00455a95:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00455a96:  // je 0x455aab
    if (f.zf) goto L_00455aab;
L_00455a98:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00455a99:  // jne 0x455ac9
    if (!f.zf) goto L_00455ac9;
L_00455a9b:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_00455a9f:  // fsubr dword ptr [0x5db494]
    ST(0) = ((long double)F32((uint32_t)(0x5db494u))) - (ST(0));
L_00455aa5:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00455aa9:  // jmp 0x455ac9
    goto L_00455ac9;
L_00455aab:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_00455aaf:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00455ab5:  // fsubr dword ptr [0x5db3e8]
    ST(0) = ((long double)F32((uint32_t)(0x5db3e8u))) - (ST(0));
L_00455abb:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00455abf:  // jmp 0x455ac9
    goto L_00455ac9;
L_00455ac1:  // mov dword ptr [esp + 0x14], 0x42480000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x42480000u);
L_00455ac9:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00455acd:  // cmp ebx, 0x46
    t0 = lsub<32>(ebx, 0x46u, f);
L_00455ad0:  // ja 0x455ae1
    if ((!f.cf && !f.zf)) goto L_00455ae1;
L_00455ad2:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_00455ad4:  // mov dl, byte ptr [ebx + 0x45600c]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + 0x45600cu))) & 0xffu);
L_00455ada:  // jmp dword ptr [edx*4 + 0x456004]
    t0 = M32((uint32_t)(edx * 4u + 0x456004u));
    switch (t0) {
    case 0x00455ae1u: goto L_00455ae1;
    case 0x00455bc3u: goto L_00455bc3;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_00455ae1:  // cmp edi, 1
    t0 = lsub<32>(edi, 0x1u, f);
L_00455ae4:  // je 0x455bc3
    if (f.zf) goto L_00455bc3;
L_00455aea:  // mov eax, dword ptr [esp + 0x740]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x740u)));
L_00455af1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00455af3:  // je 0x455b94
    if (f.zf) goto L_00455b94;
L_00455af9:  // mov al, byte ptr [0x6290b4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x6290b4u))) & 0xffu);
L_00455afe:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00455b00:  // je 0x455b43
    if (f.zf) goto L_00455b43;
L_00455b02:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00455b06:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455b07:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00455b0b:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00455b0f:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00455b12:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00455b16:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455b17:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00455b1b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00455b1e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00455b1f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455b20:  // call 0x523b50
    t0 = 0x00523b50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455b25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455b25:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00455b28:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00455b2a:  // je 0x455b43
    if (f.zf) goto L_00455b43;
L_00455b2c:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00455b30:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00455b34:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00455b36:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00455b37:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00455b39:  // mov dword ptr [ebx + 0x28], ecx
    M32((uint32_t)(ebx + 0x28u)) = (uint32_t)(ecx);
L_00455b3c:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00455b3e:  // mov dword ptr [ebx + 0x24], eax
    M32((uint32_t)(ebx + 0x24u)) = (uint32_t)(eax);
L_00455b41:  // jmp 0x455b47
    goto L_00455b47;
L_00455b43:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00455b47:  // mov al, byte ptr [0x6290b4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x6290b4u))) & 0xffu);
L_00455b4c:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00455b4e:  // je 0x455b98
    if (f.zf) goto L_00455b98;
L_00455b50:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00455b54:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455b55:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00455b59:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00455b5d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00455b60:  // fild dword ptr [esp + 0x30]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_00455b64:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455b65:  // fadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x1cu)));
L_00455b69:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00455b6c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00455b6d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455b6e:  // call 0x523cc0
    t0 = 0x00523cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455b73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455b73:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00455b76:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_00455b78:  // je 0x455b98
    if (f.zf) goto L_00455b98;
L_00455b7a:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00455b7c:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_00455b7e:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00455b7f:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00455b81:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00455b83:  // mov dword ptr [ebx + 0x24], eax
    M32((uint32_t)(ebx + 0x24u)) = (uint32_t)(eax);
L_00455b86:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00455b8a:  // mov dword ptr [ebx + 0x28], eax
    M32((uint32_t)(ebx + 0x28u)) = (uint32_t)(eax);
L_00455b8d:  // call 0x456080
    t0 = 0x00456080u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455b92u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455b92:  // jmp 0x455b98
    goto L_00455b98;
L_00455b94:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00455b98:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00455b9c:  // mov eax, dword ptr [ebx + 0x28]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x28u)));
L_00455b9f:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_00455ba1:  // jne 0x455bc8
    if (!f.zf) goto L_00455bc8;
L_00455ba3:  // mov ecx, dword ptr [ebx + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x24u)));
L_00455ba6:  // mov eax, edi
    eax = (uint32_t)(edi);
L_00455ba8:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00455ba9:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00455bab:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00455bad:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_00455baf:  // jne 0x455bc8
    if (!f.zf) goto L_00455bc8;
L_00455bb1:  // mov eax, dword ptr [esp + 0x740]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x740u)));
L_00455bb8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00455bba:  // je 0x455bc8
    if (f.zf) goto L_00455bc8;
L_00455bbc:  // mov ebp, 0xff7f6f2f
    ebp = (uint32_t)(0xff7f6f2fu);
L_00455bc1:  // jmp 0x455bc8
    goto L_00455bc8;
L_00455bc3:  // mov ebp, 0xff3f7f2f
    ebp = (uint32_t)(0xff3f7f2fu);
L_00455bc8:  // mov bl, byte ptr [esp + 0x13]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_00455bcc:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_00455bce:  // je 0x455c31
    if (f.zf) goto L_00455c31;
L_00455bd0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00455bd5:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455bdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455bda:  // fld qword ptr [0x5db488]
    lpush(x, (long double)F64((uint32_t)(0x5db488u)));
L_00455be0:  // call 0x55e3ea
    t0 = 0x0055e3eau; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455be5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455be5:  // fmul dword ptr [0x5d85e0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85e0u)));
L_00455beb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00455bed:  // mov byte ptr [0x640054], 0
    M8((uint32_t)(0x640054u)) = (uint8_t)(0x0u);
L_00455bf4:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00455bf7:  // fcos 
    ST(0) = lfcos(ST(0));
L_00455bf9:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00455bfb:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_00455c01:  // and eax, 0xffff0000
    t0 = llog<32>(eax & 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00455c06:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00455c0c:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00455c12:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00455c18:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00455c1c:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00455c20:  // imul eax, edx
    t0 = limul32(eax, edx, f);
    eax = (uint32_t)(t0);
L_00455c23:  // imul ecx, edx
    t0 = limul32(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_00455c26:  // xor eax, ebp
    t0 = llog<32>(eax ^ ebp, f);
    eax = (uint32_t)(t0);
L_00455c28:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_00455c2d:  // xor eax, ecx
    t0 = llog<32>(eax ^ ecx, f);
    eax = (uint32_t)(t0);
L_00455c2f:  // jmp 0x455c5c
    goto L_00455c5c;
L_00455c31:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00455c33:  // shr ecx, 8
    t0 = lshr<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_00455c36:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_00455c38:  // and ecx, 0xff0000
    t0 = llog<32>(ecx & 0xff0000u, f);
    ecx = (uint32_t)(t0);
L_00455c3e:  // and eax, 0xffff0000
    t0 = llog<32>(eax & 0xffff0000u, f);
    eax = (uint32_t)(t0);
L_00455c43:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00455c45:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00455c48:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_00455c4a:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00455c4c:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_00455c4e:  // xor eax, ebp
    t0 = llog<32>(eax ^ ebp, f);
    eax = (uint32_t)(t0);
L_00455c50:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00455c53:  // and eax, 0xffffff
    t0 = llog<32>(eax & 0xffffffu, f);
    eax = (uint32_t)(t0);
L_00455c58:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_00455c5a:  // xor eax, edx
    t0 = llog<32>(eax ^ edx, f);
    eax = (uint32_t)(t0);
L_00455c5c:  // mov cl, byte ptr [0x6290b4]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x6290b4u))) & 0xffu);
L_00455c62:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_00455c64:  // jne 0x455d0d
    if (!f.zf) goto L_00455d0d;
L_00455c6a:  // test bl, bl
    t0 = llog<8>((ebx & 0xffu) & (ebx & 0xffu), f);
L_00455c6c:  // jne 0x455d0d
    if (!f.zf) goto L_00455d0d;
L_00455c72:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00455c74:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00455c76:  // shr ecx, 0x18
    t0 = lshr<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_00455c79:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_00455c7d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00455c7f:  // mov dword ptr [esp + 0x54], ecx
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(ecx);
L_00455c83:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_00455c87:  // fild qword ptr [esp + 0x50]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x50u)));
L_00455c8b:  // shr edi, 0x10
    t0 = lshr<32>(edi, 0x10u, f);
    edi = (uint32_t)(t0);
L_00455c8e:  // and edi, 0xff
    t0 = llog<32>(edi & 0xffu, f);
    edi = (uint32_t)(t0);
L_00455c94:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_00455c98:  // fmul dword ptr [0x5d8df8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8df8u)));
L_00455c9e:  // mov dword ptr [esp + 0x38], edi
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(edi);
L_00455ca2:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_00455ca6:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00455caa:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00455cae:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00455cb1:  // fild qword ptr [esp + 0x38]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x38u)));
L_00455cb5:  // fmul dword ptr [0x5d8df8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8df8u)));
L_00455cbb:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00455cbf:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00455cc3:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_00455cc5:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00455cc7:  // shr edi, 8
    t0 = lshr<32>(edi, 0x8u, f);
    edi = (uint32_t)(t0);
L_00455cca:  // and edi, 0xff
    t0 = llog<32>(edi & 0xffu, f);
    edi = (uint32_t)(t0);
L_00455cd0:  // and eax, 0xff
    t0 = llog<32>(eax & 0xffu, f);
    eax = (uint32_t)(t0);
L_00455cd5:  // mov dword ptr [esp + 0x48], edi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(edi);
L_00455cd9:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_00455cdd:  // fild qword ptr [esp + 0x48]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x48u)));
L_00455ce1:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00455ce4:  // fmul dword ptr [0x5d8df8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8df8u)));
L_00455cea:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00455cee:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00455cf2:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_00455cf4:  // shl edx, 8
    t0 = lshl<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_00455cf7:  // fild qword ptr [esp + 0x40]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x40u)));
L_00455cfb:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00455d01:  // fistp qword ptr [esp + 0x24]
    M64((uint32_t)(esp + 0x24u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00455d05:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_00455d09:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00455d0b:  // jmp 0x455d0f
    goto L_00455d0f;
L_00455d0d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00455d0f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455d10:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00455d14:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455d15:  // lea ecx, [esp + 0x88]
    ecx = (uint32_t)((uint32_t)(esp + 0x88u));
L_00455d1c:  // push 0x447a0000
    t0 = 0x447a0000u; esp -= 4; M32(esp) = t0;
L_00455d21:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00455d22:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00455d23:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00455d28:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00455d2d:  // push 0x3ea3d70a
    t0 = 0x3ea3d70au; esp -= 4; M32(esp) = t0;
L_00455d32:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00455d33:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00455d34:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00455d36:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00455d3b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455d40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455d40:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00455d42:  // call 0x465710
    t0 = 0x00465710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455d47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455d47:  // mov esi, dword ptr [esp + 0x1c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00455d4b:  // mov edx, dword ptr [esp + 0x734]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x734u)));
L_00455d52:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00455d56:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_00455d5c:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00455d5d:  // cmp esi, 0x16
    t0 = lsub<32>(esi, 0x16u, f);
L_00455d60:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_00455d64:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00455d68:  // jl 0x455073
    if ((f.sf != f.of)) goto L_00455073;
L_00455d6e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00455d70:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_00455d72:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00455d74:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00455d79:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455d7eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455d7e:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00455d80:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_00455d82:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00455d84:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00455d89:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00455d8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00455d8e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00455d8f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00455d90:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00455d91:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00455d92:  // add esp, 0x720
    t0 = ladd<32>(esp, 0x720u, f);
    esp = (uint32_t)(t0);
L_00455d98:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00455010, 00455010)
