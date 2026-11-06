// lifted from 004b0fb0 (FUN_004b0fb0, 2692 bytes, 725 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004b0fb0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004b0fb0;
L_004b0fb0:  // sub esp, 0x16c
    t0 = lsub<32>(esp, 0x16cu, f);
    esp = (uint32_t)(t0);
L_004b0fb6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b0fb7:  // mov ebx, dword ptr [esp + 0x180]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b0fbe:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b0fbf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b0fc0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b0fc1:  // mov edi, dword ptr [0x8a9aac]
    edi = (uint32_t)(M32((uint32_t)(0x8a9aacu)));
L_004b0fc7:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004b0fc9:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_004b0fcd:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b0fcf:  // mov dword ptr [esp + 0x68], esi
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(esi);
L_004b0fd3:  // je 0x4b0fe9
    if (f.zf) goto L_004b0fe9;
L_004b0fd5:  // mov al, byte ptr [esp + 0x19c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x19cu))) & 0xffu);
L_004b0fdc:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004b0fde:  // je 0x4b0fe9
    if (f.zf) goto L_004b0fe9;
L_004b0fe0:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004b0fe2:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b0fe4:  // call dword ptr [eax + 0x70]
    t0 = M32((uint32_t)(eax + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b0fe7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b0fe7:  // jmp 0x4b0feb
    goto L_004b0feb;
L_004b0fe9:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004b0feb:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b0fed:  // je 0x4b10f6
    if (f.zf) goto L_004b10f6;
L_004b0ff3:  // cmp ebx, dword ptr [0x704da0]
    t0 = lsub<32>(ebx, M32((uint32_t)(0x704da0u)), f);
L_004b0ff9:  // jne 0x4b10f6
    if (!f.zf) goto L_004b10f6;
L_004b0fff:  // cmp dword ptr [0x704da4], esi
    t0 = lsub<32>(M32((uint32_t)(0x704da4u)), esi, f);
L_004b1005:  // jne 0x4b10f6
    if (!f.zf) goto L_004b10f6;
L_004b100b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b100d:  // jne 0x4b10f6
    if (!f.zf) goto L_004b10f6;
L_004b1013:  // mov edx, dword ptr [esp + 0x198]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004b101a:  // test dl, dl
    t0 = llog<8>((edx & 0xffu) & (edx & 0xffu), f);
L_004b101c:  // jne 0x4b1087
    if (!f.zf) goto L_004b1087;
L_004b101e:  // mov ecx, dword ptr [0x704d5c]
    ecx = (uint32_t)(M32((uint32_t)(0x704d5cu)));
L_004b1024:  // cmp edi, ecx
    t0 = lsub<32>(edi, ecx, f);
L_004b1026:  // mov edi, dword ptr [esp + 0x180]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b102d:  // jne 0x4b1104
    if (!f.zf) goto L_004b1104;
L_004b1033:  // cmp edi, dword ptr [0x704d54]
    t0 = lsub<32>(edi, M32((uint32_t)(0x704d54u)), f);
L_004b1039:  // jne 0x4b1104
    if (!f.zf) goto L_004b1104;
L_004b103f:  // mov edi, dword ptr [esp + 0x190]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_004b1046:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b104b:  // mov esi, 0x704d20
    esi = (uint32_t)(0x704d20u);
L_004b1050:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b1052:  // mov ecx, dword ptr [esp + 0x194]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b1059:  // mov edx, dword ptr [0x704ce0]
    edx = (uint32_t)(M32((uint32_t)(0x704ce0u)));
L_004b105f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b1060:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b1061:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004b1063:  // mov eax, dword ptr [0x704ce4]
    eax = (uint32_t)(M32((uint32_t)(0x704ce4u)));
L_004b1068:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b1069:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b106a:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004b106d:  // mov edx, dword ptr [0x704ce8]
    edx = (uint32_t)(M32((uint32_t)(0x704ce8u)));
L_004b1073:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004b1076:  // mov eax, dword ptr [0x704cec]
    eax = (uint32_t)(M32((uint32_t)(0x704cecu)));
L_004b107b:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004b107e:  // add esp, 0x16c
    t0 = ladd<32>(esp, 0x16cu, f);
    esp = (uint32_t)(t0);
L_004b1084:  // ret 0x24
    c->target = M32(esp); esp += 40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004b1087:  // cmp dl, 1
    t0 = lsub<8>((edx & 0xffu), 0x1u, f);
L_004b108a:  // jne 0x4b10ed
    if (!f.zf) goto L_004b10ed;
L_004b108c:  // cmp edi, dword ptr [0x704d58]
    t0 = lsub<32>(edi, M32((uint32_t)(0x704d58u)), f);
L_004b1092:  // jne 0x4b10ed
    if (!f.zf) goto L_004b10ed;
L_004b1094:  // mov ecx, dword ptr [esp + 0x180]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b109b:  // mov edi, dword ptr [0x704d50]
    edi = (uint32_t)(M32((uint32_t)(0x704d50u)));
L_004b10a1:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_004b10a3:  // jne 0x4b10ed
    if (!f.zf) goto L_004b10ed;
L_004b10a5:  // mov edi, dword ptr [esp + 0x190]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_004b10ac:  // mov edx, dword ptr [esp + 0x194]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b10b3:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b10b8:  // mov esi, 0x704cf0
    esi = (uint32_t)(0x704cf0u);
L_004b10bd:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b10bf:  // mov eax, dword ptr [0x704cd0]
    eax = (uint32_t)(M32((uint32_t)(0x704cd0u)));
L_004b10c4:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b10c5:  // mov dword ptr [edx], eax
    M32((uint32_t)(edx)) = (uint32_t)(eax);
L_004b10c7:  // mov ecx, dword ptr [0x704cd4]
    ecx = (uint32_t)(M32((uint32_t)(0x704cd4u)));
L_004b10cd:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b10ce:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b10cf:  // mov dword ptr [edx + 4], ecx
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(ecx);
L_004b10d2:  // mov eax, dword ptr [0x704cd8]
    eax = (uint32_t)(M32((uint32_t)(0x704cd8u)));
L_004b10d7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b10d8:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004b10db:  // mov ecx, dword ptr [0x704cdc]
    ecx = (uint32_t)(M32((uint32_t)(0x704cdcu)));
L_004b10e1:  // mov dword ptr [edx + 0xc], ecx
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(ecx);
L_004b10e4:  // add esp, 0x16c
    t0 = ladd<32>(esp, 0x16cu, f);
    esp = (uint32_t)(t0);
L_004b10ea:  // ret 0x24
    c->target = M32(esp); esp += 40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004b10ed:  // mov edi, dword ptr [esp + 0x180]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b10f4:  // jmp 0x4b1104
    goto L_004b1104;
L_004b10f6:  // mov edi, dword ptr [esp + 0x180]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b10fd:  // mov edx, dword ptr [esp + 0x198]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004b1104:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b1106:  // mov eax, dword ptr [esp + 0x1a0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1a0u)));
L_004b110d:  // jne 0x4b16d1
    if (!f.zf) goto L_004b16d1;
L_004b1113:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004b1115:  // jne 0x4b16d1
    if (!f.zf) goto L_004b16d1;
L_004b111b:  // mov ecx, dword ptr [esi + 0x118]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x118u)));
L_004b1121:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b1123:  // jle 0x4b16d1
    if ((f.zf || f.sf != f.of)) goto L_004b16d1;
L_004b1129:  // mov eax, dword ptr [esi + 0x11c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x11cu)));
L_004b112f:  // mov edx, esi
    edx = (uint32_t)(esi);
L_004b1131:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b1133:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_004b1137:  // je 0x4b1149
    if (f.zf) goto L_004b1149;
L_004b1139:  // mov edx, dword ptr [edx + 0x98]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x98u)));
L_004b113f:  // mov eax, dword ptr [edx + 0x11c]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x11cu)));
L_004b1145:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b1147:  // jne 0x4b1139
    if (!f.zf) goto L_004b1139;
L_004b1149:  // mov eax, dword ptr [esi + 0x120]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x120u)));
L_004b114f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b1151:  // je 0x4b116b
    if (f.zf) goto L_004b116b;
L_004b1153:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b1157:  // mov eax, dword ptr [eax + 0x98]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x98u)));
L_004b115d:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_004b1161:  // mov ecx, dword ptr [eax + 0x120]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x120u)));
L_004b1167:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b1169:  // jne 0x4b1153
    if (!f.zf) goto L_004b1153;
L_004b116b:  // mov ebx, dword ptr [edx + 0x118]
    ebx = (uint32_t)(M32((uint32_t)(edx + 0x118u)));
L_004b1171:  // mov ebp, dword ptr [esp + 0x180]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b1178:  // mov ecx, dword ptr [esp + 0x184]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x184u)));
L_004b117f:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004b1181:  // mov eax, edi
    eax = (uint32_t)(edi);
L_004b1183:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004b1185:  // jl 0x4b118a
    if ((f.sf != f.of)) goto L_004b118a;
L_004b1187:  // lea eax, [ebx - 1]
    eax = (uint32_t)((uint32_t)(ebx + 0xffffffffu));
L_004b118a:  // cmp dword ptr [esp + 0x184], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x184u)), ebx, f);
L_004b1191:  // jl 0x4b1196
    if ((f.sf != f.of)) goto L_004b1196;
L_004b1193:  // lea ecx, [ebx - 1]
    ecx = (uint32_t)((uint32_t)(ebx + 0xffffffffu));
L_004b1196:  // mov ebx, dword ptr [esp + 0x20]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b119a:  // mov ebp, dword ptr [esp + 0x180]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b11a1:  // mov ebx, dword ptr [ebx + 0x118]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x118u)));
L_004b11a7:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_004b11a9:  // jl 0x4b11ae
    if ((f.sf != f.of)) goto L_004b11ae;
L_004b11ab:  // lea edi, [ebx - 1]
    edi = (uint32_t)((uint32_t)(ebx + 0xffffffffu));
L_004b11ae:  // cmp dword ptr [esp + 0x184], ebx
    t0 = lsub<32>(M32((uint32_t)(esp + 0x184u)), ebx, f);
L_004b11b5:  // jl 0x4b11ba
    if ((f.sf != f.of)) goto L_004b11ba;
L_004b11b7:  // lea esi, [ebx - 1]
    esi = (uint32_t)((uint32_t)(ebx + 0xffffffffu));
L_004b11ba:  // mov edx, dword ptr [edx + 0x104]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x104u)));
L_004b11c0:  // mov ebx, dword ptr [esp + 0x194]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b11c7:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004b11ca:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_004b11cc:  // lea esi, [esi + esi*2]
    esi = (uint32_t)((uint32_t)(esi + esi * 2u));
L_004b11cf:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004b11d2:  // fld dword ptr [ecx]
    lpush(x, (long double)F32((uint32_t)(ecx)));
L_004b11d4:  // fsub dword ptr [eax + edx]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + edx)));
L_004b11d7:  // fld dword ptr [ecx + 4]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x4u)));
L_004b11da:  // fsub dword ptr [eax + edx + 4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + edx + 0x4u)));
L_004b11de:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004b11e0:  // lea edi, [edi + edi*2]
    edi = (uint32_t)((uint32_t)(edi + edi * 2u));
L_004b11e3:  // shl esi, 4
    t0 = lshl<32>(esi, 0x4u, f);
    esi = (uint32_t)(t0);
L_004b11e6:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_004b11ea:  // fld dword ptr [ecx + 8]
    lpush(x, (long double)F32((uint32_t)(ecx + 0x8u)));
L_004b11ed:  // fsub dword ptr [eax + 8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b11f0:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b11f2:  // shl edi, 4
    t0 = lshl<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_004b11f5:  // fstp dword ptr [esp + 0x74]
    F32((uint32_t)(esp + 0x74u)) = lf32(ST(0));
    lpop(x);
L_004b11f9:  // fmul dword ptr [esp + 0x188]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x188u)));
L_004b1200:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_004b1204:  // fmul dword ptr [esp + 0x188]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x188u)));
L_004b120b:  // fstp dword ptr [esp + 0x80]
    F32((uint32_t)(esp + 0x80u)) = lf32(ST(0));
    lpop(x);
L_004b1212:  // fld dword ptr [esp + 0x74]
    lpush(x, (long double)F32((uint32_t)(esp + 0x74u)));
L_004b1216:  // fmul dword ptr [esp + 0x188]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x188u)));
L_004b121d:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004b1224:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004b1226:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_004b122a:  // fld dword ptr [esp + 0x80]
    lpush(x, (long double)F32((uint32_t)(esp + 0x80u)));
L_004b1231:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b1234:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004b1238:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004b123c:  // fld dword ptr [esp + 0x84]
    lpush(x, (long double)F32((uint32_t)(esp + 0x84u)));
L_004b1243:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b1246:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004b124a:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004b124c:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004b1250:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004b1254:  // mov dword ptr [ecx + 4], eax
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(eax);
L_004b1257:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004b125b:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004b125e:  // mov dword ptr [ecx + 0xc], eax
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(eax);
L_004b1261:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b1265:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1266:  // mov eax, dword ptr [ecx + 0x108]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x108u)));
L_004b126c:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_004b126e:  // lea ebp, [edi + eax]
    ebp = (uint32_t)((uint32_t)(edi + eax));
L_004b1271:  // fld dword ptr [esi + 0x28]
    lpush(x, (long double)F32((uint32_t)(esi + 0x28u)));
L_004b1274:  // fsub dword ptr [ebp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x28u)));
L_004b1277:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b127a:  // fld dword ptr [esi + 0x24]
    lpush(x, (long double)F32((uint32_t)(esi + 0x24u)));
L_004b127d:  // fsub dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004b1280:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1281:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b1284:  // fld dword ptr [esi + 0x20]
    lpush(x, (long double)F32((uint32_t)(esi + 0x20u)));
L_004b1287:  // fsub dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004b128a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b128b:  // lea ecx, [esp + 0x88]
    ecx = (uint32_t)((uint32_t)(esp + 0x88u));
L_004b1292:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b1295:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b129au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b129a:  // lea edx, [esp + 0x7c]
    edx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_004b129e:  // lea eax, [ebp + 0x10]
    eax = (uint32_t)((uint32_t)(ebp + 0x10u));
L_004b12a1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b12a2:  // lea ecx, [esp + 0x160]
    ecx = (uint32_t)((uint32_t)(esp + 0x160u));
L_004b12a9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b12aa:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b12ab:  // lea ecx, [esi + 0x10]
    ecx = (uint32_t)((uint32_t)(esi + 0x10u));
L_004b12ae:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b12b3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b12b3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b12b4:  // lea edx, [esp + 0x144]
    edx = (uint32_t)((uint32_t)(esp + 0x144u));
L_004b12bb:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b12bc:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b12bd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b12bf:  // call 0x40d120
    t0 = 0x0040d120u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b12c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b12c4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b12c5:  // lea ecx, [esp + 0x44]
    ecx = (uint32_t)((uint32_t)(esp + 0x44u));
L_004b12c9:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b12ceu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b12ce:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004b12d2:  // fmul dword ptr [esp + 0x188]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x188u)));
L_004b12d9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b12da:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b12dd:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004b12e1:  // fmul dword ptr [esp + 0x18c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18cu)));
L_004b12e8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b12e9:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b12ec:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004b12f0:  // fmul dword ptr [esp + 0x190]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x190u)));
L_004b12f7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b12f8:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004b12fc:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b12ff:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b1304u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b1304:  // mov esi, dword ptr [esp + 0x188]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x188u)));
L_004b130b:  // lea eax, [esp + 0x6c]
    eax = (uint32_t)((uint32_t)(esp + 0x6cu));
L_004b130f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b1310:  // lea ecx, [esp + 0x150]
    ecx = (uint32_t)((uint32_t)(esp + 0x150u));
L_004b1317:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b1318:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1319:  // lea ecx, [esp + 0x54]
    ecx = (uint32_t)((uint32_t)(esp + 0x54u));
L_004b131d:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b1322u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b1322:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b1323:  // lea edx, [esp + 0x174]
    edx = (uint32_t)((uint32_t)(esp + 0x174u));
L_004b132a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b132b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b132c:  // lea ecx, [esp + 0x48]
    ecx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004b1330:  // call 0x40d150
    t0 = 0x0040d150u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b1335u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b1335:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b1336:  // lea ecx, [esp + 0x108]
    ecx = (uint32_t)((uint32_t)(esp + 0x108u));
L_004b133d:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b1342u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b1342:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b1346:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1347:  // fld dword ptr [esp + 0x128]
    lpush(x, (long double)F32((uint32_t)(esp + 0x128u)));
L_004b134e:  // add edi, dword ptr [eax + 0x108]
    t0 = ladd<32>(edi, M32((uint32_t)(eax + 0x108u)), f);
    edi = (uint32_t)(t0);
L_004b1354:  // fadd dword ptr [edi + 0x28]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x28u)));
L_004b1357:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b135a:  // fld dword ptr [esp + 0x124]
    lpush(x, (long double)F32((uint32_t)(esp + 0x124u)));
L_004b1361:  // fadd dword ptr [edi + 0x24]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x24u)));
L_004b1364:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1365:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b1368:  // fld dword ptr [esp + 0x124]
    lpush(x, (long double)F32((uint32_t)(esp + 0x124u)));
L_004b136f:  // fadd dword ptr [edi + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x20u)));
L_004b1372:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1373:  // lea ecx, [esp + 0x34]
    ecx = (uint32_t)((uint32_t)(esp + 0x34u));
L_004b1377:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b137a:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b137fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b137f:  // lea ecx, [esp + 0x28]
    ecx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004b1383:  // lea edx, [esp + 0x10c]
    edx = (uint32_t)((uint32_t)(esp + 0x10cu));
L_004b138a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b138b:  // lea eax, [esp + 0x130]
    eax = (uint32_t)((uint32_t)(esp + 0x130u));
L_004b1392:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b1393:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b1394:  // lea ecx, [edi + 0x10]
    ecx = (uint32_t)((uint32_t)(edi + 0x10u));
L_004b1397:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b139cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b139c:  // lea ecx, [esp + 0x100]
    ecx = (uint32_t)((uint32_t)(esp + 0x100u));
L_004b13a3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b13a4:  // lea edx, [esp + 0x94]
    edx = (uint32_t)((uint32_t)(esp + 0x94u));
L_004b13ab:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b13ac:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b13ad:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004b13af:  // call 0x401ee0
    t0 = 0x00401ee0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b13b4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b13b4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b13b5:  // lea ecx, [esp + 0xd8]
    ecx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_004b13bc:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b13c1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b13c1:  // mov ebp, dword ptr [esp + 0x190]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_004b13c8:  // mov al, byte ptr [esp + 0x198]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x198u))) & 0xffu);
L_004b13cf:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b13d4:  // lea esi, [esp + 0xcc]
    esi = (uint32_t)((uint32_t)(esp + 0xccu));
L_004b13db:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004b13dd:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004b13df:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b13e1:  // jne 0x4b1663
    if (!f.zf) goto L_004b1663;
L_004b13e7:  // mov eax, dword ptr [esp + 0x18c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_004b13ee:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b13f0:  // je 0x4b15ff
    if (f.zf) goto L_004b15ff;
L_004b13f6:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004b13f8:  // lea ecx, [esp + 0x38]
    ecx = (uint32_t)((uint32_t)(esp + 0x38u));
L_004b13fc:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b13fd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004b13ff:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b1402u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b1402:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004b1406:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b1409:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004b140d:  // fmul dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004b1410:  // lea edx, [esp + 0x7c]
    edx = (uint32_t)((uint32_t)(esp + 0x7cu));
L_004b1414:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b1415:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1416:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1418:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004b141c:  // fmul dword ptr [ebp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x10u)));
L_004b141f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1421:  // fstp dword ptr [esp + 0x84]
    F32((uint32_t)(esp + 0x84u)) = lf32(ST(0));
    lpop(x);
L_004b1428:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004b142c:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b142f:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004b1433:  // fmul dword ptr [ebp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x14u)));
L_004b1436:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1438:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004b143c:  // fmul dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004b143f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1441:  // fstp dword ptr [esp + 0x88]
    F32((uint32_t)(esp + 0x88u)) = lf32(ST(0));
    lpop(x);
L_004b1448:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_004b144c:  // fmul dword ptr [ebp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x28u)));
L_004b144f:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004b1453:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b1456:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1458:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004b145c:  // fmul dword ptr [ebp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x18u)));
L_004b145f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1461:  // fstp dword ptr [esp + 0x8c]
    F32((uint32_t)(esp + 0x8cu)) = lf32(ST(0));
    lpop(x);
L_004b1468:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_004b146c:  // fmul dword ptr [ebp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x28u)));
L_004b146f:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b1473:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b1476:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1478:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004b147c:  // fmul dword ptr [ebp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x18u)));
L_004b147f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1481:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b1484:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b1488:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b148b:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004b148f:  // fmul dword ptr [ebp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x14u)));
L_004b1492:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1493:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1495:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b1499:  // fmul dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004b149c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b149e:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b14a1:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004b14a5:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b14a8:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b14ac:  // fmul dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004b14af:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b14b0:  // lea ecx, [esp + 0x9c]
    ecx = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004b14b7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b14b9:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b14bd:  // fmul dword ptr [ebp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x10u)));
L_004b14c0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b14c2:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b14c5:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b14cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b14ca:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004b14ce:  // fmul dword ptr [ebp + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x8u)));
L_004b14d1:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004b14d5:  // fmul dword ptr [ebp + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x28u)));
L_004b14d8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b14d9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b14da:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b14dc:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b14e0:  // fmul dword ptr [ebp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x18u)));
L_004b14e3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b14e5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b14e8:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b14ec:  // fmul dword ptr [ebp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x14u)));
L_004b14ef:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b14f3:  // fmul dword ptr [ebp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x24u)));
L_004b14f6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b14f7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b14f9:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004b14fd:  // fmul dword ptr [ebp + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x4u)));
L_004b1500:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1502:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b1505:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b1509:  // fmul dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004b150c:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b1510:  // fmul dword ptr [ebp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x10u)));
L_004b1513:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1514:  // lea ecx, [esp + 0x140]
    ecx = (uint32_t)((uint32_t)(esp + 0x140u));
L_004b151b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b151d:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b1521:  // fmul dword ptr [ebp]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp)));
L_004b1524:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1526:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b1529:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b152eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b152e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b152f:  // lea ecx, [esp + 0xd8]
    ecx = (uint32_t)((uint32_t)(esp + 0xd8u));
L_004b1536:  // call 0x401f10
    t0 = 0x00401f10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b153bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b153b:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004b153f:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b1544:  // lea esi, [esp + 0xcc]
    esi = (uint32_t)((uint32_t)(esp + 0xccu));
L_004b154b:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_004b154d:  // lea edx, [esp + 0x8c]
    edx = (uint32_t)((uint32_t)(esp + 0x8cu));
L_004b1554:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b1556:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004b1559:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004b155d:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004b1560:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1562:  // fld dword ptr [esp + 0x38]
    lpush(x, (long double)F32((uint32_t)(esp + 0x38u)));
L_004b1566:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004b1568:  // mov ecx, dword ptr [esp + 0x18c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_004b156f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b1570:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1572:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004b1574:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004b1578:  // fld dword ptr [esp + 0x54]
    lpush(x, (long double)F32((uint32_t)(esp + 0x54u)));
L_004b157c:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004b157f:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004b1583:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004b1586:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1588:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004b158c:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004b158e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b1590:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004b1594:  // fld dword ptr [esp + 0x64]
    lpush(x, (long double)F32((uint32_t)(esp + 0x64u)));
L_004b1598:  // fmul dword ptr [ebx + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x8u)));
L_004b159b:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_004b159f:  // fmul dword ptr [ebx + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx + 0x4u)));
L_004b15a2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b15a4:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_004b15a8:  // fmul dword ptr [ebx]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebx)));
L_004b15aa:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004b15ac:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004b15b0:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b15b2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b15b2:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b15b6:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b15b9:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b15ba:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b15bd:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b15c1:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b15c4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b15c5:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b15c8:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_004b15cc:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004b15ce:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b15cf:  // lea ecx, [esp + 0x78]
    ecx = (uint32_t)((uint32_t)(esp + 0x78u));
L_004b15d3:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_004b15d6:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b15dbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b15db:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_004b15df:  // mov edx, dword ptr [esp + 0x70]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_004b15e3:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_004b15e5:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004b15e7:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004b15eb:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004b15ee:  // mov edx, dword ptr [esp + 0x78]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_004b15f2:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004b15f5:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004b15f8:  // mov eax, dword ptr [esp + 0x18c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18cu)));
L_004b15ff:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b1604:  // mov esi, ebp
    esi = (uint32_t)(ebp);
L_004b1606:  // mov edi, 0x704d20
    edi = (uint32_t)(0x704d20u);
L_004b160b:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b160d:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b160f:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b1610:  // mov dword ptr [0x704ce0], ecx
    M32((uint32_t)(0x704ce0u)) = (uint32_t)(ecx);
L_004b1616:  // mov edx, dword ptr [ebx + 4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004b1619:  // mov dword ptr [0x704ce4], edx
    M32((uint32_t)(0x704ce4u)) = (uint32_t)(edx);
L_004b161f:  // mov ecx, dword ptr [ebx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004b1622:  // mov dword ptr [0x704ce8], ecx
    M32((uint32_t)(0x704ce8u)) = (uint32_t)(ecx);
L_004b1628:  // mov edx, dword ptr [ebx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004b162b:  // mov ecx, dword ptr [esp + 0x17c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x17cu)));
L_004b1632:  // mov dword ptr [0x704cec], edx
    M32((uint32_t)(0x704cecu)) = (uint32_t)(edx);
L_004b1638:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b163c:  // mov dword ptr [0x704d54], ecx
    M32((uint32_t)(0x704d54u)) = (uint32_t)(ecx);
L_004b1642:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004b1646:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b1647:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b1648:  // mov dword ptr [0x704d5c], edx
    M32((uint32_t)(0x704d5cu)) = (uint32_t)(edx);
L_004b164e:  // mov dword ptr [0x704da4], ecx
    M32((uint32_t)(0x704da4u)) = (uint32_t)(ecx);
L_004b1654:  // mov dword ptr [0x704da0], eax
    M32((uint32_t)(0x704da0u)) = (uint32_t)(eax);
L_004b1659:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b165a:  // add esp, 0x16c
    t0 = ladd<32>(esp, 0x16cu, f);
    esp = (uint32_t)(t0);
L_004b1660:  // ret 0x24
    c->target = M32(esp); esp += 40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004b1663:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b1668:  // lea esi, [esp + 0xcc]
    esi = (uint32_t)((uint32_t)(esp + 0xccu));
L_004b166f:  // mov edi, 0x704cf0
    edi = (uint32_t)(0x704cf0u);
L_004b1674:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b1676:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_004b1678:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b1679:  // mov dword ptr [0x704cd0], eax
    M32((uint32_t)(0x704cd0u)) = (uint32_t)(eax);
L_004b167e:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004b1681:  // mov dword ptr [0x704cd4], ecx
    M32((uint32_t)(0x704cd4u)) = (uint32_t)(ecx);
L_004b1687:  // mov edx, dword ptr [ebx + 8]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x8u)));
L_004b168a:  // mov ecx, dword ptr [esp + 0x17c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x17cu)));
L_004b1691:  // mov dword ptr [0x704cd8], edx
    M32((uint32_t)(0x704cd8u)) = (uint32_t)(edx);
L_004b1697:  // mov eax, dword ptr [ebx + 0xc]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xcu)));
L_004b169a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004b169e:  // mov dword ptr [0x704cdc], eax
    M32((uint32_t)(0x704cdcu)) = (uint32_t)(eax);
L_004b16a3:  // mov eax, dword ptr [esp + 0x188]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x188u)));
L_004b16aa:  // mov dword ptr [0x704d50], ecx
    M32((uint32_t)(0x704d50u)) = (uint32_t)(ecx);
L_004b16b0:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_004b16b4:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b16b5:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b16b6:  // mov dword ptr [0x704d58], edx
    M32((uint32_t)(0x704d58u)) = (uint32_t)(edx);
L_004b16bc:  // mov dword ptr [0x704da4], ecx
    M32((uint32_t)(0x704da4u)) = (uint32_t)(ecx);
L_004b16c2:  // mov dword ptr [0x704da0], eax
    M32((uint32_t)(0x704da0u)) = (uint32_t)(eax);
L_004b16c7:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b16c8:  // add esp, 0x16c
    t0 = ladd<32>(esp, 0x16cu, f);
    esp = (uint32_t)(t0);
L_004b16ce:  // ret 0x24
    c->target = M32(esp); esp += 40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004b16d1:  // mov ecx, dword ptr [esi + 0x98]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x98u)));
L_004b16d7:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004b16d9:  // jne 0x4b17ab
    if (!f.zf) goto L_004b17ab;
L_004b16df:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b16e0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b16e1:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004b16e6:  // lea ecx, [esp + 0x98]
    ecx = (uint32_t)((uint32_t)(esp + 0x98u));
L_004b16ed:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b16f2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b16f2:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004b16f4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b16f6:  // mov dword ptr [esp + 0xa0], edx
    M32((uint32_t)(esp + 0xa0u)) = (uint32_t)(edx);
L_004b16fd:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004b1702:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b1705:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b1707:  // mov dword ptr [esp + 0xac], ecx
    M32((uint32_t)(esp + 0xacu)) = (uint32_t)(ecx);
L_004b170e:  // lea ecx, [esp + 0x98]
    ecx = (uint32_t)((uint32_t)(esp + 0x98u));
L_004b1715:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b1718:  // mov dword ptr [esp + 0xb0], edx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(edx);
L_004b171f:  // mov eax, dword ptr [eax + 0xc]
    eax = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b1722:  // mov dword ptr [esp + 0xb4], eax
    M32((uint32_t)(esp + 0xb4u)) = (uint32_t)(eax);
L_004b1729:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b172eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b172e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004b1730:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004b1735:  // mov dword ptr [esp + 0xb0], ecx
    M32((uint32_t)(esp + 0xb0u)) = (uint32_t)(ecx);
L_004b173c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b173e:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b1741:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004b1743:  // mov dword ptr [esp + 0xbc], edx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(edx);
L_004b174a:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b174d:  // mov dword ptr [esp + 0xc0], ecx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(ecx);
L_004b1754:  // lea ecx, [esp + 0x98]
    ecx = (uint32_t)((uint32_t)(esp + 0x98u));
L_004b175b:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b175e:  // mov dword ptr [esp + 0xc4], edx
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(edx);
L_004b1765:  // call 0x401ec0
    t0 = 0x00401ec0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b176au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b176a:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004b176c:  // mov dword ptr [esp + 0xbc], ecx
    M32((uint32_t)(esp + 0xbcu)) = (uint32_t)(ecx);
L_004b1773:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004b1776:  // mov dword ptr [esp + 0xc0], edx
    M32((uint32_t)(esp + 0xc0u)) = (uint32_t)(edx);
L_004b177d:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004b1780:  // mov dword ptr [esp + 0xc4], ecx
    M32((uint32_t)(esp + 0xc4u)) = (uint32_t)(ecx);
L_004b1787:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004b178a:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_004b1792:  // mov dword ptr [esp + 0xc8], edx
    M32((uint32_t)(esp + 0xc8u)) = (uint32_t)(edx);
L_004b1799:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_004b17a1:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_004b17a9:  // jmp 0x4b17d9
    goto L_004b17d9;
L_004b17ab:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b17ac:  // mov eax, dword ptr [esp + 0x1a0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1a0u)));
L_004b17b3:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b17b4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b17b5:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004b17b9:  // lea eax, [esp + 0xa8]
    eax = (uint32_t)((uint32_t)(esp + 0xa8u));
L_004b17c0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b17c1:  // mov edx, dword ptr [esp + 0x198]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004b17c8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b17c9:  // mov eax, dword ptr [esp + 0x198]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004b17d0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004b17d1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b17d2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b17d3:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b17d4:  // call 0x4b0fb0
    t0 = 0x004b0fb0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b17d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b17d9:  // mov ebp, dword ptr [esp + 0x194]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x194u)));
L_004b17e0:  // mov ecx, dword ptr [esp + 0x190]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_004b17e7:  // mov edx, dword ptr [esp + 0x188]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x188u)));
L_004b17ee:  // mov eax, dword ptr [esp + 0x184]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x184u)));
L_004b17f5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b17f6:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b17f7:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b17f8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b17f9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004b17fa:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_004b17fc:  // call 0x4b0d00
    t0 = 0x004b0d00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b1801u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b1801:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b1803:  // je 0x4b18b3
    if (f.zf) goto L_004b18b3;
L_004b1809:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b180b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b180d:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b1810u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b1810:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b1812:  // je 0x4b183c
    if (f.zf) goto L_004b183c;
L_004b1814:  // mov cl, byte ptr [esp + 0x19c]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x19cu))) & 0xffu);
L_004b181b:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004b181d:  // je 0x4b183c
    if (f.zf) goto L_004b183c;
L_004b181f:  // mov ecx, dword ptr [esp + 0x198]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004b1826:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004b1828:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1829:  // lea ecx, [esp + 0xa0]
    ecx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_004b1830:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1831:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004b1835:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1836:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004b1837:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004b1839:  // call dword ptr [edx + 0xc]
    t0 = M32((uint32_t)(edx + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b183cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b183c:  // mov al, byte ptr [esp + 0x198]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x198u))) & 0xffu);
L_004b1843:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004b1845:  // jne 0x4b18b3
    if (!f.zf) goto L_004b18b3;
L_004b1847:  // mov eax, dword ptr [esi + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x88u)));
L_004b184d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b184f:  // jne 0x4b18b3
    if (!f.zf) goto L_004b18b3;
L_004b1851:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b1853:  // lea eax, [esp + 0x8c]
    eax = (uint32_t)((uint32_t)(esp + 0x8cu));
L_004b185a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b185b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b185d:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b185fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b185f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004b1863:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004b1865:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b1867:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b1869:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b186d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004b1871:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b1874:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004b1878:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004b187c:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b187f:  // lea eax, [esp + 0xcc]
    eax = (uint32_t)((uint32_t)(esp + 0xccu));
L_004b1886:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b1887:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004b188b:  // call dword ptr [edx + 4]
    t0 = M32((uint32_t)(edx + 0x4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b188eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b188e:  // lea ecx, [esp + 0xfc]
    ecx = (uint32_t)((uint32_t)(esp + 0xfcu));
L_004b1895:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b1896:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1897:  // lea ecx, [esp + 0xa4]
    ecx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_004b189e:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b18a3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b18a3:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b18a8:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b18aa:  // lea edi, [esp + 0x9c]
    edi = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004b18b1:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b18b3:  // lea edx, [esp + 0x8c]
    edx = (uint32_t)((uint32_t)(esp + 0x8cu));
L_004b18ba:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004b18bb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004b18bc:  // lea ecx, [esp + 0xa4]
    ecx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_004b18c3:  // call 0x40d2c0
    t0 = 0x0040d2c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b18c8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b18c8:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004b18cc:  // fadd dword ptr [eax]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax)));
L_004b18ce:  // lea ecx, [esp + 0xcc]
    ecx = (uint32_t)((uint32_t)(esp + 0xccu));
L_004b18d5:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004b18d9:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004b18dd:  // fadd dword ptr [eax + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x4u)));
L_004b18e0:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004b18e4:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004b18e8:  // fadd dword ptr [eax + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(eax + 0x8u)));
L_004b18eb:  // mov eax, dword ptr [esp + 0x190]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_004b18f2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004b18f3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b18f4:  // lea ecx, [esp + 0xa4]
    ecx = (uint32_t)((uint32_t)(esp + 0xa4u));
L_004b18fb:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004b18ff:  // call 0x40d320
    t0 = 0x0040d320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b1904u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b1904:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b1909:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004b190b:  // lea edi, [esp + 0x9c]
    edi = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004b1912:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004b1914:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b1916:  // je 0x4b194f
    if (f.zf) goto L_004b194f;
L_004b1918:  // mov edx, dword ptr [ebx]
    edx = (uint32_t)(M32((uint32_t)(ebx)));
L_004b191a:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004b191c:  // call dword ptr [edx + 0x70]
    t0 = M32((uint32_t)(edx + 0x70u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b191fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b191f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004b1921:  // je 0x4b194f
    if (f.zf) goto L_004b194f;
L_004b1923:  // mov cl, byte ptr [esp + 0x19c]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x19cu))) & 0xffu);
L_004b192a:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004b192c:  // je 0x4b194f
    if (f.zf) goto L_004b194f;
L_004b192e:  // mov ecx, dword ptr [esp + 0x198]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x198u)));
L_004b1935:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_004b1937:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1938:  // lea ecx, [esp + 0xa0]
    ecx = (uint32_t)((uint32_t)(esp + 0xa0u));
L_004b193f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1940:  // lea ecx, [esp + 0x18]
    ecx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004b1944:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b1945:  // mov ecx, dword ptr [esp + 0x74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_004b1949:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004b194a:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004b194c:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004b194fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004b194f:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004b1953:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004b1957:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b195b:  // mov edi, dword ptr [esp + 0x190]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x190u)));
L_004b1962:  // mov dword ptr [ebp], eax
    M32((uint32_t)(ebp)) = (uint32_t)(eax);
L_004b1965:  // mov dword ptr [ebp + 4], edx
    M32((uint32_t)(ebp + 0x4u)) = (uint32_t)(edx);
L_004b1968:  // mov dword ptr [ebp + 8], ecx
    M32((uint32_t)(ebp + 0x8u)) = (uint32_t)(ecx);
L_004b196b:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b196f:  // mov dword ptr [ebp + 0xc], ecx
    M32((uint32_t)(ebp + 0xcu)) = (uint32_t)(ecx);
L_004b1972:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b1977:  // lea esi, [esp + 0x9c]
    esi = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004b197e:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b1980:  // mov cl, byte ptr [esp + 0x198]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x198u))) & 0xffu);
L_004b1987:  // lea esi, [esp + 0x9c]
    esi = (uint32_t)((uint32_t)(esp + 0x9cu));
L_004b198e:  // test cl, cl
    t0 = llog<8>((ecx & 0xffu) & (ecx & 0xffu), f);
L_004b1990:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004b1995:  // jne 0x4b19e6
    if (!f.zf) goto L_004b19e6;
L_004b1997:  // mov edi, 0x704d20
    edi = (uint32_t)(0x704d20u);
L_004b199c:  // mov dword ptr [0x704ce4], edx
    M32((uint32_t)(0x704ce4u)) = (uint32_t)(edx);
L_004b19a2:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b19a6:  // mov dword ptr [0x704ce0], eax
    M32((uint32_t)(0x704ce0u)) = (uint32_t)(eax);
L_004b19ab:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b19af:  // mov dword ptr [0x704ce8], edx
    M32((uint32_t)(0x704ce8u)) = (uint32_t)(edx);
L_004b19b5:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b19b9:  // mov dword ptr [0x704da0], ebx
    M32((uint32_t)(0x704da0u)) = (uint32_t)(ebx);
L_004b19bf:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b19c1:  // mov ecx, dword ptr [esp + 0x180]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b19c8:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b19c9:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b19ca:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b19cb:  // mov dword ptr [0x704cec], eax
    M32((uint32_t)(0x704cecu)) = (uint32_t)(eax);
L_004b19d0:  // mov dword ptr [0x704d54], ecx
    M32((uint32_t)(0x704d54u)) = (uint32_t)(ecx);
L_004b19d6:  // mov dword ptr [0x704d5c], edx
    M32((uint32_t)(0x704d5cu)) = (uint32_t)(edx);
L_004b19dc:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b19dd:  // add esp, 0x16c
    t0 = ladd<32>(esp, 0x16cu, f);
    esp = (uint32_t)(t0);
L_004b19e3:  // ret 0x24
    c->target = M32(esp); esp += 40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004b19e6:  // mov edi, 0x704cf0
    edi = (uint32_t)(0x704cf0u);
L_004b19eb:  // mov dword ptr [0x704cd0], eax
    M32((uint32_t)(0x704cd0u)) = (uint32_t)(eax);
L_004b19f0:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004b19f4:  // mov dword ptr [0x704cd4], edx
    M32((uint32_t)(0x704cd4u)) = (uint32_t)(edx);
L_004b19fa:  // mov edx, dword ptr [esp + 0x180]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x180u)));
L_004b1a01:  // mov dword ptr [0x704cd8], eax
    M32((uint32_t)(0x704cd8u)) = (uint32_t)(eax);
L_004b1a06:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004b1a0a:  // mov dword ptr [0x704da0], ebx
    M32((uint32_t)(0x704da0u)) = (uint32_t)(ebx);
L_004b1a10:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004b1a12:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004b1a16:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004b1a17:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004b1a18:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004b1a19:  // mov dword ptr [0x704cdc], ecx
    M32((uint32_t)(0x704cdcu)) = (uint32_t)(ecx);
L_004b1a1f:  // mov dword ptr [0x704d50], edx
    M32((uint32_t)(0x704d50u)) = (uint32_t)(edx);
L_004b1a25:  // mov dword ptr [0x704d58], eax
    M32((uint32_t)(0x704d58u)) = (uint32_t)(eax);
L_004b1a2a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004b1a2b:  // add esp, 0x16c
    t0 = ladd<32>(esp, 0x16cu, f);
    esp = (uint32_t)(t0);
L_004b1a31:  // ret 0x24
    c->target = M32(esp); esp += 40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004b0fb0, 004b0fb0)
