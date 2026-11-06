// lifted from 00545070 (FUN_00545070, 851 bytes, 249 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_00545070(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_00545070;
L_00545070:  // push -1
    t0 = 0xffffffffu; esp -= 4; M32(esp) = t0;
L_00545072:  // push 0x5d7a52
    t0 = 0x5d7a52u; esp -= 4; M32(esp) = t0;
L_00545077:  // mov eax, dword ptr fs:[0]
    eax = (uint32_t)(lift_fsrd((uint32_t)(0x0u)));
L_0054507d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0054507e:  // mov dword ptr fs:[0], esp
    lift_fswr((uint32_t)(0x0u), (uint32_t)(esp));
L_00545085:  // sub esp, 0x2c
    t0 = lsub<32>(esp, 0x2cu, f);
    esp = (uint32_t)(t0);
L_00545088:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_00545089:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0054508a:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0054508c:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_0054508e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0054508f:  // mov dword ptr [esp + 0x24], esi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(esi);
L_00545093:  // mov eax, dword ptr [esi + 0x24]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_00545096:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00545098:  // je 0x5450bc
    if (f.zf) goto L_005450bc;
L_0054509a:  // mov ecx, dword ptr [eax - 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0xfffffffcu)));
L_0054509d:  // lea edi, [eax - 4]
    edi = (uint32_t)((uint32_t)(eax + 0xfffffffcu));
L_005450a0:  // push 0x544770
    t0 = 0x544770u; esp -= 4; M32(esp) = t0;
L_005450a5:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_005450a6:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_005450a8:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_005450a9:  // call 0x55db0a
    t0 = 0x0055db0au; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005450aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005450ae:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005450af:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_005450b4:  // call 0x549220
    t0 = 0x00549220u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005450b9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005450b9:  // mov dword ptr [esi + 0x24], ebp
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(ebp);
L_005450bc:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_005450bd:  // call 0x48e7b0
    t0 = 0x0048e7b0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005450c2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005450c2:  // mov ecx, 0x8a9a98
    ecx = (uint32_t)(0x8a9a98u);
L_005450c7:  // call 0x4725d0
    t0 = 0x004725d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005450ccu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005450cc:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_005450ce:  // je 0x545146
    if (f.zf) goto L_00545146;
L_005450d0:  // push 0x1b2
    t0 = 0x1b2u; esp -= 4; M32(esp) = t0;
L_005450d5:  // push 0x650bdc
    t0 = 0x650bdcu; esp -= 4; M32(esp) = t0;
L_005450da:  // push 0x35
    t0 = 0x35u; esp -= 4; M32(esp) = t0;
L_005450dc:  // push 0x6c
    t0 = 0x6cu; esp -= 4; M32(esp) = t0;
L_005450de:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_005450e3:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005450e8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005450e8:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_005450ec:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_005450ee:  // mov dword ptr [esp + 0x44], ebp
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebp);
L_005450f2:  // je 0x545115
    if (f.zf) goto L_00545115;
L_005450f4:  // push 0x544770
    t0 = 0x544770u; esp -= 4; M32(esp) = t0;
L_005450f9:  // push 0x544710
    t0 = 0x544710u; esp -= 4; M32(esp) = t0;
L_005450fe:  // lea edi, [eax + 4]
    edi = (uint32_t)((uint32_t)(eax + 0x4u));
L_00545101:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_00545103:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_00545105:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00545106:  // mov dword ptr [eax], 2
    M32((uint32_t)(eax)) = (uint32_t)(0x2u);
L_0054510c:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545111u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545111:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00545113:  // jmp 0x545117
    goto L_00545117;
L_00545115:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_00545117:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545119:  // mov dword ptr [esp + 0x48], 0xffffffff
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0xffffffffu);
L_00545121:  // mov dword ptr [esi + 0x24], ecx
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(ecx);
L_00545124:  // mov dword ptr [esi + 0x20], 2
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(0x2u);
L_0054512b:  // call 0x5447e0
    t0 = 0x005447e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545130u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545130:  // mov ecx, dword ptr [esi + 0x24]
    ecx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_00545133:  // push 4
    t0 = 0x4u; esp -= 4; M32(esp) = t0;
L_00545135:  // add ecx, 0x34
    t0 = ladd<32>(ecx, 0x34u, f);
    ecx = (uint32_t)(t0);
L_00545138:  // call 0x5447e0
    t0 = 0x005447e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054513du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054513d:  // mov byte ptr [0x9c7c54], 0
    M8((uint32_t)(0x9c7c54u)) = (uint8_t)(0x0u);
L_00545144:  // jmp 0x5451a8
    goto L_005451a8;
L_00545146:  // push 0x1bb
    t0 = 0x1bbu; esp -= 4; M32(esp) = t0;
L_0054514b:  // push 0x650bdc
    t0 = 0x650bdcu; esp -= 4; M32(esp) = t0;
L_00545150:  // push 0x35
    t0 = 0x35u; esp -= 4; M32(esp) = t0;
L_00545152:  // push 0x38
    t0 = 0x38u; esp -= 4; M32(esp) = t0;
L_00545154:  // mov ecx, 0x9c3df0
    ecx = (uint32_t)(0x9c3df0u);
L_00545159:  // call 0x5490e0
    t0 = 0x005490e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0054515eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0054515e:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_00545162:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_00545167:  // cmp eax, ebp
    t0 = lsub<32>(eax, ebp, f);
L_00545169:  // mov dword ptr [esp + 0x44], ebx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebx);
L_0054516d:  // je 0x54518b
    if (f.zf) goto L_0054518b;
L_0054516f:  // push 0x544770
    t0 = 0x544770u; esp -= 4; M32(esp) = t0;
L_00545174:  // push 0x544710
    t0 = 0x544710u; esp -= 4; M32(esp) = t0;
L_00545179:  // lea edi, [eax + 4]
    edi = (uint32_t)((uint32_t)(eax + 0x4u));
L_0054517c:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0054517d:  // push 0x34
    t0 = 0x34u; esp -= 4; M32(esp) = t0;
L_0054517f:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_00545180:  // mov dword ptr [eax], ebx
    M32((uint32_t)(eax)) = (uint32_t)(ebx);
L_00545182:  // call 0x55dc20
    t0 = 0x0055dc20u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545187u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545187:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_00545189:  // jmp 0x54518d
    goto L_0054518d;
L_0054518b:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0054518d:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0054518f:  // mov dword ptr [esp + 0x48], 0xffffffff
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(0xffffffffu);
L_00545197:  // mov dword ptr [esi + 0x24], ecx
    M32((uint32_t)(esi + 0x24u)) = (uint32_t)(ecx);
L_0054519a:  // mov dword ptr [esi + 0x20], ebx
    M32((uint32_t)(esi + 0x20u)) = (uint32_t)(ebx);
L_0054519d:  // call 0x5447e0
    t0 = 0x005447e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005451a2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005451a2:  // mov byte ptr [0x9c7c54], bl
    M8((uint32_t)(0x9c7c54u)) = (uint8_t)((ebx & 0xffu));
L_005451a8:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_005451aa:  // call 0x544fc0
    t0 = 0x00544fc0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005451afu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005451af:  // mov edx, dword ptr [esi + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x24u)));
L_005451b2:  // mov dword ptr [esp + 0x18], ebp
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebp);
L_005451b6:  // mov edi, dword ptr [edx + 4]
    edi = (uint32_t)(M32((uint32_t)(edx + 0x4u)));
L_005451b9:  // xor ebp, ebp
    t0 = llog<32>(ebp ^ ebp, f);
    ebp = (uint32_t)(t0);
L_005451bb:  // mov dword ptr [esp + 0x14], 0xc61c4000
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(0xc61c4000u);
L_005451c3:  // mov dword ptr [esp + 0x10], 0x461c4000
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(0x461c4000u);
L_005451cb:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_005451cd:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005451d1:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_005451d3:  // lea ecx, [ebx + eax]
    ecx = (uint32_t)((uint32_t)(ebx + eax));
L_005451d6:  // and ecx, 0x1ff
    t0 = llog<32>(ecx & 0x1ffu, f);
    ecx = (uint32_t)(t0);
L_005451dc:  // mov dword ptr [esp + 0x1c], ecx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(ecx);
L_005451e0:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_005451e4:  // fstp dword ptr [esp + 0x20]
    F32((uint32_t)(esp + 0x20u)) = lf32(ST(0));
    lpop(x);
L_005451e8:  // lea edx, [esi + ebp]
    edx = (uint32_t)((uint32_t)(esi + ebp));
L_005451eb:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_005451ef:  // and edx, 0x1ff
    t0 = llog<32>(edx & 0x1ffu, f);
    edx = (uint32_t)(t0);
L_005451f5:  // mov ecx, 0x6fadc8
    ecx = (uint32_t)(0x6fadc8u);
L_005451fa:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_005451fe:  // lea edx, [esp + 0x2c]
    edx = (uint32_t)((uint32_t)(esp + 0x2cu));
L_00545202:  // fild dword ptr [esp + 0x1c]
    lpush(x, (long double)(int32_t)M32((uint32_t)(esp + 0x1cu)));
L_00545206:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0054520a:  // fstp dword ptr [esp + 0x2c]
    F32((uint32_t)(esp + 0x2cu)) = lf32(ST(0));
    lpop(x);
L_0054520e:  // call 0x47eb80
    t0 = 0x0047eb80u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545213u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545213:  // fcom dword ptr [esp + 0x10]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x10u)));
L_00545217:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00545219:  // test ah, 1
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x1u, f);
L_0054521c:  // je 0x545222
    if (f.zf) goto L_00545222;
L_0054521e:  // fst dword ptr [esp + 0x10]
    F32((uint32_t)(esp + 0x10u)) = lf32(ST(0));
L_00545222:  // fcom dword ptr [esp + 0x14]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x14u)));
L_00545226:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_00545228:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_0054522b:  // jne 0x545233
    if (!f.zf) goto L_00545233;
L_0054522d:  // fstp dword ptr [esp + 0x14]
    F32((uint32_t)(esp + 0x14u)) = lf32(ST(0));
    lpop(x);
L_00545231:  // jmp 0x545235
    goto L_00545235;
L_00545233:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_00545235:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_00545236:  // cmp esi, 8
    t0 = lsub<32>(esi, 0x8u, f);
L_00545239:  // jle 0x5451e8
    if ((f.zf || f.sf != f.of)) goto L_005451e8;
L_0054523b:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0054523c:  // cmp ebx, 8
    t0 = lsub<32>(ebx, 0x8u, f);
L_0054523f:  // jle 0x5451cd
    if ((f.zf || f.sf != f.of)) goto L_005451cd;
L_00545241:  // fld dword ptr [esp + 0x14]
    lpush(x, (long double)F32((uint32_t)(esp + 0x14u)));
L_00545245:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_0054524b:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00545251:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00545255:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_00545259:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_0054525c:  // jge 0x545265
    if ((f.sf == f.of)) goto L_00545265;
L_0054525e:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00545263:  // jmp 0x54526f
    goto L_0054526f;
L_00545265:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00545268:  // jle 0x54526f
    if ((f.zf || f.sf != f.of)) goto L_0054526f;
L_0054526a:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_0054526f:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_00545273:  // fmul dword ptr [0x5dbc4c]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc4cu)));
L_00545279:  // mov byte ptr [edi + 1], al
    M8((uint32_t)(edi + 0x1u)) = (uint8_t)((eax & 0xffu));
L_0054527c:  // fmul dword ptr [0x5dbc48]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5dbc48u)));
L_00545282:  // fistp qword ptr [esp + 0x20]
    M64((uint32_t)(esp + 0x20u)) = (uint64_t)lfist64(ST(0)); lpop(x);
L_00545286:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0054528a:  // cmp eax, -0x7f
    t0 = lsub<32>(eax, 0xffffff81u, f);
L_0054528d:  // jge 0x545296
    if ((f.sf == f.of)) goto L_00545296;
L_0054528f:  // mov eax, 0xffffff81
    eax = (uint32_t)(0xffffff81u);
L_00545294:  // jmp 0x5452a0
    goto L_005452a0;
L_00545296:  // cmp eax, 0x7f
    t0 = lsub<32>(eax, 0x7fu, f);
L_00545299:  // jle 0x5452a0
    if ((f.zf || f.sf != f.of)) goto L_005452a0;
L_0054529b:  // mov eax, 0x7f
    eax = (uint32_t)(0x7fu);
L_005452a0:  // fld dword ptr [esp + 0x10]
    lpush(x, (long double)F32((uint32_t)(esp + 0x10u)));
L_005452a4:  // fadd dword ptr [esp + 0x14]
    ST(0) = (ST(0)) + ((long double)F32((uint32_t)(esp + 0x14u)));
L_005452a8:  // mov byte ptr [edi], al
    M8((uint32_t)(edi)) = (uint8_t)((eax & 0xffu));
L_005452aa:  // mov byte ptr [edi + 0x10], 0x9d
    M8((uint32_t)(edi + 0x10u)) = (uint8_t)(0x9du);
L_005452ae:  // mov dword ptr [edi + 0xc], 0
    M32((uint32_t)(edi + 0xcu)) = (uint32_t)(0x0u);
L_005452b5:  // add ebp, 8
    t0 = ladd<32>(ebp, 0x8u, f);
    ebp = (uint32_t)(t0);
L_005452b8:  // fmul dword ptr [0x5d85ec]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d85ecu)));
L_005452be:  // add edi, 0x14
    t0 = ladd<32>(edi, 0x14u, f);
    edi = (uint32_t)(t0);
L_005452c1:  // cmp ebp, 0x200
    t0 = lsub<32>(ebp, 0x200u, f);
L_005452c7:  // fstp dword ptr [edi - 0x10]
    F32((uint32_t)(edi + 0xfffffff0u)) = lf32(ST(0));
    lpop(x);
L_005452ca:  // jl 0x5451bb
    if ((f.sf != f.of)) goto L_005451bb;
L_005452d0:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_005452d4:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_005452d7:  // cmp eax, 0x200
    t0 = lsub<32>(eax, 0x200u, f);
L_005452dc:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_005452e0:  // jl 0x5451b9
    if ((f.sf != f.of)) goto L_005451b9;
L_005452e6:  // mov ebp, dword ptr [esp + 0x28]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_005452ea:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_005452ec:  // mov dword ptr [esp + 0x18], 0
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(0x0u);
L_005452f4:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_005452f6:  // mov ebx, dword ptr [ebp + 0x24]
    ebx = (uint32_t)(M32((uint32_t)(ebp + 0x24u)));
L_005452f9:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_005452fa:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_005452fc:  // call 0x547a60
    t0 = 0x00547a60u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545301u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545301:  // fcom dword ptr [esp + 0x18]
    lcom(x, ST(0), (long double)F32((uint32_t)(esp + 0x18u)));
L_00545305:  // mov ecx, dword ptr [ebx + 4]
    ecx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_00545308:  // fst dword ptr [esi + ecx + 8]
    F32((uint32_t)(esi + ecx + 0x8u)) = lf32(ST(0));
L_0054530c:  // fnstsw ax
    eax = (eax & 0xffff0000u) | lift_sw(x);
L_0054530e:  // test ah, 0x41
    t0 = llog<8>(((eax >> 8) & 0xffu) & 0x41u, f);
L_00545311:  // jne 0x545319
    if (!f.zf) goto L_00545319;
L_00545313:  // fstp dword ptr [esp + 0x18]
    F32((uint32_t)(esp + 0x18u)) = lf32(ST(0));
    lpop(x);
L_00545317:  // jmp 0x54531b
    goto L_0054531b;
L_00545319:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0054531b:  // add esi, 0x14
    t0 = ladd<32>(esi, 0x14u, f);
    esi = (uint32_t)(t0);
L_0054531e:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0054531f:  // cmp esi, 0x14000
    t0 = lsub<32>(esi, 0x14000u, f);
L_00545325:  // jl 0x5452f9
    if ((f.sf != f.of)) goto L_005452f9;
L_00545327:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_00545329:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0054532b:  // mov edx, dword ptr [ebx + 4]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0x4u)));
L_0054532e:  // fld dword ptr [eax + edx + 8]
    lpush(x, (long double)F32((uint32_t)(eax + edx + 0x8u)));
L_00545332:  // fmul dword ptr [0x5d95b8]
    ST(0) = (ST(0)) * ((long double)F32((uint32_t)(0x5d95b8u)));
L_00545338:  // lea ecx, [eax + edx + 8]
    ecx = (uint32_t)((uint32_t)(eax + edx + 0x8u));
L_0054533c:  // add eax, 0x14
    t0 = ladd<32>(eax, 0x14u, f);
    eax = (uint32_t)(t0);
L_0054533f:  // cmp eax, 0x14000
    t0 = lsub<32>(eax, 0x14000u, f);
L_00545344:  // fstp dword ptr [ecx]
    F32((uint32_t)(ecx)) = lf32(ST(0));
    lpop(x);
L_00545346:  // jl 0x54532b
    if ((f.sf != f.of)) goto L_0054532b;
L_00545348:  // mov eax, dword ptr [ebp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x20u)));
L_0054534b:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0054534c:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0054534f:  // jne 0x545388
    if (!f.zf) goto L_00545388;
L_00545351:  // mov eax, dword ptr [ebp + 0x24]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x24u)));
L_00545354:  // mov esi, 0x1000
    esi = (uint32_t)(0x1000u);
L_00545359:  // mov ecx, dword ptr [eax + 4]
    ecx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0054535c:  // mov eax, dword ptr [eax + 0x38]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x38u)));
L_0054535f:  // mov dl, byte ptr [ecx + 1]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0x1u))) & 0xffu);
L_00545362:  // add ecx, 0x14
    t0 = ladd<32>(ecx, 0x14u, f);
    ecx = (uint32_t)(t0);
L_00545365:  // mov byte ptr [eax + 1], dl
    M8((uint32_t)(eax + 0x1u)) = (uint8_t)((edx & 0xffu));
L_00545368:  // mov dl, byte ptr [ecx - 0x14]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0xffffffecu))) & 0xffu);
L_0054536b:  // mov byte ptr [eax], dl
    M8((uint32_t)(eax)) = (uint8_t)((edx & 0xffu));
L_0054536d:  // mov edx, dword ptr [ecx - 0x10]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xfffffff0u)));
L_00545370:  // mov dword ptr [eax + 4], edx
    M32((uint32_t)(eax + 0x4u)) = (uint32_t)(edx);
L_00545373:  // mov dl, byte ptr [ecx - 4]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ecx + 0xfffffffcu))) & 0xffu);
L_00545376:  // mov byte ptr [eax + 0x10], dl
    M8((uint32_t)(eax + 0x10u)) = (uint8_t)((edx & 0xffu));
L_00545379:  // mov dword ptr [eax + 0xc], edi
    M32((uint32_t)(eax + 0xcu)) = (uint32_t)(edi);
L_0054537c:  // mov edx, dword ptr [ecx - 0xc]
    edx = (uint32_t)(M32((uint32_t)(ecx + 0xfffffff4u)));
L_0054537f:  // mov dword ptr [eax + 8], edx
    M32((uint32_t)(eax + 0x8u)) = (uint32_t)(edx);
L_00545382:  // add eax, 0x14
    t0 = ladd<32>(eax, 0x14u, f);
    eax = (uint32_t)(t0);
L_00545385:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_00545386:  // jne 0x54535f
    if (!f.zf) goto L_0054535f;
L_00545388:  // xor esi, esi
    t0 = llog<32>(esi ^ esi, f);
    esi = (uint32_t)(t0);
L_0054538a:  // mov eax, dword ptr [0x9c64d8]
    eax = (uint32_t)(M32((uint32_t)(0x9c64d8u)));
L_0054538f:  // lea ecx, [esi + eax]
    ecx = (uint32_t)((uint32_t)(esi + eax));
L_00545392:  // call 0x5503d0
    t0 = 0x005503d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x00545397u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_00545397:  // add esi, 8
    t0 = ladd<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_0054539a:  // cmp esi, 0x18
    t0 = lsub<32>(esi, 0x18u, f);
L_0054539d:  // jl 0x54538a
    if ((f.sf != f.of)) goto L_0054538a;
L_0054539f:  // mov ecx, dword ptr [ebp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x30u)));
L_005453a2:  // call 0x48f180
    t0 = 0x0048f180u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005453a7u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005453a7:  // mov ecx, 0x83d3d0
    ecx = (uint32_t)(0x83d3d0u);
L_005453ac:  // call 0x556470
    t0 = 0x00556470u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x005453b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_005453b1:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_005453b5:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_005453b6:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_005453b7:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_005453b8:  // mov dword ptr fs:[0], ecx
    lift_fswr((uint32_t)(0x0u), (uint32_t)(ecx));
L_005453bf:  // add esp, 0x38
    t0 = ladd<32>(esp, 0x38u, f);
    esp = (uint32_t)(t0);
L_005453c2:  // ret 
    c->target = M32(esp); esp += 4u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x00545070, 00545070)
