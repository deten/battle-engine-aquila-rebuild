// lifted from 0053abe0 (FUN_0053abe0, 2185 bytes, 650 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0053abe0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0053abe0;
L_0053abe0:  // mov eax, dword ptr [0x67a748]
    eax = (uint32_t)(M32((uint32_t)(0x67a748u)));
L_0053abe5:  // sub esp, 0x50
    t0 = lsub<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_0053abe8:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053abea:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0053abeb:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0053abed:  // je 0x53b464
    if (f.zf) goto L_0053b464;
L_0053abf3:  // mov eax, dword ptr [0x85555c]
    eax = (uint32_t)(M32((uint32_t)(0x85555cu)));
L_0053abf8:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053abfa:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0053abfc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ac01:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0053ac08:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0053ac0f:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0053ac13:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ac18u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ac18:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_0053ac1d:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ac22u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ac22:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053ac24:  // je 0x53ac46
    if (f.zf) goto L_0053ac46;
L_0053ac26:  // mov ecx, 0x88a0a8
    ecx = (uint32_t)(0x88a0a8u);
L_0053ac2b:  // call 0x515b00
    t0 = 0x00515b00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ac30u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ac30:  // mov dword ptr [esp + 0xc], eax
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(eax);
L_0053ac34:  // fild dword ptr [esp + 0xc]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0xcu)));
L_0053ac38:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_0053ac3e:  // fadd dword ptr [0x5e4f94]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5e4f94u)));
L_0053ac44:  // jmp 0x53ac58
    goto L_0053ac58;
L_0053ac46:  // fld dword ptr [0x8aa4ec]
    lpush(x, (long double)F32((uint32_t)(0x8aa4ecu)));
L_0053ac4c:  // fadd dword ptr [0x8aa4f4]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f4u)));
L_0053ac52:  // fsub dword ptr [0x67a62c]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a62cu)));
L_0053ac58:  // fstp dword ptr [esp + 0xc]
    F32((uint32_t)(esp + 0xcu)) = lf32(ST(0));
    lpop(x);
L_0053ac5c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053ac5d:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0053ac61:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053ac62:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ac64:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053ac65:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0053ac67:  // call 0x53aa40
    t0 = 0x0053aa40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ac6cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ac6c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ac6e:  // mov ecx, 0x89c810
    ecx = (uint32_t)(0x89c810u);
L_0053ac73:  // mov dword ptr [esp + 0x10], 0x3f000000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x3f000000u);
L_0053ac7b:  // call 0x527cc0
    t0 = 0x00527cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ac80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ac80:  // mov edi, dword ptr [esp + 0xc]
    edi = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0053ac84:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0053ac86:  // je 0x53ae34
    if (f.zf) goto L_0053ae34;
L_0053ac8c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ac8e:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0053ac90:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ac95:  // mov byte ptr [0x9c68ac], 0
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x0u);
L_0053ac9c:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0053aca3:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aca8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aca8:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053acaa:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053acac:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053acb1:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053acb6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053acb6:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053acb8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053acba:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053acbc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053acc1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053acc6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053acc6:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053acc8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053acca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053accc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053acd1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053acd6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053acd6:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053acd7:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0053acd9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053acdb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ace0:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ace5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ace5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ace7:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ace9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053aceb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053acf0:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053acf5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053acf5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053acf7:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0053acf9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053acfb:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ad00:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad05u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad05:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ad07:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053ad09:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad0b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ad10:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad15u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad15:  // push 0x12
    t0 = 0x12u; esp -= 4; M32(esp) = t0;
L_0053ad17:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad19:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad1b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ad20:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad25u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad25:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ad27:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053ad29:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad2b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ad30:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad35u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad35:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053ad37:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad39:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ad3b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ad40:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad45u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad45:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053ad47:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ad49:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ad4b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ad50:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad55u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad55:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053ad57:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad59:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad5b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ad60:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad65:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053ad67:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ad69:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad6b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ad70:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad75u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad75:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad77:  // call 0x551420
    t0 = 0x00551420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad7c:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0053ad7f:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0053ad82:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad87:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053ad88:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ad8a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ad8f:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad94:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0053ad97:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ad9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ad9c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053ad9d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ad9f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ada4:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ada9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ada9:  // mov ecx, dword ptr [esi + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_0053adac:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053adae:  // call 0x500320
    t0 = 0x00500320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053adb3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053adb3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053adb5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053adb7:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053adbc:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053adc1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053adc1:  // mov edx, dword ptr [esi + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_0053adc4:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0053adc9:  // mov edx, dword ptr [edx + 8]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0053adcc:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053adce:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053adcf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053add0:  // call dword ptr [ecx + 0x1a0]
    t0 = M32((uint32_t)(ecx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053add6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053add6:  // mov ecx, 0x89c810
    ecx = (uint32_t)(0x89c810u);
L_0053addb:  // call 0x527d20
    t0 = 0x00527d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ade0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ade0:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0053ade2:  // je 0x53ae14
    if (f.zf) goto L_0053ae14;
L_0053ade4:  // mov ecx, 0x89c810
    ecx = (uint32_t)(0x89c810u);
L_0053ade9:  // call 0x527da0
    t0 = 0x00527da0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053adeeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053adee:  // mov eax, dword ptr [0x8a9d84]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d84u)));
L_0053adf3:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053adf6:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0053adf8:  // jne 0x53ae34
    if (!f.zf) goto L_0053ae34;
L_0053adfa:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0053adfd:  // mov edx, dword ptr [esi + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0053ae00:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053ae01:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ae03:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053ae04:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ae06:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053ae08:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ae0d:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ae12u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ae12:  // jmp 0x53ae34
    goto L_0053ae34;
L_0053ae14:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ae16:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ae18:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ae1a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ae1f:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ae24u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ae24:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ae26:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053ae28:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ae2a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ae2f:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ae34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ae34:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ae36:  // mov ecx, 0x89c810
    ecx = (uint32_t)(0x89c810u);
L_0053ae3b:  // call 0x527cc0
    t0 = 0x00527cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ae40u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ae40:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0053ae42:  // je 0x53afda
    if (f.zf) goto L_0053afda;
L_0053ae48:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ae4a:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0053ae4c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ae51:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ae56u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ae56:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ae58:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053ae5a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ae5f:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ae64u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ae64:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ae66:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ae68:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ae6a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ae6f:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ae74u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ae74:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ae76:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053ae78:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ae7a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ae7f:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ae84u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ae84:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053ae86:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053ae88:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ae8a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ae8f:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053ae94u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053ae94:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053ae96:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053ae98:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053ae9a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053ae9f:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aea4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aea4:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0053aea7:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aeacu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aeac:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053aead:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053aeaf:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053aeb4:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aeb9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aeb9:  // mov ecx, dword ptr [esi + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_0053aebc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053aebe:  // call 0x500320
    t0 = 0x00500320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aec3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aec3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053aec5:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053aec7:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053aecc:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aed1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aed1:  // mov edx, dword ptr [esi + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_0053aed4:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0053aed9:  // mov edx, dword ptr [edx + 8]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0053aedc:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053aede:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053aedf:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053aee0:  // call dword ptr [ecx + 0x1a0]
    t0 = M32((uint32_t)(ecx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aee6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aee6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053aee8:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0053aeea:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053aeef:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053aef4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053aef4:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0053aef6:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0053aef8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053aefd:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af02u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af02:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053af04:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_0053af06:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053af0b:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af10u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af10:  // mov eax, dword ptr [0x8a9d84]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d84u)));
L_0053af15:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053af18:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0053af1a:  // jne 0x53af34
    if (!f.zf) goto L_0053af34;
L_0053af1c:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0053af1f:  // mov edx, dword ptr [esi + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0053af22:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053af23:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053af25:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053af26:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053af28:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053af2a:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053af2f:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af34u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af34:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0053af35:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0053af37:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053af39:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053af3e:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af43u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af43:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053af45:  // call 0x551420
    t0 = 0x00551420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af4au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af4a:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0053af4d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053af52:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053af54:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_0053af56:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053af58:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af5du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af5d:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0053af60:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af65u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af65:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053af66:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053af68:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053af6d:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af72u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af72:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053af74:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0053af76:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053af7b:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af80u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af80:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053af82:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0053af84:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053af89:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053af8eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053af8e:  // mov eax, dword ptr [0x8a9d84]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d84u)));
L_0053af93:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053af96:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0053af98:  // jne 0x53afb2
    if (!f.zf) goto L_0053afb2;
L_0053af9a:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0053af9d:  // mov edx, dword ptr [esi + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0053afa0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053afa1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053afa3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053afa4:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053afa6:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053afa8:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053afad:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053afb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053afb2:  // mov ecx, 0x89c810
    ecx = (uint32_t)(0x89c810u);
L_0053afb7:  // call 0x527d20
    t0 = 0x00527d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053afbcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053afbc:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0053afbe:  // je 0x53afca
    if (f.zf) goto L_0053afca;
L_0053afc0:  // mov ecx, 0x89c810
    ecx = (uint32_t)(0x89c810u);
L_0053afc5:  // call 0x527da0
    t0 = 0x00527da0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053afcau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053afca:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053afcc:  // push 0xb
    t0 = 0xbu; esp -= 4; M32(esp) = t0;
L_0053afce:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053afd0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053afd5:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053afdau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053afda:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053afdc:  // mov ecx, 0x89c810
    ecx = (uint32_t)(0x89c810u);
L_0053afe1:  // call 0x527cc0
    t0 = 0x00527cc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053afe6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053afe6:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0053afe8:  // je 0x53b165
    if (f.zf) goto L_0053b165;
L_0053afee:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053aff0:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0053aff2:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053aff7:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053affcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053affc:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053affe:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053b000:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b005:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b00au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b00a:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b00c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b00e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b010:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b015:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b01au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b01a:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b01c:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b01e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b020:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b025:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b02au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b02a:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053b02c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b02e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b030:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b035:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b03au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b03a:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053b03c:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b03e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b040:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b045:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b04au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b04a:  // mov ecx, dword ptr [esi + 8]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0053b04d:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b052u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b052:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053b053:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b055:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b05a:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b05fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b05f:  // mov ecx, dword ptr [esi + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x70u)));
L_0053b062:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b064:  // call 0x500320
    t0 = 0x00500320u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b069u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b069:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b06b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b06d:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053b072:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b077u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b077:  // mov edx, dword ptr [esi + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x74u)));
L_0053b07a:  // mov eax, dword ptr [0x888a50]
    eax = (uint32_t)(M32((uint32_t)(0x888a50u)));
L_0053b07f:  // mov edx, dword ptr [edx + 8]
    edx = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0053b082:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053b084:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053b085:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053b086:  // call dword ptr [ecx + 0x1a0]
    t0 = M32((uint32_t)(ecx + 0x1a0u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b08cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b08c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b08e:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0053b090:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b095:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b09au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b09a:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0053b09c:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0053b09e:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b0a3:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b0a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b0a8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b0aa:  // push 0xe
    t0 = 0xeu; esp -= 4; M32(esp) = t0;
L_0053b0ac:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b0b1:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b0b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b0b6:  // mov eax, dword ptr [0x8a9d84]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d84u)));
L_0053b0bb:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053b0be:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0053b0c0:  // jne 0x53b0da
    if (!f.zf) goto L_0053b0da;
L_0053b0c2:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0053b0c5:  // mov edx, dword ptr [esi + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0053b0c8:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053b0c9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b0cb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053b0cc:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b0ce:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b0d0:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b0d5:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b0dau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b0da:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b0dc:  // call 0x551480
    t0 = 0x00551480u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b0e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b0e1:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0053b0e4:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0053b0e6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b0e8:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0053b0e9:  // call 0x53aa40
    t0 = 0x0053aa40u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b0eeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b0ee:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_0053b0f1:  // call 0x558690
    t0 = 0x00558690u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b0f6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b0f6:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053b0f7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b0f9:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b0fe:  // call 0x513a50
    t0 = 0x00513a50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b103u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b103:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b105:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0053b107:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b10c:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b111u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b111:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b113:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0053b115:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b11a:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b11fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b11f:  // mov eax, dword ptr [0x8a9d84]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d84u)));
L_0053b124:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053b127:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0053b129:  // jne 0x53b143
    if (!f.zf) goto L_0053b143;
L_0053b12b:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_0053b12e:  // mov edx, dword ptr [esi + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_0053b131:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053b132:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b134:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0053b135:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b137:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b139:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b13e:  // call 0x513c70
    t0 = 0x00513c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b143u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b143:  // mov ecx, 0x89c810
    ecx = (uint32_t)(0x89c810u);
L_0053b148:  // call 0x527d20
    t0 = 0x00527d20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b14du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b14d:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0053b14f:  // je 0x53b15b
    if (f.zf) goto L_0053b15b;
L_0053b151:  // mov ecx, 0x89c810
    ecx = (uint32_t)(0x89c810u);
L_0053b156:  // call 0x527da0
    t0 = 0x00527da0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b15bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b15b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b15d:  // call 0x551420
    t0 = 0x00551420u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b162u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b162:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0053b165:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0053b169:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b16e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053b16f:  // push 7
    t0 = 0x7u; esp -= 4; M32(esp) = t0;
L_0053b171:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b176u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b176:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b178:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0053b17a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b17c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b181:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b186u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b186:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b188:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_0053b18a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b18c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b191:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b196u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b196:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b198:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b19a:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b19c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b1a1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b1a6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b1a6:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b1a8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b1aa:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b1ac:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b1b1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b1b6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b1b6:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b1b8:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b1ba:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b1bc:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b1c1:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b1c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b1c6:  // mov dword ptr [esp + 0xc], 0
    M32((uint32_t)(esp + 0xcu)) = (uint32_t)(0x0u);
L_0053b1ce:  // mov ecx, dword ptr [esp + 0xc]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xcu)));
L_0053b1d2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053b1d3:  // push 8
    t0 = 0x8u; esp -= 4; M32(esp) = t0;
L_0053b1d5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b1d7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b1dc:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b1e1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b1e1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b1e3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b1e5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b1e7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b1ec:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b1f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b1f1:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b1f3:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b1f5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b1f7:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b1fc:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b201u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b201:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b203:  // call 0x551460
    t0 = 0x00551460u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b208u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b208:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0053b20b:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b210:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b212:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b214:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b216:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b21bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b21b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b21d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b21f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b221:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b226:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b22bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b22b:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0053b22d:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0053b22f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b234:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b239u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b239:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0053b23b:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053b23d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b242:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b247u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b247:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b249:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b24b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b24d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b252:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b257u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b257:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b259:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b25b:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b25d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b262:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b267u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b267:  // mov edx, dword ptr [0x8a9d84]
    edx = (uint32_t)(M32((uint32_t)(0x8a9d84u)));
L_0053b26d:  // mov eax, dword ptr [edx + 8]
    eax = (uint32_t)(M32((uint32_t)(edx + 0x8u)));
L_0053b270:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0053b272:  // jne 0x53b27b
    if (!f.zf) goto L_0053b27b;
L_0053b274:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0053b276:  // call 0x53b470
    t0 = 0x0053b470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b27bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b27b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b27d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b27f:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b281:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b286:  // call 0x513820
    t0 = 0x00513820u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b28bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b28b:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0053b28d:  // push 0x13
    t0 = 0x13u; esp -= 4; M32(esp) = t0;
L_0053b28f:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b294:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b299u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b299:  // push 6
    t0 = 0x6u; esp -= 4; M32(esp) = t0;
L_0053b29b:  // push 0x14
    t0 = 0x14u; esp -= 4; M32(esp) = t0;
L_0053b29d:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b2a2:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b2a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b2a7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b2a9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b2ab:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b2ad:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b2b2:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b2b7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b2b7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b2b9:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b2bb:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b2bd:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b2c2:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b2c7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b2c7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b2c9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b2cb:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b2cd:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b2d2:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b2d7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b2d7:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b2d9:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0053b2db:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0053b2dd:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b2e2:  // call 0x513930
    t0 = 0x00513930u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b2e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b2e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b2e9:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b2eb:  // mov ecx, 0x9c65c0
    ecx = (uint32_t)(0x9c65c0u);
L_0053b2f0:  // call 0x550d50
    t0 = 0x00550d50u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b2f5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b2f5:  // mov eax, dword ptr [0x8a9d84]
    eax = (uint32_t)(M32((uint32_t)(0x8a9d84u)));
L_0053b2fa:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053b2fd:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0053b2ff:  // jne 0x53b454
    if (!f.zf) goto L_0053b454;
L_0053b305:  // mov ebp, 0x2a4
    ebp = (uint32_t)(0x2a4u);
L_0053b30a:  // mov edi, dword ptr [ebp + 0x8a9a98]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x8a9a98u)));
L_0053b310:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0053b312:  // je 0x53b445
    if (f.zf) goto L_0053b445;
L_0053b318:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b31a:  // push 0x17
    t0 = 0x17u; esp -= 4; M32(esp) = t0;
L_0053b31c:  // mov ecx, 0x855bb0
    ecx = (uint32_t)(0x855bb0u);
L_0053b321:  // call 0x513bc0
    t0 = 0x00513bc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b326u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b326:  // mov edi, dword ptr [edi + 0x1c]
    edi = (uint32_t)(M32((uint32_t)(edi + 0x1cu)));
L_0053b329:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0053b32b:  // je 0x53b445
    if (f.zf) goto L_0053b445;
L_0053b331:  // mov edx, dword ptr [edi]
    edx = (uint32_t)(M32((uint32_t)(edi)));
L_0053b333:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_0053b337:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053b338:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0053b33a:  // call dword ptr [edx + 0x7c]
    t0 = M32((uint32_t)(edx + 0x7cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b33du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b33d:  // add eax, 0x10
    t0 = ladd<32>(eax, 0x10u, f);
    eax = (uint32_t)(t0);
L_0053b340:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0053b342:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_0053b346:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0053b349:  // fld dword ptr [esp + 0x1c]
    lpush(x, (long double)F32((uint32_t)(esp + 0x1cu)));
L_0053b34d:  // mov dword ptr [esp + 0x20], edx
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edx);
L_0053b351:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0053b354:  // fld dword ptr [esp + 0x20]
    lpush(x, (long double)F32((uint32_t)(esp + 0x20u)));
L_0053b358:  // fpatan 
    v0 = lfpatan(ST(1), ST(0)); lpop(x); ST(0) = v0;
L_0053b35a:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_0053b35d:  // mov dword ptr [esp + 0x24], ecx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ecx);
L_0053b361:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0053b365:  // fchs 
    ST(0) = -ST(0);
L_0053b367:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_0053b36b:  // fld dword ptr [edi + 0x1c]
    lpush(x, (long double)F32((uint32_t)(edi + 0x1cu)));
L_0053b36e:  // fmul dword ptr [esi + 0x48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x48u)));
L_0053b371:  // fadd dword ptr [esi + 0x50]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x50u)));
L_0053b374:  // fld dword ptr [edi + 0x20]
    lpush(x, (long double)F32((uint32_t)(edi + 0x20u)));
L_0053b377:  // fmul dword ptr [esi + 0x4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esi + 0x4cu)));
L_0053b37a:  // fadd dword ptr [esi + 0x54]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esi + 0x54u)));
L_0053b37d:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0053b381:  // fsub dword ptr [0x5dbe74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe74u)));
L_0053b387:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0053b38b:  // fsub dword ptr [0x5dbe74]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe74u)));
L_0053b391:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_0053b395:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0053b397:  // fmulp st(1)
    ST(1) = (ST(1)) * (ST(0));
    lpop(x);
L_0053b399:  // fld st(1)
    v0 = ST(1); lpush(x, v0);
L_0053b39b:  // fmul st(2)
    ST(0) = (ST(0)) * (ST(2));
L_0053b39d:  // faddp st(1)
    ST(1) = (ST(1)) + (ST(0));
    lpop(x);
L_0053b39f:  // fsqrt 
    ST(0) = lfsqrt(ST(0));
L_0053b3a1:  // fdivr dword ptr [0x5dbe74]
    ST(0) = ((long double)F32((uint32_t)(0x5dbe74u))) / (ST(0));
L_0053b3a7:  // fcom dword ptr [0x5d8568]
    lcom(x, ST(0), (long double)F32((uint32_t)(0x5d8568u)));
L_0053b3ad:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0053b3af:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0053b3b2:  // je 0x53b3c2
    if (f.zf) goto L_0053b3c2;
L_0053b3b4:  // fld st(0)
    v0 = ST(0); lpush(x, v0);
L_0053b3b6:  // fmulp st(2)
    ST(2) = (ST(2)) * (ST(0));
    lpop(x);
L_0053b3b8:  // fmul dword ptr [esp + 0x10]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(esp + 0x10u)));
L_0053b3bc:  // fstp dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
    lpop(x);
L_0053b3c0:  // jmp 0x53b3c4
    goto L_0053b3c4;
L_0053b3c2:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053b3c4:  // fadd dword ptr [0x5dbe74]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe74u)));
L_0053b3ca:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_0053b3ce:  // fadd dword ptr [0x5dbe74]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5dbe74u)));
L_0053b3d4:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0053b3d8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0053b3dd:  // fld dword ptr [esp + 0x18]
    lpush(x, (long double)F32((uint32_t)(esp + 0x18u)));
L_0053b3e1:  // fsub dword ptr [0x5dbe00]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5dbe00u)));
L_0053b3e7:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b3e9:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_0053b3ec:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0053b3f1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b3f3:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0053b3f8:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0053b3fd:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_0053b3ff:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0053b400:  // push 0x3f800000
    t0 = 0x3f800000u; esp -= 4; M32(esp) = t0;
L_0053b405:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0053b407:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_0053b409:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053b40a:  // fsub st(1)
    ST(0) = (ST(0)) - (ST(1));
L_0053b40c:  // push 0x3be56042
    t0 = 0x3be56042u; esp -= 4; M32(esp) = t0;
L_0053b411:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053b412:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053b415:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0053b416:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053b418:  // fld dword ptr [0x8aa4e8]
    lpush(x, (long double)F32((uint32_t)(0x8aa4e8u)));
L_0053b41e:  // fadd dword ptr [0x8aa4f0]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x8aa4f0u)));
L_0053b424:  // fsub dword ptr [0x5d95b8]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x5d95b8u)));
L_0053b42a:  // fsub dword ptr [0x67a628]
    ST(0) = (ST(0)) - ((long double)F32((uint32_t)(0x67a628u)));
L_0053b430:  // fadd st(1)
    ST(0) = (ST(0)) + (ST(1));
L_0053b432:  // fadd dword ptr [0x5db4e8]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(0x5db4e8u)));
L_0053b438:  // fstp dword ptr [esp]
    F32((uint32_t)(esp)) = lf32(ST(0));
    lpop(x);
L_0053b43b:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0053b43d:  // call 0x555be0
    t0 = 0x00555be0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0053b442u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0053b442:  // add esp, 0x3c
    t0 = ladd<32>(esp, 0x3cu, f);
    esp = (uint32_t)(t0);
L_0053b445:  // add ebp, 4
    t0 = ladd<32>(ebp, 0x4u, f);
    ebp = (uint32_t)(t0);
L_0053b448:  // cmp ebp, 0x2b4
    t0 = lsub<32>(ebp, 0x2b4u, f);
L_0053b44e:  // jl 0x53b30a
    if ((f.sf != f.of)) goto L_0053b30a;
L_0053b454:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0053b455:  // mov byte ptr [0x9c68ac], 1
    M8((uint32_t)(0x9c68acu)) = (uint8_t)(0x1u);
L_0053b45c:  // mov byte ptr [0x9c690d], 1
    M8((uint32_t)(0x9c690du)) = (uint8_t)(0x1u);
L_0053b463:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0053b464:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0053b465:  // add esp, 0x50
    t0 = ladd<32>(esp, 0x50u, f);
    esp = (uint32_t)(t0);
L_0053b468:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0053abe0, 0053abe0)
