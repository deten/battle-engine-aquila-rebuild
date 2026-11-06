// lifted from 00484c50 (FUN_00484c50, 2947 bytes, 823 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00484c50(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00484c50;
L_00484c50:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_00484c56:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00484c58:  // push 0x5d2da0
    t0 = 0x5d2da0u; esp -= 4; M32(esp) = t0;
L_00484c5d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00484c5e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00484c65:  // sub esp, 0xa4
    t0 = lsub<32>(esp, 0xa4u, f);
    esp = (uint32_t)(t0);
L_00484c6b:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00484c6c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00484c6d:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00484c6e:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_00484c70:  // call 0x482090
    t0 = 0x00482090u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484c75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484c75:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_00484c7a:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484c7fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484c7f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484c81:  // je 0x484c98
    if (f.zf) goto L_00484c98;
L_00484c83:  // mov eax, dword ptr [ebp + 0x58]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_00484c86:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484c88:  // jne 0x484c98
    if (!f.zf) goto L_00484c98;
L_00484c8a:  // fld dword ptr [0x67a62c]
    lpush(x, (long double)F32((uint32_t)(0x67a62cu)));
L_00484c90:  // fadd dword ptr [0x8aa4ec]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4ecu)));
L_00484c96:  // jmp 0x484c9e
    goto L_00484c9e;
L_00484c98:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_00484c9e:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_00484ca4:  // mov eax, dword ptr [ebp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_00484ca7:  // lea edx, [esp + 0x50]
    edx = (uint32_t)((uint32_t)(esp + 0x50u));
L_00484cab:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00484cac:  // fsub dword ptr [0x5dbe74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe74u)));
L_00484cb2:  // lea ecx, [eax + 8]
    ecx = (uint32_t)((uint32_t)(eax + 0x8u));
L_00484cb5:  // fsub dword ptr [0x67a62c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a62cu)));
L_00484cbb:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_00484cbd:  // fstp dword ptr [esp + 0x40]
    F32((uint32_t)(esp + 0x40u)) = lf32(ST(0));
    lpop(x);
L_00484cc1:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484cc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484cc3:  // mov ecx, dword ptr [ebp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_00484cc6:  // lea eax, [esp + 0x18]
    eax = (uint32_t)((uint32_t)(esp + 0x18u));
L_00484cca:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00484ccb:  // call 0x40d660
    t0 = 0x0040d660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484cd0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484cd0:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_00484cd2:  // fchs 
    ST(0) = -ST(0);
L_00484cd4:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00484cd6:  // fsin 
    ST(0) = lfsin(ST(0));
L_00484cd8:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_00484cdc:  // fmul dword ptr [0x5d8610]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8610u)));
L_00484ce2:  // fdiv dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xc0u)));
L_00484ce9:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_00484ced:  // fcos 
    ST(0) = lfcos(ST(0));
L_00484cef:  // fmul dword ptr [0x5d8610]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8610u)));
L_00484cf5:  // fdiv dword ptr [esp + 0xc0]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xc0u)));
L_00484cfc:  // fstp dword ptr [esp + 0x24]
    F32((uint32_t)(esp + 0x24u)) = lf32(ST(0));
    lpop(x);
L_00484d00:  // call 0x4e5840
    t0 = 0x004e5840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484d05u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484d05:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_00484d0c:  // mov dword ptr [esp + 0xb8], 0
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(0x0u);
L_00484d17:  // call 0x4e5840
    t0 = 0x004e5840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484d1cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484d1c:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_00484d23:  // mov byte ptr [esp + 0xb8], 1
    M8((uint32_t)(esp + 0xb8u)) = (uint8_t)(0x1u);
L_00484d2b:  // call 0x4e5840
    t0 = 0x004e5840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484d30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484d30:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_00484d34:  // mov byte ptr [esp + 0xb8], 2
    M8((uint32_t)(esp + 0xb8u)) = (uint8_t)(0x2u);
L_00484d3c:  // call 0x4e5840
    t0 = 0x004e5840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484d41u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484d41:  // mov edi, dword ptr [0x8550d0]
    edi = (uint32_t)(M32((uint32_t)(0x8550d0u)));
L_00484d47:  // mov byte ptr [esp + 0xb8], 3
    M8((uint32_t)(esp + 0xb8u)) = (uint8_t)(0x3u);
L_00484d4f:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00484d51:  // je 0x484d57
    if (f.zf) goto L_00484d57;
L_00484d53:  // mov esi, dword ptr [edi]
    esi = (uint32_t)(M32((uint32_t)(edi)));
L_00484d55:  // jmp 0x484d59
    goto L_00484d59;
L_00484d57:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00484d59:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00484d5b:  // je 0x484f4b
    if (f.zf) goto L_00484f4b;
L_00484d61:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_00484d63:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00484d65:  // call dword ptr [edx + 0x1a4]
    t0 = M32((uint32_t)(edx + 0x1a4u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484d6bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484d6b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484d6d:  // je 0x484f36
    if (f.zf) goto L_00484f36;
L_00484d73:  // test byte ptr [esi + 0x2c], 4
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x4u, f);
L_00484d77:  // jne 0x484f36
    if (!f.zf) goto L_00484f36;
L_00484d7d:  // test byte ptr [esi + 0x34], 8
    t0 = llog<8>(M8((uint32_t)(esi + 0x34u)) & 0x8u, f);
L_00484d81:  // je 0x484d92
    if (f.zf) goto L_00484d92;
L_00484d83:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00484d84:  // lea ecx, [esp + 0x74]
    ecx = (uint32_t)((uint32_t)(esp + 0x74u));
L_00484d88:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484d8du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484d8d:  // jmp 0x484f36
    goto L_00484f36;
L_00484d92:  // mov eax, dword ptr [esi + 0x1f4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1f4u)));
L_00484d98:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484d9a:  // je 0x484dae
    if (f.zf) goto L_00484dae;
L_00484d9c:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00484d9d:  // lea ecx, [esp + 0x94]
    ecx = (uint32_t)((uint32_t)(esp + 0x94u));
L_00484da4:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484da9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484da9:  // jmp 0x484f36
    goto L_00484f36;
L_00484dae:  // mov eax, dword ptr [esi + 0x138]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_00484db4:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_00484db7:  // jne 0x484dcb
    if (!f.zf) goto L_00484dcb;
L_00484db9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00484dba:  // lea ecx, [esp + 0x84]
    ecx = (uint32_t)((uint32_t)(esp + 0x84u));
L_00484dc1:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484dc6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484dc6:  // jmp 0x484f36
    goto L_00484f36;
L_00484dcb:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484dcd:  // jne 0x484dde
    if (!f.zf) goto L_00484dde;
L_00484dcf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00484dd0:  // lea ecx, [esp + 0x64]
    ecx = (uint32_t)((uint32_t)(esp + 0x64u));
L_00484dd4:  // call 0x4e5b20
    t0 = 0x004e5b20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484dd9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484dd9:  // jmp 0x484f36
    goto L_00484f36;
L_00484dde:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_00484de0:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00484de2:  // call dword ptr [eax + 0x68]
    t0 = M32((uint32_t)(eax + 0x68u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484de5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484de5:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484de7:  // jne 0x484f36
    if (!f.zf) goto L_00484f36;
L_00484ded:  // test byte ptr [esi + 0x2c], 0x10
    t0 = llog<8>(M8((uint32_t)(esi + 0x2cu)) & 0x10u, f);
L_00484df1:  // jne 0x484f36
    if (!f.zf) goto L_00484f36;
L_00484df7:  // mov eax, dword ptr [esi + 0x30]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x30u)));
L_00484dfa:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484dfc:  // je 0x484f36
    if (f.zf) goto L_00484f36;
L_00484e02:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00484e05:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_00484e08:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_00484e0c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00484e0d:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484e0fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484e0f:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00484e13:  // fsub dword ptr [esp + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x50u)));
L_00484e17:  // mov ecx, dword ptr [esi + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_00484e1a:  // and ecx, 0x400
    t0 = llog<32>(ecx & 0x400u, f);
    ecx = (uint32_t)(t0);
L_00484e20:  // fstp dword ptr [esp + 0x28]
    F32((uint32_t)(esp + 0x28u)) = lf32(ST(0));
    lpop(x);
L_00484e24:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00484e28:  // fsub dword ptr [esp + 0x54]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x54u)));
L_00484e2c:  // neg ecx
    t0 = lneg<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00484e2e:  // sbb ecx, ecx
    t0 = lsbb<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_00484e30:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00484e34:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00484e38:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00484e3c:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00484e40:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00484e44:  // and ecx, 0x101010
    t0 = llog<32>(ecx & 0x101010u, f);
    ecx = (uint32_t)(t0);
L_00484e4a:  // add ecx, 0x606060
    t0 = ladd<32>(ecx, 0x606060u, f);
    ecx = (uint32_t)(t0);
L_00484e50:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00484e52:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00484e56:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00484e5a:  // fld dword ptr [esp + 0x28]
    lpush(x, (long double)F32((uint32_t)(esp + 0x28u)));
L_00484e5e:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00484e62:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00484e64:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00484e68:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00484e6c:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_00484e70:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00484e72:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00484e74:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00484e76:  // fcom dword ptr [0x5dbe70]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbe70u)));
L_00484e7c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00484e7e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00484e81:  // je 0x484f32
    if (f.zf) goto L_00484f32;
L_00484e87:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00484e89:  // mov edx, 0xff000000
    edx = (uint32_t)(0xff000000u);
L_00484e8e:  // fld dword ptr [0x5dbe6c]
    lpush(x, (long double)F32((uint32_t)(0x5dbe6cu)));
L_00484e94:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00484e96:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00484e9c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00484e9e:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00484ea1:  // je 0x484ed6
    if (f.zf) goto L_00484ed6;
L_00484ea3:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00484ea5:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_00484ea7:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_00484eab:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00484eaf:  // fsub dword ptr [0x5dbe6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe6cu)));
L_00484eb5:  // fmul dword ptr [0x5dbe68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe68u)));
L_00484ebb:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00484ec1:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_00484ec7:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00484ecb:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00484ecf:  // shl eax, 0x18
    t0 = lshl<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_00484ed2:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00484ed4:  // jmp 0x484eda
    goto L_00484eda;
L_00484ed6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00484ed8:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00484eda:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00484ee0:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00484ee6:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_00484ee8:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_00484eea:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00484eeb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_00484eec:  // fadd dword ptr [0x5dbb70]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbb70u)));
L_00484ef2:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00484ef4:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_00484efa:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00484efe:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00484f00:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00484f04:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_00484f0a:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00484f0e:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00484f14:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00484f18:  // call 0x485830
    t0 = 0x00485830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484f1du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484f1d:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00484f21:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00484f25:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00484f26:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00484f27:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00484f28:  // call 0x4857e0
    t0 = 0x004857e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484f2du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484f2d:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00484f30:  // jmp 0x484f36
    goto L_00484f36;
L_00484f32:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00484f34:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00484f36:  // mov edi, dword ptr [edi + 4]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x4u)));
L_00484f39:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_00484f3b:  // je 0x484f41
    if (f.zf) goto L_00484f41;
L_00484f3d:  // mov esi, dword ptr [edi]
    esi = (uint32_t)(M32((uint32_t)(edi)));
L_00484f3f:  // jmp 0x484f43
    goto L_00484f43;
L_00484f41:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00484f43:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00484f45:  // jne 0x484d61
    if (!f.zf) goto L_00484d61;
L_00484f4b:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_00484f4f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00484f51:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_00484f55:  // je 0x484f5b
    if (f.zf) goto L_00484f5b;
L_00484f57:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_00484f59:  // jmp 0x484f5d
    goto L_00484f5d;
L_00484f5b:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00484f5d:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00484f5f:  // je 0x4850b6
    if (f.zf) goto L_004850b6;
L_00484f65:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_00484f68:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_00484f6b:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00484f6f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00484f70:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00484f72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00484f72:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00484f76:  // fsub dword ptr [esp + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x50u)));
L_00484f7a:  // mov ecx, dword ptr [esi + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_00484f7d:  // and ecx, 0x400
    t0 = llog<32>(ecx & 0x400u, f);
    ecx = (uint32_t)(t0);
L_00484f83:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00484f87:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00484f8b:  // fsub dword ptr [esp + 0x54]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x54u)));
L_00484f8f:  // neg ecx
    t0 = lneg<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00484f91:  // sbb ecx, ecx
    t0 = lsbb<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_00484f93:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00484f97:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00484f9b:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00484f9f:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00484fa3:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00484fa7:  // and ecx, 0x404050
    t0 = llog<32>(ecx & 0x404050u, f);
    ecx = (uint32_t)(t0);
L_00484fad:  // add ecx, 0x5050af
    t0 = ladd<32>(ecx, 0x5050afu, f);
    ecx = (uint32_t)(t0);
L_00484fb3:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00484fb5:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00484fb9:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00484fbd:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00484fc1:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00484fc5:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00484fc7:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00484fcb:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00484fcf:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00484fd3:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00484fd5:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00484fd7:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00484fd9:  // fcom dword ptr [0x5dbe70]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbe70u)));
L_00484fdf:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00484fe1:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00484fe4:  // je 0x485095
    if (f.zf) goto L_00485095;
L_00484fea:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00484fec:  // mov edx, 0xff000000
    edx = (uint32_t)(0xff000000u);
L_00484ff1:  // fld dword ptr [0x5dbe6c]
    lpush(x, (long double)F32((uint32_t)(0x5dbe6cu)));
L_00484ff7:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_00484ff9:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00484fff:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00485001:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00485004:  // je 0x485039
    if (f.zf) goto L_00485039;
L_00485006:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00485008:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_0048500a:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0048500e:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00485012:  // fsub dword ptr [0x5dbe6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe6cu)));
L_00485018:  // fmul dword ptr [0x5dbe68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe68u)));
L_0048501e:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00485024:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0048502a:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0048502e:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_00485032:  // shl eax, 0x18
    t0 = lshl<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_00485035:  // mov edx, eax
    edx = (uint32_t)(eax);
L_00485037:  // jmp 0x48503d
    goto L_0048503d;
L_00485039:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048503b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048503d:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00485043:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00485049:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0048504b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0048504d:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0048504e:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048504f:  // fadd dword ptr [0x5dbb70]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbb70u)));
L_00485055:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00485057:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_0048505d:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00485061:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00485063:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00485067:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_0048506d:  // fsub dword ptr [esp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x34u)));
L_00485071:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_00485077:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0048507b:  // call 0x485830
    t0 = 0x00485830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485080u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485080:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_00485084:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00485085:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00485089:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048508a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0048508b:  // call 0x4857e0
    t0 = 0x004857e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485090u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485090:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00485093:  // jmp 0x485099
    goto L_00485099;
L_00485095:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00485097:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00485099:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0048509d:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_004850a0:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004850a2:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_004850a6:  // je 0x4850ac
    if (f.zf) goto L_004850ac;
L_004850a8:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004850aa:  // jmp 0x4850ae
    goto L_004850ae;
L_004850ac:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004850ae:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004850b0:  // jne 0x484f65
    if (!f.zf) goto L_00484f65;
L_004850b6:  // mov eax, dword ptr [esp + 0x80]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_004850bd:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004850bf:  // mov dword ptr [esp + 0x88], eax
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(eax);
L_004850c6:  // je 0x4850cc
    if (f.zf) goto L_004850cc;
L_004850c8:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_004850ca:  // jmp 0x4850ce
    goto L_004850ce;
L_004850cc:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004850ce:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004850d0:  // je 0x48522d
    if (f.zf) goto L_0048522d;
L_004850d6:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004850d9:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_004850dc:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_004850e0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004850e1:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004850e3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004850e3:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004850e7:  // fsub dword ptr [esp + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x50u)));
L_004850eb:  // mov ecx, dword ptr [esi + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x34u)));
L_004850ee:  // and ecx, 0x400
    t0 = llog<32>(ecx & 0x400u, f);
    ecx = (uint32_t)(t0);
L_004850f4:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_004850f8:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004850fc:  // fsub dword ptr [esp + 0x54]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x54u)));
L_00485100:  // neg ecx
    t0 = lneg<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_00485102:  // sbb ecx, ecx
    t0 = lsbb<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_00485104:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00485108:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0048510c:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00485110:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00485114:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00485118:  // and ecx, 0x504848
    t0 = llog<32>(ecx & 0x504848u, f);
    ecx = (uint32_t)(t0);
L_0048511e:  // add ecx, 0xaf0808
    t0 = ladd<32>(ecx, 0xaf0808u, f);
    ecx = (uint32_t)(t0);
L_00485124:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00485126:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0048512a:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_0048512e:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00485132:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00485136:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00485138:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0048513c:  // fld dword ptr [esp + 0x2c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x2cu)));
L_00485140:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_00485144:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00485146:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00485148:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048514a:  // fcom dword ptr [0x5dbe70]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5dbe70u)));
L_00485150:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00485152:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00485155:  // je 0x485206
    if (f.zf) goto L_00485206;
L_0048515b:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0048515d:  // mov edx, 0xff000000
    edx = (uint32_t)(0xff000000u);
L_00485162:  // fld dword ptr [0x5dbe6c]
    lpush(x, (long double)F32((uint32_t)(0x5dbe6cu)));
L_00485168:  // fdiv st(1)
    ST(0) = (ST(0)) / (ST(1));
L_0048516a:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00485170:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00485172:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00485175:  // je 0x4851aa
    if (f.zf) goto L_004851aa;
L_00485177:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00485179:  // fmulp st(3)
    ST(3) = (ST(3)) * (ST(0));
    lpop(x);
L_0048517b:  // fmul dword ptr [esp + 0x2c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x2cu)));
L_0048517f:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_00485183:  // fsub dword ptr [0x5dbe6c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe6cu)));
L_00485189:  // fmul dword ptr [0x5dbe68]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbe68u)));
L_0048518f:  // fsubr dword ptr [0x5d8568]
    ST(0) = ((long double)F32((uint32_t)(0x5d8568u))) - (ST(0));
L_00485195:  // fmul dword ptr [0x5d8c70]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8c70u)));
L_0048519b:  // fistp qword ptr [esp + 0x18]
    M64((uint32_t)(esp + 0x18u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_0048519f:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004851a3:  // shl eax, 0x18
    t0 = lshl<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_004851a6:  // mov edx, eax
    edx = (uint32_t)(eax);
L_004851a8:  // jmp 0x4851ae
    goto L_004851ae;
L_004851aa:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004851ac:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004851ae:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_004851b4:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_004851ba:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_004851bc:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004851be:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004851bf:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004851c0:  // fadd dword ptr [0x5dbb70]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbb70u)));
L_004851c6:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004851c8:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_004851ce:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004851d2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004851d4:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004851d8:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_004851de:  // fsub dword ptr [esp + 0x34]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x34u)));
L_004851e2:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004851e8:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004851ec:  // call 0x485830
    t0 = 0x00485830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004851f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004851f1:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004851f5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004851f6:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004851fa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004851fb:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004851fc:  // call 0x4857e0
    t0 = 0x004857e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485201u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485201:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00485204:  // jmp 0x48520a
    goto L_0048520a;
L_00485206:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00485208:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048520a:  // mov edx, dword ptr [esp + 0x88]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00485211:  // mov eax, dword ptr [edx + 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_00485214:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485216:  // mov dword ptr [esp + 0x88], eax
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(eax);
L_0048521d:  // je 0x485223
    if (f.zf) goto L_00485223;
L_0048521f:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_00485221:  // jmp 0x485225
    goto L_00485225;
L_00485223:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00485225:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00485227:  // jne 0x4850d6
    if (!f.zf) goto L_004850d6;
L_0048522d:  // mov eax, dword ptr [esp + 0x90]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x90u)));
L_00485234:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485236:  // mov dword ptr [esp + 0x98], eax
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(eax);
L_0048523d:  // je 0x485243
    if (f.zf) goto L_00485243;
L_0048523f:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_00485241:  // jmp 0x485245
    goto L_00485245;
L_00485243:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00485245:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00485247:  // je 0x485372
    if (f.zf) goto L_00485372;
L_0048524d:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00485251:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_00485257:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048525b:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0048525e:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_00485261:  // lea edx, [esp + 0x40]
    edx = (uint32_t)((uint32_t)(esp + 0x40u));
L_00485265:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00485266:  // call dword ptr [eax]
    t0 = M32((uint32_t)(eax)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485268u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485268:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_0048526c:  // fsub dword ptr [esp + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x50u)));
L_00485270:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00485274:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00485278:  // fsub dword ptr [esp + 0x54]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x54u)));
L_0048527c:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00485280:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_00485284:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_00485288:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_0048528c:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00485290:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00485292:  // fld dword ptr [esp + 0x34]
    lpush(x, (long double)F32((uint32_t)(esp + 0x34u)));
L_00485296:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_0048529a:  // fld dword ptr [esp + 0x30]
    lpush(x, (long double)F32((uint32_t)(esp + 0x30u)));
L_0048529e:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004852a2:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004852a4:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_004852a8:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004852ac:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004852ae:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004852b0:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004852b2:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004852b4:  // fdivr dword ptr [0x5dbe6c]
    ST(0) = ((long double)F32((uint32_t)(0x5dbe6cu))) / (ST(0));
L_004852ba:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_004852c0:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_004852c2:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_004852c5:  // je 0x4852d5
    if (f.zf) goto L_004852d5;
L_004852c7:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004852c9:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_004852cb:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_004852cf:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004852d3:  // jmp 0x4852d7
    goto L_004852d7;
L_004852d5:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004852d7:  // mov ecx, dword ptr [esi + 0x138]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x138u)));
L_004852dd:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004852df:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_004852e1:  // je 0x4852f7
    if (f.zf) goto L_004852f7;
L_004852e3:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004852e4:  // je 0x4852f0
    if (f.zf) goto L_004852f0;
L_004852e6:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004852e7:  // jne 0x4852fc
    if (!f.zf) goto L_004852fc;
L_004852e9:  // mov eax, 0x606060
    eax = (uint32_t)(0x606060u);
L_004852ee:  // jmp 0x4852fc
    goto L_004852fc;
L_004852f0:  // mov eax, 0xaf0808
    eax = (uint32_t)(0xaf0808u);
L_004852f5:  // jmp 0x4852fc
    goto L_004852fc;
L_004852f7:  // mov eax, 0x5050af
    eax = (uint32_t)(0x5050afu);
L_004852fc:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00485302:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00485308:  // add eax, 0xff000000
    t0 = ladd<32>(eax, 0xff000000u, f);
    eax = (uint32_t)(t0);
L_0048530d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048530e:  // mov eax, dword ptr [ebp + 0x1ac]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x1acu)));
L_00485314:  // fadd dword ptr [0x5dbb70]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbb70u)));
L_0048531a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0048531b:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0048531d:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_00485323:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00485327:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0048532b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048532d:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00485331:  // fsub dword ptr [esp + 0x24]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x24u)));
L_00485335:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0048533b:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0048533f:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_00485343:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00485344:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00485345:  // call 0x4857e0
    t0 = 0x004857e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048534au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048534a:  // mov eax, dword ptr [esp + 0xa8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa8u)));
L_00485351:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00485354:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00485357:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485359:  // mov dword ptr [esp + 0x98], eax
    M32((uint32_t)(esp + 0x98u)) = (uint32_t)(eax);
L_00485360:  // je 0x485366
    if (f.zf) goto L_00485366;
L_00485362:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00485364:  // jmp 0x485368
    goto L_00485368;
L_00485366:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00485368:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048536a:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0048536c:  // jne 0x48525b
    if (!f.zf) goto L_0048525b;
L_00485372:  // mov eax, dword ptr [0x855140]
    eax = (uint32_t)(M32((uint32_t)(0x855140u)));
L_00485377:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485379:  // mov dword ptr [0x855148], eax
    M32((uint32_t)(0x855148u)) = (uint32_t)(eax);
L_0048537e:  // je 0x485384
    if (f.zf) goto L_00485384;
L_00485380:  // mov esi, dword ptr [eax]
    esi = (uint32_t)(M32((uint32_t)(eax)));
L_00485382:  // jmp 0x485386
    goto L_00485386;
L_00485384:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_00485386:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00485388:  // je 0x48548b
    if (f.zf) goto L_0048548b;
L_0048538e:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_00485392:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_00485398:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0048539c:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0048539f:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_004853a2:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_004853a6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004853a7:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004853a9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004853a9:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004853ad:  // fsub dword ptr [esp + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x50u)));
L_004853b1:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004853b5:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004853b9:  // fsub dword ptr [esp + 0x54]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x54u)));
L_004853bd:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004853c1:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004853c5:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004853c9:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004853cd:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004853d1:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004853d3:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004853d7:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004853db:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004853df:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004853e3:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004853e5:  // fst dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
L_004853e9:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_004853ed:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_004853ef:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_004853f1:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004853f3:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_004853f5:  // fdivr dword ptr [0x5dbe6c]
    ST(0) = ((long double)F32((uint32_t)(0x5dbe6cu))) / (ST(0));
L_004853fb:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00485401:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00485403:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00485406:  // je 0x485416
    if (f.zf) goto L_00485416;
L_00485408:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0048540a:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_0048540c:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_00485410:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_00485414:  // jmp 0x485418
    goto L_00485418;
L_00485416:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00485418:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_0048541e:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00485424:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_00485429:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0048542a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0048542c:  // fadd dword ptr [0x5dbb70]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbb70u)));
L_00485432:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_00485434:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_0048543a:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0048543e:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00485440:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00485444:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00485448:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0048544e:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_00485452:  // call 0x485830
    t0 = 0x00485830u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485457u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485457:  // mov ecx, dword ptr [esp + 0x2c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0048545b:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0048545f:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00485460:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00485461:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00485462:  // call 0x4857e0
    t0 = 0x004857e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485467u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485467:  // mov eax, dword ptr [0x855148]
    eax = (uint32_t)(M32((uint32_t)(0x855148u)));
L_0048546c:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_0048546f:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_00485472:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485474:  // mov dword ptr [0x855148], eax
    M32((uint32_t)(0x855148u)) = (uint32_t)(eax);
L_00485479:  // je 0x48547f
    if (f.zf) goto L_0048547f;
L_0048547b:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_0048547d:  // jmp 0x485481
    goto L_00485481;
L_0048547f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00485481:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485483:  // mov esi, eax
    esi = (uint32_t)(eax);
L_00485485:  // jne 0x48539c
    if (!f.zf) goto L_0048539c;
L_0048548b:  // mov eax, dword ptr [esp + 0x70]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_0048548f:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485491:  // mov dword ptr [esp + 0x78], eax
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(eax);
L_00485495:  // je 0x48549b
    if (f.zf) goto L_0048549b;
L_00485497:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00485499:  // jmp 0x48549d
    goto L_0048549d;
L_0048549b:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0048549d:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0048549f:  // je 0x48559c
    if (f.zf) goto L_0048559c;
L_004854a5:  // fld dword ptr [esp + 0x3c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x3cu)));
L_004854a9:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_004854af:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004854b3:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004854b6:  // lea ecx, [eax + 8]
    ecx = (uint32_t)((uint32_t)(eax + 0x8u));
L_004854b9:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_004854bd:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004854be:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004854c0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004854c0:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_004854c4:  // fsub dword ptr [esp + 0x50]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x50u)));
L_004854c8:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_004854cc:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_004854d0:  // fsub dword ptr [esp + 0x54]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x54u)));
L_004854d4:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_004854d8:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004854dc:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004854e0:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004854e4:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004854e8:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_004854ea:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_004854ee:  // fmul dword ptr [esp + 0x24]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x24u)));
L_004854f2:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_004854f6:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_004854fa:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_004854fc:  // fst dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
L_00485500:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_00485504:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_00485506:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_00485508:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0048550a:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0048550c:  // fdivr dword ptr [0x5dbe6c]
    ST(0) = ((long double)F32((uint32_t)(0x5dbe6cu))) / (ST(0));
L_00485512:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_00485518:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0048551a:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0048551d:  // je 0x48552d
    if (f.zf) goto L_0048552d;
L_0048551f:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00485521:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_00485523:  // fmul dword ptr [esp + 0x34]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x34u)));
L_00485527:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_0048552b:  // jmp 0x48552f
    goto L_0048552f;
L_0048552d:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048552f:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_00485535:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_0048553b:  // mov ecx, dword ptr [ebp + 0x1a4]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x1a4u)));
L_00485541:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00485543:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_00485544:  // fadd dword ptr [0x5dbb70]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbb70u)));
L_0048554a:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0048554c:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_00485552:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00485556:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0048555a:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0048555c:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00485560:  // fsub dword ptr [esp + 0x3c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x3cu)));
L_00485564:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_0048556a:  // fstp dword ptr [esp + 0x30]
    F32((uint32_t)(esp + 0x30u)) = lf32(ST(0));
    lpop(x);
L_0048556e:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_00485572:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_00485573:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_00485574:  // call 0x4857e0
    t0 = 0x004857e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485579u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485579:  // mov ecx, dword ptr [esp + 0x88]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_00485580:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_00485583:  // mov eax, dword ptr [ecx + 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0x4u)));
L_00485586:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485588:  // mov dword ptr [esp + 0x78], eax
    M32((uint32_t)(esp + 0x78u)) = (uint32_t)(eax);
L_0048558c:  // je 0x485592
    if (f.zf) goto L_00485592;
L_0048558e:  // mov eax, dword ptr [eax]
    eax = (uint32_t)(M32((uint32_t)(eax)));
L_00485590:  // jmp 0x485594
    goto L_00485594;
L_00485592:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_00485594:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_00485596:  // jne 0x4854b3
    if (!f.zf) goto L_004854b3;
L_0048559c:  // mov eax, dword ptr [0x8a9d84]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d84u)));
L_004855a1:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004855a4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004855a6:  // je 0x4856fc
    if (f.zf) goto L_004856fc;
L_004855ac:  // mov esi, dword ptr [eax + 0x30]
    esi = (uint32_t)(M32((uint32_t)(eax + 0x30u)));
L_004855af:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_004855b1:  // je 0x4856fc
    if (f.zf) goto L_004856fc;
L_004855b7:  // mov eax, dword ptr [ebp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_004855ba:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004855bd:  // lea ecx, [eax + 8]
    ecx = (uint32_t)((uint32_t)(eax + 0x8u));
L_004855c0:  // lea eax, [esp + 0xa0]
    eax = (uint32_t)((uint32_t)(esp + 0xa0u));
L_004855c7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004855c8:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004855cau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004855ca:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004855ce:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004855cf:  // mov ecx, dword ptr [ebp + 0x50]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x50u)));
L_004855d2:  // call 0x40d660
    t0 = 0x0040d660u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004855d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004855d7:  // fld dword ptr [eax]
    lpush(x, (long double)F32((uint32_t)(eax)));
L_004855d9:  // fchs 
    ST(0) = -ST(0);
L_004855db:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_004855dd:  // fsin 
    ST(0) = lfsin(ST(0));
L_004855df:  // mov edx, dword ptr [esi + 8]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004855e2:  // lea ecx, [esi + 8]
    ecx = (uint32_t)((uint32_t)(esi + 0x8u));
L_004855e5:  // lea eax, [esp + 0x40]
    eax = (uint32_t)((uint32_t)(esp + 0x40u));
L_004855e9:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004855ea:  // fmul dword ptr [0x5d8610]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8610u)));
L_004855f0:  // fdiv dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xc4u)));
L_004855f7:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_004855fb:  // fcos 
    ST(0) = lfcos(ST(0));
L_004855fd:  // fmul dword ptr [0x5d8610]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d8610u)));
L_00485603:  // fdiv dword ptr [esp + 0xc4]
    ST(0) = (ST(0)) / ((long double)F32((uint32_t)(esp + 0xc4u)));
L_0048560a:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_0048560e:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485610u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485610:  // fld dword ptr [esp + 0x40]
    lpush(x, (long double)F32((uint32_t)(esp + 0x40u)));
L_00485614:  // fsub dword ptr [esp + 0xa0]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa0u)));
L_0048561b:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0048561f:  // fld dword ptr [esp + 0x44]
    lpush(x, (long double)F32((uint32_t)(esp + 0x44u)));
L_00485623:  // fsub dword ptr [esp + 0xa4]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0xa4u)));
L_0048562a:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_0048562e:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_00485632:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00485636:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0048563a:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_0048563e:  // fsubp st(1)
    ST(1) = (ST(1)) - (ST(0));
    lpop(x);
L_00485640:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_00485644:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_00485648:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0048564c:  // fmul dword ptr [esp + 0xc]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0xcu)));
L_00485650:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00485652:  // fst dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
L_00485656:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0048565a:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0048565c:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0048565e:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_00485660:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_00485662:  // fdivr dword ptr [0x5dbe6c]
    ST(0) = ((long double)F32((uint32_t)(0x5dbe6cu))) / (ST(0));
L_00485668:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0048566e:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00485670:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_00485673:  // je 0x485683
    if (f.zf) goto L_00485683;
L_00485675:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_00485677:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_00485679:  // fmul dword ptr [esp + 0x1c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x1cu)));
L_0048567d:  // fstp dword ptr [esp + 0x1c]
    F32((uint32_t)(esp + 0x1cu)) = lf32(ST(0));
    lpop(x);
L_00485681:  // jmp 0x485685
    goto L_00485685;
L_00485683:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00485685:  // fld dword ptr [0x67a628]
    lpush(x, (long double)F32((uint32_t)(0x67a628u)));
L_0048568b:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_00485691:  // mov ecx, dword ptr [ebp + 0x58]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x58u)));
L_00485694:  // push 0xffffff00
    t0 = 0xffffff00u; esp -= 4; M32(esp) = t0;
L_00485699:  // sub esp, 8
    t0 = lsub<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0048569c:  // fadd dword ptr [0x5dbb70]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbb70u)));
L_004856a2:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_004856a4:  // fsub dword ptr [0x5d8568]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d8568u)));
L_004856aa:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_004856ae:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_004856b0:  // fld dword ptr [esp + 0x48]
    lpush(x, (long double)F32((uint32_t)(esp + 0x48u)));
L_004856b4:  // fsub dword ptr [0x5d857c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d857cu)));
L_004856ba:  // fsub dword ptr [esp + 0x28]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(esp + 0x28u)));
L_004856be:  // fadd dword ptr [0x5d8568]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5d8568u)));
L_004856c4:  // fstp dword ptr [esp + 0x34]
    F32((uint32_t)(esp + 0x34u)) = lf32(ST(0));
    lpop(x);
L_004856c8:  // fld dword ptr [ebp + ecx*4 + 0x190]
    lpush(x, (long double)F32((uint32_t)(ebp + ecx * 4u + 0x190u)));
L_004856cf:  // fstp qword ptr [esp]
    F64((uint32_t)(esp)) = lf64(ST(0));
    lpop(x);
L_004856d2:  // call 0x55dfe7
    t0 = 0x0055dfe7u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004856d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004856d7:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_004856db:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004856de:  // fistp qword ptr [esp + 0x1c]
    M64((uint32_t)(esp + 0x1cu)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_004856e2:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004856e6:  // mov eax, dword ptr [ebp + edx*4 + 0x178]
    eax = (uint32_t)(M32((uint32_t)(ebp + edx * 4u + 0x178u)));
L_004856ed:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004856f1:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004856f2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004856f3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004856f4:  // call 0x4857e0
    t0 = 0x004857e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004856f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004856f9:  // add esp, 0x10
    t0 = ladd<32>(esp, 0x10u, f);
    esp = (uint32_t)(t0);
L_004856fc:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004856fe:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_00485700:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485702:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00485707:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048570cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048570c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048570e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_00485710:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00485715:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048571au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048571a:  // mov eax, dword ptr [0x62ce70]
    eax = (uint32_t)(M32((uint32_t)(0x62ce70u)));
L_0048571f:  // mov ebp, 0x67a548
    ebp = (uint32_t)(0x67a548u);
L_00485724:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00485726:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_00485728:  // jbe 0x48574c
    if ((f.cf || f.zf)) goto L_0048574c;
L_0048572a:  // mov esi, dword ptr [edi]
    esi = (uint32_t)(M32((uint32_t)(edi)));
L_0048572c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0048572e:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_00485730:  // call 0x500e70
    t0 = 0x00500e70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485735u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485735:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_00485737:  // je 0x485740
    if (f.zf) goto L_00485740;
L_00485739:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0048573b:  // call 0x501310
    t0 = 0x00501310u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485740u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485740:  // mov eax, dword ptr [0x62ce70]
    eax = (uint32_t)(M32((uint32_t)(0x62ce70u)));
L_00485745:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_00485748:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_0048574a:  // jb 0x48572a
    if (f.cf) goto L_0048572a;
L_0048574c:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048574e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_00485753:  // call 0x513af0
    t0 = 0x00513af0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485758u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485758:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048575a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0048575c:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_00485761:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485766u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485766:  // lea ecx, [esp + 0x60]
    ecx = (uint32_t)((uint32_t)(esp + 0x60u));
L_0048576a:  // mov dword ptr [0x62ce70], ebp
    M32((uint32_t)(0x62ce70u)) = (uint32_t)(ebp);
L_00485770:  // mov byte ptr [esp + 0xb8], 2
    M8((uint32_t)(esp + 0xb8u)) = (uint8_t)(0x2u);
L_00485778:  // call 0x4e5c60
    t0 = 0x004e5c60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0048577du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0048577d:  // lea ecx, [esp + 0x80]
    ecx = (uint32_t)((uint32_t)(esp + 0x80u));
L_00485784:  // mov byte ptr [esp + 0xb8], 1
    M8((uint32_t)(esp + 0xb8u)) = (uint8_t)(0x1u);
L_0048578c:  // call 0x4e5c60
    t0 = 0x004e5c60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00485791u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00485791:  // lea ecx, [esp + 0x90]
    ecx = (uint32_t)((uint32_t)(esp + 0x90u));
L_00485798:  // mov byte ptr [esp + 0xb8], 0
    M8((uint32_t)(esp + 0xb8u)) = (uint8_t)(0x0u);
L_004857a0:  // call 0x4e5c60
    t0 = 0x004e5c60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004857a5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004857a5:  // lea ecx, [esp + 0x70]
    ecx = (uint32_t)((uint32_t)(esp + 0x70u));
L_004857a9:  // mov dword ptr [esp + 0xb8], 0xffffffff
    M32((uint32_t)(esp + 0xb8u)) = (uint32_t)(0xffffffffu);
L_004857b4:  // call 0x4e5c60
    t0 = 0x004e5c60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x004857b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_004857b9:  // mov ecx, dword ptr [esp + 0xb0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_004857c0:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004857c1:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004857c2:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004857c3:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004857ca:  // add esp, 0xb0
    t0 = ladd<32>(esp, 0xb0u, f);
    esp = (uint32_t)(t0);
L_004857d0:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00484c50, 00484c50)
