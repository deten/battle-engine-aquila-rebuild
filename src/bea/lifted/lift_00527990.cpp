// lifted from 00527990 (FUN_00527990, 689 bytes, 205 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00527990(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00527990;
L_00527990:  // mov eax, 0x1f64
    eax = (uint32_t)(0x1f64u);
L_00527995:  // call 0x55def0
    t0 = 0x0055def0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052799au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052799a:  // mov eax, dword ptr [esp + 0x1f68]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1f68u)));
L_005279a1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005279a2:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_005279a4:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_005279a5:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_005279a7:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_005279a9:  // jne 0x5279d1
    if (!f.zf) goto L_005279d1;
L_005279ab:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005279b0:  // mov dword ptr [esp + 0x14], ebx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ebx);
L_005279b4:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_005279b8:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005279bdu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005279bd:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_005279c2:  // mov dword ptr [esp + 8], eax
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(eax);
L_005279c6:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005279cbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005279cb:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_005279cf:  // jmp 0x5279ec
    goto L_005279ec;
L_005279d1:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_005279d4:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_005279d7:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_005279db:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_005279dd:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_005279e1:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_005279e4:  // mov dword ptr [esp + 8], ecx
    M32((uint32_t)(esp + 0x8u)) = (uint32_t)(ecx);
L_005279e8:  // mov dword ptr [esp + 0x10], edx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(edx);
L_005279ec:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_005279ef:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_005279f0:  // je 0x527a45
    if (f.zf) goto L_00527a45;
L_005279f2:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_005279f3:  // jne 0x527c36
    if (!f.zf) goto L_00527c36;
L_005279f9:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005279fa:  // push 0x6f
    t0 = 0x6fu; esp -= 4; M32(esp) = t0;
L_005279fc:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527a01u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527a01:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00527a03:  // mov eax, dword ptr [esp + 0x1f80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1f80u)));
L_00527a0a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00527a0d:  // cmp eax, ebx
    t0 = lsub<32>(eax, ebx, f);
L_00527a0f:  // je 0x527a7a
    if (f.zf) goto L_00527a7a;
L_00527a11:  // mov eax, dword ptr [esp + 0x1f74]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1f74u)));
L_00527a18:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00527a1d:  // mov esi, dword ptr [eax + 0x16c]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x16cu)));
L_00527a23:  // call 0x466980
    t0 = 0x00466980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527a28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527a28:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_00527a2a:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00527a2b:  // jne 0x527a39
    if (!f.zf) goto L_00527a39;
L_00527a2d:  // push 0x70
    t0 = 0x70u; esp -= 4; M32(esp) = t0;
L_00527a2f:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527a34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527a34:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00527a37:  // jmp 0x527a78
    goto L_00527a78;
L_00527a39:  // push 0x71
    t0 = 0x71u; esp -= 4; M32(esp) = t0;
L_00527a3b:  // call 0x46a2a0
    t0 = 0x0046a2a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527a40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527a40:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00527a43:  // jmp 0x527a78
    goto L_00527a78;
L_00527a45:  // mov ecx, dword ptr [esp + 0x1f74]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1f74u)));
L_00527a4c:  // mov eax, dword ptr [ecx + 0x16c]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x16cu)));
L_00527a52:  // sub eax, ebx
    t0 = lsub<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_00527a54:  // je 0x527a6e
    if (f.zf) goto L_00527a6e;
L_00527a56:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_00527a57:  // je 0x527a6a
    if (f.zf) goto L_00527a6a;
L_00527a59:  // push 0xcecece9d
    t0 = 0xcecece9du; esp -= 4; M32(esp) = t0;
L_00527a5e:  // mov ecx, 0x83d960
    ecx = (uint32_t)(0x83d960u);
L_00527a63:  // call 0x4f2580
    t0 = 0x004f2580u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527a68u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527a68:  // jmp 0x527a78
    goto L_00527a78;
L_00527a6a:  // push 0x2a
    t0 = 0x2au; esp -= 4; M32(esp) = t0;
L_00527a6c:  // jmp 0x527a70
    goto L_00527a70;
L_00527a6e:  // push 0x29
    t0 = 0x29u; esp -= 4; M32(esp) = t0;
L_00527a70:  // call 0x524830
    t0 = 0x00524830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527a75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527a75:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_00527a78:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00527a7a:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00527a7f:  // call 0x515940
    t0 = 0x00515940u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527a84u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527a84:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_00527a88:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00527a89:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00527a8d:  // lea edx, [esp + 0x30]
    edx = (uint32_t)((uint32_t)(esp + 0x30u));
L_00527a91:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00527a96:  // fmul dword ptr [0x5d8bec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8becu)));
L_00527a9c:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00527a9f:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00527aa0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00527aa1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00527aa2:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527aa7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527aa7:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00527aa9:  // call 0x465a20
    t0 = 0x00465a20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527aaeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527aae:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00527ab0:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00527ab4:  // mov dword ptr [esp + 0xc], esi
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(esi);
L_00527ab8:  // cmp word ptr [eax], bx
    t0 = lsub<16>(M16((uint32_t)(eax)), (ebx & 0xffffu), f);
L_00527abb:  // je 0x527ac8
    if (f.zf) goto L_00527ac8;
L_00527abd:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00527abe:  // add eax, 0xc8
    t0 = ladd<32>(eax, 0xc8u, f);
    eax = (uint32_t)(t0);
L_00527ac3:  // cmp esi, 0x28
    t0 = lsub<32>(esi, 0x28u, f);
L_00527ac6:  // jl 0x527ab8
    if ((f.sf != f.of)) goto L_00527ab8;
L_00527ac8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00527ac9:  // cmp esi, ebx
    t0 = lsub<32>(esi, ebx, f);
L_00527acb:  // mov dword ptr [esp + 0x10], esi
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(esi);
L_00527acf:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00527ad0:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_00527ad4:  // jle 0x527b17
    if ((f.zf || f.sf != f.of)) goto L_00527b17;
L_00527ad6:  // lea edi, [esp + 0x34]
    edi = (uint32_t)((uint32_t)(esp + 0x34u));
L_00527ada:  // mov ebp, esi
    ebp = (uint32_t)(esi);
L_00527adc:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00527ae0:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00527ae5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00527ae6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00527ae7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00527ae9:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527aeeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527aee:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00527af0:  // call 0x540680
    t0 = 0x00540680u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527af5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527af5:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00527af9:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_00527afd:  // imul ecx, esi
    t0 = limul32(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_00527b00:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_00527b02:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_00527b06:  // jg 0x527b0a
    if ((!f.zf && f.sf == f.of)) goto L_00527b0a;
L_00527b08:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_00527b0a:  // add edi, 0xc8
    t0 = ladd<32>(edi, 0xc8u, f);
    edi = (uint32_t)(t0);
L_00527b10:  // dec ebp
    t0 = ldec<32>(ebp, f);
    ebp = (uint32_t)(t0);
L_00527b11:  // jne 0x527adc
    if (!f.zf) goto L_00527adc;
L_00527b13:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_00527b17:  // fild dword ptr [esp + 0x10]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x10u)));
L_00527b1b:  // mov eax, dword ptr [esp + 0x1f80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1f80u)));
L_00527b22:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00527b24:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00527b2a:  // fiadd dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) + ((long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_00527b2e:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00527b32:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00527b36:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00527b3c:  // fiadd dword ptr [esp + 0x20]
    ST(0) = (ST(0)) + ((long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00527b40:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00527b44:  // je 0x527b77
    if (f.zf) goto L_00527b77;
L_00527b46:  // mov edx, dword ptr [esp + 0x1f7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1f7cu)));
L_00527b4d:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_00527b52:  // mov edi, dword ptr [edx + 0x16c]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x16cu)));
L_00527b58:  // call 0x466980
    t0 = 0x00466980u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527b5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527b5d:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00527b61:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_00527b63:  // jne 0x527b6d
    if (!f.zf) goto L_00527b6d;
L_00527b65:  // fsub dword ptr [0x5db020]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db020u)));
L_00527b6b:  // jmp 0x527b73
    goto L_00527b73;
L_00527b6d:  // fadd dword ptr [0x5db020]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db020u)));
L_00527b73:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_00527b77:  // fild dword ptr [esp + 0x28]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x28u)));
L_00527b7b:  // push 0xff7f7f7f
    t0 = 0xff7f7f7fu; esp -= 4; M32(esp) = t0;
L_00527b80:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00527b81:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00527b85:  // fadd dword ptr [0x5d85cc]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d85ccu)));
L_00527b8b:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00527b8e:  // fild dword ptr [esp + 0x2c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x2cu)));
L_00527b92:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00527b93:  // mov ecx, dword ptr [esp + 0x28]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_00527b97:  // fadd dword ptr [0x5d857c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d857cu)));
L_00527b9d:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00527ba0:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00527ba1:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00527ba2:  // mov ecx, 0x679fa8
    ecx = (uint32_t)(0x679fa8u);
L_00527ba7:  // call 0x472e50
    t0 = 0x00472e50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527bacu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527bac:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00527bae:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00527bb0:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_00527bb4:  // jle 0x527c26
    if ((f.zf || f.sf != f.of)) goto L_00527c26;
L_00527bb6:  // fild dword ptr [esp + 0x14]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x14u)));
L_00527bba:  // mov eax, ebx
    eax = (uint32_t)(ebx);
L_00527bbc:  // lea ebp, [esp + 0x34]
    ebp = (uint32_t)((uint32_t)(esp + 0x34u));
L_00527bc0:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_00527bc1:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_00527bc7:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_00527bc9:  // sar eax, 1
    t0 = lsar<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_00527bcb:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_00527bcf:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00527bd3:  // fild dword ptr [esp + 0x18]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x18u)));
L_00527bd7:  // fsubr dword ptr [esp + 0x1c]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x1cu))) - (ST(0));
L_00527bdb:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00527bdf:  // mov ebx, dword ptr [esp + 0x18]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00527be3:  // fild dword ptr [esp + 0x20]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x20u)));
L_00527be7:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_00527bec:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00527bee:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00527bf0:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00527bf1:  // fsubr dword ptr [esp + 0x24]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x24u))) - (ST(0));
L_00527bf5:  // fimul dword ptr [esp + 0x40]
    ST(0) = (ST(0)) * ((long double)(int32_t)M32((uint32_t)(esp + 0x40u)));
L_00527bf9:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00527bfb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00527bfc:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_00527c01:  // fsubr dword ptr [esp + 0x28]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x28u))) - (ST(0));
L_00527c05:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_00527c08:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00527c09:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00527c0b:  // call 0x515a70
    t0 = 0x00515a70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527c10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527c10:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_00527c12:  // call 0x540640
    t0 = 0x00540640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00527c17u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00527c17:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_00527c18:  // add ebp, 0xc8
    t0 = ladd<32>(ebp, 0xc8u, f);
    ebp = (uint32_t)(t0);
L_00527c1e:  // cmp edi, esi
    t0 = lsub<32>(edi, esi, f);
L_00527c20:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_00527c24:  // jl 0x527be3
    if ((f.sf != f.of)) goto L_00527be3;
L_00527c26:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00527c27:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_00527c2e:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_00527c35:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_00527c36:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00527c37:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00527c38:  // add esp, 0x1f64
    t0 = ladd<32>(esp, 0x1f64u, f);
    esp = (uint32_t)(t0);
L_00527c3e:  // ret 0xc
    c->target = M32(esp); esp += 16u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00527990, 00527990)
