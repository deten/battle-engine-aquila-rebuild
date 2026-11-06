// lifted from 004019e0 (vslot0, 367 bytes, 117 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004019e0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004019e0;
L_004019e0:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004019e3:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004019e4:  // mov ebx, dword ptr [esp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_004019e8:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004019e9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004019ea:  // movsx eax, word ptr [ebx + 4]
    eax = (uint32_t)((uint32_t)(int32_t)(int16_t)(M16((uint32_t)(ebx + 0x4u))));
L_004019ee:  // sub eax, 0xbb8
    t0 = lsub<32>(eax, 0xbb8u, f);
    eax = (uint32_t)(t0);
L_004019f3:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_004019f5:  // je 0x401ae6
    if (f.zf) goto L_00401ae6;
L_004019fb:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_004019fc:  // je 0x401a0d
    if (f.zf) goto L_00401a0d;
L_004019fe:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004019ff:  // call 0x4f4300
    t0 = 0x004f4300u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401a04u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401a04:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00401a05:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00401a06:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00401a07:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00401a0a:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_00401a0d:  // lea edi, [esi + 0x1c]
    edi = (uint32_t)((uint32_t)(esi + 0x1cu));
L_00401a10:  // lea eax, [esi + 0x8c]
    eax = (uint32_t)((uint32_t)(esi + 0x8cu));
L_00401a16:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00401a18:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_00401a1a:  // mov dword ptr [eax], edx
    M32((uint32_t)(eax)) = (uint32_t)(edx);
L_00401a1c:  // mov edx, dword ptr [ecx + 4]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00401a1f:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00401a22:  // mov edx, dword ptr [ecx + 8]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0x8u)));
L_00401a25:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_00401a28:  // mov ecx, dword ptr [ecx + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(ecx + 0xcu)));
L_00401a2b:  // mov dword ptr [eax + 0xc], ecx
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(ecx);
L_00401a2e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00401a30:  // fld dword ptr [edi]
    lpush(x, (long double)F32((uint32_t)(edi)));
L_00401a32:  // fadd dword ptr [esi + 0x7c]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x7cu)));
L_00401a35:  // fstp dword ptr [edi]
    F32((uint32_t)(edi)) = lf32(ST(0));
    lpop(x);
L_00401a37:  // fld dword ptr [esi + 0x80]
    lpush(x, (long double)F32((uint32_t)(esi + 0x80u)));
L_00401a3d:  // fadd dword ptr [edi + 4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x4u)));
L_00401a40:  // fstp dword ptr [edi + 4]
    F32((uint32_t)(edi + 0x4u)) = lf32(ST(0));
    lpop(x);
L_00401a43:  // fld dword ptr [esi + 0x84]
    lpush(x, (long double)F32((uint32_t)(esi + 0x84u)));
L_00401a49:  // fadd dword ptr [edi + 8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(edi + 0x8u)));
L_00401a4c:  // fstp dword ptr [edi + 8]
    F32((uint32_t)(edi + 0x8u)) = lf32(ST(0));
    lpop(x);
L_00401a4f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00401a51:  // call dword ptr [edx + 0xb0]
    t0 = M32((uint32_t)(edx + 0xb0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401a57u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401a57:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00401a59:  // je 0x401a96
    if (f.zf) goto L_00401a96;
L_00401a5b:  // mov edx, edi
    edx = (uint32_t)(edi);
L_00401a5d:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_00401a62:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401a67u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401a67:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00401a69:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00401a6b:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00401a6f:  // call dword ptr [eax + 0xc0]
    t0 = M32((uint32_t)(eax + 0xc0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401a75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401a75:  // fsubr dword ptr [esp + 0x18]
    ST(0) = ((long double)F32((uint32_t)(esp + 0x18u))) - (ST(0));
L_00401a79:  // fcom dword ptr [esi + 0x24]
    lcom(x, ST(0), (long double)F32((uint32_t)(esi + 0x24u)));
L_00401a7c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00401a7e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00401a81:  // je 0x401a94
    if (f.zf) goto L_00401a94;
L_00401a83:  // fstp dword ptr [esi + 0x24]
    F32((uint32_t)(esi + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00401a86:  // mov ecx, dword ptr [0x672fd0]
    ecx = (uint32_t)(M32((uint32_t)(0x672fd0u)));
L_00401a8c:  // mov dword ptr [esi + 0xcc], ecx
    M32((uint32_t)(esi + 0xccu)) = (uint32_t)(ecx);
L_00401a92:  // jmp 0x401a96
    goto L_00401a96;
L_00401a94:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00401a96:  // test byte ptr [esi + 0x2c], 1
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x1u, f);
L_00401a9a:  // jne 0x401b46
    if (!f.zf) goto L_00401b46;
L_00401aa0:  // mov edx, dword ptr [esi + 0xdc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xdcu)));
L_00401aa6:  // mov edi, 0xbb9
    edi = (uint32_t)(0xbb9u);
L_00401aab:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_00401aac:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00401aae:  // mov dword ptr [esi + 0xdc], edx
    M32((uint32_t)(esi + 0xdcu)) = (uint32_t)(edx);
L_00401ab4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00401ab6:  // jg 0x401ad2
    if ((!f.zf && f.sf == f.of)) goto L_00401ad2;
L_00401ab8:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00401aba:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00401abc:  // mov edi, 0xbb8
    edi = (uint32_t)(0xbb8u);
L_00401ac1:  // call dword ptr [edx + 0x60]
    t0 = M32((uint32_t)(edx + 0x60u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401ac4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401ac4:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00401ac8:  // mov eax, dword ptr [esp + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00401acc:  // mov dword ptr [esi + 0xdc], eax
    M32((uint32_t)(esi + 0xdcu)) = (uint32_t)(eax);
L_00401ad2:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00401ad3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00401ad5:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_00401ad9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00401adb:  // mov dword ptr [esp + 0x24], 0xbf800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xbf800000u);
L_00401ae3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00401ae4:  // jmp 0x401b3a
    goto L_00401b3a;
L_00401ae6:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00401ae8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00401aea:  // call dword ptr [edx + 0x108]
    t0 = M32((uint32_t)(edx + 0x108u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401af0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401af0:  // test byte ptr [esi + 0x2c], 1
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x1u, f);
L_00401af4:  // jne 0x401b46
    if (!f.zf) goto L_00401b46;
L_00401af6:  // mov edx, dword ptr [esi + 0xdc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xdcu)));
L_00401afc:  // mov edi, 0xbb9
    edi = (uint32_t)(0xbb9u);
L_00401b01:  // dec edx
    t0 = ldec<32>(edx, f);
    edx = (uint32_t)(t0);
L_00401b02:  // mov eax, edx
    eax = (uint32_t)(edx);
L_00401b04:  // mov dword ptr [esi + 0xdc], edx
    M32((uint32_t)(esi + 0xdcu)) = (uint32_t)(edx);
L_00401b0a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00401b0c:  // jg 0x401b28
    if ((!f.zf && f.sf == f.of)) goto L_00401b28;
L_00401b0e:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00401b10:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00401b12:  // mov edi, 0xbb8
    edi = (uint32_t)(0xbb8u);
L_00401b17:  // call dword ptr [eax + 0x60]
    t0 = M32((uint32_t)(eax + 0x60u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401b1au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401b1a:  // fistp qword ptr [esp + 0xc]
    M64((uint32_t)(esp + 0xcu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00401b1e:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_00401b22:  // mov dword ptr [esi + 0xdc], ecx
    M32((uint32_t)(esi + 0xdcu)) = (uint32_t)(ecx);
L_00401b28:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_00401b29:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00401b2b:  // lea edx, [esp + 0x20]
    edx = (uint32_t)((uint32_t)(esp + 0x20u));
L_00401b2f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00401b31:  // mov dword ptr [esp + 0x24], 0xbf800000
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(0xbf800000u);
L_00401b39:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00401b3a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00401b3b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00401b3c:  // mov ecx, 0x672fc8
    ecx = (uint32_t)(0x672fc8u);
L_00401b41:  // call 0x44b370
    t0 = 0x0044b370u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00401b46u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00401b46:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_00401b47:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_00401b48:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_00401b49:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_00401b4c:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x004019e0, 004019e0)
