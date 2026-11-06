// lifted from 00500fa0 (FUN_00500fa0, 308 bytes, 105 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00500fa0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00500fa0;
L_00500fa0:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00500fa1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00500fa2:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_00500fa4:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_00500fa6:  // cmp dword ptr [esi + 0x1c], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x1cu)), ebx, f);
L_00500fa9:  // je 0x5010cf
    if (f.zf) goto L_005010cf;
L_00500faf:  // cmp dword ptr [esi + 0x34], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x34u)), ebx, f);
L_00500fb2:  // je 0x5010cf
    if (f.zf) goto L_005010cf;
L_00500fb8:  // cmp byte ptr [esi + 0x10], bl
    t0 = lsub<8>(M8((uint32_t)(esi + 0x10u)), (ebx & 0xffu), f);
L_00500fbb:  // je 0x500fcf
    if (f.zf) goto L_00500fcf;
L_00500fbd:  // mov eax, dword ptr [esi + 0x48]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x48u)));
L_00500fc0:  // mov ecx, dword ptr [esi + eax*4 + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esi + eax * 4u + 0x40u)));
L_00500fc4:  // call 0x5001e0
    t0 = 0x005001e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00500fc9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00500fc9:  // mov dword ptr [esi + 0x38], ebx
    M32((uint32_t)(esi + 0x38u)) = (uint32_t)(ebx);
L_00500fcc:  // mov byte ptr [esi + 0x10], bl
    M8((uint32_t)(esi + 0x10u)) = (uint8_t)((ebx & 0xffu));
L_00500fcf:  // cmp byte ptr [esi + 0x2c], bl
    t0 = lsub<8>(M8((uint32_t)(esi + 0x2cu)), (ebx & 0xffu), f);
L_00500fd2:  // je 0x500fe2
    if (f.zf) goto L_00500fe2;
L_00500fd4:  // mov ecx, dword ptr [esi + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4cu)));
L_00500fd7:  // call 0x4883f0
    t0 = 0x004883f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00500fdcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00500fdc:  // mov dword ptr [esi + 0x3c], ebx
    M32((uint32_t)(esi + 0x3cu)) = (uint32_t)(ebx);
L_00500fdf:  // mov byte ptr [esi + 0x2c], bl
    M8((uint32_t)(esi + 0x2cu)) = (uint8_t)((ebx & 0xffu));
L_00500fe2:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00500fe3:  // mov ebp, dword ptr [esp + 0x14]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00500fe7:  // cmp ebp, ebx
    t0 = lsub<32>(ebp, ebx, f);
L_00500fe9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00500fea:  // jne 0x500ff5
    if (!f.zf) goto L_00500ff5;
L_00500fec:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_00500fef:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00500ff0:  // idiv dword ptr [esi + 0x54]
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)M32((uint32_t)(esi + 0x54u)); eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_00500ff3:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_00500ff5:  // mov edi, dword ptr [esp + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00500ff9:  // cmp edi, ebx
    t0 = lsub<32>(edi, ebx, f);
L_00500ffb:  // jne 0x501006
    if (!f.zf) goto L_00501006;
L_00500ffd:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00500fff:  // call 0x500c50
    t0 = 0x00500c50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00501004u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00501004:  // mov edi, eax
    edi = (uint32_t)(eax);
L_00501006:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_00501009:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_0050100b:  // je 0x501019
    if (f.zf) goto L_00501019;
L_0050100d:  // mov dword ptr [0x9c73d4], eax
    M32((uint32_t)(0x9c73d4u)) = (uint32_t)(eax);
L_00501012:  // mov byte ptr [0x9c741c], 1
    M8((uint32_t)(0x9c741cu)) = (uint8_t)(0x1u);
L_00501019:  // mov cl, byte ptr [0x854dd9]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x854dd9u))) & 0xffu);
L_0050101f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501020:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00501021:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00501026:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050102bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050102b:  // mov ecx, dword ptr [esi + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x54u)));
L_0050102e:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501033:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501034:  // mov ecx, dword ptr [esi + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x48u)));
L_00501037:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00501039:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050103a:  // mov ecx, dword ptr [esi + ecx*4 + 0x40]
    ecx = (uint32_t)(M32((uint32_t)(esi + ecx * 4u + 0x40u)));
L_0050103e:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00501041:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501042:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00501043:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501044:  // call dword ptr [edx + 0x190]
    t0 = M32((uint32_t)(edx + 0x190u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050104au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050104a:  // mov ecx, dword ptr [esi + 0x4c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4cu)));
L_0050104d:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_00501052:  // mov ecx, dword ptr [ecx + 8]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00501055:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_00501057:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00501058:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501059:  // call dword ptr [edx + 0x1a0]
    t0 = M32((uint32_t)(edx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050105fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050105f:  // cmp byte ptr [0x854dd9], bl
    t0 = lsub<8>(M8((uint32_t)(0x854dd9u)), (ebx & 0xffu), f);
L_00501065:  // je 0x501097
    if (f.zf) goto L_00501097;
L_00501067:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0050106c:  // call 0x513e00
    t0 = 0x00513e00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x00501071u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_00501071:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00501073:  // jge 0x501097
    if ((f.sf == f.of)) goto L_00501097;
L_00501075:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00501076:  // call 0x5be628
    t0 = 0x005be628u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050107bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050107b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0050107c:  // push 0x633e60
    t0 = 0x633e60u; esp -= 4; M32(esp) = t0;
L_00501081:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_00501086:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x0050108bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_0050108b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0050108e:  // mov byte ptr [0x854dd8], 1
    M8((uint32_t)(0x854dd8u)) = (uint8_t)(0x1u);
L_00501095:  // jmp 0x5010a9
    goto L_005010a9;
L_00501097:  // mov edx, dword ptr [esi + 0x50]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x50u)));
L_0050109a:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0050109b:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050109c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0050109d:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0050109e:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0050109f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_005010a4:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x005010a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_005010a9:  // mov al, byte ptr [esp + 0x14]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x14u))) & 0xffu);
L_005010ad:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005010ae:  // cmp al, bl
    t0 = lsub<8>((eax & 0xffu), (ebx & 0xffu), f);
L_005010b0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005010b1:  // je 0x5010cf
    if (f.zf) goto L_005010cf;
L_005010b3:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_005010b6:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_005010b8:  // je 0x5010bd
    if (f.zf) goto L_005010bd;
L_005010ba:  // mov dword ptr [esi + 0x64], eax
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(eax);
L_005010bd:  // mov dword ptr [esi + 0x1c], ebx
    M32((uint32_t)(esi + 0x1cu)) = (uint32_t)(ebx);
L_005010c0:  // mov dword ptr [esi + 0x34], ebx
    M32((uint32_t)(esi + 0x34u)) = (uint32_t)(ebx);
L_005010c3:  // cmp byte ptr [0x854e04], bl
    t0 = lsub<8>(M8((uint32_t)(0x854e04u)), (ebx & 0xffu), f);
L_005010c9:  // je 0x5010cf
    if (f.zf) goto L_005010cf;
L_005010cb:  // xor dword ptr [esi + 0x48], 1
    t0 = llog<32>(M32((uint32_t)(esi + 0x48u)) ^ 0x1u, f);
    M32((uint32_t)(esi + 0x48u)) = (uint32_t)(t0);
L_005010cf:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005010d0:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_005010d1:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x00500fa0, 00500fa0)
