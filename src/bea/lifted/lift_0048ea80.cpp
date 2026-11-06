// lifted from 0048ea80 (FUN_0048ea80, 883 bytes, 290 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0048ea80(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0048ea80;
L_0048ea80:  // sub esp, 0x20
    t0 = lsub<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0048ea83:  // mov eax, dword ptr [esp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0048ea87:  // and eax, 0xffff
    t0 = llog<32>(eax & 0xffffu, f);
    eax = (uint32_t)(t0);
L_0048ea8c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048ea8d:  // mov ebx, dword ptr [0x6fabf0]
    ebx = (uint32_t)(M32((uint32_t)(0x6fabf0u)));
L_0048ea93:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ea94:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048ea95:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0048ea97:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048ea98:  // mov ecx, dword ptr [esi + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0048ea9b:  // mov edx, dword ptr [esi + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x3cu)));
L_0048ea9e:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0048eaa0:  // mov dword ptr [esi + 0x2c], 1
    M32((uint32_t)(esi + 0x2cu)) = (uint32_t)(0x1u);
L_0048eaa7:  // sub edi, ebx
    t0 = lsub<32>(edi, ebx, f);
    edi = (uint32_t)(t0);
L_0048eaa9:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0048eaab:  // and ebx, 0x3f
    t0 = llog<32>(ebx & 0x3fu, f);
    ebx = (uint32_t)(t0);
L_0048eaae:  // shr eax, 3
    t0 = lshr<32>(eax, 0x3u, f);
    eax = (uint32_t)(t0);
L_0048eab1:  // shl ebx, 3
    t0 = lshl<32>(ebx, 0x3u, f);
    ebx = (uint32_t)(t0);
L_0048eab4:  // and al, 0xf8
    t0 = llog<8>((eax & 0xffu) & 0xf8u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0048eab6:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0048eab8:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0048eaba:  // jge 0x48ec5c
    if ((f.sf == f.of)) goto L_0048ec5c;
L_0048eac0:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0048eac2:  // mov eax, 8
    eax = (uint32_t)(0x8u);
L_0048eac7:  // and edi, ebx
    t0 = llog<32>(edi & ebx, f);
    edi = (uint32_t)(t0);
L_0048eac9:  // and edx, ebp
    t0 = llog<32>(edx & ebp, f);
    edx = (uint32_t)(t0);
L_0048eacb:  // shl edi, cl
    t0 = lshl<32>(edi, (ecx & 0xffu), f);
    edi = (uint32_t)(t0);
L_0048eacd:  // shl eax, cl
    t0 = lshl<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_0048eacf:  // shl edx, cl
    t0 = lshl<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_0048ead1:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_0048ead5:  // lea ecx, [eax + edi]
    ecx = (uint32_t)((uint32_t)(eax + edi));
L_0048ead8:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048eada:  // mov dword ptr [esp + 0x2c], eax
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(eax);
L_0048eade:  // mov eax, dword ptr [0x6fabf0]
    eax = (uint32_t)(M32((uint32_t)(0x6fabf0u)));
L_0048eae3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048eae5:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0048eae9:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_0048eaed:  // jne 0x48ec3f
    if (!f.zf) goto L_0048ec3f;
L_0048eaf3:  // mov eax, dword ptr [0x6fabcc]
    eax = (uint32_t)(M32((uint32_t)(0x6fabccu)));
L_0048eaf8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048eafa:  // je 0x48ec35
    if (f.zf) goto L_0048ec35;
L_0048eb00:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0048eb03:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0048eb05:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0048eb09:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048eb0b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048eb0c:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0048eb10:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048eb11:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048eb13:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048eb14:  // call dword ptr [edx + 0x4c]
    t0 = M32((uint32_t)(edx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048eb17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048eb17:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048eb19:  // jl 0x48ede9
    if ((f.sf != f.of)) goto L_0048ede9;
L_0048eb1f:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048eb23:  // mov edi, dword ptr [esp + 0x34]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0048eb27:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048eb28:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0048eb2a:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0048eb2c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048eb2e:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048eb30:  // and edi, 0xffff
    t0 = llog<32>(edi & 0xffffu, f);
    edi = (uint32_t)(t0);
L_0048eb36:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048eb38:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0048eb3a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048eb3b:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048eb3d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048eb3e:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0048eb42:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048eb43:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0048eb46:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0048eb49:  // lea edx, [eax + ecx*2]
    edx = (uint32_t)((uint32_t)(eax + ecx * 2u));
L_0048eb4c:  // mov eax, dword ptr [0x89ce3c]
    eax = (uint32_t)(M32((uint32_t)(0x89ce3cu)));
L_0048eb51:  // lea ecx, [eax + edx*4]
    ecx = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0048eb54:  // mov edx, dword ptr [esi + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0048eb57:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048eb58:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048eb59:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0048eb5e:  // call 0x47eff0
    t0 = 0x0047eff0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048eb63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048eb63:  // mov di, word ptr [edi*2 + 0x8be274]
    edi = (edi & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edi * 2u + 0x8be274u))) & 0xffffu);
L_0048eb6b:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048eb6f:  // test di, di
    t0 = llog<16>((edi & 0xffffu) & (edi & 0xffffu), f);
L_0048eb72:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0048eb76:  // je 0x48ec17
    if (f.zf) goto L_0048ec17;
L_0048eb7c:  // and edi, 0xffff
    t0 = llog<32>(edi & 0xffffu, f);
    edi = (uint32_t)(t0);
L_0048eb82:  // lea edi, [edi*8 + 0x8aa9f4]
    edi = (uint32_t)((uint32_t)(edi * 8u + 0x8aa9f4u));
L_0048eb89:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0048eb8b:  // je 0x48ec17
    if (f.zf) goto L_0048ec17;
L_0048eb91:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048eb95:  // mov ebx, 4
    ebx = (uint32_t)(0x4u);
L_0048eb9a:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048eb9b:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048eb9d:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_0048eba2:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048eba4:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0048eba8:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0048ebab:  // sub ebx, eax
    t0 = lsub<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0048ebad:  // lea ecx, [eax + 3]
    ecx = (uint32_t)((uint32_t)(eax + 0x3u));
L_0048ebb0:  // shl ebp, cl
    t0 = lshl<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0048ebb2:  // mov dword ptr [esp + 0x14], ebp
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebp);
L_0048ebb6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048ebb8:  // mov al, byte ptr [edi + 7]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x7u))) & 0xffu);
L_0048ebbb:  // sub eax, ebx
    t0 = lsub<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0048ebbd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048ebbf:  // jle 0x48ebfd
    if ((f.zf || f.sf != f.of)) goto L_0048ebfd;
L_0048ebc1:  // movsx edx, bl
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0048ebc4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ebc5:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0048ebc7:  // movsx ebp, byte ptr [edi + 5]
    ebp = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(edi + 0x5u))));
L_0048ebcb:  // sar ebp, cl
    t0 = lsar<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0048ebcd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ebce:  // mov edx, dword ptr [0x8aa9f0]
    edx = (uint32_t)(M32((uint32_t)(0x8aa9f0u)));
L_0048ebd4:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ebd5:  // movsx ebp, byte ptr [edi + 4]
    ebp = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(edi + 0x4u))));
L_0048ebd9:  // sar ebp, cl
    t0 = lsar<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0048ebdb:  // mov ecx, dword ptr [eax*4 + 0x628298]
    ecx = (uint32_t)(M32((uint32_t)(eax * 4u + 0x628298u)));
L_0048ebe2:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0048ebe6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ebe7:  // mov ebp, dword ptr [edx]
    ebp = (uint32_t)(M32((uint32_t)(edx)));
L_0048ebe9:  // add ecx, ebp
    t0 = ladd<32>(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0048ebeb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048ebec:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0048ebf0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ebf1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048ebf2:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048ebf4:  // call 0x48ee00
    t0 = 0x0048ee00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048ebf9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048ebf9:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0048ebfd:  // mov di, word ptr [edi + 2]
    edi = (edi & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edi + 0x2u))) & 0xffffu);
L_0048ec01:  // test di, di
    t0 = llog<16>((edi & 0xffffu) & (edi & 0xffffu), f);
L_0048ec04:  // je 0x48ec17
    if (f.zf) goto L_0048ec17;
L_0048ec06:  // and edi, 0xffff
    t0 = llog<32>(edi & 0xffffu, f);
    edi = (uint32_t)(t0);
L_0048ec0c:  // lea edi, [edi*8 + 0x8aa9f4]
    edi = (uint32_t)((uint32_t)(edi * 8u + 0x8aa9f4u));
L_0048ec13:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0048ec15:  // jne 0x48ebb6
    if (!f.zf) goto L_0048ebb6;
L_0048ec17:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0048ec1b:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048ec1d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048ec1e:  // call 0x48e950
    t0 = 0x0048e950u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048ec23u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048ec23:  // mov eax, dword ptr [0x6fabcc]
    eax = (uint32_t)(M32((uint32_t)(0x6fabccu)));
L_0048ec28:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048ec2a:  // jne 0x48ede9
    if (!f.zf) goto L_0048ede9;
L_0048ec30:  // jmp 0x48edd3
    goto L_0048edd3;
L_0048ec35:  // mov eax, dword ptr [0x6fabf4]
    eax = (uint32_t)(M32((uint32_t)(0x6fabf4u)));
L_0048ec3a:  // jmp 0x48eb03
    goto L_0048eb03;
L_0048ec3f:  // shl edx, 9
    t0 = lshl<32>(edx, 0x9u, f);
    edx = (uint32_t)(t0);
L_0048ec42:  // add edx, edi
    t0 = ladd<32>(edx, edi, f);
    edx = (uint32_t)(t0);
L_0048ec44:  // mov dword ptr [esp + 0x18], 0x400
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x400u);
L_0048ec4c:  // lea edx, [edx*2 + 0x67a7d8]
    edx = (uint32_t)((uint32_t)(edx * 2u + 0x67a7d8u));
L_0048ec53:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_0048ec57:  // jmp 0x48eb1f
    goto L_0048eb1f;
L_0048ec5c:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0048ec5e:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0048ec60:  // and eax, ebx
    t0 = llog<32>(eax & ebx, f);
    eax = (uint32_t)(t0);
L_0048ec62:  // mov ebx, 8
    ebx = (uint32_t)(0x8u);
L_0048ec67:  // shl eax, cl
    t0 = lshl<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_0048ec69:  // shl ebx, cl
    t0 = lshl<32>(ebx, (ecx & 0xffu), f);
    ebx = (uint32_t)(t0);
L_0048ec6b:  // and edx, ebp
    t0 = llog<32>(edx & ebp, f);
    edx = (uint32_t)(t0);
L_0048ec6d:  // shl edx, cl
    t0 = lshl<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_0048ec6f:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0048ec73:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0048ec75:  // mov dword ptr [esp + 0x28], eax
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(eax);
L_0048ec79:  // mov eax, dword ptr [0x6fabcc]
    eax = (uint32_t)(M32((uint32_t)(0x6fabccu)));
L_0048ec7e:  // add ebx, edx
    t0 = ladd<32>(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_0048ec80:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0048ec84:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048ec86:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_0048ec8a:  // je 0x48ec91
    if (f.zf) goto L_0048ec91;
L_0048ec8c:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0048ec8f:  // jmp 0x48ec96
    goto L_0048ec96;
L_0048ec91:  // mov eax, dword ptr [0x6fabf4]
    eax = (uint32_t)(M32((uint32_t)(0x6fabf4u)));
L_0048ec96:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0048ec98:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0048ec9c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048ec9e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048ec9f:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_0048eca3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048eca4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048eca6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048eca7:  // call dword ptr [ecx + 0x4c]
    t0 = M32((uint32_t)(ecx + 0x4cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048ecaau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048ecaa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048ecac:  // jl 0x48edca
    if ((f.sf != f.of)) goto L_0048edca;
L_0048ecb2:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048ecb6:  // mov ebx, dword ptr [esp + 0x34]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0048ecba:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048ecbb:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0048ecbd:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0048ecbf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048ecc1:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048ecc3:  // and ebx, 0xffff
    t0 = llog<32>(ebx & 0xffffu, f);
    ebx = (uint32_t)(t0);
L_0048ecc9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048eccb:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0048eccd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0048ecce:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048ecd0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ecd1:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0048ecd5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ecd6:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_0048ecd9:  // lea ecx, [eax + eax*8]
    ecx = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0048ecdc:  // lea edx, [eax + ecx*2]
    edx = (uint32_t)((uint32_t)(eax + ecx * 2u));
L_0048ecdf:  // mov eax, dword ptr [0x89ce3c]
    eax = (uint32_t)(M32((uint32_t)(0x89ce3cu)));
L_0048ece4:  // lea ecx, [eax + edx*4]
    ecx = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0048ece7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048ece8:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0048ece9:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_0048ecee:  // call 0x47eff0
    t0 = 0x0047eff0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048ecf3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048ecf3:  // mov bx, word ptr [ebx*2 + 0x8be274]
    ebx = (ebx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(ebx * 2u + 0x8be274u))) & 0xffffu);
L_0048ecfb:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048ecff:  // test bx, bx
    t0 = llog<16>((ebx & 0xffffu) & (ebx & 0xffffu), f);
L_0048ed02:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0048ed06:  // je 0x48eda7
    if (f.zf) goto L_0048eda7;
L_0048ed0c:  // and ebx, 0xffff
    t0 = llog<32>(ebx & 0xffffu, f);
    ebx = (uint32_t)(t0);
L_0048ed12:  // lea edi, [ebx*8 + 0x8aa9f4]
    edi = (uint32_t)((uint32_t)(ebx * 8u + 0x8aa9f4u));
L_0048ed19:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0048ed1b:  // je 0x48eda7
    if (f.zf) goto L_0048eda7;
L_0048ed21:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048ed25:  // mov ebx, 4
    ebx = (uint32_t)(0x4u);
L_0048ed2a:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0048ed2b:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048ed2d:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_0048ed32:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0048ed34:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0048ed38:  // mov eax, dword ptr [esi + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_0048ed3b:  // sub ebx, eax
    t0 = lsub<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0048ed3d:  // lea ecx, [eax + 3]
    ecx = (uint32_t)((uint32_t)(eax + 0x3u));
L_0048ed40:  // shl ebp, cl
    t0 = lshl<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0048ed42:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_0048ed46:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048ed48:  // mov al, byte ptr [edi + 7]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x7u))) & 0xffu);
L_0048ed4b:  // sub eax, ebx
    t0 = lsub<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_0048ed4d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048ed4f:  // jle 0x48ed8d
    if ((f.zf || f.sf != f.of)) goto L_0048ed8d;
L_0048ed51:  // movsx edx, bl
    edx = (uint32_t)((uint32_t)(int32_t)(int8_t)((ebx & 0xffu)));
L_0048ed54:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ed55:  // mov cl, dl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_0048ed57:  // movsx ebp, byte ptr [edi + 5]
    ebp = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(edi + 0x5u))));
L_0048ed5b:  // sar ebp, cl
    t0 = lsar<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0048ed5d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ed5e:  // mov eax, dword ptr [eax*4 + 0x628298]
    eax = (uint32_t)(M32((uint32_t)(eax * 4u + 0x628298u)));
L_0048ed65:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ed66:  // movsx ebp, byte ptr [edi + 4]
    ebp = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(edi + 0x4u))));
L_0048ed6a:  // sar ebp, cl
    t0 = lsar<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0048ed6c:  // mov ecx, dword ptr [0x8aa9f0]
    ecx = (uint32_t)(M32((uint32_t)(0x8aa9f0u)));
L_0048ed72:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0048ed74:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048ed76:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0048ed78:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0048ed7c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0048ed7d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ed7e:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0048ed82:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048ed83:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ed84:  // call 0x48ee00
    t0 = 0x0048ee00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048ed89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048ed89:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0048ed8d:  // mov di, word ptr [edi + 2]
    edi = (edi & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(edi + 0x2u))) & 0xffffu);
L_0048ed91:  // test di, di
    t0 = llog<16>((edi & 0xffffu) & (edi & 0xffffu), f);
L_0048ed94:  // je 0x48eda7
    if (f.zf) goto L_0048eda7;
L_0048ed96:  // and edi, 0xffff
    t0 = llog<32>(edi & 0xffffu, f);
    edi = (uint32_t)(t0);
L_0048ed9c:  // lea edi, [edi*8 + 0x8aa9f4]
    edi = (uint32_t)((uint32_t)(edi * 8u + 0x8aa9f4u));
L_0048eda3:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0048eda5:  // jne 0x48ed46
    if (!f.zf) goto L_0048ed46;
L_0048eda7:  // mov eax, dword ptr [0x6fabcc]
    eax = (uint32_t)(M32((uint32_t)(0x6fabccu)));
L_0048edac:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048edae:  // je 0x48edbd
    if (f.zf) goto L_0048edbd;
L_0048edb0:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0048edb3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048edb5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048edb6:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0048edb8:  // call dword ptr [ecx + 0x50]
    t0 = M32((uint32_t)(ecx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048edbbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048edbb:  // jmp 0x48edca
    goto L_0048edca;
L_0048edbd:  // mov eax, dword ptr [0x6fabf4]
    eax = (uint32_t)(M32((uint32_t)(0x6fabf4u)));
L_0048edc2:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048edc4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048edc5:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0048edc7:  // call dword ptr [edx + 0x50]
    t0 = M32((uint32_t)(edx + 0x50u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048edcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048edca:  // mov eax, dword ptr [0x6fabcc]
    eax = (uint32_t)(M32((uint32_t)(0x6fabccu)));
L_0048edcf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048edd1:  // jne 0x48ede9
    if (!f.zf) goto L_0048ede9;
L_0048edd3:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0048edd6:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0048eddb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048eddc:  // mov edx, dword ptr [0x6fabf4]
    edx = (uint32_t)(M32((uint32_t)(0x6fabf4u)));
L_0048ede2:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0048ede4:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048ede5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048ede6:  // call dword ptr [ecx + 0x7c]
    t0 = M32((uint32_t)(ecx + 0x7cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0048ede9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0048ede9:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0048edea:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0048edeb:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0048edec:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0048eded:  // add esp, 0x20
    t0 = ladd<32>(esp, 0x20u, f);
    esp = (uint32_t)(t0);
L_0048edf0:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0048ea80, 0048ea80)
