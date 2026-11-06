// lifted from 0045cde0 (vslot3, 2248 bytes, 579 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0045cde0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0045cde0;
L_0045cde0:  // sub esp, 0x78
    t0 = lsub<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0045cde3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0045cde4:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0045cde6:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045cde7:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0045cde9:  // mov eax, dword ptr [ebx + 0x1d4]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x1d4u)));
L_0045cdef:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045cdf0:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0045cdf2:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0045cdf3:  // jne 0x45d133
    if (!f.zf) goto L_0045d133;
L_0045cdf9:  // fld dword ptr [ebx + 0x194]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x194u)));
L_0045cdff:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0045ce05:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045ce07:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0045ce0a:  // je 0x45d133
    if (f.zf) goto L_0045d133;
L_0045ce10:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0045ce17:  // mov eax, dword ptr [ebx + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0045ce1d:  // mov esi, dword ptr [ebx + 0x140]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_0045ce23:  // mov dword ptr [esp + 0x24], eax
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(eax);
L_0045ce27:  // lea edi, [ecx - 0x2a]
    edi = (uint32_t)((uint32_t)(ecx + 0xffffffd6u));
L_0045ce2a:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_0045ce2e:  // cmp edi, 0xd
    t0 = lsub<32>(edi, 0xdu, f);
L_0045ce31:  // ja 0x45d0fc
    if ((!f.cf && !f.zf)) goto L_0045d0fc;
L_0045ce37:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0045ce39:  // mov dl, byte ptr [edi + 0x45d6c4]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + 0x45d6c4u))) & 0xffu);
L_0045ce3f:  // jmp dword ptr [edx*4 + 0x45d6a8]
    t0 = M32((uint32_t)(edx * 4u + 0x45d6a8u));
    switch (t0) {
    case 0x0045ce46u: goto L_0045ce46;
    case 0x0045ce79u: goto L_0045ce79;
    case 0x0045ceb0u: goto L_0045ceb0;
    case 0x0045cf0cu: goto L_0045cf0c;
    case 0x0045cfa4u: goto L_0045cfa4;
    case 0x0045d0e2u: goto L_0045d0e2;
    case 0x0045d0fcu: goto L_0045d0fc;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_0045ce46:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0045ce47:  // cmp esi, ebp
    t0 = lsub<32>(esi, ebp, f);
L_0045ce49:  // jl 0x45ce63
    if ((f.sf != f.of)) goto L_0045ce63;
L_0045ce4b:  // mov eax, dword ptr [ebx + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0045ce51:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045ce52:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045ce53:  // call 0x45cb80
    t0 = 0x0045cb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045ce58u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045ce58:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045ce5b:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0045ce5e:  // jne 0x45ce63
    if (!f.zf) goto L_0045ce63;
L_0045ce60:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0045ce61:  // jns 0x45ce4b
    if (!f.sf) goto L_0045ce4b;
L_0045ce63:  // cmp esi, -1
    t0 = lsub<32>(esi, 0xffffffffu, f);
L_0045ce66:  // je 0x45ce6e
    if (f.zf) goto L_0045ce6e;
L_0045ce68:  // mov dword ptr [ebx + 0x140], esi
    M32((uint32_t)(ebx + 0x140u)) = (uint32_t)(esi);
L_0045ce6e:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045ce6f:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045ce74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045ce74:  // jmp 0x45d0f9
    goto L_0045d0f9;
L_0045ce79:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0045ce7a:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_0045ce7d:  // jge 0x45ce9d
    if ((f.sf == f.of)) goto L_0045ce9d;
L_0045ce7f:  // mov ecx, dword ptr [ebx + 0x13c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0045ce85:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045ce86:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045ce87:  // call 0x45cb80
    t0 = 0x0045cb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045ce8cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045ce8c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045ce8f:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0045ce92:  // jne 0x45ce9a
    if (!f.zf) goto L_0045ce9a;
L_0045ce94:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0045ce95:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_0045ce98:  // jl 0x45ce7f
    if ((f.sf != f.of)) goto L_0045ce7f;
L_0045ce9a:  // cmp esi, 4
    t0 = lsub<32>(esi, 0x4u, f);
L_0045ce9d:  // je 0x45cea5
    if (f.zf) goto L_0045cea5;
L_0045ce9f:  // mov dword ptr [ebx + 0x140], esi
    M32((uint32_t)(ebx + 0x140u)) = (uint32_t)(esi);
L_0045cea5:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045cea6:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045ceabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045ceab:  // jmp 0x45d0f9
    goto L_0045d0f9;
L_0045ceb0:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0045ceb1:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0045ceb3:  // mov dword ptr [ebx + 0x13c], eax
    M32((uint32_t)(ebx + 0x13cu)) = (uint32_t)(eax);
L_0045ceb9:  // jge 0x45cec1
    if ((f.sf == f.of)) goto L_0045cec1;
L_0045cebb:  // mov dword ptr [ebx + 0x13c], ebp
    M32((uint32_t)(ebx + 0x13cu)) = (uint32_t)(ebp);
L_0045cec1:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045cec2:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045cec7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045cec7:  // fild dword ptr [ebx + 0x13c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x13cu)));
L_0045cecd:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045ced0:  // fmul dword ptr [0x5db540]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db540u)));
L_0045ced6:  // fld dword ptr [0x5db53c]
    lpush(x, (long double)F32((uint32_t)(0x5db53cu)));
L_0045cedc:  // fsub dword ptr [ebx + 0x134]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x134u)));
L_0045cee2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045cee4:  // fcomp dword ptr [0x6292e4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x6292e4u)));
    lpop(x);
L_0045ceea:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045ceec:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045ceef:  // je 0x45d0fc
    if (f.zf) goto L_0045d0fc;
L_0045cef5:  // fld dword ptr [ebx + 0x134]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x134u)));
L_0045cefb:  // fsub dword ptr [0x5db540]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5db540u)));
L_0045cf01:  // fstp dword ptr [ebx + 0x134]
    F32((uint32_t)(ebx + 0x134u)) = lf32(ST(0));
    lpop(x);
L_0045cf07:  // jmp 0x45d0fc
    goto L_0045d0fc;
L_0045cf0c:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0045cf0d:  // cmp eax, 0x7a
    t0 = lsub<32>(eax, 0x7au, f);
L_0045cf10:  // mov dword ptr [ebx + 0x13c], eax
    M32((uint32_t)(ebx + 0x13cu)) = (uint32_t)(eax);
L_0045cf16:  // jle 0x45cf22
    if ((f.zf || f.sf != f.of)) goto L_0045cf22;
L_0045cf18:  // mov dword ptr [ebx + 0x13c], 0x7a
    M32((uint32_t)(ebx + 0x13cu)) = (uint32_t)(0x7au);
L_0045cf22:  // mov edx, dword ptr [ebx + 0x13c]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0045cf28:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045cf29:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0045cf2a:  // call 0x45cb80
    t0 = 0x0045cb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045cf2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045cf2f:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045cf32:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0045cf35:  // jne 0x45cf59
    if (!f.zf) goto L_0045cf59;
L_0045cf37:  // mov eax, dword ptr [ebx + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0045cf3d:  // mov ecx, dword ptr [ebx + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_0045cf43:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0045cf44:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045cf45:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045cf46:  // mov dword ptr [ebx + 0x13c], eax
    M32((uint32_t)(ebx + 0x13cu)) = (uint32_t)(eax);
L_0045cf4c:  // call 0x45cb80
    t0 = 0x0045cb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045cf51u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045cf51:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045cf54:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0045cf57:  // je 0x45cf37
    if (f.zf) goto L_0045cf37;
L_0045cf59:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045cf5a:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045cf5fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045cf5f:  // fild dword ptr [ebx + 0x13c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(ebx + 0x13cu)));
L_0045cf65:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045cf68:  // fmul dword ptr [0x5db540]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5db540u)));
L_0045cf6e:  // fld dword ptr [0x5db53c]
    lpush(x, (long double)F32((uint32_t)(0x5db53cu)));
L_0045cf74:  // fsub dword ptr [ebx + 0x134]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(ebx + 0x134u)));
L_0045cf7a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045cf7c:  // fcomp dword ptr [0x6292e8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x6292e8u)));
    lpop(x);
L_0045cf82:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045cf84:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045cf87:  // jne 0x45d0fc
    if (!f.zf) goto L_0045d0fc;
L_0045cf8d:  // fld dword ptr [ebx + 0x134]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x134u)));
L_0045cf93:  // fadd dword ptr [0x5db540]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db540u)));
L_0045cf99:  // fstp dword ptr [ebx + 0x134]
    F32((uint32_t)(ebx + 0x134u)) = lf32(ST(0));
    lpop(x);
L_0045cf9f:  // jmp 0x45d0fc
    goto L_0045d0fc;
L_0045cfa4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0045cfa6:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045cfabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045cfab:  // mov eax, dword ptr [ebx + 0x140]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_0045cfb1:  // lea edi, [ebx + 0x1a0]
    edi = (uint32_t)((uint32_t)(ebx + 0x1a0u));
L_0045cfb7:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0045cfbc:  // mov esi, 0x679870
    esi = (uint32_t)(0x679870u);
L_0045cfc1:  // mov dword ptr [ebx + 0x190], 0x3f800000
    M32((uint32_t)(ebx + 0x190u)) = (uint32_t)(0x3f800000u);
L_0045cfcb:  // mov dword ptr [ebx + 0x194], ebp
    M32((uint32_t)(ebx + 0x194u)) = (uint32_t)(ebp);
L_0045cfd1:  // mov dword ptr [ebx + 0x198], ebp
    M32((uint32_t)(ebx + 0x198u)) = (uint32_t)(ebp);
L_0045cfd7:  // mov dword ptr [ebx + 0x19c], ebp
    M32((uint32_t)(ebx + 0x19cu)) = (uint32_t)(ebp);
L_0045cfdd:  // mov dword ptr [ebx + 0x1d4], ebp
    M32((uint32_t)(ebx + 0x1d4u)) = (uint32_t)(ebp);
L_0045cfe3:  // mov dword ptr [ebx + 0x1d8], ebp
    M32((uint32_t)(ebx + 0x1d8u)) = (uint32_t)(ebp);
L_0045cfe9:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0045cfeb:  // mov ecx, dword ptr [ebx + 0x13c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0045cff1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045cff2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045cff3:  // mov dword ptr [ebx + 0x1d0], 0x41200000
    M32((uint32_t)(ebx + 0x1d0u)) = (uint32_t)(0x41200000u);
L_0045cffd:  // mov dword ptr [ebx + 0x184], ebp
    M32((uint32_t)(ebx + 0x184u)) = (uint32_t)(ebp);
L_0045d003:  // mov dword ptr [ebx + 0x180], ebp
    M32((uint32_t)(ebx + 0x180u)) = (uint32_t)(ebp);
L_0045d009:  // mov dword ptr [ebx + 0x15c], ebp
    M32((uint32_t)(ebx + 0x15cu)) = (uint32_t)(ebp);
L_0045d00f:  // mov dword ptr [ebx + 0x160], ebp
    M32((uint32_t)(ebx + 0x160u)) = (uint32_t)(ebp);
L_0045d015:  // mov dword ptr [ebx + 0x164], ebp
    M32((uint32_t)(ebx + 0x164u)) = (uint32_t)(ebp);
L_0045d01b:  // mov dword ptr [ebx + 0x174], 0x41000000
    M32((uint32_t)(ebx + 0x174u)) = (uint32_t)(0x41000000u);
L_0045d025:  // mov dword ptr [ebx + 0x188], 0xc2480000
    M32((uint32_t)(ebx + 0x188u)) = (uint32_t)(0xc2480000u);
L_0045d02f:  // mov dword ptr [ebx + 0x18c], ebp
    M32((uint32_t)(ebx + 0x18cu)) = (uint32_t)(ebp);
L_0045d035:  // mov dword ptr [ebx + 0x158], ebp
    M32((uint32_t)(ebx + 0x158u)) = (uint32_t)(ebp);
L_0045d03b:  // call 0x45cb80
    t0 = 0x0045cb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d040u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d040:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0045d043:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0045d046:  // je 0x45d062
    if (f.zf) goto L_0045d062;
L_0045d048:  // cmp dword ptr [0x6798b4], ebp
    t0 = lsub<32>(M32((uint32_t)(0x6798b4u)), ebp, f);
L_0045d04e:  // jne 0x45d062
    if (!f.zf) goto L_0045d062;
L_0045d050:  // cmp dword ptr [0x6798b0], ebp
    t0 = lsub<32>(M32((uint32_t)(0x6798b0u)), ebp, f);
L_0045d056:  // jne 0x45d062
    if (!f.zf) goto L_0045d062;
L_0045d058:  // cmp dword ptr [eax*4 + 0x662564], 2
    t0 = lsub<32>(M32((uint32_t)(eax * 4u + 0x662564u)), 0x2u, f);
L_0045d060:  // je 0x45d097
    if (f.zf) goto L_0045d097;
L_0045d062:  // mov eax, dword ptr [ebx + 0x140]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_0045d068:  // mov ecx, dword ptr [ebx + 0x13c]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0045d06e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0045d06f:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0045d070:  // call 0x45cb80
    t0 = 0x0045cb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d075u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d075:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045d078:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0045d07b:  // je 0x45d0fc
    if (f.zf) goto L_0045d0fc;
L_0045d07d:  // cmp dword ptr [0x6798b4], ebp
    t0 = lsub<32>(M32((uint32_t)(0x6798b4u)), ebp, f);
L_0045d083:  // jne 0x45d0fc
    if (!f.zf) goto L_0045d0fc;
L_0045d085:  // cmp dword ptr [0x6798b0], ebp
    t0 = lsub<32>(M32((uint32_t)(0x6798b0u)), ebp, f);
L_0045d08b:  // jne 0x45d097
    if (!f.zf) goto L_0045d097;
L_0045d08d:  // cmp dword ptr [eax*4 + 0x662564], 3
    t0 = lsub<32>(M32((uint32_t)(eax * 4u + 0x662564u)), 0x3u, f);
L_0045d095:  // jne 0x45d0fc
    if (!f.zf) goto L_0045d0fc;
L_0045d097:  // cmp dword ptr [ebx + 0x1d8], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x1d8u)), ebp, f);
L_0045d09d:  // jne 0x45d0fc
    if (!f.zf) goto L_0045d0fc;
L_0045d09f:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0045d0a1:  // mov dword ptr [ebx + 0x1d4], 1
    M32((uint32_t)(ebx + 0x1d4u)) = (uint32_t)(0x1u);
L_0045d0ab:  // call 0x45c9f0
    t0 = 0x0045c9f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d0b0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d0b0:  // mov esi, dword ptr [ebx + 0x140]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_0045d0b6:  // mov edi, dword ptr [ebx + 0x13c]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0045d0bc:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045d0bd:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0045d0be:  // call 0x45cb80
    t0 = 0x0045cb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d0c3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d0c3:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045d0c6:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0045d0c9:  // je 0x45d0fc
    if (f.zf) goto L_0045d0fc;
L_0045d0cb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0045d0cc:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0045d0cd:  // call 0x45cb80
    t0 = 0x0045cb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d0d2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d0d2:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0045d0d5:  // mov dword ptr [eax*4 + 0x662564], 3
    M32((uint32_t)(eax * 4u + 0x662564u)) = (uint32_t)(0x3u);
L_0045d0e0:  // jmp 0x45d0fc
    goto L_0045d0fc;
L_0045d0e2:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0045d0e4:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d0e9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d0e9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045d0ec:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_0045d0ee:  // call 0x45cd10
    t0 = 0x0045cd10u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d0f3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d0f3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0045d0f4:  // call 0x51f500
    t0 = 0x0051f500u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d0f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d0f9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045d0fc:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0045d100:  // mov eax, dword ptr [ebx + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0045d106:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0045d108:  // jne 0x45d11c
    if (!f.zf) goto L_0045d11c;
L_0045d10a:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0045d10e:  // mov ecx, dword ptr [ebx + 0x140]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x140u)));
L_0045d114:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0045d116:  // je 0x45d69e
    if (f.zf) goto L_0045d69e;
L_0045d11c:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0045d121:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d126u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d126:  // fstp dword ptr [ebx + 8]
    F32((uint32_t)(ebx + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0045d129:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0045d12a:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0045d12b:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0045d12c:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0045d12d:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0045d130:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0045d133:  // mov esi, dword ptr [esp + 0x8c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0045d13a:  // cmp esi, 0x2e
    t0 = lsub<32>(esi, 0x2eu, f);
L_0045d13d:  // jne 0x45d14f
    if (!f.zf) goto L_0045d14f;
L_0045d13f:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0045d141:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0045d146u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0045d146:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0045d149:  // mov dword ptr [ebx + 0x1d4], ebp
    M32((uint32_t)(ebx + 0x1d4u)) = (uint32_t)(ebp);
L_0045d14f:  // fld dword ptr [ebx + 0x194]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x194u)));
L_0045d155:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0045d15b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d15d:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045d160:  // jne 0x45d69e
    if (!f.zf) goto L_0045d69e;
L_0045d166:  // mov eax, dword ptr [ebx + 0x154]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x154u)));
L_0045d16c:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0045d16e:  // jne 0x45d2ca
    if (!f.zf) goto L_0045d2ca;
L_0045d174:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0045d17a:  // lea eax, [esi - 0x22]
    eax = (uint32_t)((uint32_t)(esi + 0xffffffdeu));
L_0045d17d:  // mov dword ptr [esp + 0x20], 0
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(0x0u);
L_0045d185:  // cmp eax, 7
    t0 = lsub<32>(eax, 0x7u, f);
L_0045d188:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0045d190:  // ja 0x45d1d6
    if ((!f.cf && !f.zf)) goto L_0045d1d6;
L_0045d192:  // jmp dword ptr [eax*4 + 0x45d6d4]
    t0 = M32((uint32_t)(eax * 4u + 0x45d6d4u));
    switch (t0) {
    case 0x0045d199u: goto L_0045d199;
    case 0x0045d1a6u: goto L_0045d1a6;
    case 0x0045d1b3u: goto L_0045d1b3;
    case 0x0045d1c0u: goto L_0045d1c0;
    case 0x0045d1cdu: goto L_0045d1cd;
    case 0x0045d1d6u: goto L_0045d1d6;
    case 0x0045d304u: goto L_0045d304;
    case 0x0045d331u: goto L_0045d331;
    case 0x0045d34au: goto L_0045d34a;
    case 0x0045d5afu: goto L_0045d5af;
    case 0x0045d5f6u: goto L_0045d5f6;
    case 0x0045d60eu: goto L_0045d60e;
    case 0x0045d621u: goto L_0045d621;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_0045d199:  // mov ecx, dword ptr [esp + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0045d1a0:  // mov dword ptr [esp + 0x20], ecx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(ecx);
L_0045d1a4:  // jmp 0x45d1d6
    goto L_0045d1d6;
L_0045d1a6:  // mov edx, dword ptr [esp + 0x90]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0045d1ad:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_0045d1b1:  // jmp 0x45d1d6
    goto L_0045d1d6;
L_0045d1b3:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0045d1ba:  // mov dword ptr [esp + 0x1c], eax
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(eax);
L_0045d1be:  // jmp 0x45d1d6
    goto L_0045d1d6;
L_0045d1c0:  // mov ecx, dword ptr [esp + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0045d1c7:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0045d1cb:  // jmp 0x45d1d6
    goto L_0045d1d6;
L_0045d1cd:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0045d1cf:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_0045d1d6:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0045d1da:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_0045d1e0:  // mov edx, 0xbf4ccccd
    edx = (uint32_t)(0xbf4ccccdu);
L_0045d1e5:  // fadd dword ptr [ebx + 0x198]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x198u)));
L_0045d1eb:  // fstp dword ptr [ebx + 0x198]
    F32((uint32_t)(ebx + 0x198u)) = lf32(ST(0));
    lpop(x);
L_0045d1f1:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0045d1f5:  // fmul dword ptr [0x5d8578]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8578u)));
L_0045d1fb:  // fadd dword ptr [ebx + 0x19c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x19cu)));
L_0045d201:  // fstp dword ptr [ebx + 0x19c]
    F32((uint32_t)(ebx + 0x19cu)) = lf32(ST(0));
    lpop(x);
L_0045d207:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_0045d20d:  // fsubr dword ptr [ebx + 0x194]
    ST(0) = ((long double)F32((uint32_t)(ebx + 0x194u))) - (ST(0));
L_0045d213:  // fstp dword ptr [ebx + 0x194]
    F32((uint32_t)(ebx + 0x194u)) = lf32(ST(0));
    lpop(x);
L_0045d219:  // fld dword ptr [ebx + 0x198]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x198u)));
L_0045d21f:  // fcomp dword ptr [0x5d8be4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be4u)));
    lpop(x);
L_0045d225:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d227:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045d22a:  // je 0x45d232
    if (f.zf) goto L_0045d232;
L_0045d22c:  // mov dword ptr [ebx + 0x198], edx
    M32((uint32_t)(ebx + 0x198u)) = (uint32_t)(edx);
L_0045d232:  // fld dword ptr [ebx + 0x198]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x198u)));
L_0045d238:  // fcomp dword ptr [0x5d85f8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85f8u)));
    lpop(x);
L_0045d23e:  // mov ecx, 0x3f4ccccd
    ecx = (uint32_t)(0x3f4ccccdu);
L_0045d243:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d245:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045d248:  // jne 0x45d250
    if (!f.zf) goto L_0045d250;
L_0045d24a:  // mov dword ptr [ebx + 0x198], ecx
    M32((uint32_t)(ebx + 0x198u)) = (uint32_t)(ecx);
L_0045d250:  // fld dword ptr [ebx + 0x19c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x19cu)));
L_0045d256:  // fcomp dword ptr [0x5d8be4]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8be4u)));
    lpop(x);
L_0045d25c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d25e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045d261:  // je 0x45d269
    if (f.zf) goto L_0045d269;
L_0045d263:  // mov dword ptr [ebx + 0x19c], edx
    M32((uint32_t)(ebx + 0x19cu)) = (uint32_t)(edx);
L_0045d269:  // fld dword ptr [ebx + 0x19c]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x19cu)));
L_0045d26f:  // fcomp dword ptr [0x5d85f8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85f8u)));
    lpop(x);
L_0045d275:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d277:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045d27a:  // jne 0x45d282
    if (!f.zf) goto L_0045d282;
L_0045d27c:  // mov dword ptr [ebx + 0x19c], ecx
    M32((uint32_t)(ebx + 0x19cu)) = (uint32_t)(ecx);
L_0045d282:  // fld dword ptr [ebx + 0x194]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x194u)));
L_0045d288:  // fcomp dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
    lpop(x);
L_0045d28e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d290:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045d293:  // je 0x45d29f
    if (f.zf) goto L_0045d29f;
L_0045d295:  // mov dword ptr [ebx + 0x194], 0x3f800000
    M32((uint32_t)(ebx + 0x194u)) = (uint32_t)(0x3f800000u);
L_0045d29f:  // fld dword ptr [ebx + 0x194]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x194u)));
L_0045d2a5:  // fcomp dword ptr [0x5d85d8]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d8u)));
    lpop(x);
L_0045d2ab:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d2ad:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045d2b0:  // jne 0x45d69e
    if (!f.zf) goto L_0045d69e;
L_0045d2b6:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0045d2b7:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0045d2b8:  // mov dword ptr [ebx + 0x194], 0x40a00000
    M32((uint32_t)(ebx + 0x194u)) = (uint32_t)(0x40a00000u);
L_0045d2c2:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0045d2c3:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0045d2c4:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0045d2c7:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0045d2ca:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0045d2cd:  // jne 0x45d69e
    if (!f.zf) goto L_0045d69e;
L_0045d2d3:  // fld dword ptr [0x5d856c]
    lpush(x, (long double)F32((uint32_t)(0x5d856cu)));
L_0045d2d9:  // lea eax, [esi - 0x22]
    eax = (uint32_t)((uint32_t)(esi + 0xffffffdeu));
L_0045d2dc:  // mov dword ptr [esp + 0x10], 0
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x0u);
L_0045d2e4:  // cmp eax, 0x1e
    t0 = lsub<32>(eax, 0x1eu, f);
L_0045d2e7:  // mov dword ptr [esp + 0x14], 0
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0x0u);
L_0045d2ef:  // ja 0x45d5af
    if ((!f.cf && !f.zf)) goto L_0045d5af;
L_0045d2f5:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0045d2f7:  // mov dl, byte ptr [eax + 0x45d710]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x45d710u))) & 0xffu);
L_0045d2fd:  // jmp dword ptr [edx*4 + 0x45d6f4]
    t0 = M32((uint32_t)(edx * 4u + 0x45d6f4u));
    switch (t0) {
    case 0x0045d304u: goto L_0045d304;
    case 0x0045d331u: goto L_0045d331;
    case 0x0045d34au: goto L_0045d34a;
    case 0x0045d5afu: goto L_0045d5af;
    case 0x0045d5f6u: goto L_0045d5f6;
    case 0x0045d60eu: goto L_0045d60e;
    case 0x0045d621u: goto L_0045d621;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_0045d304:  // cmp dword ptr [ebx + 0x158], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x158u)), ebp, f);
L_0045d30a:  // je 0x45d5af
    if (f.zf) goto L_0045d5af;
L_0045d310:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0045d317:  // mov dword ptr [esp + 0x10], eax
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(eax);
L_0045d31b:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0045d31f:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0045d325:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d327:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0045d32a:  // je 0x45d376
    if (f.zf) goto L_0045d376;
L_0045d32c:  // jmp 0x45d5af
    goto L_0045d5af;
L_0045d331:  // cmp dword ptr [ebx + 0x158], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x158u)), ebp, f);
L_0045d337:  // je 0x45d5af
    if (f.zf) goto L_0045d5af;
L_0045d33d:  // mov ecx, dword ptr [esp + 0x90]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0045d344:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0045d348:  // jmp 0x45d31b
    goto L_0045d31b;
L_0045d34a:  // cmp dword ptr [ebx + 0x158], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x158u)), ebp, f);
L_0045d350:  // je 0x45d5af
    if (f.zf) goto L_0045d5af;
L_0045d356:  // mov edx, dword ptr [esp + 0x90]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0045d35d:  // mov dword ptr [esp + 0x14], edx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(edx);
L_0045d361:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0045d365:  // fcomp dword ptr [0x5d856c]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d856cu)));
    lpop(x);
L_0045d36b:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d36d:  // test ah, 0x40
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x40u, f);
L_0045d370:  // jne 0x45d5af
    if (!f.zf) goto L_0045d5af;
L_0045d376:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_0045d37a:  // fmul dword ptr [0x5d8c1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c1cu)));
L_0045d380:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0045d384:  // fmul dword ptr [0x5d8c1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c1cu)));
L_0045d38a:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0045d38c:  // fcos 
    ST(0) = lfcos(ST(0));
L_0045d38e:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0045d392:  // fsin 
    ST(0) = lfsin(ST(0));
L_0045d394:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0045d398:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0045d39e:  // fcos 
    ST(0) = lfcos(ST(0));
L_0045d3a0:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_0045d3a4:  // fld qword ptr [0x5d87b0]
    lpush(x, (long double)F64((uint32_t)(0x5d87b0u)));
L_0045d3aa:  // fsin 
    ST(0) = lfsin(ST(0));
L_0045d3ac:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0045d3b0:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0045d3b2:  // fcos 
    ST(0) = lfcos(ST(0));
L_0045d3b4:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0045d3b8:  // fsin 
    ST(0) = lfsin(ST(0));
L_0045d3ba:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0045d3bc:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0045d3c0:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0045d3c4:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0045d3c8:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0045d3ca:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0045d3ce:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0045d3d0:  // fstp dword ptr [esp + 0x58]
    F32((uint32_t)(esp + 0x58u)) = lf32(ST(0));
    lpop(x);
L_0045d3d4:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0045d3d8:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0045d3dc:  // fchs 
    ST(0) = -ST(0);
L_0045d3de:  // fstp dword ptr [esp + 0x5c]
    F32((uint32_t)(esp + 0x5cu)) = lf32(ST(0));
    lpop(x);
L_0045d3e2:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0045d3e4:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0045d3e8:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_0045d3ec:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0045d3f0:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0045d3f4:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0045d3f8:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0045d3fc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d3fe:  // fstp dword ptr [esp + 0x60]
    F32((uint32_t)(esp + 0x60u)) = lf32(ST(0));
    lpop(x);
L_0045d402:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0045d406:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0045d40a:  // fxch st(1)
    v0 = ST(0); ST(0) = ST(1); ST(1) = v0;
L_0045d40c:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0045d410:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d412:  // fstp dword ptr [esp + 0x68]
    F32((uint32_t)(esp + 0x68u)) = lf32(ST(0));
    lpop(x);
L_0045d416:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0045d41a:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0045d41e:  // fstp dword ptr [esp + 0x6c]
    F32((uint32_t)(esp + 0x6cu)) = lf32(ST(0));
    lpop(x);
L_0045d422:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0045d426:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0045d42a:  // fld dword ptr [esp + 0x24]
    lpush(x, (long double)F32((uint32_t)(esp + 0x24u)));
L_0045d42e:  // fmul dword ptr [esp + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x14u)));
L_0045d432:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_0045d434:  // fstp dword ptr [esp + 0x70]
    F32((uint32_t)(esp + 0x70u)) = lf32(ST(0));
    lpop(x);
L_0045d438:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0045d43c:  // fmul dword ptr [esp + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x18u)));
L_0045d440:  // fchs 
    ST(0) = -ST(0);
L_0045d442:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0045d446:  // fmul dword ptr [esp + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x20u)));
L_0045d44a:  // lea edi, [ebx + 0x1a0]
    edi = (uint32_t)((uint32_t)(ebx + 0x1a0u));
L_0045d450:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0045d452:  // fmul dword ptr [edi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x10u)));
L_0045d455:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0045d457:  // fmul dword ptr [edi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x20u)));
L_0045d45a:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d45c:  // fld st(2)
    v0 = ST(2); lpush(x, v0);
L_0045d45e:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_0045d460:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d462:  // fstp dword ptr [esp + 0x48]
    F32((uint32_t)(esp + 0x48u)) = lf32(ST(0));
    lpop(x);
L_0045d466:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0045d468:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_0045d46b:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0045d46d:  // fmul dword ptr [edi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x24u)));
L_0045d470:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d472:  // fld st(3)
    v0 = ST(3); lpush(x, v0);
L_0045d474:  // fmul dword ptr [edi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x14u)));
L_0045d477:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d479:  // fstp dword ptr [esp + 0x4c]
    F32((uint32_t)(esp + 0x4cu)) = lf32(ST(0));
    lpop(x);
L_0045d47d:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0045d47f:  // fmul dword ptr [edi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x18u)));
L_0045d482:  // fxch st(2)
    v0 = ST(0); ST(0) = ST(2); ST(2) = v0;
L_0045d484:  // fmul dword ptr [edi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x28u)));
L_0045d487:  // faddp st(2)
    ST(2) = (ST(2)) + (ST(0));
    lpop(x);
L_0045d489:  // fmul dword ptr [edi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x8u)));
L_0045d48c:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d48e:  // fstp dword ptr [esp + 0x50]
    F32((uint32_t)(esp + 0x50u)) = lf32(ST(0));
    lpop(x);
L_0045d492:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_0045d496:  // fmul dword ptr [edi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x20u)));
L_0045d499:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0045d49d:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_0045d49f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d4a1:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0045d4a5:  // fmul dword ptr [edi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x10u)));
L_0045d4a8:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d4aa:  // fstp dword ptr [esp + 0x38]
    F32((uint32_t)(esp + 0x38u)) = lf32(ST(0));
    lpop(x);
L_0045d4ae:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0045d4b2:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_0045d4b5:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0045d4b9:  // fmul dword ptr [edi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x14u)));
L_0045d4bc:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d4be:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_0045d4c2:  // fmul dword ptr [edi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x24u)));
L_0045d4c5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d4c7:  // fstp dword ptr [esp + 0x3c]
    F32((uint32_t)(esp + 0x3cu)) = lf32(ST(0));
    lpop(x);
L_0045d4cb:  // fld dword ptr [esp + 0x70]
    lpush(x, (long double)F32((uint32_t)(esp + 0x70u)));
L_0045d4cf:  // fmul dword ptr [edi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x28u)));
L_0045d4d2:  // fld dword ptr [esp + 0x68]
    lpush(x, (long double)F32((uint32_t)(esp + 0x68u)));
L_0045d4d6:  // fmul dword ptr [edi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x8u)));
L_0045d4d9:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d4db:  // fld dword ptr [esp + 0x6c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x6cu)));
L_0045d4df:  // fmul dword ptr [edi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x18u)));
L_0045d4e2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d4e4:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_0045d4e8:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0045d4ec:  // fmul dword ptr [edi]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi)));
L_0045d4ee:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0045d4f2:  // fmul dword ptr [edi + 0x20]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x20u)));
L_0045d4f5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d4f7:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0045d4fb:  // fmul dword ptr [edi + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x10u)));
L_0045d4fe:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d500:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_0045d504:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0045d508:  // fmul dword ptr [edi + 0x14]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x14u)));
L_0045d50b:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0045d50f:  // fmul dword ptr [edi + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x24u)));
L_0045d512:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d514:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0045d518:  // fmul dword ptr [edi + 4]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x4u)));
L_0045d51b:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d51d:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0045d521:  // fld dword ptr [esp + 0x58]
    lpush(x, (long double)F32((uint32_t)(esp + 0x58u)));
L_0045d525:  // fmul dword ptr [edi + 8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x8u)));
L_0045d528:  // fld dword ptr [esp + 0x60]
    lpush(x, (long double)F32((uint32_t)(esp + 0x60u)));
L_0045d52c:  // fmul dword ptr [edi + 0x28]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x28u)));
L_0045d52f:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0045d533:  // mov eax, dword ptr [esp + 0x2c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0045d537:  // mov dword ptr [esp + 0x58], edx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(edx);
L_0045d53b:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0045d53f:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d541:  // fld dword ptr [esp + 0x5c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x5cu)));
L_0045d545:  // fmul dword ptr [edi + 0x18]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(edi + 0x18u)));
L_0045d548:  // mov dword ptr [esp + 0x5c], eax
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(eax);
L_0045d54c:  // mov eax, dword ptr [esp + 0x38]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0045d550:  // mov dword ptr [esp + 0x64], edx
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(edx);
L_0045d554:  // mov edx, dword ptr [esp + 0x40]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0045d558:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0045d55a:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_0045d55e:  // mov eax, dword ptr [esp + 0x44]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0045d562:  // mov dword ptr [esp + 0x70], edx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(edx);
L_0045d566:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0045d56a:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0045d56e:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0045d572:  // mov dword ptr [esp + 0x74], eax
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(eax);
L_0045d576:  // mov dword ptr [esp + 0x60], ecx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(ecx);
L_0045d57a:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0045d57e:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0045d582:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_0045d586:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0045d58a:  // lea esi, [esp + 0x58]
    esi = (uint32_t)((uint32_t)(esp + 0x58u));
L_0045d58e:  // mov dword ptr [esp + 0x78], ecx
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(ecx);
L_0045d592:  // mov ecx, dword ptr [esp + 0x54]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0045d596:  // mov dword ptr [esp + 0x84], ecx
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(ecx);
L_0045d59d:  // mov ecx, 0xc
    ecx = (uint32_t)(0xcu);
L_0045d5a2:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_0045d5a6:  // mov dword ptr [esp + 0x80], eax
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(eax);
L_0045d5ad:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0045d5af:  // fmul dword ptr [0x5d85c0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85c0u)));
L_0045d5b5:  // mov eax, dword ptr [ebx + 0x148]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x148u)));
L_0045d5bb:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0045d5bd:  // fadd dword ptr [ebx + 0x1d0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(ebx + 0x1d0u)));
L_0045d5c3:  // fstp dword ptr [ebx + 0x1d0]
    F32((uint32_t)(ebx + 0x1d0u)) = lf32(ST(0));
    lpop(x);
L_0045d5c9:  // je 0x45d658
    if (f.zf) goto L_0045d658;
L_0045d5cf:  // mov eax, dword ptr [eax + 0x150]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x150u)));
L_0045d5d5:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_0045d5d8:  // fmul dword ptr [0x5d8cc0]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8cc0u)));
L_0045d5de:  // fld dword ptr [eax + 0x24]
    lpush(x, (long double)F32((uint32_t)(eax + 0x24u)));
L_0045d5e1:  // fcom dword ptr [ebx + 0x1d0]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebx + 0x1d0u)));
L_0045d5e7:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d5e9:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045d5ec:  // jne 0x45d639
    if (!f.zf) goto L_0045d639;
L_0045d5ee:  // fstp dword ptr [ebx + 0x1d0]
    F32((uint32_t)(ebx + 0x1d0u)) = lf32(ST(0));
    lpop(x);
L_0045d5f4:  // jmp 0x45d63b
    goto L_0045d63b;
L_0045d5f6:  // cmp dword ptr [ebx + 0x158], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x158u)), ebp, f);
L_0045d5fc:  // je 0x45d5af
    if (f.zf) goto L_0045d5af;
L_0045d5fe:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_0045d605:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0045d609:  // jmp 0x45d361
    goto L_0045d361;
L_0045d60e:  // cmp dword ptr [ebx + 0x158], ebp
    t0 = lsub<32>(M32((uint32_t)(ebx + 0x158u)), ebp, f);
L_0045d614:  // je 0x45d5af
    if (f.zf) goto L_0045d5af;
L_0045d616:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0045d618:  // fld dword ptr [esp + 0x90]
    lpush(x, (long double)F32((uint32_t)(esp + 0x90u)));
L_0045d61f:  // jmp 0x45d5af
    goto L_0045d5af;
L_0045d621:  // mov eax, dword ptr [ebx + 0x158]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x158u)));
L_0045d627:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0045d629:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_0045d62b:  // sete cl
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(f.zf) & 0xffu);
L_0045d62e:  // mov dword ptr [ebx + 0x158], ecx
    M32((uint32_t)(ebx + 0x158u)) = (uint32_t)(ecx);
L_0045d634:  // jmp 0x45d5af
    goto L_0045d5af;
L_0045d639:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0045d63b:  // fcom dword ptr [ebx + 0x1d0]
    lcom(x, ST(0), (long double)F32((uint32_t)(ebx + 0x1d0u)));
L_0045d641:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d643:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045d646:  // je 0x45d69c
    if (f.zf) goto L_0045d69c;
L_0045d648:  // fstp dword ptr [ebx + 0x1d0]
    F32((uint32_t)(ebx + 0x1d0u)) = lf32(ST(0));
    lpop(x);
L_0045d64e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0045d64f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0045d650:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0045d651:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0045d652:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0045d655:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0045d658:  // fld dword ptr [ebx + 0x1d0]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x1d0u)));
L_0045d65e:  // fcomp dword ptr [0x5d85c0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85c0u)));
    lpop(x);
L_0045d664:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d666:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0045d669:  // je 0x45d675
    if (f.zf) goto L_0045d675;
L_0045d66b:  // mov dword ptr [ebx + 0x1d0], 0x3dcccccd
    M32((uint32_t)(ebx + 0x1d0u)) = (uint32_t)(0x3dcccccdu);
L_0045d675:  // fld dword ptr [ebx + 0x1d0]
    lpush(x, (long double)F32((uint32_t)(ebx + 0x1d0u)));
L_0045d67b:  // fcomp dword ptr [0x5d85d0]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d85d0u)));
    lpop(x);
L_0045d681:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0045d683:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0045d686:  // jne 0x45d69e
    if (!f.zf) goto L_0045d69e;
L_0045d688:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0045d689:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0045d68a:  // mov dword ptr [ebx + 0x1d0], 0x42480000
    M32((uint32_t)(ebx + 0x1d0u)) = (uint32_t)(0x42480000u);
L_0045d694:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0045d695:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0045d696:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0045d699:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0045d69c:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0045d69e:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0045d69f:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0045d6a0:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0045d6a1:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0045d6a2:  // add esp, 0x78
    t0 = ladd<32>(esp, 0x78u, f);
    esp = (uint32_t)(t0);
L_0045d6a5:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0045cde0, 0045cde0)
