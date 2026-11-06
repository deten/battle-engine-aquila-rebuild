// lifted from 0048ef00 (FUN_0048ef00, 637 bytes, 195 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0048ef00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0048ef00;
L_0048ef00:  // sub esp, 0x38
    t0 = lsub<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_0048ef03:  // mov eax, dword ptr [esp + 0x3c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0048ef07:  // mov edx, dword ptr [esp + 0x44]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0048ef0b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ef0c:  // mov ebp, dword ptr [esp + 0x44]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0048ef10:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048ef11:  // mov esi, dword ptr [esp + 0x50]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0048ef15:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048ef16:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0048ef18:  // lea ecx, [eax*8]
    ecx = (uint32_t)((uint32_t)(eax * 8u));
L_0048ef1f:  // lea eax, [edx*8 + 8]
    eax = (uint32_t)((uint32_t)(edx * 8u + 0x8u));
L_0048ef26:  // lea edx, [esi*8 + 8]
    edx = (uint32_t)((uint32_t)(esi * 8u + 0x8u));
L_0048ef2d:  // mov dword ptr [esp + 0x3c], eax
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(eax);
L_0048ef31:  // mov dword ptr [esp + 0x40], edx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(edx);
L_0048ef35:  // mov edx, dword ptr [0x6fabf0]
    edx = (uint32_t)(M32((uint32_t)(0x6fabf0u)));
L_0048ef3b:  // lea eax, [ebp*8]
    eax = (uint32_t)((uint32_t)(ebp * 8u));
L_0048ef42:  // mov dword ptr [esp + 0x34], ecx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ecx);
L_0048ef46:  // test edx, edx
    t0 = llog<32>(edx & edx, f);
L_0048ef48:  // mov dword ptr [esp + 0x38], eax
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(eax);
L_0048ef4c:  // jne 0x48f15f
    if (!f.zf) goto L_0048f15f;
L_0048ef52:  // mov eax, dword ptr [0x6fabcc]
    eax = (uint32_t)(M32((uint32_t)(0x6fabccu)));
L_0048ef57:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048ef59:  // je 0x48f155
    if (f.zf) goto L_0048f155;
L_0048ef5f:  // mov eax, dword ptr [edi + 8]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0048ef62:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0048ef64:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0048ef68:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048ef6a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048ef6b:  // lea edx, [esp + 0x34]
    edx = (uint32_t)((uint32_t)(esp + 0x34u));
L_0048ef6f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048ef70:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048ef72:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ef73:  // call dword ptr [ecx + 0x4c]
    t0 = M32((uint32_t)(ecx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048ef76u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048ef76:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048ef78:  // jl 0x48f14c
    if ((f.sf != f.of)) goto L_0048f14c;
L_0048ef7e:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0048ef82:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048ef86:  // cmp ebp, esi
    t0 = lsub<32>(ebp, esi, f);
L_0048ef88:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0048ef8c:  // mov dword ptr [esp + 0x54], 0
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(0x0u);
L_0048ef94:  // jg 0x48f121
    if ((!f.zf && f.sf == f.of)) goto L_0048f121;
L_0048ef9a:  // mov eax, dword ptr [esp + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0048ef9e:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048ef9f:  // mov ebx, ebp
    ebx = (uint32_t)(ebp);
L_0048efa1:  // sub esi, ebp
    t0 = lsub<32>(esi, ebp, f);
    esi = (uint32_t)(t0);
L_0048efa3:  // shl ebx, 6
    t0 = lshl<32>(ebx, 0x6u, f);
    ebx = (uint32_t)(t0);
L_0048efa6:  // add ebx, eax
    t0 = ladd<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0048efa8:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0048efa9:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_0048efad:  // mov dword ptr [esp + 0x1c], esi
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(esi);
L_0048efb1:  // mov ebp, dword ptr [esp + 0x54]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0048efb5:  // mov eax, dword ptr [esp + 0x4c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0048efb9:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0048efbb:  // jg 0x48f0ff
    if ((!f.zf && f.sf == f.of)) goto L_0048f0ff;
L_0048efc1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0048efc3:  // mov dword ptr [esp + 0x50], 0
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(0x0u);
L_0048efcb:  // sub ebp, ecx
    t0 = lsub<32>(ebp, ecx, f);
    ebp = (uint32_t)(t0);
L_0048efcd:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0048efd1:  // inc ebp
    t0 = linc<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0048efd2:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_0048efd6:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0048efd8:  // mov ecx, dword ptr [esp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0048efdc:  // imul eax, dword ptr [esp + 0x58]
    t0 = limul32(eax, M32((uint32_t)(esp + 0x58u)), f);
    eax = (uint32_t)(t0);
L_0048efe1:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0048efe3:  // mov ecx, dword ptr [esp + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0048efe7:  // add ecx, eax
    t0 = ladd<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0048efe9:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0048efeb:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048efec:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0048efee:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0048eff0:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048eff2:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048eff4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048eff6:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0048eff8:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048effa:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048effb:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048effc:  // mov eax, dword ptr [edi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x30u)));
L_0048efff:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_0048f003:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048f004:  // mov ecx, dword ptr [0x89ce3c]
    ecx = (uint32_t)(M32((uint32_t)(0x89ce3cu)));
L_0048f00a:  // lea edx, [eax + eax*8]
    edx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0048f00d:  // lea eax, [eax + edx*2]
    eax = (uint32_t)((uint32_t)(eax + edx * 2u));
L_0048f010:  // lea edx, [ecx + eax*4]
    edx = (uint32_t)((uint32_t)(ecx + eax * 4u));
L_0048f013:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_0048f016:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048f017:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048f018:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0048f01d:  // call 0x47eff0
    t0 = 0x0047eff0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048f022u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048f022:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0048f024:  // and ecx, 0xffff
    t0 = llog<32>(ecx & 0xffffu, f);
    ecx = (uint32_t)(t0);
L_0048f02a:  // mov ax, word ptr [ecx*2 + 0x8be274]
    eax = (eax & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ecx * 2u + 0x8be274u))) & 0xffffu);
L_0048f032:  // test ax, ax
    t0 = llog<16>((eax & 0xffffu) & (eax & 0xffffu), f);
L_0048f035:  // je 0x48f0dc
    if (f.zf) goto L_0048f0dc;
L_0048f03b:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_0048f040:  // lea esi, [eax*8 + 0x8aa9f4]
    esi = (uint32_t)((uint32_t)(eax * 8u + 0x8aa9f4u));
L_0048f047:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048f049:  // je 0x48f0dc
    if (f.zf) goto L_0048f0dc;
L_0048f04f:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048f053:  // mov ebx, 4
    ebx = (uint32_t)(0x4u);
L_0048f058:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048f059:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048f05b:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_0048f060:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048f062:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0048f066:  // mov eax, dword ptr [edi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(edi + 0x34u)));
L_0048f069:  // sub ebx, eax
    t0 = lsub<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0048f06b:  // lea ecx, [eax + 3]
    ecx = (uint32_t)((uint32_t)(eax + 0x3u));
L_0048f06e:  // shl ebp, cl
    t0 = lshl<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0048f070:  // mov dword ptr [esp + 0x2c], ebp
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebp);
L_0048f074:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048f076:  // mov al, byte ptr [esi + 7]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esi + 0x7u))) & 0xffu);
L_0048f079:  // sub eax, ebx
    t0 = lsub<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0048f07b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048f07d:  // jle 0x48f0ba
    if ((f.zf || f.sf != f.of)) goto L_0048f0ba;
L_0048f07f:  // movsx edx, bl
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0048f082:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048f083:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0048f085:  // movsx ebp, byte ptr [esi + 5]
    ebp = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esi + 0x5u))));
L_0048f089:  // sar ebp, cl
    t0 = lsar<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0048f08b:  // mov edx, dword ptr [eax*4 + 0x628298]
    edx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x628298u)));
L_0048f092:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048f093:  // mov eax, dword ptr [0x8aa9f0]
    eax = (uint32_t)(M32((uint32_t)(0x8aa9f0u)));
L_0048f098:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048f099:  // movsx ebp, byte ptr [esi + 4]
    ebp = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(esi + 0x4u))));
L_0048f09d:  // sar ebp, cl
    t0 = lsar<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0048f09f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0048f0a1:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0048f0a3:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048f0a7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048f0a8:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048f0a9:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0048f0ad:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048f0ae:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048f0af:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048f0b1:  // call 0x48ee00
    t0 = 0x0048ee00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048f0b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048f0b6:  // mov ebp, dword ptr [esp + 0x2c]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0048f0ba:  // mov si, word ptr [esi + 2]
    esi = (esi & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(esi + 0x2u))) & 0xffffu);
L_0048f0be:  // test si, si
    t0 = llog<16>((esi & 0xffffu) & (esi & 0xffffu), f);
L_0048f0c1:  // je 0x48f0d4
    if (f.zf) goto L_0048f0d4;
L_0048f0c3:  // and esi, 0xffff
    t0 = llog<32>(esi & 0xffffu, f);
    esi = (uint32_t)(t0);
L_0048f0c9:  // lea esi, [esi*8 + 0x8aa9f4]
    esi = (uint32_t)((uint32_t)(esi * 8u + 0x8aa9f4u));
L_0048f0d0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0048f0d2:  // jne 0x48f074
    if (!f.zf) goto L_0048f074;
L_0048f0d4:  // mov ebx, dword ptr [esp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0048f0d8:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048f0dc:  // mov edx, dword ptr [esp + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0048f0e0:  // add edx, 0x10
    t0 = ladd<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_0048f0e3:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0048f0e4:  // dec ebp
    t0 = ldec<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_0048f0e5:  // mov dword ptr [esp + 0x50], edx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(edx);
L_0048f0e9:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048f0ed:  // mov dword ptr [esp + 0x10], ebx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebx);
L_0048f0f1:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_0048f0f5:  // jne 0x48efd6
    if (!f.zf) goto L_0048efd6;
L_0048f0fb:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048f0ff:  // mov esi, dword ptr [esp + 0x58]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0048f103:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048f107:  // add esi, 8
    t0 = ladd<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_0048f10a:  // add ebx, 0x40
    t0 = ladd<32>(ebx, 0x40u, f);
    ebx = (uint32_t)(t0);
L_0048f10d:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0048f10e:  // mov dword ptr [esp + 0x58], esi
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(esi);
L_0048f112:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_0048f116:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0048f11a:  // jne 0x48efb1
    if (!f.zf) goto L_0048efb1;
L_0048f120:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048f121:  // lea eax, [esp + 0x34]
    eax = (uint32_t)((uint32_t)(esp + 0x34u));
L_0048f125:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048f127:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048f128:  // call 0x48e950
    t0 = 0x0048e950u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048f12du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048f12d:  // mov eax, dword ptr [0x6fabcc]
    eax = (uint32_t)(M32((uint32_t)(0x6fabccu)));
L_0048f132:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048f134:  // jne 0x48f14c
    if (!f.zf) goto L_0048f14c;
L_0048f136:  // mov edx, dword ptr [edi + 8]
    edx = (uint32_t)(M32((uint32_t)(edi + 0x8u)));
L_0048f139:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0048f13e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048f13f:  // mov edx, dword ptr [0x6fabf4]
    edx = (uint32_t)(M32((uint32_t)(0x6fabf4u)));
L_0048f145:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0048f147:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048f148:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048f149:  // call dword ptr [ecx + 0x7c]
    t0 = M32((uint32_t)(ecx + 0x7cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048f14cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048f14c:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048f14d:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048f14e:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048f14f:  // add esp, 0x38
    t0 = ladd<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_0048f152:  // ret 0x10
    c->target = M32(esp); esp += 20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
L_0048f155:  // mov eax, dword ptr [0x6fabf4]
    eax = (uint32_t)(M32((uint32_t)(0x6fabf4u)));
L_0048f15a:  // jmp 0x48ef62
    goto L_0048ef62;
L_0048f15f:  // shl eax, 9
    t0 = lshl<32>(eax, 0x9u, f);
    eax = (uint32_t)(t0);
L_0048f162:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0048f164:  // mov edx, 0x400
    edx = (uint32_t)(0x400u);
L_0048f169:  // mov dword ptr [esp + 0x2c], edx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edx);
L_0048f16d:  // lea eax, [eax*2 + 0x67a7d8]
    eax = (uint32_t)((uint32_t)(eax * 2u + 0x67a7d8u));
L_0048f174:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0048f178:  // jmp 0x48ef82
    goto L_0048ef82;
}

LIFT_FUNCTION_NF(0x0048ef00, 0048ef00)
