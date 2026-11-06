// lifted from 0051ccb0 (vslot3, 770 bytes, 204 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0051ccb0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0051ccb0;
L_0051ccb0:  // mov eax, dword ptr [esp + 4]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x4u)));
L_0051ccb4:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0051ccb5:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0051ccb6:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0051ccb8:  // add eax, -0x2a
    t0 = ladd<32>(eax, 0xffffffd6u, f);
    eax = (uint32_t)(t0);
L_0051ccbb:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0051ccbc:  // mov edi, dword ptr [esi + 0x60]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_0051ccbf:  // mov ebx, dword ptr [esi + 0x64]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x64u)));
L_0051ccc2:  // cmp eax, 0xd
    t0 = lsub<32>(eax, 0xdu, f);
L_0051ccc5:  // ja 0x51cf58
    if ((!f.cf && !f.zf)) goto L_0051cf58;
L_0051cccb:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0051cccd:  // mov cl, byte ptr [eax + 0x51cfd0]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x51cfd0u))) & 0xffu);
L_0051ccd3:  // jmp dword ptr [ecx*4 + 0x51cfb4]
    t0 = M32((uint32_t)(ecx * 4u + 0x51cfb4u));
    switch (t0) {
    case 0x0051ccdau: goto L_0051ccda;
    case 0x0051ccfau: goto L_0051ccfa;
    case 0x0051cd1bu: goto L_0051cd1b;
    case 0x0051cd3bu: goto L_0051cd3b;
    case 0x0051cd5cu: goto L_0051cd5c;
    case 0x0051cf40u: goto L_0051cf40;
    case 0x0051cf58u: goto L_0051cf58;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_0051ccda:  // lea eax, [edi - 1]
    eax = (uint32_t)((uint32_t)(edi + 0xffffffffu));
L_0051ccdd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051ccdf:  // mov dword ptr [esi + 0x60], eax
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(eax);
L_0051cce2:  // jge 0x51cceb
    if ((f.sf == f.of)) goto L_0051cceb;
L_0051cce4:  // mov dword ptr [esi + 0x60], 0
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x0u);
L_0051cceb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051cced:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ccf2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ccf2:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051ccf5:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051ccfa:  // lea eax, [edi + 1]
    eax = (uint32_t)((uint32_t)(edi + 0x1u));
L_0051ccfd:  // cmp eax, 5
    t0 = lsub<32>(eax, 0x5u, f);
L_0051cd00:  // mov dword ptr [esi + 0x60], eax
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(eax);
L_0051cd03:  // jle 0x51cd0c
    if ((f.zf || f.sf != f.of)) goto L_0051cd0c;
L_0051cd05:  // mov dword ptr [esi + 0x60], 5
    M32((uint32_t)(esi + 0x60u)) = (uint32_t)(0x5u);
L_0051cd0c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051cd0e:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cd13u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cd13:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cd16:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cd1b:  // lea eax, [ebx - 1]
    eax = (uint32_t)((uint32_t)(ebx + 0xffffffffu));
L_0051cd1e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0051cd20:  // mov dword ptr [esi + 0x64], eax
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(eax);
L_0051cd23:  // jge 0x51cd2c
    if ((f.sf == f.of)) goto L_0051cd2c;
L_0051cd25:  // mov dword ptr [esi + 0x64], 0
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(0x0u);
L_0051cd2c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051cd2e:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cd33u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cd33:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cd36:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cd3b:  // lea eax, [ebx + 1]
    eax = (uint32_t)((uint32_t)(ebx + 0x1u));
L_0051cd3e:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0051cd41:  // mov dword ptr [esi + 0x64], eax
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(eax);
L_0051cd44:  // jle 0x51cd4d
    if ((f.zf || f.sf != f.of)) goto L_0051cd4d;
L_0051cd46:  // mov dword ptr [esi + 0x64], 2
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(0x2u);
L_0051cd4d:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051cd4f:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cd54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cd54:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cd57:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cd5c:  // cmp edi, 3
    t0 = lsub<32>(edi, 0x3u, f);
L_0051cd5f:  // jl 0x51cd91
    if ((f.sf != f.of)) goto L_0051cd91;
L_0051cd61:  // push 0x320
    t0 = 0x320u; esp -= 4; M32(esp) = t0;
L_0051cd66:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051cd6b:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cd70u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cd70:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0051cd73:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051cd75:  // jne 0x51cd91
    if (!f.zf) goto L_0051cd91;
L_0051cd77:  // push 0x2e5
    t0 = 0x2e5u; esp -= 4; M32(esp) = t0;
L_0051cd7c:  // mov ecx, 0x660620
    ecx = (uint32_t)(0x660620u);
L_0051cd81:  // call 0x41b8f0
    t0 = 0x0041b8f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cd86u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cd86:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0051cd89:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0051cd8b:  // je 0x51cf34
    if (f.zf) goto L_0051cf34;
L_0051cd91:  // push 0x1e
    t0 = 0x1eu; esp -= 4; M32(esp) = t0;
L_0051cd93:  // push 0xf
    t0 = 0xfu; esp -= 4; M32(esp) = t0;
L_0051cd95:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051cd9a:  // call 0x466ae0
    t0 = 0x00466ae0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cd9fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cd9f:  // mov eax, dword ptr [0x8a180c]
    eax = (uint32_t)(M32((uint32_t)(0x8a180cu)));
L_0051cda4:  // lea edx, [eax + eax*2]
    edx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0051cda7:  // mov eax, dword ptr [0x8a1808]
    eax = (uint32_t)(M32((uint32_t)(0x8a1808u)));
L_0051cdac:  // lea eax, [eax + edx*2]
    eax = (uint32_t)((uint32_t)(eax + edx * 2u));
L_0051cdaf:  // cmp eax, 0xe
    t0 = lsub<32>(eax, 0xeu, f);
L_0051cdb2:  // ja 0x51cf2a
    if ((!f.cf && !f.zf)) goto L_0051cf2a;
L_0051cdb8:  // jmp dword ptr [eax*4 + 0x51cfe0]
    t0 = M32((uint32_t)(eax * 4u + 0x51cfe0u));
    switch (t0) {
    case 0x0051cdbfu: goto L_0051cdbf;
    case 0x0051cdd8u: goto L_0051cdd8;
    case 0x0051cdf1u: goto L_0051cdf1;
    case 0x0051ce0au: goto L_0051ce0a;
    case 0x0051ce23u: goto L_0051ce23;
    case 0x0051ce3cu: goto L_0051ce3c;
    case 0x0051ce55u: goto L_0051ce55;
    case 0x0051ce6eu: goto L_0051ce6e;
    case 0x0051ce87u: goto L_0051ce87;
    case 0x0051cea0u: goto L_0051cea0;
    case 0x0051ceb9u: goto L_0051ceb9;
    case 0x0051ced2u: goto L_0051ced2;
    case 0x0051cee8u: goto L_0051cee8;
    case 0x0051cefeu: goto L_0051cefe;
    case 0x0051cf14u: goto L_0051cf14;
    }
    { c->target = t0; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return; }
L_0051cdbf:  // mov eax, 0x352
    eax = (uint32_t)(0x352u);
L_0051cdc4:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051cdc6:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051cdcb:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cdd0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cdd0:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cdd3:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cdd8:  // mov eax, 0x355
    eax = (uint32_t)(0x355u);
L_0051cddd:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051cddf:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051cde4:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cde9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cde9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cdec:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cdf1:  // mov eax, 0x35b
    eax = (uint32_t)(0x35bu);
L_0051cdf6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051cdf8:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051cdfd:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ce02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ce02:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051ce05:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051ce0a:  // mov eax, 0x360
    eax = (uint32_t)(0x360u);
L_0051ce0f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051ce11:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051ce16:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ce1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ce1b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051ce1e:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051ce23:  // mov eax, 0x361
    eax = (uint32_t)(0x361u);
L_0051ce28:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051ce2a:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051ce2f:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ce34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ce34:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051ce37:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051ce3c:  // mov eax, 0x362
    eax = (uint32_t)(0x362u);
L_0051ce41:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051ce43:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051ce48:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ce4du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ce4d:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051ce50:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051ce55:  // mov eax, 0x353
    eax = (uint32_t)(0x353u);
L_0051ce5a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051ce5c:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051ce61:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ce66u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ce66:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051ce69:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051ce6e:  // mov eax, 0x357
    eax = (uint32_t)(0x357u);
L_0051ce73:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051ce75:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051ce7a:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ce7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ce7f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051ce82:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051ce87:  // mov eax, 0x35c
    eax = (uint32_t)(0x35cu);
L_0051ce8c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051ce8e:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051ce93:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ce98u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ce98:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051ce9b:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cea0:  // mov eax, 0x35d
    eax = (uint32_t)(0x35du);
L_0051cea5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051cea7:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051ceac:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051ceb1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ceb1:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051ceb4:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051ceb9:  // mov eax, 0x35e
    eax = (uint32_t)(0x35eu);
L_0051cebe:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051cec0:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051cec5:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cecau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051ceca:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cecd:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051ced2:  // mov eax, 0x35f
    eax = (uint32_t)(0x35fu);
L_0051ced7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051ced9:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051cede:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cee3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cee3:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cee6:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cee8:  // mov eax, 0x354
    eax = (uint32_t)(0x354u);
L_0051ceed:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051ceef:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051cef4:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cef9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cef9:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cefc:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cefe:  // mov eax, 0x356
    eax = (uint32_t)(0x356u);
L_0051cf03:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051cf05:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051cf0a:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cf0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cf0f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cf12:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cf14:  // mov eax, 0x359
    eax = (uint32_t)(0x359u);
L_0051cf19:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051cf1b:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051cf20:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cf25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cf25:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cf28:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cf2a:  // mov eax, 0xfffffffe
    eax = (uint32_t)(0xfffffffeu);
L_0051cf2f:  // mov dword ptr [0x89d94c], eax
    M32((uint32_t)(0x89d94cu)) = (uint32_t)(eax);
L_0051cf34:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0051cf36:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cf3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cf3b:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cf3e:  // jmp 0x51cf58
    goto L_0051cf58;
L_0051cf40:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0051cf42:  // call 0x468770
    t0 = 0x00468770u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cf47u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cf47:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0051cf4a:  // mov ecx, 0x89d758
    ecx = (uint32_t)(0x89d758u);
L_0051cf4f:  // push 0x46
    t0 = 0x46u; esp -= 4; M32(esp) = t0;
L_0051cf51:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051cf53:  // call 0x466ae0
    t0 = 0x00466ae0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cf58u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cf58:  // cmp dword ptr [esi + 0x60], edi
    t0 = lsub<32>(M32((uint32_t)(esi + 0x60u)), edi, f);
L_0051cf5b:  // je 0x51cf6a
    if (f.zf) goto L_0051cf6a;
L_0051cf5d:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051cf62:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cf67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cf67:  // fstp dword ptr [esi + 8]
    F32((uint32_t)(esi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_0051cf6a:  // mov ecx, dword ptr [esi + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x60u)));
L_0051cf6d:  // mov eax, 2
    eax = (uint32_t)(0x2u);
L_0051cf72:  // cmp ecx, eax
    t0 = lsub<32>(ecx, eax, f);
L_0051cf74:  // jle 0x51cf82
    if ((f.zf || f.sf != f.of)) goto L_0051cf82;
L_0051cf76:  // cmp dword ptr [esi + 0x64], eax
    t0 = lsub<32>(M32((uint32_t)(esi + 0x64u)), eax, f);
L_0051cf79:  // jne 0x51cf82
    if (!f.zf) goto L_0051cf82;
L_0051cf7b:  // mov dword ptr [esi + 0x64], 1
    M32((uint32_t)(esi + 0x64u)) = (uint32_t)(0x1u);
L_0051cf82:  // cmp dword ptr [esi + 0x64], ebx
    t0 = lsub<32>(M32((uint32_t)(esi + 0x64u)), ebx, f);
L_0051cf85:  // je 0x51cf94
    if (f.zf) goto L_0051cf94;
L_0051cf87:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0051cf8c:  // call 0x5159e0
    t0 = 0x005159e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cf91u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cf91:  // fstp dword ptr [esi + 0xc]
    F32((uint32_t)(esi + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0051cf94:  // push 0x40490000
    t0 = 0x40490000u; esp -= 4; M32(esp) = t0;
L_0051cf99:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0051cf9b:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0051cfa0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0051cfa0:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0051cfa3:  // mov dword ptr [esi + 0x5c], 0
    M32((uint32_t)(esi + 0x5cu)) = (uint32_t)(0x0u);
L_0051cfaa:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0051cfac:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0051cfad:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0051cfae:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0051cfaf:  // ret 8
    c->target = M32(esp); esp += 12u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0051ccb0, 0051ccb0)
