// lifted from 0048df20 (FUN_0048df20, 993 bytes, 335 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0048df20(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0048df20;
L_0048df20:  // mov eax, dword ptr [0x9c64e0]
    eax = (uint32_t)(M32((uint32_t)(0x9c64e0u)));
L_0048df25:  // sub esp, 0x1c
    t0 = lsub<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0048df28:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048df2a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048df2b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048df2c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048df2d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048df2e:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0048df30:  // je 0x48dfce
    if (f.zf) goto L_0048dfce;
L_0048df36:  // mov eax, dword ptr [ebp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x24u)));
L_0048df39:  // mov esi, dword ptr [ebp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x28u)));
L_0048df3c:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0048df3f:  // add eax, esi
    t0 = ladd<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_0048df41:  // lea edi, [ebp + 8]
    edi = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0048df44:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048df45:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048df47:  // mov esi, dword ptr [eax*4 + 0x9c64ec]
    esi = (uint32_t)(M32((uint32_t)(eax * 4u + 0x9c64ecu)));
L_0048df4e:  // mov edx, dword ptr [eax*4 + 0x9c64e8]
    edx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x9c64e8u)));
L_0048df55:  // sub esi, edx
    t0 = lsub<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0048df57:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0048df59:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_0048df5e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048df63:  // lea ebx, [esi + esi]
    ebx = (uint32_t)((uint32_t)(esi + esi));
L_0048df66:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048df67:  // call 0x5137d0
    t0 = 0x005137d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048df6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048df6c:  // mov edi, dword ptr [edi]
    edi = (uint32_t)(M32((uint32_t)(edi)));
L_0048df6e:  // lea ecx, [esp + 0x1c]
    ecx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_0048df72:  // add esi, -2
    t0 = ladd<32>(esi, 0xfffffffeu, f);
    esi = (uint32_t)(t0);
L_0048df75:  // push 0x800
    t0 = 0x800u; esp -= 4; M32(esp) = t0;
L_0048df7a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048df7b:  // mov dword ptr [ebp + 0x30], esi
    M32((uint32_t)(ebp + 0x30u)) = (uint32_t)(esi);
L_0048df7e:  // mov eax, dword ptr [edi]
    eax = (uint32_t)(M32((uint32_t)(edi)));
L_0048df80:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048df82:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048df84:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048df85:  // call dword ptr [eax + 0x2c]
    t0 = M32((uint32_t)(eax + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048df88u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048df88:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048df8a:  // jl 0x48e2f9
    if ((f.sf != f.of)) goto L_0048e2f9;
L_0048df90:  // mov edx, dword ptr [ebp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x24u)));
L_0048df93:  // mov esi, dword ptr [ebp + 0x28]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x28u)));
L_0048df96:  // shl edx, 4
    t0 = lshl<32>(edx, 0x4u, f);
    edx = (uint32_t)(t0);
L_0048df99:  // add edx, esi
    t0 = ladd<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_0048df9b:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048df9f:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048dfa1:  // mov eax, dword ptr [edx*4 + 0x9c64e8]
    eax = (uint32_t)(M32((uint32_t)(edx * 4u + 0x9c64e8u)));
L_0048dfa8:  // mov edx, dword ptr [0x9c64e4]
    edx = (uint32_t)(M32((uint32_t)(0x9c64e4u)));
L_0048dfae:  // lea esi, [edx + eax*2]
    esi = (uint32_t)((uint32_t)(edx + eax * 2u));
L_0048dfb1:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0048dfb3:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0048dfb6:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0048dfb8:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048dfba:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0048dfbd:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0048dfbf:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0048dfc1:  // call 0x4883f0
    t0 = 0x004883f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048dfc6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048dfc6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048dfc7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048dfc8:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048dfc9:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048dfca:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0048dfcd:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0048dfce:  // mov eax, dword ptr [ebp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048dfd1:  // push 0x2c
    t0 = 0x2cu; esp -= 4; M32(esp) = t0;
L_0048dfd3:  // imul eax, eax
    t0 = limul32(eax, eax, f);
    eax = (uint32_t)(t0);
L_0048dfd6:  // push 0x62d824
    t0 = 0x62d824u; esp -= 4; M32(esp) = t0;
L_0048dfdb:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_0048dfe0:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0048dfe3:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0048dfe8:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0048dfeb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048dfec:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048dff1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048dff1:  // mov ecx, dword ptr [ebp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048dff4:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0048dff6:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0048dff8:  // mov dword ptr [esp + 0x1c], edi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edi);
L_0048dffc:  // lea esi, [ecx + 1]
    esi = (uint32_t)((uint32_t)(ecx + 0x1u));
L_0048dfff:  // lea ebx, [ecx + ecx]
    ebx = (uint32_t)((uint32_t)(ecx + ecx));
L_0048e002:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0048e00a:  // jle 0x48e069
    if ((f.zf || f.sf != f.of)) goto L_0048e069;
L_0048e00c:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_0048e014:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0048e016:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0048e018:  // jle 0x48e04b
    if ((f.zf || f.sf != f.of)) goto L_0048e04b;
L_0048e01a:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048e01e:  // lea edx, [ecx + esi]
    edx = (uint32_t)((uint32_t)(ecx + esi));
L_0048e021:  // mov word ptr [eax], cx
    M16((uint32_t)(eax)) = (uint16_t)((ecx & 0xffffu));
L_0048e024:  // mov word ptr [eax + 2], dx
    M16((uint32_t)(eax + 0x2u)) = (uint16_t)((edx & 0xffffu));
L_0048e028:  // lea edx, [ecx + esi + 1]
    edx = (uint32_t)((uint32_t)(ecx + esi + 0x1u));
L_0048e02c:  // mov word ptr [eax + 4], dx
    M16((uint32_t)(eax + 0x4u)) = (uint16_t)((edx & 0xffffu));
L_0048e030:  // mov word ptr [eax + 8], dx
    M16((uint32_t)(eax + 0x8u)) = (uint16_t)((edx & 0xffffu));
L_0048e034:  // lea edx, [ecx + 1]
    edx = (uint32_t)((uint32_t)(ecx + 0x1u));
L_0048e037:  // mov word ptr [eax + 6], cx
    M16((uint32_t)(eax + 0x6u)) = (uint16_t)((ecx & 0xffffu));
L_0048e03b:  // mov word ptr [eax + 0xa], dx
    M16((uint32_t)(eax + 0xau)) = (uint16_t)((edx & 0xffffu));
L_0048e03f:  // mov edx, dword ptr [ebp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048e042:  // add eax, 0xc
    t0 = ladd<32>(eax, 0xcu, f);
    eax = (uint32_t)(t0);
L_0048e045:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0048e046:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0048e047:  // cmp edi, edx
    t0 = lsub<32>(edi, edx, f);
L_0048e049:  // jl 0x48e01e
    if ((f.sf != f.of)) goto L_0048e01e;
L_0048e04b:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048e04f:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048e053:  // add ecx, esi
    t0 = ladd<32>(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0048e055:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0048e056:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_0048e05a:  // mov ecx, dword ptr [ebp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048e05d:  // cmp edx, ecx
    t0 = lsub<32>(edx, ecx, f);
L_0048e05f:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0048e063:  // jl 0x48e014
    if ((f.sf != f.of)) goto L_0048e014;
L_0048e065:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048e069:  // test byte ptr [ebp + 0x28], 1
    t0 = llog<8>(M8((uint32_t)(ebp + 0x28u)) & 0x1u, f);
L_0048e06d:  // je 0x48e097
    if (f.zf) goto L_0048e097;
L_0048e06f:  // mov eax, dword ptr [ebp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048e072:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048e073:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048e075:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048e077:  // je 0x48e097
    if (f.zf) goto L_0048e097;
L_0048e079:  // lea ecx, [edi + 0xc]
    ecx = (uint32_t)((uint32_t)(edi + 0xcu));
L_0048e07c:  // inc word ptr [ecx - 2]
    t0 = linc<16>(M16((uint32_t)(ecx + 0xfffffffeu)), f);
    M16((uint32_t)(ecx + 0xfffffffeu)) = (uint16_t)(t0);
L_0048e080:  // inc word ptr [ecx]
    t0 = linc<16>(M16((uint32_t)(ecx)), f);
    M16((uint32_t)(ecx)) = (uint16_t)(t0);
L_0048e083:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0048e085:  // mov word ptr [ecx + 0xa], dx
    M16((uint32_t)(ecx + 0xau)) = (uint16_t)((edx & 0xffffu));
L_0048e089:  // mov word ptr [ecx + 8], dx
    M16((uint32_t)(ecx + 0x8u)) = (uint16_t)((edx & 0xffffu));
L_0048e08d:  // mov word ptr [ecx + 6], dx
    M16((uint32_t)(ecx + 0x6u)) = (uint16_t)((edx & 0xffffu));
L_0048e091:  // add ecx, 0x18
    t0 = ladd<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_0048e094:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048e095:  // jne 0x48e07c
    if (!f.zf) goto L_0048e07c;
L_0048e097:  // test byte ptr [ebp + 0x28], 2
    t0 = llog<8>(M8((uint32_t)(ebp + 0x28u)) & 0x2u, f);
L_0048e09b:  // je 0x48e10a
    if (f.zf) goto L_0048e10a;
L_0048e09d:  // lea eax, [ebx + ebx*2 - 6]
    eax = (uint32_t)((uint32_t)(ebx + ebx * 2u + 0xfffffffau));
L_0048e0a1:  // lea ecx, [edi + eax*2]
    ecx = (uint32_t)((uint32_t)(edi + eax * 2u));
L_0048e0a4:  // mov eax, dword ptr [ebp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048e0a7:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048e0a8:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048e0aa:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_0048e0ae:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048e0b0:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048e0b4:  // je 0x48e0f3
    if (f.zf) goto L_0048e0f3;
L_0048e0b6:  // lea eax, [ebx + ebx*2]
    eax = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_0048e0b9:  // lea edx, [ebx + ebx*2]
    edx = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_0048e0bc:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0048e0bf:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0048e0c3:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048e0c7:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048e0cb:  // sub word ptr [ecx + 4], si
    t0 = lsub<16>(M16((uint32_t)(ecx + 0x4u)), (esi & 0xffffu), f);
    M16((uint32_t)(ecx + 0x4u)) = (uint16_t)(t0);
L_0048e0cf:  // sub word ptr [ecx + edx*2 + 0xa], si
    t0 = lsub<16>(M16((uint32_t)(ecx + edx * 2u + 0xau)), (esi & 0xffffu), f);
    M16((uint32_t)(ecx + edx * 2u + 0xau)) = (uint16_t)(t0);
L_0048e0d4:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048e0d6:  // mov word ptr [ecx + 0xa], ax
    M16((uint32_t)(ecx + 0xau)) = (uint16_t)((eax & 0xffffu));
L_0048e0da:  // mov word ptr [ecx + 8], ax
    M16((uint32_t)(ecx + 0x8u)) = (uint16_t)((eax & 0xffffu));
L_0048e0de:  // mov word ptr [ecx + 6], ax
    M16((uint32_t)(ecx + 0x6u)) = (uint16_t)((eax & 0xffffu));
L_0048e0e2:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048e0e6:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0048e0e8:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048e0ec:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048e0ed:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048e0f1:  // jne 0x48e0cb
    if (!f.zf) goto L_0048e0cb;
L_0048e0f3:  // test byte ptr [ebp + 0x28], 1
    t0 = llog<8>(M8((uint32_t)(ebp + 0x28u)) & 0x1u, f);
L_0048e0f7:  // je 0x48e10a
    if (f.zf) goto L_0048e10a;
L_0048e0f9:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0048e0fd:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0048e0ff:  // mov word ptr [eax + 4], cx
    M16((uint32_t)(eax + 0x4u)) = (uint16_t)((ecx & 0xffffu));
L_0048e103:  // mov word ptr [eax + 2], cx
    M16((uint32_t)(eax + 0x2u)) = (uint16_t)((ecx & 0xffffu));
L_0048e107:  // mov word ptr [eax], cx
    M16((uint32_t)(eax)) = (uint16_t)((ecx & 0xffffu));
L_0048e10a:  // test byte ptr [ebp + 0x28], 8
    t0 = llog<8>(M8((uint32_t)(ebp + 0x28u)) & 0x8u, f);
L_0048e10e:  // je 0x48e16a
    if (f.zf) goto L_0048e16a;
L_0048e110:  // mov eax, dword ptr [ebp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048e113:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048e115:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048e116:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048e118:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048e11a:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048e11e:  // je 0x48e16a
    if (f.zf) goto L_0048e16a;
L_0048e120:  // lea edi, [ebx + ebx*2 + 3]
    edi = (uint32_t)((uint32_t)(ebx + ebx * 2u + 0x3u));
L_0048e124:  // lea edx, [ebx + ebx*2]
    edx = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_0048e127:  // lea eax, [ebx + ebx*2]
    eax = (uint32_t)((uint32_t)(ebx + ebx * 2u));
L_0048e12a:  // shl edi, 1
    t0 = lshl<32>(edi, 0x1u, f);
    edi = (uint32_t)(t0);
L_0048e12c:  // shl edx, 1
    t0 = lshl<32>(edx, 0x1u, f);
    edx = (uint32_t)(t0);
L_0048e12e:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_0048e131:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0048e135:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048e139:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048e13d:  // add word ptr [ecx + 2], si
    t0 = ladd<16>(M16((uint32_t)(ecx + 0x2u)), (esi & 0xffffu), f);
    M16((uint32_t)(ecx + 0x2u)) = (uint16_t)(t0);
L_0048e141:  // add word ptr [edi + ecx], si
    t0 = ladd<16>(M16((uint32_t)(edi + ecx)), (esi & 0xffffu), f);
    M16((uint32_t)(edi + ecx)) = (uint16_t)(t0);
L_0048e145:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048e147:  // mov word ptr [edx + ecx + 4], ax
    M16((uint32_t)(edx + ecx + 0x4u)) = (uint16_t)((eax & 0xffffu));
L_0048e14c:  // mov word ptr [edx + ecx + 2], ax
    M16((uint32_t)(edx + ecx + 0x2u)) = (uint16_t)((eax & 0xffffu));
L_0048e151:  // mov word ptr [edx + ecx], ax
    M16((uint32_t)(edx + ecx)) = (uint16_t)((eax & 0xffffu));
L_0048e155:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048e159:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0048e15b:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048e15f:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048e160:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048e164:  // jne 0x48e13d
    if (!f.zf) goto L_0048e13d;
L_0048e166:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048e16a:  // test byte ptr [ebp + 0x28], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x28u)) & 0x4u, f);
L_0048e16e:  // je 0x48e1c4
    if (f.zf) goto L_0048e1c4;
L_0048e170:  // mov eax, dword ptr [ebp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048e173:  // lea ecx, [eax - 1]
    ecx = (uint32_t)((uint32_t)(eax + 0xffffffffu));
L_0048e176:  // imul ecx, ebx
    t0 = limul32(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_0048e179:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048e17a:  // lea ecx, [ecx + ecx*2]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0048e17d:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048e17f:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048e181:  // lea ecx, [edi + ecx*2]
    ecx = (uint32_t)((uint32_t)(edi + ecx * 2u));
L_0048e184:  // je 0x48e1a1
    if (f.zf) goto L_0048e1a1;
L_0048e186:  // dec word ptr [ecx + 8]
    t0 = ldec<16>(M16((uint32_t)(ecx + 0x8u)), f);
    M16((uint32_t)(ecx + 0x8u)) = (uint16_t)(t0);
L_0048e18a:  // dec word ptr [ecx + 0xe]
    t0 = ldec<16>(M16((uint32_t)(ecx + 0xeu)), f);
    M16((uint32_t)(ecx + 0xeu)) = (uint16_t)(t0);
L_0048e18e:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0048e190:  // mov word ptr [ecx + 4], dx
    M16((uint32_t)(ecx + 0x4u)) = (uint16_t)((edx & 0xffffu));
L_0048e194:  // mov word ptr [ecx + 2], dx
    M16((uint32_t)(ecx + 0x2u)) = (uint16_t)((edx & 0xffffu));
L_0048e198:  // mov word ptr [ecx], dx
    M16((uint32_t)(ecx)) = (uint16_t)((edx & 0xffffu));
L_0048e19b:  // add ecx, 0x18
    t0 = ladd<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_0048e19e:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048e19f:  // jne 0x48e186
    if (!f.zf) goto L_0048e186;
L_0048e1a1:  // mov eax, dword ptr [ebp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048e1a4:  // mov cl, byte ptr [ebp + 0x28]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebp + 0x28u))) & 0xffu);
L_0048e1a7:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048e1a8:  // imul eax, ebx
    t0 = limul32(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0048e1ab:  // test cl, 8
    t0 = llog<8>((ecx & 0xffu) & 0x8u, f);
L_0048e1ae:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0048e1b1:  // lea eax, [edi + edx*2]
    eax = (uint32_t)((uint32_t)(edi + edx * 2u));
L_0048e1b4:  // je 0x48e1c4
    if (f.zf) goto L_0048e1c4;
L_0048e1b6:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0048e1b8:  // mov word ptr [eax + 0xa], cx
    M16((uint32_t)(eax + 0xau)) = (uint16_t)((ecx & 0xffffu));
L_0048e1bc:  // mov word ptr [eax + 8], cx
    M16((uint32_t)(eax + 0x8u)) = (uint16_t)((ecx & 0xffffu));
L_0048e1c0:  // mov word ptr [eax + 6], cx
    M16((uint32_t)(eax + 0x6u)) = (uint16_t)((ecx & 0xffffu));
L_0048e1c4:  // mov eax, dword ptr [ebp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x2cu)));
L_0048e1c7:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0048e1c9:  // imul eax, eax
    t0 = limul32(eax, eax, f);
    eax = (uint32_t)(t0);
L_0048e1cc:  // shl eax, 1
    t0 = lshl<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048e1ce:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048e1d0:  // mov dword ptr [esp + 0x18], edi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edi);
L_0048e1d4:  // je 0x48e211
    if (f.zf) goto L_0048e211;
L_0048e1d6:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048e1da:  // mov ax, word ptr [ecx + 4]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx + 0x4u))) & 0xffffu);
L_0048e1de:  // or ax, word ptr [ecx + 2]
    t0 = llog<16>((eax & 0xffffu) | M16((uint32_t)(ecx + 0x2u)), f);
    eax = (eax & 0xffff0000u) | ((uint32_t)(t0) & 0xffffu);
L_0048e1e2:  // or ax, word ptr [ecx]
    t0 = llog<16>((eax & 0xffffu) | M16((uint32_t)(ecx)), f);
    eax = (eax & 0xffff0000u) | ((uint32_t)(t0) & 0xffffu);
L_0048e1e5:  // je 0x48e203
    if (f.zf) goto L_0048e203;
L_0048e1e7:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048e1eb:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0048e1ed:  // mov ebx, dword ptr [edx]
    ebx = (uint32_t)(M32((uint32_t)(edx)));
L_0048e1ef:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_0048e1f1:  // mov dx, word ptr [edx + 4]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edx + 0x4u))) & 0xffffu);
L_0048e1f5:  // mov word ptr [eax + 4], dx
    M16((uint32_t)(eax + 0x4u)) = (uint16_t)((edx & 0xffffu));
L_0048e1f9:  // mov edx, eax
    edx = (uint32_t)(eax);
L_0048e1fb:  // add edx, 6
    t0 = ladd<32>(edx, 0x6u, f);
    edx = (uint32_t)(t0);
L_0048e1fe:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0048e1ff:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0048e203:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048e207:  // add ecx, 6
    t0 = ladd<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0048e20a:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048e20b:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0048e20f:  // jne 0x48e1da
    if (!f.zf) goto L_0048e1da;
L_0048e211:  // push 0x18
    t0 = 0x18u; esp -= 4; M32(esp) = t0;
L_0048e213:  // call 0x56eb60
    t0 = 0x0056eb60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e218u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e218:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048e21a:  // call 0x56eb70
    t0 = 0x0056eb70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e21fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e21f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048e221:  // call 0x56eb80
    t0 = 0x0056eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e226u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e226:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048e228:  // call 0x56eb50
    t0 = 0x0056eb50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e22du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e22d:  // lea eax, [esp + 0x22]
    eax = (uint32_t)((uint32_t)(esp + 0x22u));
L_0048e231:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_0048e235:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048e236:  // lea edx, [esi + esi*2]
    edx = (uint32_t)((uint32_t)(esi + esi * 2u));
L_0048e239:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048e23a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048e23b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048e23c:  // call 0x56eb90
    t0 = 0x0056eb90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e241u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e241:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0048e245:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0048e248:  // lea esi, [ebp + 8]
    esi = (uint32_t)((uint32_t)(ebp + 0x8u));
L_0048e24b:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0048e24e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048e24f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048e251:  // push 0x65
    t0 = 0x65u; esp -= 4; M32(esp) = t0;
L_0048e253:  // lea ecx, [eax + eax]
    ecx = (uint32_t)((uint32_t)(eax + eax));
L_0048e256:  // push 0x208
    t0 = 0x208u; esp -= 4; M32(esp) = t0;
L_0048e25b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048e25c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0048e261:  // mov dword ptr [ebp + 0x30], eax
    M32((uint32_t)(ebp + 0x30u)) = (uint32_t)(eax);
L_0048e264:  // call 0x5137d0
    t0 = 0x005137d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e269u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e269:  // mov esi, dword ptr [esi]
    esi = (uint32_t)(M32((uint32_t)(esi)));
L_0048e26b:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048e26d:  // je 0x48e2f9
    if (f.zf) goto L_0048e2f9;
L_0048e273:  // lea eax, [esp + 0x24]
    eax = (uint32_t)((uint32_t)(esp + 0x24u));
L_0048e277:  // push 0x800
    t0 = 0x800u; esp -= 4; M32(esp) = t0;
L_0048e27c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048e27d:  // mov dword ptr [esp + 0x2c], 0
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(0x0u);
L_0048e285:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_0048e287:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048e289:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048e28b:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048e28c:  // call dword ptr [edx + 0x2c]
    t0 = M32((uint32_t)(edx + 0x2cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e28fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e28f:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0048e293:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048e295:  // je 0x48e2be
    if (f.zf) goto L_0048e2be;
L_0048e297:  // mov ecx, dword ptr [ebp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_0048e29a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0048e29e:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0048e2a0:  // mov esi, dword ptr [edx + 8]
    esi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0048e2a3:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0048e2a5:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0048e2a7:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0048e2aa:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0048e2ac:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048e2ae:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0048e2b1:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0048e2b3:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0048e2b5:  // call 0x4883f0
    t0 = 0x004883f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e2bau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e2ba:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048e2be:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0048e2c2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048e2c4:  // je 0x48e2e5
    if (f.zf) goto L_0048e2e5;
L_0048e2c6:  // mov ecx, dword ptr [eax - 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0048e2c9:  // lea esi, [eax - 4]
    esi = (uint32_t)((uint32_t)(eax + 0xfffffffcu));
L_0048e2cc:  // push 0x48e310
    t0 = 0x48e310u; esp -= 4; M32(esp) = t0;
L_0048e2d1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048e2d2:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_0048e2d4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048e2d5:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e2dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e2da:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048e2db:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0048e2e0:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e2e5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e2e5:  // mov ecx, dword ptr [ebp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_0048e2e8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048e2e9:  // add ecx, -2
    t0 = ladd<32>(ecx, 0xfffffffeu, f);
    ecx = (uint32_t)(t0);
L_0048e2ec:  // mov dword ptr [ebp + 0x30], ecx
    M32((uint32_t)(ebp + 0x30u)) = (uint32_t)(ecx);
L_0048e2ef:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_0048e2f4:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048e2f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048e2f9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048e2fa:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048e2fb:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048e2fc:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048e2fd:  // add esp, 0x1c
    t0 = ladd<32>(esp, 0x1cu, f);
    esp = (uint32_t)(t0);
L_0048e300:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0048df20, 0048df20)
