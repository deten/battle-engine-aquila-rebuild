// lifted from 004fa8d0 (vslot66, 2452 bytes, 712 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004fa8d0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004fa8d0;
L_004fa8d0:  // sub esp, 0xa8
    t0 = lsub<32>(esp, 0xa8u, f);
    esp = (uint32_t)(t0);
L_004fa8d6:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004fa8d7:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fa8d8:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_004fa8da:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fa8db:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004fa8dc:  // mov ecx, dword ptr [ebp + 0x208]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x208u)));
L_004fa8e2:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fa8e4:  // je 0x4fa8fd
    if (f.zf) goto L_004fa8fd;
L_004fa8e6:  // mov eax, dword ptr [ebp + 0x214]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x214u)));
L_004fa8ec:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa8ee:  // jne 0x4fa8f6
    if (!f.zf) goto L_004fa8f6;
L_004fa8f0:  // test byte ptr [ebp + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x4u, f);
L_004fa8f4:  // je 0x4fa8fd
    if (f.zf) goto L_004fa8fd;
L_004fa8f6:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004fa8f8:  // call dword ptr [eax + 0xc]
    t0 = M32((uint32_t)(eax + 0xcu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa8fbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa8fb:  // jmp 0x4fa908
    goto L_004fa908;
L_004fa8fd:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004fa900:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fa902:  // call dword ptr [edx + 0x100]
    t0 = M32((uint32_t)(edx + 0x100u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa908u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa908:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fa90a:  // mov dword ptr [ebp + 0x248], 0
    M32((uint32_t)(ebp + 0x248u)) = (uint32_t)(0x0u);
L_004fa914:  // call 0x4fa800
    t0 = 0x004fa800u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa919u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa919:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fa91b:  // call 0x4015e0
    t0 = 0x004015e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa920u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa920:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004fa923:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fa925:  // call dword ptr [eax + 0x130]
    t0 = M32((uint32_t)(eax + 0x130u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa92bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa92b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa92d:  // je 0x4fa980
    if (f.zf) goto L_004fa980;
L_004fa92f:  // fld dword ptr [ebp + 0x120]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x120u)));
L_004fa935:  // fcomp dword ptr [ebp + 0x114]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x114u)));
    lpop(x);
L_004fa93b:  // lea edx, [ebp + 0x120]
    edx = (uint32_t)((uint32_t)(ebp + 0x120u));
L_004fa941:  // lea ecx, [ebp + 0x114]
    ecx = (uint32_t)((uint32_t)(ebp + 0x114u));
L_004fa947:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa949:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fa94c:  // je 0x4fa968
    if (f.zf) goto L_004fa968;
L_004fa94e:  // fld dword ptr [edx + 4]
    lpush(x, (long double)F32((uint32_t)(edx + 0x4u)));
L_004fa951:  // fcomp dword ptr [ecx + 4]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x4u)));
    lpop(x);
L_004fa954:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa956:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fa959:  // je 0x4fa968
    if (f.zf) goto L_004fa968;
L_004fa95b:  // fld dword ptr [edx + 8]
    lpush(x, (long double)F32((uint32_t)(edx + 0x8u)));
L_004fa95e:  // fcomp dword ptr [ecx + 8]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0x8u)));
    lpop(x);
L_004fa961:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa963:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_004fa966:  // jne 0x4fa980
    if (!f.zf) goto L_004fa980;
L_004fa968:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004fa96b:  // lea esi, [ebp + 0x3c]
    esi = (uint32_t)((uint32_t)(ebp + 0x3cu));
L_004fa96e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fa96f:  // lea esi, [ebp + 0x12c]
    esi = (uint32_t)((uint32_t)(ebp + 0x12cu));
L_004fa975:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004fa976:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004fa977:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004fa978:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fa97a:  // call dword ptr [eax + 0x134]
    t0 = M32((uint32_t)(eax + 0x134u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa980u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa980:  // test byte ptr [ebp + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x4u, f);
L_004fa984:  // jne 0x4fa9b3
    if (!f.zf) goto L_004fa9b3;
L_004fa986:  // fld dword ptr [ebp + 0x108]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x108u)));
L_004fa98c:  // fadd dword ptr [ebp + 0x100]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x100u)));
L_004fa992:  // fst dword ptr [ebp + 0x100]
    F32((uint32_t)(ebp + 0x100u)) = lf32(ST(0));
L_004fa998:  // fcomp dword ptr [ebp + 0x104]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x104u)));
    lpop(x);
L_004fa99e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa9a0:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fa9a3:  // jne 0x4fa9e7
    if (!f.zf) goto L_004fa9e7;
L_004fa9a5:  // mov ecx, dword ptr [ebp + 0x104]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x104u)));
L_004fa9ab:  // mov dword ptr [ebp + 0x100], ecx
    M32((uint32_t)(ebp + 0x100u)) = (uint32_t)(ecx);
L_004fa9b1:  // jmp 0x4fa9e7
    goto L_004fa9e7;
L_004fa9b3:  // mov edx, dword ptr [ebp + 0x164]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_004fa9b9:  // mov eax, dword ptr [edx + 0x124]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x124u)));
L_004fa9bf:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa9c1:  // je 0x4fa9e7
    if (f.zf) goto L_004fa9e7;
L_004fa9c3:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004fa9c6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fa9c8:  // call dword ptr [eax + 0x60]
    t0 = M32((uint32_t)(eax + 0x60u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa9cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa9cb:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004fa9cf:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004fa9d3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fa9d5:  // jle 0x4fa9e7
    if ((f.zf || f.sf != f.of)) goto L_004fa9e7;
L_004fa9d7:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004fa9d9:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004fa9dc:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fa9de:  // call dword ptr [edx + 0x17c]
    t0 = M32((uint32_t)(edx + 0x17cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fa9e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fa9e4:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_004fa9e5:  // jne 0x4fa9d9
    if (!f.zf) goto L_004fa9d9;
L_004fa9e7:  // fld dword ptr [ebp + 0x170]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x170u)));
L_004fa9ed:  // fadd dword ptr [0x5d85c0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85c0u)));
L_004fa9f3:  // fcom dword ptr [ebp + 0x174]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x174u)));
L_004fa9f9:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fa9fb:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fa9fe:  // je 0x4faa08
    if (f.zf) goto L_004faa08;
L_004faa00:  // fstp dword ptr [ebp + 0x170]
    F32((uint32_t)(ebp + 0x170u)) = lf32(ST(0));
    lpop(x);
L_004faa06:  // jmp 0x4faa39
    goto L_004faa39;
L_004faa08:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004faa0a:  // fld dword ptr [ebp + 0x170]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x170u)));
L_004faa10:  // fsub dword ptr [0x5d85c0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85c0u)));
L_004faa16:  // fcom dword ptr [ebp + 0x174]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0x174u)));
L_004faa1c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faa1e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004faa21:  // jne 0x4faa2b
    if (!f.zf) goto L_004faa2b;
L_004faa23:  // fstp dword ptr [ebp + 0x170]
    F32((uint32_t)(ebp + 0x170u)) = lf32(ST(0));
    lpop(x);
L_004faa29:  // jmp 0x4faa39
    goto L_004faa39;
L_004faa2b:  // mov eax, dword ptr [ebp + 0x174]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x174u)));
L_004faa31:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004faa33:  // mov dword ptr [ebp + 0x170], eax
    M32((uint32_t)(ebp + 0x170u)) = (uint32_t)(eax);
L_004faa39:  // mov ebx, dword ptr [ebp + 0x1c4]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x1c4u)));
L_004faa3f:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_004faa47:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004faa49:  // je 0x4faa4f
    if (f.zf) goto L_004faa4f;
L_004faa4b:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_004faa4d:  // jmp 0x4faa51
    goto L_004faa51;
L_004faa4f:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004faa51:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004faa53:  // je 0x4faac2
    if (f.zf) goto L_004faac2;
L_004faa55:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004faa58:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004faa5a:  // je 0x4faaa8
    if (f.zf) goto L_004faaa8;
L_004faa5c:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004faa5f:  // lea eax, [esp + 0x58]
    eax = (uint32_t)((uint32_t)(esp + 0x58u));
L_004faa63:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004faa64:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004faa68:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004faa6c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004faa6d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004faa6e:  // push 0x15
    t0 = 0x15u; esp -= 4; M32(esp) = t0;
L_004faa70:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004faa72:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004faa78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004faa78:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004faa7b:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004faa7d:  // je 0x4faa89
    if (f.zf) goto L_004faa89;
L_004faa7f:  // lea edx, [esp + 0x28]
    edx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004faa83:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004faa84:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004faa89u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004faa89:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004faa8c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004faa8e:  // je 0x4faaa8
    if (f.zf) goto L_004faaa8;
L_004faa90:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004faa93:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004faa98:  // lea esi, [esp + 0x58]
    esi = (uint32_t)((uint32_t)(esp + 0x58u));
L_004faa9c:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004faa9e:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004faaa8:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004faaac:  // mov ebx, dword ptr [ebx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004faaaf:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004faab0:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004faab2:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004faab6:  // je 0x4faabc
    if (f.zf) goto L_004faabc;
L_004faab8:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_004faaba:  // jmp 0x4faabe
    goto L_004faabe;
L_004faabc:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004faabe:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004faac0:  // jne 0x4faa55
    if (!f.zf) goto L_004faa55;
L_004faac2:  // cmp dword ptr [ebp + 0x168], 1
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x168u)), 0x1u, f);
L_004faac9:  // jne 0x4fab3e
    if (!f.zf) goto L_004fab3e;
L_004faacb:  // mov eax, dword ptr [ebp + 0x1ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1acu)));
L_004faad1:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004faad4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004faad6:  // je 0x4fab3e
    if (f.zf) goto L_004fab3e;
L_004faad8:  // mov ecx, dword ptr [ebp + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x140u)));
L_004faade:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004faae0:  // je 0x4fab3e
    if (f.zf) goto L_004fab3e;
L_004faae2:  // lea edx, [esp + 0x48]
    edx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004faae6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004faae7:  // call 0x44a850
    t0 = 0x0044a850u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004faaecu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004faaec:  // mov ecx, dword ptr [ebp + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x140u)));
L_004faaf2:  // lea eax, [esp + 0x88]
    eax = (uint32_t)((uint32_t)(esp + 0x88u));
L_004faaf9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004faafa:  // call 0x44a930
    t0 = 0x0044a930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004faaffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004faaff:  // mov eax, dword ptr [ebp + 0x1ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1acu)));
L_004fab05:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004fab08:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fab0a:  // je 0x4fab16
    if (f.zf) goto L_004fab16;
L_004fab0c:  // lea edx, [esp + 0x48]
    edx = (uint32_t)((uint32_t)(esp + 0x48u));
L_004fab10:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004fab11:  // call 0x4097a0
    t0 = 0x004097a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fab16u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fab16:  // mov eax, dword ptr [ebp + 0x1ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1acu)));
L_004fab1c:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004fab1f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fab21:  // je 0x4fab3e
    if (f.zf) goto L_004fab3e;
L_004fab23:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004fab26:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004fab2b:  // lea esi, [esp + 0x88]
    esi = (uint32_t)((uint32_t)(esp + 0x88u));
L_004fab32:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004fab34:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004fab3e:  // mov eax, dword ptr [ebp + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_004fab44:  // mov ecx, dword ptr [eax + 0x10c]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x10cu)));
L_004fab4a:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fab4c:  // je 0x4facb1
    if (f.zf) goto L_004facb1;
L_004fab52:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004fab55:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fab57:  // call dword ptr [edx + 0x10c]
    t0 = M32((uint32_t)(edx + 0x10cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fab5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fab5d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fab5f:  // je 0x4facb1
    if (f.zf) goto L_004facb1;
L_004fab65:  // mov ebx, dword ptr [ebp + 0x1b4]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x1b4u)));
L_004fab6b:  // mov dword ptr [esp + 0x10], 1
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x1u);
L_004fab73:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004fab75:  // je 0x4fab7b
    if (f.zf) goto L_004fab7b;
L_004fab77:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_004fab79:  // jmp 0x4fab7d
    goto L_004fab7d;
L_004fab7b:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004fab7d:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fab7f:  // je 0x4facb1
    if (f.zf) goto L_004facb1;
L_004fab85:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004fab88:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fab8a:  // jne 0x4fabd8
    if (!f.zf) goto L_004fabd8;
L_004fab8c:  // mov ecx, dword ptr [0x854d80]
    ecx = (uint32_t)(M32((uint32_t)(0x854d80u)));
L_004fab92:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fab94:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fab96:  // mov edx, dword ptr [0x854d84]
    edx = (uint32_t)(M32((uint32_t)(0x854d84u)));
L_004fab9c:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fab9f:  // mov eax, esp
    eax = (uint32_t)(esp);
L_004faba1:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004faba2:  // mov dword ptr [eax], ecx
    M32((uint32_t)(eax)) = (uint32_t)(ecx);
L_004faba4:  // mov ecx, dword ptr [0x854d88]
    ecx = (uint32_t)(M32((uint32_t)(0x854d88u)));
L_004fabaa:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_004fabad:  // mov edx, dword ptr [0x854d8c]
    edx = (uint32_t)(M32((uint32_t)(0x854d8cu)));
L_004fabb3:  // mov dword ptr [eax + 8], ecx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(ecx);
L_004fabb6:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004fabb9:  // mov eax, dword ptr [ebp + 0x164]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_004fabbf:  // mov ecx, dword ptr [eax + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_004fabc2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004fabc3:  // mov ecx, 0x9c63e8
    ecx = (uint32_t)(0x9c63e8u);
L_004fabc8:  // call 0x4cb3d0
    t0 = 0x004cb3d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fabcdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fabcd:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004fabd0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fabd2:  // je 0x4fac93
    if (f.zf) goto L_004fac93;
L_004fabd8:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004fabdb:  // lea eax, [esp + 0x58]
    eax = (uint32_t)((uint32_t)(esp + 0x58u));
L_004fabdf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fabe0:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004fabe4:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004fabe8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004fabe9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fabea:  // push 0x16
    t0 = 0x16u; esp -= 4; M32(esp) = t0;
L_004fabec:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fabee:  // call dword ptr [edx + 0x160]
    t0 = M32((uint32_t)(edx + 0x160u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fabf4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fabf4:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004fabf7:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fabf9:  // je 0x4fac74
    if (f.zf) goto L_004fac74;
L_004fabfb:  // cmp dword ptr [ecx + 0x48], 0x461c4000
    t0 = lsub<32>(M32((uint32_t)(ecx + 0x48u)), 0x461c4000u, f);
L_004fac02:  // jne 0x4fac4f
    if (!f.zf) goto L_004fac4f;
L_004fac04:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004fac08:  // lea edx, [ecx + 0x80]
    edx = (uint32_t)((uint32_t)(ecx + 0x80u));
L_004fac0e:  // mov dword ptr [ecx + 0x80], eax
    M32((uint32_t)(ecx + 0x80u)) = (uint32_t)(eax);
L_004fac14:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004fac18:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004fac1b:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004fac1f:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004fac22:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004fac26:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004fac29:  // mov eax, dword ptr [esp + 0x28]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_004fac2d:  // lea edx, [ecx + 0x40]
    edx = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004fac30:  // mov dword ptr [ecx + 0x40], eax
    M32((uint32_t)(ecx + 0x40u)) = (uint32_t)(eax);
L_004fac33:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004fac37:  // mov dword ptr [edx + 4], eax
    M32((uint32_t)(edx + 0x4u)) = (uint32_t)(eax);
L_004fac3a:  // mov eax, dword ptr [esp + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004fac3e:  // mov dword ptr [edx + 8], eax
    M32((uint32_t)(edx + 0x8u)) = (uint32_t)(eax);
L_004fac41:  // mov eax, dword ptr [esp + 0x34]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004fac45:  // mov dword ptr [edx + 0xc], eax
    M32((uint32_t)(edx + 0xcu)) = (uint32_t)(eax);
L_004fac48:  // lea edx, [esp + 0x28]
    edx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004fac4c:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004fac4d:  // jmp 0x4fac6f
    goto L_004fac6f;
L_004fac4f:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_004fac51:  // lea eax, [ecx + 0x40]
    eax = (uint32_t)((uint32_t)(ecx + 0x40u));
L_004fac54:  // mov edi, dword ptr [edx]
    edi = (uint32_t)(M32((uint32_t)(edx)));
L_004fac56:  // mov dword ptr [eax], edi
    M32((uint32_t)(eax)) = (uint32_t)(edi);
L_004fac58:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004fac5b:  // mov dword ptr [eax + 4], edi
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edi);
L_004fac5e:  // mov edi, dword ptr [edx + 8]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_004fac61:  // mov dword ptr [eax + 8], edi
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edi);
L_004fac64:  // mov edx, dword ptr [edx + 0xc]
    edx = (uint32_t)(M32((uint32_t)(edx + 0xcu)));
L_004fac67:  // mov dword ptr [eax + 0xc], edx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edx);
L_004fac6a:  // lea eax, [esp + 0x28]
    eax = (uint32_t)((uint32_t)(esp + 0x28u));
L_004fac6e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fac6f:  // call 0x403650
    t0 = 0x00403650u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fac74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fac74:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004fac77:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fac79:  // je 0x4fac93
    if (f.zf) goto L_004fac93;
L_004fac7b:  // lea edi, [eax + 0x10]
    edi = (uint32_t)((uint32_t)(eax + 0x10u));
L_004fac7e:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_004fac83:  // lea esi, [esp + 0x58]
    esi = (uint32_t)((uint32_t)(esp + 0x58u));
L_004fac87:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_004fac89:  // mov dword ptr [eax + 0xa0], 1
    M32((uint32_t)(eax + 0xa0u)) = (uint32_t)(0x1u);
L_004fac93:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004fac97:  // mov ebx, dword ptr [ebx + 4]
    ebx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_004fac9a:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004fac9b:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004fac9d:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_004faca1:  // je 0x4faca7
    if (f.zf) goto L_004faca7;
L_004faca3:  // mov esi, dword ptr [ebx]
    esi = (uint32_t)(M32((uint32_t)(ebx)));
L_004faca5:  // jmp 0x4faca9
    goto L_004faca9;
L_004faca7:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004faca9:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004facab:  // jne 0x4fab85
    if (!f.zf) goto L_004fab85;
L_004facb1:  // test byte ptr [ebp + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x4u, f);
L_004facb5:  // jne 0x4fad00
    if (!f.zf) goto L_004fad00;
L_004facb7:  // fld dword ptr [ebp + 0xf8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xf8u)));
L_004facbd:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_004facc3:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004facc5:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004facc8:  // jne 0x4fad00
    if (!f.zf) goto L_004fad00;
L_004facca:  // mov eax, dword ptr [ebp + 0x1f0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1f0u)));
L_004facd0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004facd2:  // je 0x4fad00
    if (f.zf) goto L_004fad00;
L_004facd4:  // mov esi, dword ptr [ebp + 0x18c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x18cu)));
L_004facda:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004facdc:  // je 0x4face2
    if (f.zf) goto L_004face2;
L_004facde:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004face0:  // jmp 0x4face4
    goto L_004face4;
L_004face2:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004face4:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004face6:  // je 0x4fad00
    if (f.zf) goto L_004fad00;
L_004face8:  // call 0x4e3c60
    t0 = 0x004e3c60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004facedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004faced:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004facf0:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004facf2:  // je 0x4facf8
    if (f.zf) goto L_004facf8;
L_004facf4:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004facf6:  // jmp 0x4facfa
    goto L_004facfa;
L_004facf8:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004facfa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004facfc:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004facfe:  // jne 0x4face8
    if (!f.zf) goto L_004face8;
L_004fad00:  // mov ecx, dword ptr [ebp + 0xe0]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0xe0u)));
L_004fad06:  // mov edx, dword ptr [ebp + 0xe8]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0xe8u)));
L_004fad0c:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004fad0f:  // mov dword ptr [ebp + 0xe4], ecx
    M32((uint32_t)(ebp + 0xe4u)) = (uint32_t)(ecx);
L_004fad15:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fad17:  // mov dword ptr [ebp + 0xf0], edx
    M32((uint32_t)(ebp + 0xf0u)) = (uint32_t)(edx);
L_004fad1d:  // call dword ptr [eax + 0x60]
    t0 = M32((uint32_t)(eax + 0x60u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fad20u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fad20:  // mov eax, dword ptr [ebp + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x13cu)));
L_004fad26:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004fad2a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fad2c:  // je 0x4fb053
    if (f.zf) goto L_004fb053;
L_004fad32:  // test byte ptr [ebp + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(ebp + 0x2cu)) & 0x4u, f);
L_004fad36:  // jne 0x4fb053
    if (!f.zf) goto L_004fb053;
L_004fad3c:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004fad3f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fad41:  // call dword ptr [edx + 0x1b4]
    t0 = M32((uint32_t)(edx + 0x1b4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fad47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fad47:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fad49:  // je 0x4fb053
    if (f.zf) goto L_004fb053;
L_004fad4f:  // mov eax, dword ptr [ebp + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x13cu)));
L_004fad55:  // fld dword ptr [ebp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe0u)));
L_004fad5b:  // mov ecx, dword ptr [eax + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004fad5e:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fad60:  // je 0x4fae0f
    if (f.zf) goto L_004fae0f;
L_004fad66:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_004fad68:  // lea eax, [esp + 0x48]
    eax = (uint32_t)((uint32_t)(esp + 0x48u));
L_004fad6c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fad6d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fad6f:  // call dword ptr [edx + 0x168]
    t0 = M32((uint32_t)(edx + 0x168u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fad75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fad75:  // fld dword ptr [ebp + 0x44]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x44u)));
L_004fad78:  // fmul dword ptr [ebp + 0x200]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x200u)));
L_004fad7e:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_004fad81:  // fmul dword ptr [ebp + 0x1fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x1fcu)));
L_004fad87:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004fad8a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fad8c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004fad8e:  // fld dword ptr [ebp + 0x1f8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1f8u)));
L_004fad94:  // fmul dword ptr [ebp + 0x3c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x3cu)));
L_004fad97:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004fad99:  // fld dword ptr [ebp + 0x54]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x54u)));
L_004fad9c:  // fmul dword ptr [ebp + 0x200]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x200u)));
L_004fada2:  // fld dword ptr [ebp + 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x50u)));
L_004fada5:  // fmul dword ptr [ebp + 0x1fc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x1fcu)));
L_004fadab:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004fadad:  // fld dword ptr [ebp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x4cu)));
L_004fadb0:  // fmul dword ptr [ebp + 0x1f8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ebp + 0x1f8u)));
L_004fadb6:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004fadb8:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004fadbc:  // fadd dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_004fadbf:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004fadc3:  // fadd dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004fadc6:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_004fadca:  // fsubr dword ptr [esp + 0x48]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x48u))) - (ST(0));
L_004fadce:  // fld dword ptr [esp + 0x4c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x4cu)));
L_004fadd2:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_004fadd6:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_004fadd8:  // fchs 
    ST(0) = -ST(0);
L_004fadda:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004fadde:  // call dword ptr [edx + 0x170]
    t0 = M32((uint32_t)(edx + 0x170u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fade4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fade4:  // fsubr dword ptr [esp + 0x14]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x14u))) - (ST(0));
L_004fade8:  // fld dword ptr [0x672fd0]
    lpush(x, (long double)F32((uint32_t)(0x672fd0u)));
L_004fadee:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_004fadf4:  // fstp dword ptr [ebp + 0x20c]
    F32((uint32_t)(ebp + 0x20cu)) = lf32(ST(0));
    lpop(x);
L_004fadfa:  // fcom dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
L_004fae00:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fae02:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fae05:  // jne 0x4fae2c
    if (!f.zf) goto L_004fae2c;
L_004fae07:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fae0d:  // jmp 0x4fae3f
    goto L_004fae3f;
L_004fae0f:  // fld dword ptr [ebp + 0x20c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20cu)));
L_004fae15:  // fcomp dword ptr [0x672fd0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x672fd0u)));
    lpop(x);
L_004fae1b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fae1d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fae20:  // je 0x4fadfa
    if (f.zf) goto L_004fadfa;
L_004fae22:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fae24:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_004fae2a:  // jmp 0x4fae3f
    goto L_004fae3f;
L_004fae2c:  // fcom dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
L_004fae32:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fae34:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fae37:  // je 0x4fae3f
    if (f.zf) goto L_004fae3f;
L_004fae39:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004fae3f:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_004fae45:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004fae49:  // fmul dword ptr [ecx + 0xdc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0xdcu)));
L_004fae4f:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004fae53:  // fcom dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
L_004fae57:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fae59:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fae5c:  // jne 0x4fae66
    if (!f.zf) goto L_004fae66;
L_004fae5e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fae60:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fae64:  // jmp 0x4fae81
    goto L_004fae81;
L_004fae66:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004fae6a:  // fchs 
    ST(0) = -ST(0);
L_004fae6c:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_004fae70:  // fcom dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
L_004fae74:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fae76:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fae79:  // je 0x4fae81
    if (f.zf) goto L_004fae81;
L_004fae7b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fae7d:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004fae81:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004fae85:  // fmul dword ptr [ecx + 0xbc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0xbcu)));
L_004fae8b:  // mov eax, dword ptr [ebp + 0xe0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xe0u)));
L_004fae91:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004fae95:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_004fae99:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fae9b:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004fae9f:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004faea5:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faea7:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004faeaa:  // je 0x4faec7
    if (f.zf) goto L_004faec7;
L_004faeac:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004faeae:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004faeb4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faeb6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004faeb9:  // jne 0x4faec7
    if (!f.zf) goto L_004faec7;
L_004faebb:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004faebd:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004faebf:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004faec5:  // jmp 0x4faef1
    goto L_004faef1;
L_004faec7:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_004faecb:  // fcomp dword ptr [0x5d85e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e4u)));
    lpop(x);
L_004faed1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faed3:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004faed6:  // jne 0x4faef1
    if (!f.zf) goto L_004faef1;
L_004faed8:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004faeda:  // fcomp dword ptr [0x5d85c8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c8u)));
    lpop(x);
L_004faee0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faee2:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004faee5:  // je 0x4faef1
    if (f.zf) goto L_004faef1;
L_004faee7:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004faee9:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004faeeb:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004faef1:  // fsubr dword ptr [esp + 0x14]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x14u))) - (ST(0));
L_004faef5:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004faef7:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_004faef9:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004faefb:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faefd:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004faf00:  // je 0x4faf9f
    if (f.zf) goto L_004faf9f;
L_004faf06:  // fcom dword ptr [ebp + 0xe0]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xe0u)));
L_004faf0c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faf0e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004faf11:  // jne 0x4faf32
    if (!f.zf) goto L_004faf32;
L_004faf13:  // fsub dword ptr [ebp + 0xe0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xe0u)));
L_004faf19:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004faf1f:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faf21:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004faf24:  // je 0x4faf55
    if (f.zf) goto L_004faf55;
L_004faf26:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004faf2a:  // fadd dword ptr [ebp + 0xe0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xe0u)));
L_004faf30:  // jmp 0x4faf5f
    goto L_004faf5f;
L_004faf32:  // fld dword ptr [ebp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe0u)));
L_004faf38:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004faf3a:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004faf40:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faf42:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004faf45:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004faf47:  // jne 0x4faf55
    if (!f.zf) goto L_004faf55;
L_004faf49:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_004faf4d:  // fadd dword ptr [ebp + 0xe0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xe0u)));
L_004faf53:  // jmp 0x4faf5f
    goto L_004faf5f;
L_004faf55:  // fld dword ptr [ebp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe0u)));
L_004faf5b:  // fsub dword ptr [esp + 0x10]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x10u)));
L_004faf5f:  // fstp dword ptr [ebp + 0xe0]
    F32((uint32_t)(ebp + 0xe0u)) = lf32(ST(0));
    lpop(x);
L_004faf65:  // fld dword ptr [ebp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe0u)));
L_004faf6b:  // fcomp dword ptr [0x5d85e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85e8u)));
    lpop(x);
L_004faf71:  // fld dword ptr [ebp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe0u)));
L_004faf77:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faf79:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004faf7c:  // jne 0x4faf86
    if (!f.zf) goto L_004faf86;
L_004faf7e:  // fsub dword ptr [0x5d85e0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d85e0u)));
L_004faf84:  // jmp 0x4faf9f
    goto L_004faf9f;
L_004faf86:  // fcomp dword ptr [0x5d85dc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85dcu)));
    lpop(x);
L_004faf8c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004faf8e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004faf91:  // je 0x4fafa5
    if (f.zf) goto L_004fafa5;
L_004faf93:  // fld dword ptr [ebp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe0u)));
L_004faf99:  // fadd dword ptr [0x5d85e0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85e0u)));
L_004faf9f:  // fstp dword ptr [ebp + 0xe0]
    F32((uint32_t)(ebp + 0xe0u)) = lf32(ST(0));
    lpop(x);
L_004fafa5:  // fld dword ptr [ebp + 0xe0]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe0u)));
L_004fafab:  // fcomp dword ptr [ecx + 0xdc]
    lcom(x, ST(0), (long double)F32((uint32_t)(ecx + 0xdcu)));
    lpop(x);
L_004fafb1:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fafb3:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fafb6:  // jne 0x4fafc6
    if (!f.zf) goto L_004fafc6;
L_004fafb8:  // mov edx, dword ptr [ecx + 0xdc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xdcu)));
L_004fafbe:  // mov dword ptr [ebp + 0xe0], edx
    M32((uint32_t)(ebp + 0xe0u)) = (uint32_t)(edx);
L_004fafc4:  // jmp 0x4fafe5
    goto L_004fafe5;
L_004fafc6:  // fld dword ptr [ecx + 0xdc]
    lpush(x, (long double)F32((uint32_t)(ecx + 0xdcu)));
L_004fafcc:  // fchs 
    ST(0) = -ST(0);
L_004fafce:  // fcom dword ptr [ebp + 0xe0]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xe0u)));
L_004fafd4:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fafd6:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_004fafd9:  // jne 0x4fafe3
    if (!f.zf) goto L_004fafe3;
L_004fafdb:  // fstp dword ptr [ebp + 0xe0]
    F32((uint32_t)(ebp + 0xe0u)) = lf32(ST(0));
    lpop(x);
L_004fafe1:  // jmp 0x4fafe5
    goto L_004fafe5;
L_004fafe3:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fafe5:  // mov eax, dword ptr [ebp + 0x224]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x224u)));
L_004fafeb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fafed:  // je 0x4fb053
    if (f.zf) goto L_004fb053;
L_004fafef:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004faff3:  // fmul dword ptr [ecx + 0xbc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(ecx + 0xbcu)));
L_004faff9:  // fld dword ptr [ebp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe8u)));
L_004fafff:  // fsub dword ptr [ebp + 0xec]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebp + 0xecu)));
L_004fb005:  // fabs 
    ST(0) = __builtin_fabsl(ST(0));
L_004fb007:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004fb009:  // fcompp 
    lcom(x, ST(0), ST(1)); lpop(x); lpop(x);
L_004fb00b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fb00d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fb010:  // je 0x4fb045
    if (f.zf) goto L_004fb045;
L_004fb012:  // fld dword ptr [ebp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe8u)));
L_004fb018:  // fcomp dword ptr [ebp + 0xec]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebp + 0xecu)));
    lpop(x);
L_004fb01e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fb020:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fb023:  // je 0x4fb033
    if (f.zf) goto L_004fb033;
L_004fb025:  // fadd dword ptr [ebp + 0xe8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0xe8u)));
L_004fb02b:  // fstp dword ptr [ebp + 0xe8]
    F32((uint32_t)(ebp + 0xe8u)) = lf32(ST(0));
    lpop(x);
L_004fb031:  // jmp 0x4fb053
    goto L_004fb053;
L_004fb033:  // fld dword ptr [ebp + 0xe8]
    lpush(x, (long double)F32((uint32_t)(ebp + 0xe8u)));
L_004fb039:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_004fb03b:  // fstp dword ptr [ebp + 0xe8]
    F32((uint32_t)(ebp + 0xe8u)) = lf32(ST(0));
    lpop(x);
L_004fb041:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fb043:  // jmp 0x4fb053
    goto L_004fb053;
L_004fb045:  // mov eax, dword ptr [ebp + 0xec]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0xecu)));
L_004fb04b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fb04d:  // mov dword ptr [ebp + 0xe8], eax
    M32((uint32_t)(ebp + 0xe8u)) = (uint32_t)(eax);
L_004fb053:  // mov eax, dword ptr [ebp + 0x244]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x244u)));
L_004fb059:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_004fb05c:  // jne 0x4fb125
    if (!f.zf) goto L_004fb125;
L_004fb062:  // mov eax, dword ptr [ebp + 0x208]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x208u)));
L_004fb068:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb06a:  // je 0x4fb182
    if (f.zf) goto L_004fb182;
L_004fb070:  // fld dword ptr [ebp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x1cu)));
L_004fb073:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_004fb076:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_004fb078:  // mov dword ptr [esp + 0x18], ecx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ecx);
L_004fb07c:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_004fb07f:  // fsub dword ptr [esp + 0x18]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x18u)));
L_004fb083:  // fld dword ptr [ebp + 0x20]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x20u)));
L_004fb086:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_004fb08a:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004fb08d:  // fsub dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004fb091:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004fb093:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_004fb095:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_004fb097:  // fmul st(3)
    ST(0) = (ST(0)) * (ST(3));
L_004fb099:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004fb09c:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_004fb0a0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004fb0a2:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_004fb0a6:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004fb0a8:  // fstp st(2)
    ST(2) = ST(0);
    lpop(x);
L_004fb0aa:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004fb0ac:  // fcomp dword ptr [0x5d85bc]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85bcu)));
    lpop(x);
L_004fb0b2:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004fb0b4:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004fb0b7:  // je 0x4fb182
    if (f.zf) goto L_004fb182;
L_004fb0bd:  // mov dword ptr [ebp + 0x244], 2
    M32((uint32_t)(ebp + 0x244u)) = (uint32_t)(0x2u);
L_004fb0c7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fb0c9:  // fld dword ptr [ebp + 0x40]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x40u)));
L_004fb0cc:  // fmul dword ptr [0x5db520]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db520u)));
L_004fb0d2:  // sub esp, 0x10
    t0 = lsub<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004fb0d5:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004fb0d8:  // mov ecx, esp
    ecx = (uint32_t)(esp);
L_004fb0da:  // fld dword ptr [ebp + 0x50]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x50u)));
L_004fb0dd:  // fmul dword ptr [0x5db520]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db520u)));
L_004fb0e3:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_004fb0e7:  // fadd dword ptr [ebp + 0x1c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x1cu)));
L_004fb0ea:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_004fb0ee:  // fld dword ptr [esp + 0x50]
    lpush(x, (long double)F32((uint32_t)(esp + 0x50u)));
L_004fb0f2:  // fadd dword ptr [ebp + 0x20]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebp + 0x20u)));
L_004fb0f5:  // mov edx, dword ptr [esp + 0x2c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_004fb0f9:  // mov dword ptr [ecx], edx
    M32((uint32_t)(ecx)) = (uint32_t)(edx);
L_004fb0fb:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004fb0ff:  // fld dword ptr [ebp + 0x24]
    lpush(x, (long double)F32((uint32_t)(ebp + 0x24u)));
L_004fb102:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_004fb106:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004fb10a:  // mov dword ptr [ecx + 4], edx
    M32((uint32_t)(ecx + 0x4u)) = (uint32_t)(edx);
L_004fb10d:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004fb111:  // mov dword ptr [ecx + 8], edx
    M32((uint32_t)(ecx + 0x8u)) = (uint32_t)(edx);
L_004fb114:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_004fb118:  // mov dword ptr [ecx + 0xc], edx
    M32((uint32_t)(ecx + 0xcu)) = (uint32_t)(edx);
L_004fb11b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb11d:  // call dword ptr [eax + 0xf4]
    t0 = M32((uint32_t)(eax + 0xf4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb123u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb123:  // jmp 0x4fb182
    goto L_004fb182;
L_004fb125:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_004fb128:  // jne 0x4fb137
    if (!f.zf) goto L_004fb137;
L_004fb12a:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_004fb12d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb12f:  // call dword ptr [eax + 0x1d0]
    t0 = M32((uint32_t)(eax + 0x1d0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb135u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb135:  // jmp 0x4fb182
    goto L_004fb182;
L_004fb137:  // cmp eax, 4
    t0 = lsub<32>(eax, 0x4u, f);
L_004fb13a:  // jne 0x4fb182
    if (!f.zf) goto L_004fb182;
L_004fb13c:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_004fb13f:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb141:  // call dword ptr [edx + 0x144]
    t0 = M32((uint32_t)(edx + 0x144u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb147u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb147:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb149:  // jne 0x4fb182
    if (!f.zf) goto L_004fb182;
L_004fb14b:  // cmp dword ptr [ebp + 0x244], 4
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x244u)), 0x4u, f);
L_004fb152:  // jne 0x4fb182
    if (!f.zf) goto L_004fb182;
L_004fb154:  // mov ecx, dword ptr [ebp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_004fb157:  // mov esi, dword ptr [ebp]
    esi = (uint32_t)(M32((uint32_t)(ebp)));
L_004fb15a:  // mov dword ptr [ebp + 0x244], 5
    M32((uint32_t)(ebp + 0x244u)) = (uint32_t)(0x5u);
L_004fb164:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fb166:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_004fb168:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004fb16a:  // push 0x6239d8
    t0 = 0x6239d8u; esp -= 4; M32(esp) = t0;
L_004fb16f:  // call dword ptr [eax + 0x24]
    t0 = M32((uint32_t)(eax + 0x24u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb172u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb172:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004fb174:  // call 0x4aa630
    t0 = 0x004aa630u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb179u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb179:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fb17a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb17c:  // call dword ptr [esi + 0xf0]
    t0 = M32((uint32_t)(esi + 0xf0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb182u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb182:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_004fb188:  // mov eax, dword ptr [ecx + 0x38]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x38u)));
L_004fb18b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb18d:  // je 0x4fb1fa
    if (f.zf) goto L_004fb1fa;
L_004fb18f:  // mov esi, dword ptr [ebp + 0x18c]
    esi = (uint32_t)(M32((uint32_t)(ebp + 0x18cu)));
L_004fb195:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fb197:  // je 0x4fb19d
    if (f.zf) goto L_004fb19d;
L_004fb199:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004fb19b:  // jmp 0x4fb19f
    goto L_004fb19f;
L_004fb19d:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_004fb19f:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_004fb1a1:  // je 0x4fb1bf
    if (f.zf) goto L_004fb1bf;
L_004fb1a3:  // call 0x4e4420
    t0 = 0x004e4420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb1a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb1a8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb1aa:  // jne 0x4fb20c
    if (!f.zf) goto L_004fb20c;
L_004fb1ac:  // mov esi, dword ptr [esi + 4]
    esi = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004fb1af:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004fb1b1:  // je 0x4fb1b7
    if (f.zf) goto L_004fb1b7;
L_004fb1b3:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004fb1b5:  // jmp 0x4fb1b9
    goto L_004fb1b9;
L_004fb1b7:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004fb1b9:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb1bb:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004fb1bd:  // jne 0x4fb1a3
    if (!f.zf) goto L_004fb1a3;
L_004fb1bf:  // mov eax, dword ptr [ebp + 0x230]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x230u)));
L_004fb1c5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb1c7:  // je 0x4fb1f0
    if (f.zf) goto L_004fb1f0;
L_004fb1c9:  // mov ecx, dword ptr [ebp + 0x164]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_004fb1cf:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fb1d1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fb1d3:  // mov eax, dword ptr [ecx + 0x38]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x38u)));
L_004fb1d6:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004fb1db:  // add eax, 0x40
    t0 = ladd<32>(eax, 0x40u, f);
    eax = (uint32_t)(t0);
L_004fb1de:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fb1df:  // call 0x4e0a00
    t0 = 0x004e0a00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb1e4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb1e4:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fb1e5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fb1e6:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004fb1eb:  // call 0x4e1190
    t0 = 0x004e1190u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb1f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb1f0:  // mov dword ptr [ebp + 0x230], 0
    M32((uint32_t)(ebp + 0x230u)) = (uint32_t)(0x0u);
L_004fb1fa:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb1fc:  // call 0x4f39b0
    t0 = 0x004f39b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb201u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb201:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fb202:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fb203:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004fb204:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004fb205:  // add esp, 0xa8
    t0 = ladd<32>(esp, 0xa8u, f);
    esp = (uint32_t)(t0);
L_004fb20b:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_004fb20c:  // mov eax, dword ptr [ebp + 0x230]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x230u)));
L_004fb212:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004fb214:  // jne 0x4fb248
    if (!f.zf) goto L_004fb248;
L_004fb216:  // mov edx, dword ptr [ebp + 0x164]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x164u)));
L_004fb21c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fb21e:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004fb220:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_004fb225:  // mov eax, dword ptr [edx + 0x38]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x38u)));
L_004fb228:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004fb22a:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_004fb22f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fb231:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_004fb233:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004fb235:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_004fb237:  // push 0x3f333333
    t0 = 0x3f333333u; esp -= 4; M32(esp) = t0;
L_004fb23c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004fb23d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004fb23e:  // mov ecx, 0x896988
    ecx = (uint32_t)(0x896988u);
L_004fb243:  // call 0x4e1940
    t0 = 0x004e1940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb248u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb248:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004fb24a:  // mov dword ptr [ebp + 0x230], 1
    M32((uint32_t)(ebp + 0x230u)) = (uint32_t)(0x1u);
L_004fb254:  // call 0x4f39b0
    t0 = 0x004f39b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004fb259u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004fb259:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004fb25a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004fb25b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004fb25c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004fb25d:  // add esp, 0xa8
    t0 = ladd<32>(esp, 0xa8u, f);
    esp = (uint32_t)(t0);
L_004fb263:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004fa8d0, 004fa8d0)
