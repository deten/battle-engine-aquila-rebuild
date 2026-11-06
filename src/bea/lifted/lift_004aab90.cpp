// lifted from 004aab90 (FUN_004aab90, 1945 bytes, 580 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_004aab90(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_004aab90;
L_004aab90:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_004aab96:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_004aab98:  // push 0x5d392f
    t0 = 0x5d392fu; esp -= 4; M32(esp) = t0;
L_004aab9d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aab9e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_004aaba5:  // sub esp, 0x348
    t0 = lsub<32>(esp, 0x348u, f);
    esp = (uint32_t)(t0);
L_004aabab:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004aabac:  // mov ebx, dword ptr [esp + 0x35c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x35cu)));
L_004aabb3:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004aabb4:  // mov ebp, dword ptr [esp + 0x364]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x364u)));
L_004aabbb:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004aabbc:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_004aabbe:  // cmp ebp, esi
    t0 = lsub<32>(ebp, esi, f);
L_004aabc0:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004aabc1:  // jne 0x4aabc5
    if (!f.zf) goto L_004aabc5;
L_004aabc3:  // mov ebp, ebx
    ebp = (uint32_t)(ebx);
L_004aabc5:  // push 0x982
    t0 = 0x982u; esp -= 4; M32(esp) = t0;
L_004aabca:  // push 0x62f8e8
    t0 = 0x62f8e8u; esp -= 4; M32(esp) = t0;
L_004aabcf:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aabd1:  // push 0x174
    t0 = 0x174u; esp -= 4; M32(esp) = t0;
L_004aabd6:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aabdb:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aabe0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aabe0:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004aabe4:  // cmp eax, esi
    t0 = lsub<32>(eax, esi, f);
L_004aabe6:  // mov dword ptr [esp + 0x360], esi
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(esi);
L_004aabed:  // je 0x4aabf8
    if (f.zf) goto L_004aabf8;
L_004aabef:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004aabf1:  // call 0x4a5020
    t0 = 0x004a5020u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aabf6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aabf6:  // mov esi, eax
    esi = (uint32_t)(eax);
L_004aabf8:  // mov edi, dword ptr [esi + 0x150]
    edi = (uint32_t)(M32((uint32_t)(esi + 0x150u)));
L_004aabfe:  // mov eax, dword ptr [esi + 0x158]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x158u)));
L_004aac04:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aac06:  // mov dword ptr [esp + 0x360], 0xffffffff
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0xffffffffu);
L_004aac11:  // mov dword ptr [esp + 0x20], edi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(edi);
L_004aac15:  // mov dword ptr [esi + 0x150], 0
    M32((uint32_t)(esi + 0x150u)) = (uint32_t)(0x0u);
L_004aac1f:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004aac23:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aac28u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aac28:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aac2a:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aac2fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aac2f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aac31:  // lea ecx, [esp + 0x30]
    ecx = (uint32_t)((uint32_t)(esp + 0x30u));
L_004aac35:  // push 0x12c
    t0 = 0x12cu; esp -= 4; M32(esp) = t0;
L_004aac3a:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aac3b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aac3d:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aac42u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aac42:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aac44:  // lea edx, [esp + 0x28]
    edx = (uint32_t)((uint32_t)(esp + 0x28u));
L_004aac48:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aac4a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aac4b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aac4d:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aac52u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aac52:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aac54:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004aac58:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aac5a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aac5b:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aac5d:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aac62u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aac62:  // cmp dword ptr [esp + 0x28], 1
    t0 = lsub<32>(M32((uint32_t)(esp + 0x28u)), 0x1u, f);
L_004aac67:  // jne 0x4aacc3
    if (!f.zf) goto L_004aacc3;
L_004aac69:  // lea ecx, [esp + 0x2c]
    ecx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004aac6d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aac6e:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_004aac73:  // call 0x472570
    t0 = 0x00472570u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aac78u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aac78:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aac7a:  // jne 0x4aacc3
    if (!f.zf) goto L_004aacc3;
L_004aac7c:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004aac80:  // lea eax, [esp + 0x158]
    eax = (uint32_t)((uint32_t)(esp + 0x158u));
L_004aac87:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aac88:  // push 0x62fd7c
    t0 = 0x62fd7cu; esp -= 4; M32(esp) = t0;
L_004aac8d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aac8e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aac93u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aac93:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004aac96:  // lea ecx, [esp + 0x158]
    ecx = (uint32_t)((uint32_t)(esp + 0x158u));
L_004aac9d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aac9e:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aaca3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aaca3:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004aaca6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aaca8:  // call 0x423990
    t0 = 0x00423990u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aacadu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aacad:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004aacaf:  // je 0x4aacbc
    if (f.zf) goto L_004aacbc;
L_004aacb1:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004aacb2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aacb7:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aacbcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aacbc:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004aacbe:  // jmp 0x4ab310
    goto L_004ab310;
L_004aacc3:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aacc5:  // lea edx, [esp + 0x17]
    edx = (uint32_t)((uint32_t)(esp + 0x17u));
L_004aacc9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aaccb:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aaccc:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004aacce:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aacd3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aacd3:  // mov al, byte ptr [0x704ae4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x704ae4u))) & 0xffu);
L_004aacd8:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004aacda:  // jne 0x4aad95
    if (!f.zf) goto L_004aad95;
L_004aace0:  // mov al, byte ptr [esp + 0x2c]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x2cu))) & 0xffu);
L_004aace4:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004aace6:  // je 0x4aad95
    if (f.zf) goto L_004aad95;
L_004aacec:  // lea eax, [esp + 0x2c]
    eax = (uint32_t)((uint32_t)(esp + 0x2cu));
L_004aacf0:  // lea ecx, [esp + 0x258]
    ecx = (uint32_t)((uint32_t)(esp + 0x258u));
L_004aacf7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aacf8:  // push 0x62fd28
    t0 = 0x62fd28u; esp -= 4; M32(esp) = t0;
L_004aacfd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aacfe:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aad03u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aad03:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004aad06:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aad0b:  // push 0x9cc
    t0 = 0x9ccu; esp -= 4; M32(esp) = t0;
L_004aad10:  // push 0x62f8e8
    t0 = 0x62f8e8u; esp -= 4; M32(esp) = t0;
L_004aad15:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004aad1a:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004aad1c:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aad21u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aad21:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004aad25:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aad27:  // mov dword ptr [esp + 0x360], 1
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0x1u);
L_004aad32:  // je 0x4aad3f
    if (f.zf) goto L_004aad3f;
L_004aad34:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_004aad36:  // call 0x4237d0
    t0 = 0x004237d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aad3bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aad3b:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_004aad3d:  // jmp 0x4aad41
    goto L_004aad41;
L_004aad3f:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_004aad41:  // lea edx, [esp + 0x258]
    edx = (uint32_t)((uint32_t)(esp + 0x258u));
L_004aad48:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aad4a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aad4b:  // mov dword ptr [esp + 0x364], 0xffffffff
    M32((uint32_t)(esp + 0x364u)) = (uint32_t)(0xffffffffu);
L_004aad56:  // call 0x4238c0
    t0 = 0x004238c0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aad5bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aad5b:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aad5d:  // jne 0x4aad8e
    if (!f.zf) goto L_004aad8e;
L_004aad5f:  // lea eax, [esp + 0x258]
    eax = (uint32_t)((uint32_t)(esp + 0x258u));
L_004aad66:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_004aad6b:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aad6c:  // call 0x42d0b0
    t0 = 0x0042d0b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aad71u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aad71:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004aad73:  // je 0x4aad87
    if (f.zf) goto L_004aad87;
L_004aad75:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aad77:  // call 0x423840
    t0 = 0x00423840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aad7cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aad7c:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004aad7d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aad82:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aad87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aad87:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004aad89:  // jmp 0x4ab310
    goto L_004ab310;
L_004aad8e:  // mov byte ptr [0x704ae4], 1
    M8((uint32_t)(0x704ae4u)) = (uint8_t)(0x1u);
L_004aad95:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aad97:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aad9cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aad9c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aad9e:  // push 0x174
    t0 = 0x174u; esp -= 4; M32(esp) = t0;
L_004aada3:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004aada4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aada6:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aadabu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aadab:  // mov eax, dword ptr [esi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004aadae:  // mov ecx, dword ptr [esp + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_004aadb2:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004aadb6:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004aadb8:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004aadba:  // mov dword ptr [esi + 0x154], ecx
    M32((uint32_t)(esi + 0x154u)) = (uint32_t)(ecx);
L_004aadc0:  // mov dword ptr [esi + 0x158], edx
    M32((uint32_t)(esi + 0x158u)) = (uint32_t)(edx);
L_004aadc6:  // jle 0x4aadea
    if ((f.zf || f.sf != f.of)) goto L_004aadea;
L_004aadc8:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_004aadcb:  // push 0x9f7
    t0 = 0x9f7u; esp -= 4; M32(esp) = t0;
L_004aadd0:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004aadd3:  // push 0x62f8e8
    t0 = 0x62f8e8u; esp -= 4; M32(esp) = t0;
L_004aadd8:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aadda:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aaddb:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aade0:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aade5u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aade5:  // mov dword ptr [esi + 0x18], eax
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(eax);
L_004aade8:  // jmp 0x4aaded
    goto L_004aaded;
L_004aadea:  // mov dword ptr [esi + 0x18], edi
    M32((uint32_t)(esi + 0x18u)) = (uint32_t)(edi);
L_004aaded:  // mov ebx, dword ptr [esi + 0x1c]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004aadf0:  // cmp ebx, edi
    t0 = lsub<32>(ebx, edi, f);
L_004aadf2:  // jle 0x4aae7a
    if ((f.zf || f.sf != f.of)) goto L_004aae7a;
L_004aadf8:  // lea eax, [ebx*8]
    eax = (uint32_t)((uint32_t)(ebx * 8u));
L_004aadff:  // push 0x9fc
    t0 = 0x9fcu; esp -= 4; M32(esp) = t0;
L_004aae04:  // sub eax, ebx
    t0 = lsub<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_004aae06:  // push 0x62f8e8
    t0 = 0x62f8e8u; esp -= 4; M32(esp) = t0;
L_004aae0b:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aae0d:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aae12:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004aae15:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_004aae18:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aae19:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aae1eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aae1e:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_004aae22:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004aae24:  // mov dword ptr [esp + 0x360], 2
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0x2u);
L_004aae2f:  // je 0x4aae68
    if (f.zf) goto L_004aae68;
L_004aae31:  // lea edi, [ebx - 1]
    edi = (uint32_t)((uint32_t)(ebx + 0xffffffffu));
L_004aae34:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004aae36:  // jl 0x4aae6a
    if ((f.sf != f.of)) goto L_004aae6a;
L_004aae38:  // lea ebx, [eax + 0x10]
    ebx = (uint32_t)((uint32_t)(eax + 0x10u));
L_004aae3b:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004aae3c:  // push 0x402d20
    t0 = 0x402d20u; esp -= 4; M32(esp) = t0;
L_004aae41:  // push 3
    t0 = 0x3u; esp -= 4; M32(esp) = t0;
L_004aae43:  // push 0x10
    t0 = 0x10u; esp -= 4; M32(esp) = t0;
L_004aae45:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004aae46:  // call 0x4011b0
    t0 = 0x004011b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aae4bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aae4b:  // add ebx, 0x150
    t0 = ladd<32>(ebx, 0x150u, f);
    ebx = (uint32_t)(t0);
L_004aae51:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_004aae52:  // jne 0x4aae3c
    if (!f.zf) goto L_004aae3c;
L_004aae54:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004aae58:  // mov dword ptr [esp + 0x360], 0xffffffff
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0xffffffffu);
L_004aae63:  // mov dword ptr [esi + 0x20], eax
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(eax);
L_004aae66:  // jmp 0x4aae7d
    goto L_004aae7d;
L_004aae68:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004aae6a:  // mov dword ptr [esp + 0x360], 0xffffffff
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0xffffffffu);
L_004aae75:  // mov dword ptr [esi + 0x20], eax
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(eax);
L_004aae78:  // jmp 0x4aae7d
    goto L_004aae7d;
L_004aae7a:  // mov dword ptr [esi + 0x20], edi
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(edi);
L_004aae7d:  // mov ecx, dword ptr [esi + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004aae80:  // lea eax, [ecx*8]
    eax = (uint32_t)((uint32_t)(ecx * 8u));
L_004aae87:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004aae89:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004aae8c:  // mov eax, dword ptr [0x704ae8]
    eax = (uint32_t)(M32((uint32_t)(0x704ae8u)));
L_004aae91:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_004aae94:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_004aae96:  // mov dword ptr [0x704ae8], eax
    M32((uint32_t)(0x704ae8u)) = (uint32_t)(eax);
L_004aae9b:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_004aae9c:  // and edx, 0x3ff
    t0 = llog<32>(edx & 0x3ffu, f);
    edx = (uint32_t)(t0);
L_004aaea2:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_004aaea4:  // sar eax, 0xa
    t0 = lsar<32>(eax, 0xau, f);
    eax = (uint32_t)(t0);
L_004aaea7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aaea8:  // push 0x62fd5c
    t0 = 0x62fd5cu; esp -= 4; M32(esp) = t0;
L_004aaead:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aaeb2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aaeb2:  // mov ebx, dword ptr [esi + 4]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004aaeb5:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004aaeb8:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004aaeba:  // jle 0x4aaf28
    if ((f.zf || f.sf != f.of)) goto L_004aaf28;
L_004aaebc:  // lea edx, [ebx + ebx*8]
    edx = (uint32_t)((uint32_t)(ebx + ebx * 8u));
L_004aaebf:  // push 0xa05
    t0 = 0xa05u; esp -= 4; M32(esp) = t0;
L_004aaec4:  // push 0x62f8e8
    t0 = 0x62f8e8u; esp -= 4; M32(esp) = t0;
L_004aaec9:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aaecb:  // lea eax, [edx*4 + 4]
    eax = (uint32_t)((uint32_t)(edx * 4u + 0x4u));
L_004aaed2:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aaed7:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aaed8:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aaeddu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aaedd:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_004aaee1:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004aaee3:  // mov dword ptr [esp + 0x360], 3
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0x3u);
L_004aaeee:  // je 0x4aaf17
    if (f.zf) goto L_004aaf17;
L_004aaef0:  // push 0x4adf90
    t0 = 0x4adf90u; esp -= 4; M32(esp) = t0;
L_004aaef5:  // push 0x4adf80
    t0 = 0x4adf80u; esp -= 4; M32(esp) = t0;
L_004aaefa:  // lea edi, [eax + 4]
    edi = (uint32_t)((uint32_t)(eax + 0x4u));
L_004aaefd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_004aaefe:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_004aaf00:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004aaf01:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_004aaf03:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aaf08u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aaf08:  // mov dword ptr [esp + 0x360], 0xffffffff
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0xffffffffu);
L_004aaf13:  // mov dword ptr [esi], edi
    M32((uint32_t)(esi)) = (uint32_t)(edi);
L_004aaf15:  // jmp 0x4aaf2e
    goto L_004aaf2e;
L_004aaf17:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004aaf19:  // mov dword ptr [esp + 0x360], 0xffffffff
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0xffffffffu);
L_004aaf24:  // mov dword ptr [esi], edi
    M32((uint32_t)(esi)) = (uint32_t)(edi);
L_004aaf26:  // jmp 0x4aaf2e
    goto L_004aaf2e;
L_004aaf28:  // mov dword ptr [esi], 0
    M32((uint32_t)(esi)) = (uint32_t)(0x0u);
L_004aaf2e:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004aaf31:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004aaf33:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004aaf35:  // jle 0x4aaf59
    if ((f.zf || f.sf != f.of)) goto L_004aaf59;
L_004aaf37:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_004aaf3a:  // push 0xa0a
    t0 = 0xa0au; esp -= 4; M32(esp) = t0;
L_004aaf3f:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004aaf42:  // push 0x62f8e8
    t0 = 0x62f8e8u; esp -= 4; M32(esp) = t0;
L_004aaf47:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004aaf49:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004aaf4a:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004aaf4f:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aaf54u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aaf54:  // mov dword ptr [esi + 0x10], eax
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(eax);
L_004aaf57:  // jmp 0x4aaf5c
    goto L_004aaf5c;
L_004aaf59:  // mov dword ptr [esi + 0x10], edi
    M32((uint32_t)(esi + 0x10u)) = (uint32_t)(edi);
L_004aaf5c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aaf5e:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aaf63u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aaf63:  // mov ecx, dword ptr [esi + 4]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004aaf66:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004aaf68:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aaf69:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_004aaf6b:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aaf6c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aaf6e:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aaf73u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aaf73:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004aaf76:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004aaf78:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_004aaf7a:  // jle 0x4ab079
    if ((f.zf || f.sf != f.of)) goto L_004ab079;
L_004aaf80:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aaf82:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aaf87u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aaf87:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004aaf89:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_004aaf8b:  // mov dword ptr [ecx + edi + 0xc], eax
    M32((uint32_t)(ecx + edi + 0xcu)) = (uint32_t)(eax);
L_004aaf8f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004aaf91:  // mov dword ptr [edx + edi + 0x10], eax
    M32((uint32_t)(edx + edi + 0x10u)) = (uint32_t)(eax);
L_004aaf95:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004aaf97:  // mov dword ptr [ecx + edi + 0x14], eax
    M32((uint32_t)(ecx + edi + 0x14u)) = (uint32_t)(eax);
L_004aaf9b:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004aaf9d:  // mov dword ptr [edx + edi + 0x18], eax
    M32((uint32_t)(edx + edi + 0x18u)) = (uint32_t)(eax);
L_004aafa1:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004aafa3:  // mov dword ptr [ecx + edi + 0x1c], eax
    M32((uint32_t)(ecx + edi + 0x1cu)) = (uint32_t)(eax);
L_004aafa7:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004aafa9:  // mov dword ptr [edx + edi + 4], eax
    M32((uint32_t)(edx + edi + 0x4u)) = (uint32_t)(eax);
L_004aafad:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004aafaf:  // mov edx, dword ptr [eax + edi + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + edi + 0x8u)));
L_004aafb3:  // lea ecx, [eax + edi]
    ecx = (uint32_t)((uint32_t)(eax + edi));
L_004aafb6:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aafb7:  // call 0x4adff0
    t0 = 0x004adff0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aafbcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aafbc:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aafbe:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aafc3u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aafc3:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004aafc5:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_004aafc7:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004aafca:  // mov edx, dword ptr [eax + 0xc]
    edx = (uint32_t)(M32((uint32_t)(eax + 0xcu)));
L_004aafcd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aafce:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aafd0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aafd1:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aafd3:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aafd8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aafd8:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004aafda:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_004aafdc:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004aafdf:  // mov edx, dword ptr [eax + 0x10]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x10u)));
L_004aafe2:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aafe3:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aafe5:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aafe6:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aafe8:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004aafedu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004aafed:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004aafef:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_004aaff1:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004aaff4:  // mov edx, dword ptr [eax + 0x14]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_004aaff7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004aaff8:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004aaffa:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004aaffb:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004aaffd:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab002u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab002:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004ab004:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_004ab006:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004ab009:  // mov edx, dword ptr [eax + 0x18]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_004ab00c:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ab00d:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004ab00f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ab010:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab012:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab017u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab017:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004ab019:  // add eax, edi
    t0 = ladd<32>(eax, edi, f);
    eax = (uint32_t)(t0);
L_004ab01b:  // mov ecx, dword ptr [eax + 8]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_004ab01e:  // mov edx, dword ptr [eax + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x1cu)));
L_004ab021:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ab022:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004ab024:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ab025:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab027:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab02cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab02c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ab02e:  // lea eax, [esp + 0x15c]
    eax = (uint32_t)((uint32_t)(esp + 0x15cu));
L_004ab035:  // push 0x80
    t0 = 0x80u; esp -= 4; M32(esp) = t0;
L_004ab03a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ab03b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab03d:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab042u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab042:  // lea ecx, [esp + 0x158]
    ecx = (uint32_t)((uint32_t)(esp + 0x158u));
L_004ab049:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ab04a:  // call 0x4aa410
    t0 = 0x004aa410u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab04fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab04f:  // mov edx, dword ptr [esi]
    edx = (uint32_t)(M32((uint32_t)(esi)));
L_004ab051:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_004ab054:  // mov dword ptr [edx + edi], eax
    M32((uint32_t)(edx + edi)) = (uint32_t)(eax);
L_004ab057:  // mov eax, dword ptr [esi]
    eax = (uint32_t)(M32((uint32_t)(esi)));
L_004ab059:  // mov dword ptr [eax + edi + 4], 0
    M32((uint32_t)(eax + edi + 0x4u)) = (uint32_t)(0x0u);
L_004ab061:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_004ab063:  // add ecx, edi
    t0 = ladd<32>(ecx, edi, f);
    ecx = (uint32_t)(t0);
L_004ab065:  // call 0x4ae0d0
    t0 = 0x004ae0d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab06au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab06a:  // mov eax, dword ptr [esi + 4]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x4u)));
L_004ab06d:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004ab06e:  // add edi, 0x24
    t0 = ladd<32>(edi, 0x24u, f);
    edi = (uint32_t)(t0);
L_004ab071:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004ab073:  // jl 0x4aaf80
    if ((f.sf != f.of)) goto L_004aaf80;
L_004ab079:  // mov eax, dword ptr [esi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x15cu)));
L_004ab07f:  // push 0xa50
    t0 = 0xa50u; esp -= 4; M32(esp) = t0;
L_004ab084:  // shl eax, 2
    t0 = lshl<32>(eax, 0x2u, f);
    eax = (uint32_t)(t0);
L_004ab087:  // push 0x62f8e8
    t0 = 0x62f8e8u; esp -= 4; M32(esp) = t0;
L_004ab08c:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ab08e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ab08f:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ab094:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab099u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab099:  // mov dword ptr [esi + 0x160], eax
    M32((uint32_t)(esi + 0x160u)) = (uint32_t)(eax);
L_004ab09f:  // mov eax, dword ptr [esi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x15cu)));
L_004ab0a5:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ab0a7:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ab0a9:  // jle 0x4ab106
    if ((f.zf || f.sf != f.of)) goto L_004ab106;
L_004ab0ab:  // push 0xa58
    t0 = 0xa58u; esp -= 4; M32(esp) = t0;
L_004ab0b0:  // push 0x62f8e8
    t0 = 0x62f8e8u; esp -= 4; M32(esp) = t0;
L_004ab0b5:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ab0b7:  // push 0x13c
    t0 = 0x13cu; esp -= 4; M32(esp) = t0;
L_004ab0bc:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ab0c1:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab0c6u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab0c6:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_004ab0c8:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_004ab0cc:  // test ebx, ebx
    t0 = llog<32>(ebx & ebx, f);
L_004ab0ce:  // mov dword ptr [esp + 0x360], 4
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0x4u);
L_004ab0d9:  // je 0x4ab0e4
    if (f.zf) goto L_004ab0e4;
L_004ab0db:  // mov ecx, ebx
    ecx = (uint32_t)(ebx);
L_004ab0dd:  // call 0x4ae4b0
    t0 = 0x004ae4b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab0e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab0e2:  // jmp 0x4ab0e6
    goto L_004ab0e6;
L_004ab0e4:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ab0e6:  // mov ecx, dword ptr [esi + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_004ab0ec:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004ab0ed:  // mov dword ptr [esp + 0x360], 0xffffffff
    M32((uint32_t)(esp + 0x360u)) = (uint32_t)(0xffffffffu);
L_004ab0f8:  // mov dword ptr [ecx + edi*4 - 4], ebx
    M32((uint32_t)(ecx + edi * 4u + 0xfffffffcu)) = (uint32_t)(ebx);
L_004ab0fc:  // mov eax, dword ptr [esi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x15cu)));
L_004ab102:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004ab104:  // jl 0x4ab0ab
    if ((f.sf != f.of)) goto L_004ab0ab;
L_004ab106:  // mov eax, dword ptr [esi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x15cu)));
L_004ab10c:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ab10e:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ab110:  // jle 0x4ab171
    if ((f.zf || f.sf != f.of)) goto L_004ab171;
L_004ab112:  // mov edx, dword ptr [esi + 0x160]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_004ab118:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_004ab119:  // mov eax, dword ptr [edx + ebx*4]
    eax = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_004ab11c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ab11d:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ab11e:  // call 0x4b27a0
    t0 = 0x004b27a0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab123u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab123:  // mov al, byte ptr [esp + 0x1f]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1fu))) & 0xffu);
L_004ab127:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004ab12a:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004ab12c:  // jne 0x4ab166
    if (!f.zf) goto L_004ab166;
L_004ab12e:  // mov ecx, dword ptr [esi + 0x160]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_004ab134:  // mov edx, dword ptr [ecx + ebx*4]
    edx = (uint32_t)(M32((uint32_t)(ecx + ebx * 4u)));
L_004ab137:  // mov edi, dword ptr [edx + 0x100]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x100u)));
L_004ab13d:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_004ab13f:  // je 0x4ab166
    if (f.zf) goto L_004ab166;
L_004ab141:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_004ab143:  // call 0x4d3a00
    t0 = 0x004d3a00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab148u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab148:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_004ab149:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ab14e:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab153u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab153:  // mov eax, dword ptr [esi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_004ab159:  // mov ecx, dword ptr [eax + ebx*4]
    ecx = (uint32_t)(M32((uint32_t)(eax + ebx * 4u)));
L_004ab15c:  // mov dword ptr [ecx + 0x100], 0
    M32((uint32_t)(ecx + 0x100u)) = (uint32_t)(0x0u);
L_004ab166:  // mov eax, dword ptr [esi + 0x15c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x15cu)));
L_004ab16c:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004ab16d:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004ab16f:  // jl 0x4ab112
    if ((f.sf != f.of)) goto L_004ab112;
L_004ab171:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004ab174:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ab176:  // jle 0x4ab1d9
    if ((f.zf || f.sf != f.of)) goto L_004ab1d9;
L_004ab178:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab17a:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab17fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab17f:  // mov edx, dword ptr [esi + 0xc]
    edx = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004ab182:  // mov eax, dword ptr [esi + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004ab185:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ab186:  // push 0xc
    t0 = 0xcu; esp -= 4; M32(esp) = t0;
L_004ab188:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ab189:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab18b:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab190u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab190:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004ab193:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ab195:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ab197:  // jle 0x4ab1d9
    if ((f.zf || f.sf != f.of)) goto L_004ab1d9;
L_004ab199:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ab19b:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004ab19e:  // cmp dword ptr [edi + ecx], 0
    t0 = lsub<32>(M32((uint32_t)(edi + ecx)), 0x0u, f);
L_004ab1a2:  // je 0x4ab1ce
    if (f.zf) goto L_004ab1ce;
L_004ab1a4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab1a6:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab1abu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab1ab:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ab1ad:  // lea edx, [esp + 0x18]
    edx = (uint32_t)((uint32_t)(esp + 0x18u));
L_004ab1b1:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004ab1b3:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ab1b4:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab1b6:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab1bbu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab1bb:  // mov eax, dword ptr [esi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_004ab1c1:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_004ab1c5:  // mov ecx, dword ptr [esi + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_004ab1c8:  // mov eax, dword ptr [eax + edx*4]
    eax = (uint32_t)(M32((uint32_t)(eax + edx * 4u)));
L_004ab1cb:  // mov dword ptr [edi + ecx], eax
    M32((uint32_t)(edi + ecx)) = (uint32_t)(eax);
L_004ab1ce:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_004ab1d1:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_004ab1d2:  // add edi, 0xc
    t0 = ladd<32>(edi, 0xcu, f);
    edi = (uint32_t)(t0);
L_004ab1d5:  // cmp ebx, eax
    t0 = lsub<32>(ebx, eax, f);
L_004ab1d7:  // jl 0x4ab19b
    if ((f.sf != f.of)) goto L_004ab19b;
L_004ab1d9:  // mov eax, dword ptr [esi + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004ab1dc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ab1de:  // jle 0x4ab1f8
    if ((f.zf || f.sf != f.of)) goto L_004ab1f8;
L_004ab1e0:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab1e2:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab1e7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab1e7:  // mov ecx, dword ptr [esi + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x14u)));
L_004ab1ea:  // mov edx, dword ptr [esi + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x18u)));
L_004ab1ed:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ab1ee:  // push 0x24
    t0 = 0x24u; esp -= 4; M32(esp) = t0;
L_004ab1f0:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ab1f1:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab1f3:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab1f8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab1f8:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab1fa:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab1ffu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab1ff:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_004ab203:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ab204:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ab205:  // call 0x4b3180
    t0 = 0x004b3180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab20au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab20a:  // mov dword ptr [esi + 0x150], eax
    M32((uint32_t)(esi + 0x150u)) = (uint32_t)(eax);
L_004ab210:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004ab213:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ab216:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ab218:  // jle 0x4ab2af
    if ((f.zf || f.sf != f.of)) goto L_004ab2af;
L_004ab21e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab220:  // call 0x423910
    t0 = 0x00423910u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab225u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab225:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ab227:  // lea ecx, [esp + 0x20]
    ecx = (uint32_t)((uint32_t)(esp + 0x20u));
L_004ab22b:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004ab22d:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ab22e:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab230:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab235u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab235:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ab239:  // cmp eax, 0x150
    t0 = lsub<32>(eax, 0x150u, f);
L_004ab23e:  // je 0x4ab253
    if (f.zf) goto L_004ab253;
L_004ab240:  // push 0x150
    t0 = 0x150u; esp -= 4; M32(esp) = t0;
L_004ab245:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ab246:  // push 0x62fd48
    t0 = 0x62fd48u; esp -= 4; M32(esp) = t0;
L_004ab24b:  // call 0x40c640
    t0 = 0x0040c640u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab250u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab250:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_004ab253:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004ab256:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_004ab258:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ab25a:  // jle 0x4ab2af
    if ((f.zf || f.sf != f.of)) goto L_004ab2af;
L_004ab25c:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_004ab25e:  // mov eax, dword ptr [esi + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004ab261:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_004ab265:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ab267:  // add eax, ebx
    t0 = ladd<32>(eax, ebx, f);
    eax = (uint32_t)(t0);
L_004ab269:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ab26a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_004ab26b:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab26d:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab272u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab272:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004ab275:  // mov eax, dword ptr [ecx + ebx + 0x40]
    eax = (uint32_t)(M32((uint32_t)(ecx + ebx + 0x40u)));
L_004ab279:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ab27b:  // je 0x4ab2a1
    if (f.zf) goto L_004ab2a1;
L_004ab27d:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_004ab27f:  // lea edx, [esp + 0x1c]
    edx = (uint32_t)((uint32_t)(esp + 0x1cu));
L_004ab283:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_004ab285:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_004ab286:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab288:  // call 0x423960
    t0 = 0x00423960u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab28du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab28d:  // mov eax, dword ptr [esi + 0x160]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x160u)));
L_004ab293:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_004ab297:  // mov ecx, dword ptr [esi + 0x20]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x20u)));
L_004ab29a:  // mov eax, dword ptr [eax + edx*4]
    eax = (uint32_t)(M32((uint32_t)(eax + edx * 4u)));
L_004ab29d:  // mov dword ptr [ecx + ebx + 0x40], eax
    M32((uint32_t)(ecx + ebx + 0x40u)) = (uint32_t)(eax);
L_004ab2a1:  // mov eax, dword ptr [esi + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x1cu)));
L_004ab2a4:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_004ab2a5:  // add ebx, 0x150
    t0 = ladd<32>(ebx, 0x150u, f);
    ebx = (uint32_t)(t0);
L_004ab2ab:  // cmp edi, eax
    t0 = lsub<32>(edi, eax, f);
L_004ab2ad:  // jl 0x4ab25e
    if ((f.sf != f.of)) goto L_004ab25e;
L_004ab2af:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_004ab2b2:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_004ab2b4:  // je 0x4ab2d7
    if (f.zf) goto L_004ab2d7;
L_004ab2b6:  // mov ecx, dword ptr [esp + 0x368]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x368u)));
L_004ab2bd:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ab2be:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_004ab2bf:  // call 0x4aab90
    t0 = 0x004aab90u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab2c4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab2c4:  // mov dword ptr [esi + 8], eax
    M32((uint32_t)(esi + 0x8u)) = (uint32_t)(eax);
L_004ab2c7:  // mov ecx, dword ptr [eax + 0x170]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x170u)));
L_004ab2cd:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_004ab2d0:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_004ab2d1:  // mov dword ptr [eax + 0x170], ecx
    M32((uint32_t)(eax + 0x170u)) = (uint32_t)(ecx);
L_004ab2d7:  // mov dword ptr [esi + 0x170], 0
    M32((uint32_t)(esi + 0x170u)) = (uint32_t)(0x0u);
L_004ab2e1:  // mov al, byte ptr [0x704ae4]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x704ae4u))) & 0xffu);
L_004ab2e6:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_004ab2e8:  // je 0x4ab30e
    if (f.zf) goto L_004ab30e;
L_004ab2ea:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab2ec:  // call 0x423900
    t0 = 0x00423900u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab2f1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab2f1:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_004ab2f3:  // je 0x4ab307
    if (f.zf) goto L_004ab307;
L_004ab2f5:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_004ab2f7:  // call 0x423840
    t0 = 0x00423840u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab2fcu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab2fc:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_004ab2fd:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_004ab302:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_call_nf(c, t0, 0x004ab307u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7];
L_004ab307:  // mov byte ptr [0x704ae4], 0
    M8((uint32_t)(0x704ae4u)) = (uint8_t)(0x0u);
L_004ab30e:  // mov eax, esi
    eax = (uint32_t)(esi);
L_004ab310:  // mov ecx, dword ptr [esp + 0x358]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x358u)));
L_004ab317:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_004ab318:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_004ab319:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_004ab31a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_004ab31b:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_004ab322:  // add esp, 0x354
    t0 = ladd<32>(esp, 0x354u, f);
    esp = (uint32_t)(t0);
L_004ab328:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x004aab90, 004aab90)
