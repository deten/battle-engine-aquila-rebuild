// lifted from 0052af00 (FUN_0052af00, 2132 bytes, 612 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0052af00(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    lift_x87_in(c, x);
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0052af00;
L_0052af00:  // sub esp, 0xac
    t0 = lsub<32>(esp, 0xacu, f);
    esp = (uint32_t)(t0);
L_0052af06:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052af07:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0052af08:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052af09:  // mov ebp, ecx
    ebp = (uint32_t)(ecx);
L_0052af0b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052af0c:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_0052af11:  // mov ecx, 0x9cc108
    ecx = (uint32_t)(0x9cc108u);
L_0052af16:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052af1bu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052af1b:  // push 0xbf800000
    t0 = 0xbf800000u; esp -= 4; M32(esp) = t0;
L_0052af20:  // mov ecx, 0x9cc0e8
    ecx = (uint32_t)(0x9cc0e8u);
L_0052af25:  // call 0x528ad0
    t0 = 0x00528ad0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052af2au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052af2a:  // mov al, byte ptr [0x662f39]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x662f39u))) & 0xffu);
L_0052af2f:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0052af31:  // je 0x52af3a
    if (f.zf) goto L_0052af3a;
L_0052af33:  // push 0x64c390
    t0 = 0x64c390u; esp -= 4; M32(esp) = t0;
L_0052af38:  // jmp 0x52af3f
    goto L_0052af3f;
L_0052af3a:  // push 0x64c384
    t0 = 0x64c384u; esp -= 4; M32(esp) = t0;
L_0052af3f:  // call 0x5286e0
    t0 = 0x005286e0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052af44u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052af44:  // mov eax, dword ptr [0x89c05c]
    eax = (uint32_t)(M32((uint32_t)(0x89c05cu)));
L_0052af49:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0052af4c:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052af4e:  // setne byte ptr [esp + 0x13]
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(!f.zf);
L_0052af53:  // mov dword ptr [esp + 0x1c], 0
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(0x0u);
L_0052af5b:  // mov ecx, dword ptr [ebp + 0x32e40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x32e40u)));
L_0052af61:  // lea eax, [ecx + ecx*2]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052af64:  // shl eax, 6
    t0 = lshl<32>(eax, 0x6u, f);
    eax = (uint32_t)(t0);
L_0052af67:  // add eax, ecx
    t0 = ladd<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0052af69:  // lea eax, [eax + eax*2]
    eax = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0052af6c:  // lea eax, [eax + eax*8]
    eax = (uint32_t)((uint32_t)(eax + eax * 8u));
L_0052af6f:  // lea esi, [ebp + eax*4 + 4]
    esi = (uint32_t)((uint32_t)(ebp + eax * 4u + 0x4u));
L_0052af73:  // mov dword ptr [esp + 0x20], esi
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(esi);
L_0052af77:  // mov eax, dword ptr [esi + 0x5168]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x5168u)));
L_0052af7d:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0052af80:  // lea ecx, [eax + ecx*8]
    ecx = (uint32_t)((uint32_t)(eax + ecx * 8u));
L_0052af83:  // lea edx, [ecx + ecx*2]
    edx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052af86:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0052af89:  // lea ebx, [esi + eax*8 + 0x460]
    ebx = (uint32_t)((uint32_t)(esi + eax * 8u + 0x460u));
L_0052af90:  // mov dword ptr [esp + 0x24], ebx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(ebx);
L_0052af94:  // mov eax, dword ptr [ebx + 0xf50]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xf50u)));
L_0052af9a:  // lea ecx, [eax + eax*2]
    ecx = (uint32_t)((uint32_t)(eax + eax * 2u));
L_0052af9d:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0052afa1:  // cmp eax, 6
    t0 = lsub<32>(eax, 0x6u, f);
L_0052afa4:  // lea edx, [ebx + ecx*8 + 0x140]
    edx = (uint32_t)((uint32_t)(ebx + ecx * 8u + 0x140u));
L_0052afab:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0052afaf:  // jne 0x52b022
    if (!f.zf) goto L_0052b022;
L_0052afb1:  // push 0x64c370
    t0 = 0x64c370u; esp -= 4; M32(esp) = t0;
L_0052afb6:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052afbb:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052afc0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052afc0:  // mov edi, dword ptr [ebx + 0x13c]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0052afc6:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052afc9:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0052afcb:  // test edi, edi
    t0 = llog<32>(edi & edi, f);
L_0052afcd:  // mov dword ptr [ebx + 0xf58], ecx
    M32((uint32_t)(ebx + 0xf58u)) = (uint32_t)(ecx);
L_0052afd3:  // mov byte ptr [esp + 0x13], cl
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)((ecx & 0xffu));
L_0052afd7:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0052afdb:  // jbe 0x52b016
    if ((f.cf || f.zf)) goto L_0052b016;
L_0052afdd:  // lea edx, [ebx + 0x148]
    edx = (uint32_t)((uint32_t)(ebx + 0x148u));
L_0052afe3:  // mov eax, dword ptr [ebp + 0x330bc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x330bcu)));
L_0052afe9:  // cmp dword ptr [edx - 8], eax
    t0 = lsub<32>(M32((uint32_t)(edx + 0xfffffff8u)), eax, f);
L_0052afec:  // jne 0x52b00e
    if (!f.zf) goto L_0052b00e;
L_0052afee:  // mov eax, dword ptr [edx - 4]
    eax = (uint32_t)(M32((uint32_t)(edx + 0xfffffffcu)));
L_0052aff1:  // cmp eax, dword ptr [ebp + 0x330c0]
    t0 = lsub<32>(eax, M32((uint32_t)(ebp + 0x330c0u)), f);
L_0052aff7:  // jne 0x52b00e
    if (!f.zf) goto L_0052b00e;
L_0052aff9:  // mov eax, dword ptr [edx]
    eax = (uint32_t)(M32((uint32_t)(edx)));
L_0052affb:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0052afff:  // cmp eax, 0x14
    t0 = lsub<32>(eax, 0x14u, f);
L_0052b002:  // je 0x52b01a
    if (f.zf) goto L_0052b01a;
L_0052b004:  // cmp eax, 0x15
    t0 = lsub<32>(eax, 0x15u, f);
L_0052b007:  // je 0x52b01a
    if (f.zf) goto L_0052b01a;
L_0052b009:  // cmp eax, 0x16
    t0 = lsub<32>(eax, 0x16u, f);
L_0052b00c:  // je 0x52b01a
    if (f.zf) goto L_0052b01a;
L_0052b00e:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0052b00f:  // add edx, 0x18
    t0 = ladd<32>(edx, 0x18u, f);
    edx = (uint32_t)(t0);
L_0052b012:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0052b014:  // jb 0x52afe3
    if (f.cf) goto L_0052afe3;
L_0052b016:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052b01a:  // mov dword ptr [ebx + 0xf50], ecx
    M32((uint32_t)(ebx + 0xf50u)) = (uint32_t)(ecx);
L_0052b020:  // jmp 0x52b03a
    goto L_0052b03a;
L_0052b022:  // cmp eax, 7
    t0 = lsub<32>(eax, 0x7u, f);
L_0052b025:  // jne 0x52b03a
    if (!f.zf) goto L_0052b03a;
L_0052b027:  // push 0xa
    t0 = 0xau; esp -= 4; M32(esp) = t0;
L_0052b029:  // push 0xd2
    t0 = 0xd2u; esp -= 4; M32(esp) = t0;
L_0052b02e:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052b030:  // mov ecx, 0x663498
    ecx = (uint32_t)(0x663498u);
L_0052b035:  // call 0x42d080
    t0 = 0x0042d080u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b03au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b03a:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0052b03d:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0052b03f:  // call dword ptr [edx]
    t0 = M32((uint32_t)(edx)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b041u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b041:  // lea edx, [ebp + 0x32e58]
    edx = (uint32_t)((uint32_t)(ebp + 0x32e58u));
L_0052b047:  // mov ecx, 0xe
    ecx = (uint32_t)(0xeu);
L_0052b04c:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052b04e:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0052b050:  // rep stosd dword ptr es:[edi], eax
    while (ecx) { M32(edi) = eax; edi += 4; ecx--; }
L_0052b052:  // mov ecx, dword ptr [ebp + 0x32e44]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x32e44u)));
L_0052b058:  // mov dword ptr [ebp + 0x32e78], ecx
    M32((uint32_t)(ebp + 0x32e78u)) = (uint32_t)(ecx);
L_0052b05e:  // mov eax, dword ptr [0x662db8]
    eax = (uint32_t)(M32((uint32_t)(0x662db8u)));
L_0052b063:  // mov dword ptr [ebp + 0x32e64], eax
    M32((uint32_t)(ebp + 0x32e64u)) = (uint32_t)(eax);
L_0052b069:  // mov eax, dword ptr [ebx + 0xf58]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0xf58u)));
L_0052b06f:  // cmp eax, -1
    t0 = lsub<32>(eax, 0xffffffffu, f);
L_0052b072:  // jne 0x52b079
    if (!f.zf) goto L_0052b079;
L_0052b074:  // mov eax, dword ptr [0x89c08c]
    eax = (uint32_t)(M32((uint32_t)(0x89c08cu)));
L_0052b079:  // mov dword ptr [ebp + 0x32e68], eax
    M32((uint32_t)(ebp + 0x32e68u)) = (uint32_t)(eax);
L_0052b07f:  // mov eax, dword ptr [ebp + 0x330b0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x330b0u)));
L_0052b085:  // mov dword ptr [ebp + 0x32e7c], eax
    M32((uint32_t)(ebp + 0x32e7cu)) = (uint32_t)(eax);
L_0052b08b:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0052b08f:  // mov dword ptr [ebp + 0x32e70], 1
    M32((uint32_t)(ebp + 0x32e70u)) = (uint32_t)(0x1u);
L_0052b099:  // mov edi, dword ptr [eax + 0x14]
    edi = (uint32_t)(M32((uint32_t)(eax + 0x14u)));
L_0052b09c:  // mov dword ptr [ebp + 0x32e80], edi
    M32((uint32_t)(ebp + 0x32e80u)) = (uint32_t)(edi);
L_0052b0a2:  // mov edi, dword ptr [ebp + 0x32e94]
    edi = (uint32_t)(M32((uint32_t)(ebp + 0x32e94u)));
L_0052b0a8:  // mov dword ptr [ebp + 0x32e74], edi
    M32((uint32_t)(ebp + 0x32e74u)) = (uint32_t)(edi);
L_0052b0ae:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052b0b0:  // cmp dword ptr [0x89c09c], edi
    t0 = lsub<32>(M32((uint32_t)(0x89c09cu)), edi, f);
L_0052b0b6:  // je 0x52b0c8
    if (f.zf) goto L_0052b0c8;
L_0052b0b8:  // mov dword ptr [ebp + 0x32e70], 3
    M32((uint32_t)(ebp + 0x32e70u)) = (uint32_t)(0x3u);
L_0052b0c2:  // mov dword ptr [ebp + 0x32e68], edi
    M32((uint32_t)(ebp + 0x32e68u)) = (uint32_t)(edi);
L_0052b0c8:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0052b0ca:  // je 0x52b15e
    if (f.zf) goto L_0052b15e;
L_0052b0d0:  // mov ecx, dword ptr [ebp + 0x33014]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x33014u)));
L_0052b0d6:  // mov eax, dword ptr [ebp + 0x3300c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x3300cu)));
L_0052b0dc:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0052b0de:  // mov dword ptr [ebp + 0x32e8c], edi
    M32((uint32_t)(ebp + 0x32e8cu)) = (uint32_t)(edi);
L_0052b0e4:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_0052b0e6:  // mov edx, dword ptr [ebp + 0x33018]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x33018u)));
L_0052b0ec:  // mov ecx, dword ptr [ebp + 0x33010]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x33010u)));
L_0052b0f2:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0052b0f4:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0052b0f6:  // mov dword ptr [ebp + 0x32e5c], edx
    M32((uint32_t)(ebp + 0x32e5cu)) = (uint32_t)(edx);
L_0052b0fc:  // mov edx, dword ptr [esi + 0x458]
    edx = (uint32_t)(M32((uint32_t)(esi + 0x458u)));
L_0052b102:  // mov dword ptr [ebp + 0x32e60], edx
    M32((uint32_t)(ebp + 0x32e60u)) = (uint32_t)(edx);
L_0052b108:  // mov eax, dword ptr [ebx + 0x13c]
    eax = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0052b10e:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0052b110:  // jbe 0x52b149
    if ((f.cf || f.zf)) goto L_0052b149;
L_0052b112:  // lea eax, [ebx + 0x154]
    eax = (uint32_t)((uint32_t)(ebx + 0x154u));
L_0052b118:  // cmp dword ptr [eax - 0xc], edx
    t0 = lsub<32>(M32((uint32_t)(eax + 0xfffffff4u)), edx, f);
L_0052b11b:  // jne 0x52b13b
    if (!f.zf) goto L_0052b13b;
L_0052b11d:  // mov edi, dword ptr [eax]
    edi = (uint32_t)(M32((uint32_t)(eax)));
L_0052b11f:  // mov dword ptr [ebp + 0x32e80], edi
    M32((uint32_t)(ebp + 0x32e80u)) = (uint32_t)(edi);
L_0052b125:  // mov edi, dword ptr [eax - 0x14]
    edi = (uint32_t)(M32((uint32_t)(eax + 0xffffffecu)));
L_0052b128:  // cmp edi, dword ptr [esi + 0x44c]
    t0 = lsub<32>(edi, M32((uint32_t)(esi + 0x44cu)), f);
L_0052b12e:  // jne 0x52b13b
    if (!f.zf) goto L_0052b13b;
L_0052b130:  // mov edi, dword ptr [eax - 0x10]
    edi = (uint32_t)(M32((uint32_t)(eax + 0xfffffff0u)));
L_0052b133:  // cmp edi, dword ptr [esi + 0x450]
    t0 = lsub<32>(edi, M32((uint32_t)(esi + 0x450u)), f);
L_0052b139:  // je 0x52b149
    if (f.zf) goto L_0052b149;
L_0052b13b:  // mov edi, dword ptr [ebx + 0x13c]
    edi = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0052b141:  // inc ecx
    t0 = linc<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0052b142:  // add eax, 0x18
    t0 = ladd<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_0052b145:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0052b147:  // jb 0x52b118
    if (f.cf) goto L_0052b118;
L_0052b149:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052b14b:  // mov eax, dword ptr [0x82b484]
    eax = (uint32_t)(M32((uint32_t)(0x82b484u)));
L_0052b150:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0052b151:  // je 0x52b1a4
    if (f.zf) goto L_0052b1a4;
L_0052b153:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0052b154:  // je 0x52b198
    if (f.zf) goto L_0052b198;
L_0052b156:  // fld dword ptr [0x5e4af0]
    lpush(x, (long double)F32((uint32_t)(0x5e4af0u)));
L_0052b15c:  // jmp 0x52b1aa
    goto L_0052b1aa;
L_0052b15e:  // cmp dword ptr [0x66306c], edi
    t0 = lsub<32>(M32((uint32_t)(0x66306cu)), edi, f);
L_0052b164:  // jne 0x52b175
    if (!f.zf) goto L_0052b175;
L_0052b166:  // mov ecx, dword ptr [0x89c07c]
    ecx = (uint32_t)(M32((uint32_t)(0x89c07cu)));
L_0052b16c:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0052b16e:  // mov ecx, 0x80000000
    ecx = (uint32_t)(0x80000000u);
L_0052b173:  // je 0x52b17a
    if (f.zf) goto L_0052b17a;
L_0052b175:  // mov ecx, 1
    ecx = (uint32_t)(0x1u);
L_0052b17a:  // mov dword ptr [ebp + 0x32e8c], ecx
    M32((uint32_t)(ebp + 0x32e8cu)) = (uint32_t)(ecx);
L_0052b180:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b182:  // mov dword ptr [edx], ecx
    M32((uint32_t)(edx)) = (uint32_t)(ecx);
L_0052b184:  // mov edx, dword ptr [eax + 4]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0052b187:  // mov dword ptr [ebp + 0x32e5c], edx
    M32((uint32_t)(ebp + 0x32e5cu)) = (uint32_t)(edx);
L_0052b18d:  // mov eax, dword ptr [eax + 8]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0052b190:  // mov dword ptr [ebp + 0x32e60], eax
    M32((uint32_t)(ebp + 0x32e60u)) = (uint32_t)(eax);
L_0052b196:  // jmp 0x52b14b
    goto L_0052b14b;
L_0052b198:  // mov dword ptr [ebp + 0x32e90], 0x3f800000
    M32((uint32_t)(ebp + 0x32e90u)) = (uint32_t)(0x3f800000u);
L_0052b1a2:  // jmp 0x52b1d8
    goto L_0052b1d8;
L_0052b1a4:  // fld dword ptr [0x5e4aec]
    lpush(x, (long double)F32((uint32_t)(0x5e4aecu)));
L_0052b1aa:  // mov ecx, dword ptr [ebp + 0x32e5c]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x32e5cu)));
L_0052b1b0:  // mov edx, dword ptr [ebp + 0x32e58]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x32e58u)));
L_0052b1b6:  // mov dword ptr [esp + 0x28], ecx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(ecx);
L_0052b1ba:  // mov dword ptr [esp + 0x2c], edi
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(edi);
L_0052b1be:  // fild qword ptr [esp + 0x28]
    lpush(x, (long double)(int64_t)M64((uint32_t)(esp + 0x28u)));
L_0052b1c2:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_0052b1c6:  // mov dword ptr [esp + 0x34], edi
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edi);
L_0052b1ca:  // fidiv dword ptr [esp + 0x30]
    ST(0) = (ST(0)) / ((long double)(int32_t)M32((uint32_t)(esp + 0x30u)));
L_0052b1ce:  // fmul st(1)
    ST(0) = (ST(0)) * (ST(1));
L_0052b1d0:  // fstp dword ptr [ebp + 0x32e90]
    F32((uint32_t)(ebp + 0x32e90u)) = lf32(ST(0));
    lpop(x);
L_0052b1d6:  // fstp st(0)
    ST(0) = ST(0);
    lpop(x);
L_0052b1d8:  // mov al, byte ptr [esp + 0x13]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x13u))) & 0xffu);
L_0052b1dc:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0052b1de:  // je 0x52b1f6
    if (f.zf) goto L_0052b1f6;
L_0052b1e0:  // cmp dword ptr [ebp + 0x32e68], edi
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x32e68u)), edi, f);
L_0052b1e6:  // jne 0x52b1f6
    if (!f.zf) goto L_0052b1f6;
L_0052b1e8:  // mov eax, dword ptr [ebp + 0x32e84]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e84u)));
L_0052b1ee:  // or al, 1
    t0 = llog<8>((eax & 0xffu) | 0x1u, f);
    eax = (eax & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0052b1f0:  // mov dword ptr [ebp + 0x32e84], eax
    M32((uint32_t)(ebp + 0x32e84u)) = (uint32_t)(eax);
L_0052b1f6:  // push 0x64c35c
    t0 = 0x64c35cu; esp -= 4; M32(esp) = t0;
L_0052b1fb:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b200:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b205u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b205:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b208:  // lea esi, [esp + 0x38]
    esi = (uint32_t)((uint32_t)(esp + 0x38u));
L_0052b20c:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052b20e:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052b210:  // mov al, byte ptr [edi + ebp + 0x32e58]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(edi + ebp + 0x32e58u))) & 0xffu);
L_0052b217:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b218:  // push 0x63e3dc
    t0 = 0x63e3dcu; esp -= 4; M32(esp) = t0;
L_0052b21d:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052b21e:  // call 0x55de9b
    t0 = 0x0055de9bu; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b223u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b223:  // mov ecx, edi
    ecx = (uint32_t)(edi);
L_0052b225:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052b228:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0052b22b:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0052b22e:  // cmp cl, 3
    t0 = lsub<8>((ecx & 0xffu), 0x3u, f);
L_0052b231:  // jne 0x52b237
    if (!f.zf) goto L_0052b237;
L_0052b233:  // mov byte ptr [esi], 0x20
    M8((uint32_t)(esi)) = (uint8_t)(0x20u);
L_0052b236:  // inc esi
    t0 = linc<32>(esi, f);
    esi = (uint32_t)(t0);
L_0052b237:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0052b238:  // cmp edi, 0x38
    t0 = lsub<32>(edi, 0x38u, f);
L_0052b23b:  // jb 0x52b20e
    if (f.cf) goto L_0052b20e;
L_0052b23d:  // lea edx, [esp + 0x38]
    edx = (uint32_t)((uint32_t)(esp + 0x38u));
L_0052b241:  // mov byte ptr [esi], 0
    M8((uint32_t)(esi)) = (uint8_t)(0x0u);
L_0052b244:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b245:  // push 0x6245d8
    t0 = 0x6245d8u; esp -= 4; M32(esp) = t0;
L_0052b24a:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b24f:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b254u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b254:  // mov eax, dword ptr [0x89c04c]
    eax = (uint32_t)(M32((uint32_t)(0x89c04cu)));
L_0052b259:  // xor edi, edi
    t0 = llog<32>(edi ^ edi, f);
    edi = (uint32_t)(t0);
L_0052b25b:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052b25e:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0052b260:  // je 0x52b26e
    if (f.zf) goto L_0052b26e;
L_0052b262:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b264:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b265:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b268u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b268:  // mov dword ptr [0x89c04c], edi
    M32((uint32_t)(0x89c04cu)) = (uint32_t)(edi);
L_0052b26e:  // mov al, byte ptr [esp + 0xc0]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0xc0u))) & 0xffu);
L_0052b275:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0052b277:  // je 0x52b296
    if (f.zf) goto L_0052b296;
L_0052b279:  // mov eax, dword ptr [ebp + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32ea0u)));
L_0052b27f:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0052b281:  // je 0x52b296
    if (f.zf) goto L_0052b296;
L_0052b283:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b285:  // lea ecx, [ebp + 0x32e58]
    ecx = (uint32_t)((uint32_t)(ebp + 0x32e58u));
L_0052b28b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b28c:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b28d:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b290u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b290:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0052b294:  // jmp 0x52b2dd
    goto L_0052b2dd;
L_0052b296:  // lea ecx, [ebp + 0x32ea0]
    ecx = (uint32_t)((uint32_t)(ebp + 0x32ea0u));
L_0052b29c:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0052b2a0:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b2a1:  // lea ecx, [ebp + 0x32e58]
    ecx = (uint32_t)((uint32_t)(ebp + 0x32e58u));
L_0052b2a7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b2a8:  // mov cl, byte ptr [0x662f3d]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x662f3du))) & 0xffu);
L_0052b2ae:  // neg cl
    t0 = lneg<8>((ecx & 0xffu), f);
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(t0) & 0xffu);
L_0052b2b0:  // sbb ecx, ecx
    t0 = lsbb<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_0052b2b2:  // mov eax, dword ptr [ebp + 0x32e9c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e9cu)));
L_0052b2b8:  // and ecx, 0x100
    t0 = llog<32>(ecx & 0x100u, f);
    ecx = (uint32_t)(t0);
L_0052b2be:  // or ecx, dword ptr [esi + 0xc]
    t0 = llog<32>(ecx | M32((uint32_t)(esi + 0xcu)), f);
    ecx = (uint32_t)(t0);
L_0052b2c1:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b2c3:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b2c4:  // mov ecx, dword ptr [ebp + 0x32e98]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x32e98u)));
L_0052b2ca:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b2cb:  // mov ecx, dword ptr [ebx]
    ecx = (uint32_t)(M32((uint32_t)(ebx)));
L_0052b2cd:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b2ce:  // mov ecx, dword ptr [ebp + 0x32e40]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x32e40u)));
L_0052b2d4:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b2d5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b2d6:  // call dword ptr [edx + 0x40]
    t0 = M32((uint32_t)(edx + 0x40u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b2d9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b2d9:  // mov dword ptr [esp + 0x14], eax
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(eax);
L_0052b2dd:  // mov edx, dword ptr [esp + 0x1c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0052b2e1:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0052b2e2:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0052b2e4:  // mov dword ptr [esp + 0x1c], edx
    M32((uint32_t)(esp + 0x1cu)) = (uint32_t)(edx);
L_0052b2e8:  // jge 0x52b407
    if ((f.sf == f.of)) goto L_0052b407;
L_0052b2ee:  // cmp eax, 0x88760868
    t0 = lsub<32>(eax, 0x88760868u, f);
L_0052b2f3:  // jne 0x52b314
    if (!f.zf) goto L_0052b314;
L_0052b2f5:  // push 0x64c344
    t0 = 0x64c344u; esp -= 4; M32(esp) = t0;
L_0052b2fa:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b2ff:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b304u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b304:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b307:  // push 0x64
    t0 = 0x64u; esp -= 4; M32(esp) = t0;
L_0052b309:  // call dword ptr [0x5d8154]
    t0 = M32((uint32_t)(0x5d8154u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b30fu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b30f:  // jmp 0x52af5b
    goto L_0052af5b;
L_0052b314:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b315:  // call 0x5be628
    t0 = 0x005be628u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b31au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b31a:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b31b:  // push 0x64c334
    t0 = 0x64c334u; esp -= 4; M32(esp) = t0;
L_0052b320:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b325:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b32au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b32a:  // mov al, byte ptr [esp + 0x1f]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(esp + 0x1fu))) & 0xffu);
L_0052b32e:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052b331:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0052b333:  // je 0x52b351
    if (f.zf) goto L_0052b351;
L_0052b335:  // push 0x64c30c
    t0 = 0x64c30cu; esp -= 4; M32(esp) = t0;
L_0052b33a:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b33f:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b344u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b344:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b347:  // mov byte ptr [esp + 0x13], 0
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x0u);
L_0052b34c:  // jmp 0x52af5b
    goto L_0052af5b;
L_0052b351:  // cmp dword ptr [ebp + 0x32e68], edi
    t0 = lsub<32>(M32((uint32_t)(ebp + 0x32e68u)), edi, f);
L_0052b357:  // je 0x52b380
    if (f.zf) goto L_0052b380;
L_0052b359:  // push 0x64c2e8
    t0 = 0x64c2e8u; esp -= 4; M32(esp) = t0;
L_0052b35e:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b363:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b368u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b368:  // push 0xe5
    t0 = 0xe5u; esp -= 4; M32(esp) = t0;
L_0052b36d:  // call 0x4d1710
    t0 = 0x004d1710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b372u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b372:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052b375:  // mov dword ptr [ebx + 0xf58], edi
    M32((uint32_t)(ebx + 0xf58u)) = (uint32_t)(edi);
L_0052b37b:  // jmp 0x52af5b
    goto L_0052af5b;
L_0052b380:  // mov edx, dword ptr [ebx + 0xf50]
    edx = (uint32_t)(M32((uint32_t)(ebx + 0xf50u)));
L_0052b386:  // mov esi, dword ptr [ebx + 0x13c]
    esi = (uint32_t)(M32((uint32_t)(ebx + 0x13cu)));
L_0052b38c:  // mov dword ptr [esp + 0x18], edx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(edx);
L_0052b390:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0052b392:  // cmp esi, edi
    t0 = lsub<32>(esi, edi, f);
L_0052b394:  // jbe 0x52b3cd
    if ((f.cf || f.zf)) goto L_0052b3cd;
L_0052b396:  // lea ecx, [ebx + 0x148]
    ecx = (uint32_t)((uint32_t)(ebx + 0x148u));
L_0052b39c:  // mov eax, dword ptr [ebp + 0x330bc]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x330bcu)));
L_0052b3a2:  // cmp dword ptr [ecx - 8], eax
    t0 = lsub<32>(M32((uint32_t)(ecx + 0xfffffff8u)), eax, f);
L_0052b3a5:  // jne 0x52b3c5
    if (!f.zf) goto L_0052b3c5;
L_0052b3a7:  // mov eax, dword ptr [ecx - 4]
    eax = (uint32_t)(M32((uint32_t)(ecx + 0xfffffffcu)));
L_0052b3aa:  // cmp eax, dword ptr [ebp + 0x330c0]
    t0 = lsub<32>(eax, M32((uint32_t)(ebp + 0x330c0u)), f);
L_0052b3b0:  // jne 0x52b3c5
    if (!f.zf) goto L_0052b3c5;
L_0052b3b2:  // mov eax, dword ptr [ecx]
    eax = (uint32_t)(M32((uint32_t)(ecx)));
L_0052b3b4:  // mov edi, edx
    edi = (uint32_t)(edx);
L_0052b3b6:  // cmp eax, 0x14
    t0 = lsub<32>(eax, 0x14u, f);
L_0052b3b9:  // je 0x52b3cf
    if (f.zf) goto L_0052b3cf;
L_0052b3bb:  // cmp eax, 0x15
    t0 = lsub<32>(eax, 0x15u, f);
L_0052b3be:  // je 0x52b3cf
    if (f.zf) goto L_0052b3cf;
L_0052b3c0:  // cmp eax, 0x16
    t0 = lsub<32>(eax, 0x16u, f);
L_0052b3c3:  // je 0x52b3cf
    if (f.zf) goto L_0052b3cf;
L_0052b3c5:  // inc edx
    t0 = linc<32>(edx, f);
    edx = (uint32_t)(t0);
L_0052b3c6:  // add ecx, 0x18
    t0 = ladd<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_0052b3c9:  // cmp edx, esi
    t0 = lsub<32>(edx, esi, f);
L_0052b3cb:  // jb 0x52b39c
    if (f.cf) goto L_0052b39c;
L_0052b3cd:  // mov edx, edi
    edx = (uint32_t)(edi);
L_0052b3cf:  // mov eax, dword ptr [esp + 0x18]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0052b3d3:  // mov dword ptr [ebx + 0xf50], edx
    M32((uint32_t)(ebx + 0xf50u)) = (uint32_t)(edx);
L_0052b3d9:  // cmp edx, eax
    t0 = lsub<32>(edx, eax, f);
L_0052b3db:  // je 0x52b6ba
    if (f.zf) goto L_0052b6ba;
L_0052b3e1:  // push 0x64c2c8
    t0 = 0x64c2c8u; esp -= 4; M32(esp) = t0;
L_0052b3e6:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b3eb:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b3f0u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b3f0:  // push 0xe6
    t0 = 0xe6u; esp -= 4; M32(esp) = t0;
L_0052b3f5:  // call 0x4d1710
    t0 = 0x004d1710u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b3fau); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b3fa:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052b3fd:  // mov byte ptr [esp + 0x13], 1
    M8((uint32_t)(esp + 0x13u)) = (uint8_t)(0x1u);
L_0052b402:  // jmp 0x52af5b
    goto L_0052af5b;
L_0052b407:  // mov al, byte ptr [0x662f3d]
    eax = (eax & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(0x662f3du))) & 0xffu);
L_0052b40c:  // test al, al
    t0 = llog<8>((eax & 0xffu) & (eax & 0xffu), f);
L_0052b40e:  // je 0x52b426
    if (f.zf) goto L_0052b426;
L_0052b410:  // mov eax, dword ptr [ebp + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32ea0u)));
L_0052b416:  // push 0x89c04c
    t0 = 0x89c04cu; esp -= 4; M32(esp) = t0;
L_0052b41b:  // push 5
    t0 = 0x5u; esp -= 4; M32(esp) = t0;
L_0052b41d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b41e:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b420:  // call dword ptr [ecx + 0x1d8]
    t0 = M32((uint32_t)(ecx + 0x1d8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b426u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b426:  // push 0x64c2bc
    t0 = 0x64c2bcu; esp -= 4; M32(esp) = t0;
L_0052b42b:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b430:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b435u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b435:  // mov eax, dword ptr [ebp + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32ea0u)));
L_0052b43b:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b43e:  // mov edx, dword ptr [eax]
    edx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b440:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b441:  // call dword ptr [edx + 0x10]
    t0 = M32((uint32_t)(edx + 0x10u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b444u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b444:  // shr eax, 0x14
    t0 = lshr<32>(eax, 0x14u, f);
    eax = (uint32_t)(t0);
L_0052b447:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b448:  // push 0x64c29c
    t0 = 0x64c29cu; esp -= 4; M32(esp) = t0;
L_0052b44d:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b452:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b457u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b457:  // mov eax, dword ptr [ebp + 0x32e44]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e44u)));
L_0052b45d:  // add esp, 0xc
    t0 = ladd<32>(esp, 0xcu, f);
    esp = (uint32_t)(t0);
L_0052b460:  // cmp eax, edi
    t0 = lsub<32>(eax, edi, f);
L_0052b462:  // je 0x52b495
    if (f.zf) goto L_0052b495;
L_0052b464:  // mov eax, dword ptr [ebp + 0x33000]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x33000u)));
L_0052b46a:  // mov edx, dword ptr [ebp + 0x33008]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x33008u)));
L_0052b470:  // mov ecx, dword ptr [ebp + 0x32ffc]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x32ffcu)));
L_0052b476:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0052b478:  // push 0x40
    t0 = 0x40u; esp -= 4; M32(esp) = t0;
L_0052b47a:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b47b:  // mov edx, dword ptr [ebp + 0x33004]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x33004u)));
L_0052b481:  // sub edx, ecx
    t0 = lsub<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0052b483:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b484:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b485:  // mov eax, dword ptr [ebp + 0x32e94]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e94u)));
L_0052b48b:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b48c:  // push -2
    t0 = 0xfffffffeu; esp -= 4; M32(esp) = t0;
L_0052b48e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b48f:  // call dword ptr [0x5d82c8]
    t0 = M32((uint32_t)(0x5d82c8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b495u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b495:  // mov eax, dword ptr [ebp + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32ea0u)));
L_0052b49b:  // lea edx, [ebp + 0x32ea4]
    edx = (uint32_t)((uint32_t)(ebp + 0x32ea4u));
L_0052b4a1:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b4a2:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b4a3:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b4a5:  // call dword ptr [ecx + 0x1c]
    t0 = M32((uint32_t)(ecx + 0x1cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b4a8u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b4a8:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0052b4ac:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0052b4af:  // mov dword ptr [ebp + 0x32ff4], eax
    M32((uint32_t)(ebp + 0x32ff4u)) = (uint32_t)(eax);
L_0052b4b5:  // mov eax, dword ptr [ebx]
    eax = (uint32_t)(M32((uint32_t)(ebx)));
L_0052b4b7:  // cmp eax, 2
    t0 = lsub<32>(eax, 0x2u, f);
L_0052b4ba:  // jne 0x52b4ca
    if (!f.zf) goto L_0052b4ca;
L_0052b4bc:  // lea ecx, [ebp + 0x33028]
    ecx = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b4c2:  // push 0x64c1e8
    t0 = 0x64c1e8u; esp -= 4; M32(esp) = t0;
L_0052b4c7:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b4c8:  // jmp 0x52b4ee
    goto L_0052b4ee;
L_0052b4ca:  // cmp eax, 1
    t0 = lsub<32>(eax, 0x1u, f);
L_0052b4cd:  // jne 0x52b4dd
    if (!f.zf) goto L_0052b4dd;
L_0052b4cf:  // lea edx, [ebp + 0x33028]
    edx = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b4d5:  // push 0x64c1ec
    t0 = 0x64c1ecu; esp -= 4; M32(esp) = t0;
L_0052b4da:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b4db:  // jmp 0x52b4ee
    goto L_0052b4ee;
L_0052b4dd:  // cmp eax, 3
    t0 = lsub<32>(eax, 0x3u, f);
L_0052b4e0:  // jne 0x52b4f4
    if (!f.zf) goto L_0052b4f4;
L_0052b4e2:  // lea eax, [ebp + 0x33028]
    eax = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b4e8:  // push 0x64c08c
    t0 = 0x64c08cu; esp -= 4; M32(esp) = t0;
L_0052b4ed:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b4ee:  // call dword ptr [0x5d8114]
    t0 = M32((uint32_t)(0x5d8114u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b4f4u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b4f4:  // mov eax, dword ptr [esi + 0xc]
    eax = (uint32_t)(M32((uint32_t)(esi + 0xcu)));
L_0052b4f7:  // mov esi, dword ptr [0x5d811c]
    esi = (uint32_t)(M32((uint32_t)(0x5d811cu)));
L_0052b4fd:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0052b4ff:  // and ecx, 0x40
    t0 = llog<32>(ecx & 0x40u, f);
    ecx = (uint32_t)(t0);
L_0052b502:  // je 0x52b522
    if (f.zf) goto L_0052b522;
L_0052b504:  // test al, 0x10
    t0 = llog<8>((eax & 0xffu) & 0x10u, f);
L_0052b506:  // je 0x52b522
    if (f.zf) goto L_0052b522;
L_0052b508:  // cmp dword ptr [ebx], 1
    t0 = lsub<32>(M32((uint32_t)(ebx)), 0x1u, f);
L_0052b50b:  // jne 0x52b514
    if (!f.zf) goto L_0052b514;
L_0052b50d:  // push 0x64c28c
    t0 = 0x64c28cu; esp -= 4; M32(esp) = t0;
L_0052b512:  // jmp 0x52b56e
    goto L_0052b56e;
L_0052b514:  // lea edx, [ebp + 0x33028]
    edx = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b51a:  // push 0x64c274
    t0 = 0x64c274u; esp -= 4; M32(esp) = t0;
L_0052b51f:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b520:  // jmp 0x52b575
    goto L_0052b575;
L_0052b522:  // cmp ecx, edi
    t0 = lsub<32>(ecx, edi, f);
L_0052b524:  // je 0x52b540
    if (f.zf) goto L_0052b540;
L_0052b526:  // cmp dword ptr [ebx], 1
    t0 = lsub<32>(M32((uint32_t)(ebx)), 0x1u, f);
L_0052b529:  // jne 0x52b539
    if (!f.zf) goto L_0052b539;
L_0052b52b:  // lea eax, [ebp + 0x33028]
    eax = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b531:  // push 0x64c268
    t0 = 0x64c268u; esp -= 4; M32(esp) = t0;
L_0052b536:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b537:  // jmp 0x52b575
    goto L_0052b575;
L_0052b539:  // push 0x64c254
    t0 = 0x64c254u; esp -= 4; M32(esp) = t0;
L_0052b53e:  // jmp 0x52b56e
    goto L_0052b56e;
L_0052b540:  // test al, 0x80
    t0 = llog<8>((eax & 0xffu) & 0x80u, f);
L_0052b542:  // je 0x52b565
    if (f.zf) goto L_0052b565;
L_0052b544:  // cmp dword ptr [ebx], 1
    t0 = lsub<32>(M32((uint32_t)(ebx)), 0x1u, f);
L_0052b547:  // jne 0x52b557
    if (!f.zf) goto L_0052b557;
L_0052b549:  // lea edx, [ebp + 0x33028]
    edx = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b54f:  // push 0x64c248
    t0 = 0x64c248u; esp -= 4; M32(esp) = t0;
L_0052b554:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b555:  // jmp 0x52b575
    goto L_0052b575;
L_0052b557:  // lea eax, [ebp + 0x33028]
    eax = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b55d:  // push 0x64c230
    t0 = 0x64c230u; esp -= 4; M32(esp) = t0;
L_0052b562:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b563:  // jmp 0x52b575
    goto L_0052b575;
L_0052b565:  // test al, 0x20
    t0 = llog<8>((eax & 0xffu) & 0x20u, f);
L_0052b567:  // je 0x52b577
    if (f.zf) goto L_0052b577;
L_0052b569:  // push 0x64c224
    t0 = 0x64c224u; esp -= 4; M32(esp) = t0;
L_0052b56e:  // lea ecx, [ebp + 0x33028]
    ecx = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b574:  // push ecx
    t0 = ecx; esp -= 4; M32(esp) = t0;
L_0052b575:  // call esi
    t0 = esi; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b577u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b577:  // cmp dword ptr [ebx], 1
    t0 = lsub<32>(M32((uint32_t)(ebx)), 0x1u, f);
L_0052b57a:  // jne 0x52b5a1
    if (!f.zf) goto L_0052b5a1;
L_0052b57c:  // lea edi, [ebp + 0x33028]
    edi = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b582:  // push 0x6291c4
    t0 = 0x6291c4u; esp -= 4; M32(esp) = t0;
L_0052b587:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052b588:  // call esi
    t0 = esi; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b58au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b58a:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0052b58e:  // add edx, 0x200
    t0 = ladd<32>(edx, 0x200u, f);
    edx = (uint32_t)(t0);
L_0052b594:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b595:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b59au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b59a:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0052b59d:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b59e:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0052b59f:  // call esi
    t0 = esi; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b5a1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b5a1:  // push 0x622d9c
    t0 = 0x622d9cu; esp -= 4; M32(esp) = t0;
L_0052b5a6:  // lea ebx, [ebp + 0x33028]
    ebx = (uint32_t)((uint32_t)(ebp + 0x33028u));
L_0052b5ac:  // call 0x4f7c70
    t0 = 0x004f7c70u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b5b1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b5b1:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0052b5b3:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0052b5b6:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052b5b8:  // add esp, 4
    t0 = ladd<32>(esp, 0x4u, f);
    esp = (uint32_t)(t0);
L_0052b5bb:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0052b5bd:  // not ecx
    ecx = (uint32_t)(~ecx);
L_0052b5bf:  // sub edi, ecx
    t0 = lsub<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0052b5c1:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0052b5c2:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0052b5c4:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0052b5c6:  // mov edi, ebx
    edi = (uint32_t)(ebx);
L_0052b5c8:  // or ecx, 0xffffffff
    t0 = llog<32>(ecx | 0xffffffffu, f);
    ecx = (uint32_t)(t0);
L_0052b5cb:  // repne scasb al, byte ptr es:[edi]
    while (ecx) { ecx--; t0 = M8(edi); edi += 1; lsub<8>(eax, t0, f); if (f.zf) break; }
L_0052b5cd:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0052b5cf:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0052b5d0:  // shr ecx, 2
    t0 = lshr<32>(ecx, 0x2u, f);
    ecx = (uint32_t)(t0);
L_0052b5d3:  // rep movsd dword ptr es:[edi], dword ptr [esi]
    while (ecx) { M32(edi) = M32(esi); esi += 4; edi += 4; ecx--; }
L_0052b5d5:  // mov ecx, edx
    ecx = (uint32_t)(edx);
L_0052b5d7:  // and ecx, 3
    t0 = llog<32>(ecx & 0x3u, f);
    ecx = (uint32_t)(t0);
L_0052b5da:  // rep movsb byte ptr es:[edi], byte ptr [esi]
    while (ecx) { M8(edi) = M8(esi); esi += 1; edi += 1; ecx--; }
L_0052b5dc:  // call dword ptr [0x5d814c]
    t0 = M32((uint32_t)(0x5d814cu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b5e2u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b5e2:  // mov eax, dword ptr [ebp + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32ea0u)));
L_0052b5e8:  // lea edx, [esp + 0x14]
    edx = (uint32_t)((uint32_t)(esp + 0x14u));
L_0052b5ec:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b5ed:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052b5ef:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b5f1:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052b5f3:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052b5f5:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b5f6:  // call dword ptr [ecx + 0x48]
    t0 = M32((uint32_t)(ecx + 0x48u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b5f9u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b5f9:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052b5fd:  // lea edx, [ebp + 0x32fd4]
    edx = (uint32_t)((uint32_t)(ebp + 0x32fd4u));
L_0052b603:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b604:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b605:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b607:  // call dword ptr [ecx + 0x30]
    t0 = M32((uint32_t)(ecx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b60au); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b60a:  // mov eax, dword ptr [esp + 0x14]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052b60e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b60f:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b611:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b614u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b614:  // mov eax, dword ptr [ebp + 0x330c4]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x330c4u)));
L_0052b61a:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b61c:  // je 0x52b655
    if (f.zf) goto L_0052b655;
L_0052b61e:  // mov eax, dword ptr [ebp + 0x32e44]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32e44u)));
L_0052b624:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b626:  // jne 0x52b655
    if (!f.zf) goto L_0052b655;
L_0052b628:  // mov edx, dword ptr [ebp + 0x32e94]
    edx = (uint32_t)(M32((uint32_t)(ebp + 0x32e94u)));
L_0052b62e:  // push -0xc
    t0 = 0xfffffff4u; esp -= 4; M32(esp) = t0;
L_0052b630:  // push edx
    t0 = edx; esp -= 4; M32(esp) = t0;
L_0052b631:  // call dword ptr [0x5d82cc]
    t0 = M32((uint32_t)(0x5d82ccu)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b637u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b637:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b638:  // mov eax, dword ptr [ebp + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32ea0u)));
L_0052b63e:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b63f:  // call 0x52c8d0
    t0 = 0x0052c8d0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b644u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b644:  // mov eax, dword ptr [ebp + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32ea0u)));
L_0052b64a:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b64d:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b64f:  // push 1
    t0 = 0x1u; esp -= 4; M32(esp) = t0;
L_0052b651:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b652:  // call dword ptr [ecx + 0x30]
    t0 = M32((uint32_t)(ecx + 0x30u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b655u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b655:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0052b658:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0052b65a:  // call dword ptr [edx + 0x20]
    t0 = M32((uint32_t)(edx + 0x20u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b65du); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b65d:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0052b65f:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0052b661:  // jl 0x52b68e
    if ((f.sf != f.of)) goto L_0052b68e;
L_0052b663:  // push 0x64c214
    t0 = 0x64c214u; esp -= 4; M32(esp) = t0;
L_0052b668:  // push 0x66eb90
    t0 = 0x66eb90u; esp -= 4; M32(esp) = t0;
L_0052b66d:  // mov dword ptr [ebp + 0x32e48], 1
    M32((uint32_t)(ebp + 0x32e48u)) = (uint32_t)(0x1u);
L_0052b677:  // call 0x441740
    t0 = 0x00441740u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b67cu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b67c:  // add esp, 8
    t0 = ladd<32>(esp, 0x8u, f);
    esp = (uint32_t)(t0);
L_0052b67f:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052b681:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052b682:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052b683:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052b684:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052b685:  // add esp, 0xac
    t0 = ladd<32>(esp, 0xacu, f);
    esp = (uint32_t)(t0);
L_0052b68b:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
L_0052b68e:  // mov eax, dword ptr [ebp]
    eax = (uint32_t)(M32((uint32_t)(ebp)));
L_0052b691:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0052b693:  // call dword ptr [eax + 0x14]
    t0 = M32((uint32_t)(eax + 0x14u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b696u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b696:  // mov edx, dword ptr [ebp]
    edx = (uint32_t)(M32((uint32_t)(ebp)));
L_0052b699:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0052b69b:  // call dword ptr [edx + 0x18]
    t0 = M32((uint32_t)(edx + 0x18u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b69eu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b69e:  // mov eax, dword ptr [ebp + 0x32ea0]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x32ea0u)));
L_0052b6a4:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0052b6a6:  // je 0x52b6be
    if (f.zf) goto L_0052b6be;
L_0052b6a8:  // mov ecx, dword ptr [eax]
    ecx = (uint32_t)(M32((uint32_t)(eax)));
L_0052b6aa:  // push eax
    t0 = eax; esp -= 4; M32(esp) = t0;
L_0052b6ab:  // call dword ptr [ecx + 8]
    t0 = M32((uint32_t)(ecx + 0x8u)); c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b6aeu); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b6ae:  // mov dword ptr [ebp + 0x32ea0], 0
    M32((uint32_t)(ebp + 0x32ea0u)) = (uint32_t)(0x0u);
L_0052b6b8:  // jmp 0x52b6be
    goto L_0052b6be;
L_0052b6ba:  // mov esi, dword ptr [esp + 0x14]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0052b6be:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0052b6c2:  // cmp dword ptr [edx], 1
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x1u, f);
L_0052b6c5:  // jne 0x52b745
    if (!f.zf) goto L_0052b745;
L_0052b6c7:  // push 2
    t0 = 0x2u; esp -= 4; M32(esp) = t0;
L_0052b6c9:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0052b6ca:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0052b6cc:  // call 0x52c4f0
    t0 = 0x0052c4f0u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b6d1u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b6d1:  // mov dword ptr [ebp + 0x32e40], 0
    M32((uint32_t)(ebp + 0x32e40u)) = (uint32_t)(0x0u);
L_0052b6db:  // mov ecx, dword ptr [ebp + 0x460]
    ecx = (uint32_t)(M32((uint32_t)(ebp + 0x460u)));
L_0052b6e1:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0052b6e3:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0052b6e5:  // jbe 0x52b71e
    if ((f.cf || f.zf)) goto L_0052b71e;
L_0052b6e7:  // lea edx, [ebp + 0x464]
    edx = (uint32_t)((uint32_t)(ebp + 0x464u));
L_0052b6ed:  // cmp dword ptr [edx], 2
    t0 = lsub<32>(M32((uint32_t)(edx)), 0x2u, f);
L_0052b6f0:  // je 0x52b6ff
    if (f.zf) goto L_0052b6ff;
L_0052b6f2:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0052b6f3:  // add edx, 0xf68
    t0 = ladd<32>(edx, 0xf68u, f);
    edx = (uint32_t)(t0);
L_0052b6f9:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0052b6fb:  // jb 0x52b6ed
    if (f.cf) goto L_0052b6ed;
L_0052b6fd:  // jmp 0x52b71e
    goto L_0052b71e;
L_0052b6ff:  // lea ecx, [eax + eax*4]
    ecx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0052b702:  // mov dword ptr [ebp + 0x516c], eax
    M32((uint32_t)(ebp + 0x516cu)) = (uint32_t)(eax);
L_0052b708:  // lea ecx, [eax + ecx*8]
    ecx = (uint32_t)((uint32_t)(eax + ecx * 8u));
L_0052b70b:  // lea edx, [ecx + ecx*2]
    edx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052b70e:  // lea eax, [eax + edx*4]
    eax = (uint32_t)((uint32_t)(eax + edx * 4u));
L_0052b711:  // mov ecx, dword ptr [ebp + eax*8 + 0x13b8]
    ecx = (uint32_t)(M32((uint32_t)(ebp + eax * 8u + 0x13b8u)));
L_0052b718:  // mov dword ptr [ebp + 0x32e44], ecx
    M32((uint32_t)(ebp + 0x32e44u)) = (uint32_t)(ecx);
L_0052b71e:  // mov eax, dword ptr [ebp + 0x516c]
    eax = (uint32_t)(M32((uint32_t)(ebp + 0x516cu)));
L_0052b724:  // lea edx, [eax + eax*4]
    edx = (uint32_t)((uint32_t)(eax + eax * 4u));
L_0052b727:  // lea ecx, [eax + edx*8]
    ecx = (uint32_t)((uint32_t)(eax + edx * 8u));
L_0052b72a:  // lea ecx, [ecx + ecx*2]
    ecx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0052b72d:  // lea edx, [eax + ecx*4]
    edx = (uint32_t)((uint32_t)(eax + ecx * 4u));
L_0052b730:  // cmp dword ptr [ebp + edx*8 + 0x464], 2
    t0 = lsub<32>(M32((uint32_t)(ebp + edx * 8u + 0x464u)), 0x2u, f);
L_0052b738:  // jne 0x52b745
    if (!f.zf) goto L_0052b745;
L_0052b73a:  // push 0
    t0 = 0x0u; esp -= 4; M32(esp) = t0;
L_0052b73c:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0052b73e:  // call 0x52af00
    t0 = 0x0052af00u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); lift_call(c, t0, 0x0052b743u); eax = c->r[0]; ecx = c->r[1]; edx = c->r[2]; ebx = c->r[3]; esp = c->r[4]; ebp = c->r[5]; esi = c->r[6]; edi = c->r[7]; lift_x87_in(c, x);
L_0052b743:  // mov esi, eax
    esi = (uint32_t)(eax);
L_0052b745:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0052b747:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0052b748:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0052b749:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0052b74a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0052b74b:  // add esp, 0xac
    t0 = ladd<32>(esp, 0xacu, f);
    esp = (uint32_t)(t0);
L_0052b751:  // ret 4
    c->target = M32(esp); esp += 8u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; lift_x87_out(c, x); return;
}

LIFT_FUNCTION(0x0052af00, 0052af00)
