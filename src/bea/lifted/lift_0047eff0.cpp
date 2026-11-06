// lifted from 0047eff0 (FUN_0047eff0, 1876 bytes, 542 instructions) by tools/asmlift.py
// Instruction by instruction: see src/bea/lifted/lift_rt.h for the model.
#include "bea/lifted/lift_rt.h"

extern "C" void lift_b_0047eff0(LiftCtx* c)
{
    uint32_t eax = c->r[0], ecx = c->r[1], edx = c->r[2], ebx = c->r[3], esp = c->r[4], ebp = c->r[5], esi = c->r[6], edi = c->r[7];
    LF f = {0, 0, 0, 0};
    LX87 x;
    (void)x;
    uint32_t t0 = 0, t1 = 0;
    long double v0 = 0, v1 = 0;
    (void)t0; (void)t1; (void)v0; (void)v1;
    goto L_0047eff0;
L_0047eff0:  // sub esp, 0x80
    t0 = lsub<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_0047eff6:  // mov eax, dword ptr [esp + 0x88]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_0047effd:  // push ebx
    t0 = ebx; esp -= 4; M32(esp) = t0;
L_0047effe:  // mov dword ptr [esp + 0x10], ecx
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ecx);
L_0047f002:  // push ebp
    t0 = ebp; esp -= 4; M32(esp) = t0;
L_0047f003:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0047f00a:  // mov eax, dword ptr [eax + 0x18]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x18u)));
L_0047f00d:  // mov ebp, 1
    ebp = (uint32_t)(0x1u);
L_0047f012:  // mov dword ptr [esp + 0x70], eax
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(eax);
L_0047f016:  // shl ebp, cl
    t0 = lshl<32>(ebp, (ecx & 0xffu), f);
    ebp = (uint32_t)(t0);
L_0047f018:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047f01a:  // push esi
    t0 = esi; esp -= 4; M32(esp) = t0;
L_0047f01b:  // push edi
    t0 = edi; esp -= 4; M32(esp) = t0;
L_0047f01c:  // mov dword ptr [esp + 0x30], 0
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(0x0u);
L_0047f024:  // imul eax, ebp
    t0 = limul32(eax, ebp, f);
    eax = (uint32_t)(t0);
L_0047f027:  // sub ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0047f029:  // mov dword ptr [esp + 0x10], ebp
    M32((uint32_t)(esp + 0x10u)) = (uint32_t)(ebp);
L_0047f02d:  // mov dword ptr [esp + 0x80], ecx
    M32((uint32_t)(esp + 0x80u)) = (uint32_t)(ecx);
L_0047f034:  // mov ecx, dword ptr [esp + 0xa4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa4u)));
L_0047f03b:  // test cl, 1
    t0 = llog<8>((ecx & 0xffu) & 0x1u, f);
L_0047f03e:  // mov dword ptr [esp + 0x68], eax
    M32((uint32_t)(esp + 0x68u)) = (uint32_t)(eax);
L_0047f042:  // je 0x47f04f
    if (f.zf) goto L_0047f04f;
L_0047f044:  // lea edx, [ebp*8]
    edx = (uint32_t)((uint32_t)(ebp * 8u));
L_0047f04b:  // mov dword ptr [esp + 0x30], edx
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(edx);
L_0047f04f:  // test cl, 0x40
    t0 = llog<8>((ecx & 0xffu) & 0x40u, f);
L_0047f052:  // je 0x47f05f
    if (f.zf) goto L_0047f05f;
L_0047f054:  // mov edx, dword ptr [esp + 0x30]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0047f058:  // lea eax, [edx + eax*8]
    eax = (uint32_t)((uint32_t)(edx + eax * 8u));
L_0047f05b:  // mov dword ptr [esp + 0x30], eax
    M32((uint32_t)(esp + 0x30u)) = (uint32_t)(eax);
L_0047f05f:  // mov edi, ecx
    edi = (uint32_t)(ecx);
L_0047f061:  // and edi, 0x8000003f
    t0 = llog<32>(edi & 0x8000003fu, f);
    edi = (uint32_t)(t0);
L_0047f067:  // jns 0x47f06e
    if (!f.sf) goto L_0047f06e;
L_0047f069:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0047f06a:  // or edi, 0xffffffc0
    t0 = llog<32>(edi | 0xffffffc0u, f);
    edi = (uint32_t)(t0);
L_0047f06d:  // inc edi
    t0 = linc<32>(edi, f);
    edi = (uint32_t)(t0);
L_0047f06e:  // mov eax, ecx
    eax = (uint32_t)(ecx);
L_0047f070:  // mov esi, dword ptr [esp + 0xb0]
    esi = (uint32_t)(M32((uint32_t)(esp + 0xb0u)));
L_0047f077:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0047f078:  // and edx, 0x3f
    t0 = llog<32>(edx & 0x3fu, f);
    edx = (uint32_t)(t0);
L_0047f07b:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047f07d:  // mov edx, dword ptr [esp + 0xa0]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_0047f084:  // imul edx, esi
    t0 = limul32(edx, esi, f);
    edx = (uint32_t)(t0);
L_0047f087:  // mov ebx, eax
    ebx = (uint32_t)(eax);
L_0047f089:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0047f090:  // add edx, eax
    t0 = ladd<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0047f092:  // mov eax, dword ptr [esp + 0x9c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x9cu)));
L_0047f099:  // imul edx, ebp
    t0 = limul32(edx, ebp, f);
    edx = (uint32_t)(t0);
L_0047f09c:  // sar ebx, 6
    t0 = lsar<32>(ebx, 0x6u, f);
    ebx = (uint32_t)(t0);
L_0047f09f:  // lea edx, [eax + edx*2]
    edx = (uint32_t)((uint32_t)(eax + edx * 2u));
L_0047f0a2:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0047f0a9:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0047f0ad:  // mov edx, dword ptr [esp + 0xb4]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_0047f0b4:  // sub edx, eax
    t0 = lsub<32>(edx, eax, f);
    edx = (uint32_t)(t0);
L_0047f0b6:  // mov eax, dword ptr [esp + 0xa0]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_0047f0bd:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047f0bf:  // mov dword ptr [esp + 0x74], edx
    M32((uint32_t)(esp + 0x74u)) = (uint32_t)(edx);
L_0047f0c3:  // imul eax, ebp
    t0 = limul32(eax, ebp, f);
    eax = (uint32_t)(t0);
L_0047f0c6:  // mov edx, dword ptr [esp + 0xac]
    edx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0047f0cd:  // shl eax, 1
    t0 = lshl<32>(eax, 0x1u, f);
    eax = (uint32_t)(t0);
L_0047f0cf:  // mov dword ptr [esp + 0x8c], eax
    M32((uint32_t)(esp + 0x8cu)) = (uint32_t)(eax);
L_0047f0d6:  // lea eax, [esi + esi*8]
    eax = (uint32_t)((uint32_t)(esi + esi * 8u));
L_0047f0d9:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047f0db:  // mov edx, dword ptr [0x89bd80]
    edx = (uint32_t)(M32((uint32_t)(0x89bd80u)));
L_0047f0e1:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_0047f0e5:  // lea eax, [ecx + ecx*4]
    eax = (uint32_t)((uint32_t)(ecx + ecx * 4u));
L_0047f0e8:  // shl edi, 3
    t0 = lshl<32>(edi, 0x3u, f);
    edi = (uint32_t)(t0);
L_0047f0eb:  // lea eax, [edx + eax*4]
    eax = (uint32_t)((uint32_t)(edx + eax * 4u));
L_0047f0ee:  // mov edx, ecx
    edx = (uint32_t)(ecx);
L_0047f0f0:  // and edx, 0x3f
    t0 = llog<32>(edx & 0x3fu, f);
    edx = (uint32_t)(t0);
L_0047f0f3:  // mov dword ptr [esp + 0x64], eax
    M32((uint32_t)(esp + 0x64u)) = (uint32_t)(eax);
L_0047f0f7:  // mov eax, dword ptr [eax + 4]
    eax = (uint32_t)(M32((uint32_t)(eax + 0x4u)));
L_0047f0fa:  // sar ecx, 6
    t0 = lsar<32>(ecx, 0x6u, f);
    ecx = (uint32_t)(t0);
L_0047f0fd:  // shl edx, 6
    t0 = lshl<32>(edx, 0x6u, f);
    edx = (uint32_t)(t0);
L_0047f100:  // and ecx, 0x3f
    t0 = llog<32>(ecx & 0x3fu, f);
    ecx = (uint32_t)(t0);
L_0047f103:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_0047f107:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0047f109:  // lea ecx, [ebp*8]
    ecx = (uint32_t)((uint32_t)(ebp * 8u));
L_0047f110:  // shl ebx, 3
    t0 = lshl<32>(ebx, 0x3u, f);
    ebx = (uint32_t)(t0);
L_0047f113:  // mov eax, dword ptr [edx*4 + 0x9c8028]
    eax = (uint32_t)(M32((uint32_t)(edx * 4u + 0x9c8028u)));
L_0047f11a:  // mov dword ptr [esp + 0x84], eax
    M32((uint32_t)(esp + 0x84u)) = (uint32_t)(eax);
L_0047f121:  // mov eax, 0x80
    eax = (uint32_t)(0x80u);
L_0047f126:  // cdq 
    edx = (uint32_t)((int32_t)eax >> 31);
L_0047f127:  // idiv ecx
    { int64_t n = (int64_t)(((uint64_t)edx << 32) | eax); int32_t d = (int32_t)ecx; eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); }
L_0047f129:  // mov dword ptr [esp + 0x88], eax
    M32((uint32_t)(esp + 0x88u)) = (uint32_t)(eax);
L_0047f130:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0047f132:  // shl eax, 4
    t0 = lshl<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0047f135:  // mov dword ptr [esp + 0x48], eax
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(eax);
L_0047f139:  // mov eax, dword ptr [esp + 0xb8]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xb8u)));
L_0047f140:  // cmp esi, eax
    t0 = lsub<32>(esi, eax, f);
L_0047f142:  // jge 0x47f737
    if ((f.sf == f.of)) goto L_0047f737;
L_0047f148:  // mov ecx, dword ptr [esp + 0xac]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0047f14f:  // mov edx, dword ptr [esp + 0x6c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0047f153:  // shl ecx, 4
    t0 = lshl<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0047f156:  // mov dword ptr [esp + 0x70], ecx
    M32((uint32_t)(esp + 0x70u)) = (uint32_t)(ecx);
L_0047f15a:  // mov ecx, dword ptr [esp + 0x68]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0047f15e:  // imul ecx, esi
    t0 = limul32(ecx, esi, f);
    ecx = (uint32_t)(t0);
L_0047f161:  // mov dword ptr [esp + 0x4c], ecx
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(ecx);
L_0047f165:  // lea ecx, [esi + esi*8]
    ecx = (uint32_t)((uint32_t)(esi + esi * 8u));
L_0047f168:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0047f16a:  // add ebx, esi
    t0 = ladd<32>(ebx, esi, f);
    ebx = (uint32_t)(t0);
L_0047f16c:  // mov dword ptr [esp + 0x50], ecx
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(ecx);
L_0047f170:  // mov ecx, dword ptr [0x89bd84]
    ecx = (uint32_t)(M32((uint32_t)(0x89bd84u)));
L_0047f176:  // shl ebx, 9
    t0 = lshl<32>(ebx, 0x9u, f);
    ebx = (uint32_t)(t0);
L_0047f179:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_0047f17b:  // add ebx, edi
    t0 = ladd<32>(ebx, edi, f);
    ebx = (uint32_t)(t0);
L_0047f17d:  // sub eax, esi
    t0 = lsub<32>(eax, esi, f);
    eax = (uint32_t)(t0);
L_0047f17f:  // mov dword ptr [esp + 0x6c], eax
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(eax);
L_0047f183:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0047f18a:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_0047f18e:  // mov ecx, dword ptr [esp + 0x70]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x70u)));
L_0047f192:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0047f196:  // mov dword ptr [esp + 0x44], ecx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ecx);
L_0047f19a:  // mov ecx, dword ptr [esp + 0xb4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_0047f1a1:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0047f1a3:  // jge 0x47f6e9
    if ((f.sf == f.of)) goto L_0047f6e9;
L_0047f1a9:  // mov edi, ebp
    edi = (uint32_t)(ebp);
L_0047f1ab:  // mov edx, dword ptr [esp + 0x4c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0047f1af:  // imul edi, eax
    t0 = limul32(edi, eax, f);
    edi = (uint32_t)(t0);
L_0047f1b2:  // mov ecx, dword ptr [esp + 0x30]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x30u)));
L_0047f1b6:  // mov eax, dword ptr [esp + 0x54]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x54u)));
L_0047f1ba:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_0047f1bc:  // mov edx, dword ptr [esp + 0x74]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x74u)));
L_0047f1c0:  // add edi, ecx
    t0 = ladd<32>(edi, ecx, f);
    edi = (uint32_t)(t0);
L_0047f1c2:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047f1c4:  // mov dword ptr [esp + 0x24], edi
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edi);
L_0047f1c8:  // mov dword ptr [esp + 0x54], eax
    M32((uint32_t)(esp + 0x54u)) = (uint32_t)(eax);
L_0047f1cc:  // jmp 0x47f1d6
    goto L_0047f1d6;
L_0047f1ce:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0047f1d2:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0047f1d6:  // mov eax, dword ptr [esp + 0x98]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_0047f1dd:  // mov esi, edi
    esi = (uint32_t)(edi);
L_0047f1df:  // mov edx, dword ptr [eax + 8]
    edx = (uint32_t)(M32((uint32_t)(eax + 0x8u)));
L_0047f1e2:  // mov ebp, dword ptr [eax]
    ebp = (uint32_t)(M32((uint32_t)(eax)));
L_0047f1e4:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0047f1e8:  // add esi, ebp
    t0 = ladd<32>(esi, ebp, f);
    esi = (uint32_t)(t0);
L_0047f1ea:  // add eax, 0x28
    t0 = ladd<32>(eax, 0x28u, f);
    eax = (uint32_t)(t0);
L_0047f1ed:  // mov ebp, eax
    ebp = (uint32_t)(eax);
L_0047f1ef:  // mov eax, dword ptr [esp + 0x10]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f1f3:  // test eax, eax
    t0 = llog<32>(eax & eax, f);
L_0047f1f5:  // je 0x47f241
    if (f.zf) goto L_0047f241;
L_0047f1f7:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_0047f1fb:  // cmp dword ptr [esp + 0x10], 0
    t0 = lsub<32>(M32((uint32_t)(esp + 0x10u)), 0x0u, f);
L_0047f200:  // mov eax, esi
    eax = (uint32_t)(esi);
L_0047f202:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047f204:  // jle 0x47f223
    if ((f.zf || f.sf != f.of)) goto L_0047f223;
L_0047f206:  // mov edi, dword ptr [esp + 0x10]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f20a:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0047f20c:  // add ecx, 4
    t0 = ladd<32>(ecx, 0x4u, f);
    ecx = (uint32_t)(t0);
L_0047f20f:  // mov bl, byte ptr [eax]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax))) & 0xffu);
L_0047f211:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047f212:  // dec edi
    t0 = ldec<32>(edi, f);
    edi = (uint32_t)(t0);
L_0047f213:  // mov ebx, dword ptr [edx + ebx*4]
    ebx = (uint32_t)(M32((uint32_t)(edx + ebx * 4u)));
L_0047f216:  // mov dword ptr [ecx - 4], ebx
    M32((uint32_t)(ecx + 0xfffffffcu)) = (uint32_t)(ebx);
L_0047f219:  // jne 0x47f20a
    if (!f.zf) goto L_0047f20a;
L_0047f21b:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0047f21f:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0047f223:  // mov eax, dword ptr [esp + 0x78]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x78u)));
L_0047f227:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f22b:  // add esi, eax
    t0 = ladd<32>(esi, eax, f);
    esi = (uint32_t)(t0);
L_0047f22d:  // lea eax, [ecx*4]
    eax = (uint32_t)((uint32_t)(ecx * 4u));
L_0047f234:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_0047f236:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047f23a:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047f23b:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_0047f23f:  // jne 0x47f1fb
    if (!f.zf) goto L_0047f1fb;
L_0047f241:  // mov edx, dword ptr [esp + 0x20]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0047f245:  // mov eax, dword ptr [esp + 0x50]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0047f249:  // mov dword ptr [esp + 0x60], 0
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(0x0u);
L_0047f251:  // lea ecx, [eax + edx]
    ecx = (uint32_t)((uint32_t)(eax + edx));
L_0047f254:  // mov eax, dword ptr [esp + 0x64]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0047f258:  // mov dword ptr [esp + 0x3c], ecx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ecx);
L_0047f25c:  // cmp dword ptr [eax], 0
    t0 = lsub<32>(M32((uint32_t)(eax)), 0x0u, f);
L_0047f25f:  // jle 0x47f467
    if ((f.zf || f.sf != f.of)) goto L_0047f467;
L_0047f265:  // add eax, 8
    t0 = ladd<32>(eax, 0x8u, f);
    eax = (uint32_t)(t0);
L_0047f268:  // mov dword ptr [esp + 0x40], eax
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(eax);
L_0047f26c:  // jmp 0x47f276
    goto L_0047f276;
L_0047f26e:  // mov edi, dword ptr [esp + 0x24]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0047f272:  // mov ecx, dword ptr [esp + 0x3c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0047f276:  // mov eax, dword ptr [esp + 0x40]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047f27a:  // mov esi, dword ptr [esp + 0x98]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x98u)));
L_0047f281:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0047f283:  // mov dx, word ptr [eax]
    edx = (edx & 0xffff0000u) | ((uint32_t)(M16((uint32_t)(eax))) & 0xffffu);
L_0047f286:  // mov eax, dword ptr [esi + 8]
    eax = (uint32_t)(M32((uint32_t)(esi + 0x8u)));
L_0047f289:  // movsx ebx, byte ptr [ecx + 1]
    ebx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(ecx + 0x1u))));
L_0047f28d:  // mov ebp, edx
    ebp = (uint32_t)(edx);
L_0047f28f:  // shl ebp, 0xa
    t0 = lshl<32>(ebp, 0xau, f);
    ebp = (uint32_t)(t0);
L_0047f292:  // add ebp, eax
    t0 = ladd<32>(ebp, eax, f);
    ebp = (uint32_t)(t0);
L_0047f294:  // movsx eax, byte ptr [ecx]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(ecx))));
L_0047f297:  // shl eax, 0x18
    t0 = lshl<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_0047f29a:  // shl ebx, 0x18
    t0 = lshl<32>(ebx, 0x18u, f);
    ebx = (uint32_t)(t0);
L_0047f29d:  // mov dword ptr [esp + 0x34], eax
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(eax);
L_0047f2a1:  // sub ebx, eax
    t0 = lsub<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0047f2a3:  // movsx eax, byte ptr [ecx + 9]
    eax = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(ecx + 0x9u))));
L_0047f2a7:  // movsx ecx, byte ptr [ecx + 0xa]
    ecx = (uint32_t)((uint32_t)(int32_t)(int8_t)(M8((uint32_t)(ecx + 0xau))));
L_0047f2ab:  // shl eax, 0x18
    t0 = lshl<32>(eax, 0x18u, f);
    eax = (uint32_t)(t0);
L_0047f2ae:  // shl ecx, 0x18
    t0 = lshl<32>(ecx, 0x18u, f);
    ecx = (uint32_t)(t0);
L_0047f2b1:  // sub ecx, eax
    t0 = lsub<32>(ecx, eax, f);
    ecx = (uint32_t)(t0);
L_0047f2b3:  // mov dword ptr [esp + 0x58], ebp
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ebp);
L_0047f2b7:  // sub ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_0047f2b9:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_0047f2bd:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_0047f2c4:  // sar ebx, cl
    t0 = lsar<32>(ebx, (ecx & 0xffu), f);
    ebx = (uint32_t)(t0);
L_0047f2c6:  // mov ecx, dword ptr [esp + 0x34]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0047f2ca:  // sub eax, ecx
    t0 = lsub<32>(eax, ecx, f);
    eax = (uint32_t)(t0);
L_0047f2cc:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_0047f2d3:  // sar eax, cl
    t0 = lsar<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_0047f2d5:  // mov dword ptr [esp + 0x18], ebx
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(ebx);
L_0047f2d9:  // mov ebx, dword ptr [esp + 0x38]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0047f2dd:  // add ecx, ecx
    t0 = ladd<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_0047f2df:  // sar ebx, cl
    t0 = lsar<32>(ebx, (ecx & 0xffu), f);
    ebx = (uint32_t)(t0);
L_0047f2e1:  // mov ecx, dword ptr [esi]
    ecx = (uint32_t)(M32((uint32_t)(esi)));
L_0047f2e3:  // mov dword ptr [esp + 0x7c], eax
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(eax);
L_0047f2e7:  // mov dword ptr [esp + 0x38], ebx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ebx);
L_0047f2eb:  // mov ebx, dword ptr [esi + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esi + 0x10u)));
L_0047f2ee:  // imul ebx, edx
    t0 = limul32(ebx, edx, f);
    ebx = (uint32_t)(t0);
L_0047f2f1:  // add ebx, edi
    t0 = ladd<32>(ebx, edi, f);
    ebx = (uint32_t)(t0);
L_0047f2f3:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_0047f2f5:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0047f2f9:  // lea edi, [ecx + 0x28]
    edi = (uint32_t)((uint32_t)(ecx + 0x28u));
L_0047f2fc:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f300:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0047f302:  // je 0x47f436
    if (f.zf) goto L_0047f436;
L_0047f308:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0047f30c:  // jmp 0x47f312
    goto L_0047f312;
L_0047f30e:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f312:  // mov edx, dword ptr [esp + 0x34]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0047f316:  // mov esi, dword ptr [esp + 0x7c]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_0047f31a:  // mov eax, edx
    eax = (uint32_t)(edx);
L_0047f31c:  // add edx, esi
    t0 = ladd<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_0047f31e:  // mov dword ptr [esp + 0x34], edx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(edx);
L_0047f322:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0047f326:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0047f328:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047f32a:  // mov dl, byte ptr [ebx]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx))) & 0xffu);
L_0047f32c:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_0047f332:  // mov edx, dword ptr [ebp + edx*4]
    edx = (uint32_t)(M32((uint32_t)(ebp + edx * 4u)));
L_0047f336:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0047f338:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0047f33a:  // mov esi, edx
    esi = (uint32_t)(edx);
L_0047f33c:  // sub esi, ecx
    t0 = lsub<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_0047f33e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0047f340:  // jle 0x47f3f1
    if ((f.zf || f.sf != f.of)) goto L_0047f3f1;
L_0047f346:  // cmp esi, 0x20000000
    t0 = lsub<32>(esi, 0x20000000u, f);
L_0047f34c:  // jge 0x47f3bd
    if ((f.sf == f.of)) goto L_0047f3bd;
L_0047f34e:  // test esi, esi
    t0 = llog<32>(esi & esi, f);
L_0047f350:  // jl 0x47f3f1
    if ((f.sf != f.of)) goto L_0047f3f1;
L_0047f356:  // sar esi, 0x1a
    t0 = lsar<32>(esi, 0x1au, f);
    esi = (uint32_t)(t0);
L_0047f359:  // mov ebp, 7
    ebp = (uint32_t)(0x7u);
L_0047f35e:  // and ecx, 0xf8f8ff
    t0 = llog<32>(ecx & 0xf8f8ffu, f);
    ecx = (uint32_t)(t0);
L_0047f364:  // sub ebp, esi
    t0 = lsub<32>(ebp, esi, f);
    ebp = (uint32_t)(t0);
L_0047f366:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0047f369:  // imul ecx, ebp
    t0 = limul32(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0047f36c:  // mov ebp, edx
    ebp = (uint32_t)(edx);
L_0047f36e:  // and edx, 0xff000000
    t0 = llog<32>(edx & 0xff000000u, f);
    edx = (uint32_t)(t0);
L_0047f374:  // and ebp, 0xf8f8ff
    t0 = llog<32>(ebp & 0xf8f8ffu, f);
    ebp = (uint32_t)(t0);
L_0047f37a:  // imul ebp, esi
    t0 = limul32(ebp, esi, f);
    ebp = (uint32_t)(t0);
L_0047f37d:  // add ecx, ebp
    t0 = ladd<32>(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0047f37f:  // sar ecx, 3
    t0 = lsar<32>(ecx, 0x3u, f);
    ecx = (uint32_t)(t0);
L_0047f382:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0047f384:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0047f388:  // mov dword ptr [edi - 4], ecx
    M32((uint32_t)(edi + 0xfffffffcu)) = (uint32_t)(ecx);
L_0047f38b:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047f38f:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0047f390:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047f392:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0047f393:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0047f397:  // je 0x47f40c
    if (f.zf) goto L_0047f40c;
L_0047f399:  // mov ebp, dword ptr [esp + 0x58]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0047f39d:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0047f39f:  // mov dl, byte ptr [ebx]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx))) & 0xffu);
L_0047f3a1:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047f3a3:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_0047f3a9:  // mov edx, dword ptr [ebp + edx*4]
    edx = (uint32_t)(M32((uint32_t)(ebp + edx * 4u)));
L_0047f3ad:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0047f3af:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0047f3b1:  // mov esi, edx
    esi = (uint32_t)(edx);
L_0047f3b3:  // sub esi, ecx
    t0 = lsub<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_0047f3b5:  // cmp esi, 0x20000000
    t0 = lsub<32>(esi, 0x20000000u, f);
L_0047f3bb:  // jl 0x47f34e
    if ((f.sf != f.of)) goto L_0047f34e;
L_0047f3bd:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047f3c1:  // mov dword ptr [edi], edx
    M32((uint32_t)(edi)) = (uint32_t)(edx);
L_0047f3c3:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0047f3c7:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0047f3ca:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0047f3cb:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047f3cd:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0047f3ce:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0047f3d2:  // je 0x47f410
    if (f.zf) goto L_0047f410;
L_0047f3d4:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0047f3d6:  // mov ecx, eax
    ecx = (uint32_t)(eax);
L_0047f3d8:  // mov dl, byte ptr [ebx]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx))) & 0xffu);
L_0047f3da:  // and ecx, 0xff000000
    t0 = llog<32>(ecx & 0xff000000u, f);
    ecx = (uint32_t)(t0);
L_0047f3e0:  // mov edx, dword ptr [ebp + edx*4]
    edx = (uint32_t)(M32((uint32_t)(ebp + edx * 4u)));
L_0047f3e4:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0047f3e6:  // mov ecx, dword ptr [edi]
    ecx = (uint32_t)(M32((uint32_t)(edi)));
L_0047f3e8:  // mov esi, edx
    esi = (uint32_t)(edx);
L_0047f3ea:  // sub esi, ecx
    t0 = lsub<32>(esi, ecx, f);
    esi = (uint32_t)(t0);
L_0047f3ec:  // jmp 0x47f346
    goto L_0047f346;
L_0047f3f1:  // mov edx, dword ptr [esp + 0x18]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0047f3f5:  // mov ecx, dword ptr [esp + 0x14]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047f3f9:  // add edi, 4
    t0 = ladd<32>(edi, 0x4u, f);
    edi = (uint32_t)(t0);
L_0047f3fc:  // inc ebx
    t0 = linc<32>(ebx, f);
    ebx = (uint32_t)(t0);
L_0047f3fd:  // add eax, edx
    t0 = ladd<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047f3ff:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0047f400:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0047f404:  // jne 0x47f326
    if (!f.zf) goto L_0047f326;
L_0047f40a:  // jmp 0x47f410
    goto L_0047f410;
L_0047f40c:  // mov ebp, dword ptr [esp + 0x58]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0047f410:  // mov edx, dword ptr [esp + 0x38]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0047f414:  // mov esi, dword ptr [esp + 0x18]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0047f418:  // mov ecx, dword ptr [esp + 0x80]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x80u)));
L_0047f41f:  // mov eax, dword ptr [esp + 0x5c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0047f423:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0047f425:  // add ebx, ecx
    t0 = ladd<32>(ebx, ecx, f);
    ebx = (uint32_t)(t0);
L_0047f427:  // dec eax
    t0 = ldec<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047f428:  // mov dword ptr [esp + 0x18], esi
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(esi);
L_0047f42c:  // mov dword ptr [esp + 0x5c], eax
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(eax);
L_0047f430:  // jne 0x47f30e
    if (!f.zf) goto L_0047f30e;
L_0047f436:  // mov ebx, dword ptr [esp + 0x3c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0047f43a:  // mov ecx, dword ptr [esp + 0x64]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x64u)));
L_0047f43e:  // mov eax, dword ptr [esp + 0x60]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0047f442:  // mov esi, dword ptr [esp + 0x40]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047f446:  // mov edx, dword ptr [ecx]
    edx = (uint32_t)(M32((uint32_t)(ecx)));
L_0047f448:  // add ebx, 0x51
    t0 = ladd<32>(ebx, 0x51u, f);
    ebx = (uint32_t)(t0);
L_0047f44b:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047f44c:  // add esi, 2
    t0 = ladd<32>(esi, 0x2u, f);
    esi = (uint32_t)(t0);
L_0047f44f:  // cmp eax, edx
    t0 = lsub<32>(eax, edx, f);
L_0047f451:  // mov dword ptr [esp + 0x3c], ebx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(ebx);
L_0047f455:  // mov dword ptr [esp + 0x60], eax
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(eax);
L_0047f459:  // mov dword ptr [esp + 0x40], esi
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(esi);
L_0047f45d:  // jl 0x47f26e
    if ((f.sf != f.of)) goto L_0047f26e;
L_0047f463:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0047f467:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0047f46b:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0047f46d:  // mov edi, eax
    edi = (uint32_t)(eax);
L_0047f46f:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0047f471:  // mov dh, byte ptr [ebx + eax]
    edx = (edx & 0xffff00ffu) | (((uint32_t)(M8((uint32_t)(ebx + eax))) & 0xffu) << 8);
L_0047f474:  // xor eax, eax
    t0 = llog<32>(eax ^ eax, f);
    eax = (uint32_t)(t0);
L_0047f476:  // mov cl, byte ptr [ebx + edi + 1]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + edi + 0x1u))) & 0xffu);
L_0047f47a:  // mov ah, byte ptr [ebx + edi + 0x200]
    eax = (eax & 0xffff00ffu) | (((uint32_t)(M8((uint32_t)(ebx + edi + 0x200u))) & 0xffu) << 8);
L_0047f481:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047f483:  // xor ecx, ecx
    t0 = llog<32>(ecx ^ ecx, f);
    ecx = (uint32_t)(t0);
L_0047f485:  // mov cl, byte ptr [ebx + edi + 0x201]
    ecx = (ecx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(ebx + edi + 0x201u))) & 0xffu);
L_0047f48c:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f490:  // mov ebx, ecx
    ebx = (uint32_t)(ecx);
L_0047f492:  // mov ecx, dword ptr [esp + 0x94]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x94u)));
L_0047f499:  // shl esi, 8
    t0 = lshl<32>(esi, 0x8u, f);
    esi = (uint32_t)(t0);
L_0047f49c:  // shl ebx, 8
    t0 = lshl<32>(ebx, 0x8u, f);
    ebx = (uint32_t)(t0);
L_0047f49f:  // sub esi, edx
    t0 = lsub<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0047f4a1:  // sub ebx, eax
    t0 = lsub<32>(ebx, eax, f);
    ebx = (uint32_t)(t0);
L_0047f4a3:  // sub eax, edx
    t0 = lsub<32>(eax, edx, f);
    eax = (uint32_t)(t0);
L_0047f4a5:  // sub ebx, esi
    t0 = lsub<32>(ebx, esi, f);
    ebx = (uint32_t)(t0);
L_0047f4a7:  // sar esi, cl
    t0 = lsar<32>(esi, (ecx & 0xffu), f);
    esi = (uint32_t)(t0);
L_0047f4a9:  // sar eax, cl
    t0 = lsar<32>(eax, (ecx & 0xffu), f);
    eax = (uint32_t)(t0);
L_0047f4ab:  // add ecx, ecx
    t0 = ladd<32>(ecx, ecx, f);
    ecx = (uint32_t)(t0);
L_0047f4ad:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0047f4b1:  // sar ebx, cl
    t0 = lsar<32>(ebx, (ecx & 0xffu), f);
    ebx = (uint32_t)(t0);
L_0047f4b3:  // mov ecx, dword ptr [esp + 0xa0]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xa0u)));
L_0047f4ba:  // mov dword ptr [esp + 0x18], eax
    M32((uint32_t)(esp + 0x18u)) = (uint32_t)(eax);
L_0047f4be:  // mov eax, dword ptr [esp + 0x1c]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0047f4c2:  // sub ecx, ebp
    t0 = lsub<32>(ecx, ebp, f);
    ecx = (uint32_t)(t0);
L_0047f4c4:  // mov ebp, dword ptr [esp + 0x84]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x84u)));
L_0047f4cb:  // add eax, 0x28
    t0 = ladd<32>(eax, 0x28u, f);
    eax = (uint32_t)(t0);
L_0047f4ce:  // mov dword ptr [esp + 0x34], ebx
    M32((uint32_t)(esp + 0x34u)) = (uint32_t)(ebx);
L_0047f4d2:  // shl ecx, 1
    t0 = lshl<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0047f4d4:  // test ebp, ebp
    t0 = llog<32>(ebp & ebp, f);
L_0047f4d6:  // mov dword ptr [esp + 0x14], ecx
    M32((uint32_t)(esp + 0x14u)) = (uint32_t)(ecx);
L_0047f4da:  // je 0x47f5f6
    if (f.zf) goto L_0047f5f6;
L_0047f4e0:  // mov ecx, dword ptr [esp + 0x48]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0047f4e4:  // mov dword ptr [esp + 0x40], ecx
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(ecx);
L_0047f4e8:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f4ec:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0047f4ee:  // je 0x47f69c
    if (f.zf) goto L_0047f69c;
L_0047f4f4:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_0047f4f8:  // jmp 0x47f506
    goto L_0047f506;
L_0047f4fa:  // mov ebx, dword ptr [esp + 0x34]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0047f4fe:  // mov esi, dword ptr [esp + 0x60]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0047f502:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0047f506:  // mov ecx, dword ptr [esp + 0x18]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0047f50a:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0047f50c:  // mov ecx, dword ptr [esp + 0x44]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0047f510:  // add esi, ebx
    t0 = ladd<32>(esi, ebx, f);
    esi = (uint32_t)(t0);
L_0047f512:  // mov ebx, dword ptr [esp + 0x10]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f516:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_0047f51a:  // mov dword ptr [esp + 0x60], esi
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(esi);
L_0047f51e:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0047f522:  // mov dword ptr [esp + 0x58], ebx
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(ebx);
L_0047f526:  // jmp 0x47f530
    goto L_0047f530;
L_0047f528:  // mov edx, dword ptr [esp + 0x7c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x7cu)));
L_0047f52c:  // mov esi, dword ptr [esp + 0x60]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0047f530:  // add edx, esi
    t0 = ladd<32>(edx, esi, f);
    edx = (uint32_t)(t0);
L_0047f532:  // mov esi, ecx
    esi = (uint32_t)(ecx);
L_0047f534:  // sar esi, 6
    t0 = lsar<32>(esi, 0x6u, f);
    esi = (uint32_t)(t0);
L_0047f537:  // mov ebx, esi
    ebx = (uint32_t)(esi);
L_0047f539:  // mov dword ptr [esp + 0x7c], edx
    M32((uint32_t)(esp + 0x7cu)) = (uint32_t)(edx);
L_0047f53d:  // shl ebx, 5
    t0 = lshl<32>(ebx, 0x5u, f);
    ebx = (uint32_t)(t0);
L_0047f540:  // sar ecx, 1
    t0 = lsar<32>(ecx, 0x1u, f);
    ecx = (uint32_t)(t0);
L_0047f542:  // sub ecx, ebx
    t0 = lsub<32>(ecx, ebx, f);
    ecx = (uint32_t)(t0);
L_0047f544:  // mov ebx, dword ptr [esp + 0x40]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047f548:  // sar ebx, 1
    t0 = lsar<32>(ebx, 0x1u, f);
    ebx = (uint32_t)(t0);
L_0047f54a:  // sar edx, 8
    t0 = lsar<32>(edx, 0x8u, f);
    edx = (uint32_t)(t0);
L_0047f54d:  // lea esi, [esi + ebx*2]
    esi = (uint32_t)((uint32_t)(esi + ebx * 2u));
L_0047f550:  // mov ebx, 1
    ebx = (uint32_t)(0x1u);
L_0047f555:  // shl ebx, cl
    t0 = lshl<32>(ebx, (ecx & 0xffu), f);
    ebx = (uint32_t)(t0);
L_0047f557:  // mov esi, dword ptr [ebp + esi*4]
    esi = (uint32_t)(M32((uint32_t)(ebp + esi * 4u)));
L_0047f55b:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_0047f55e:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0047f561:  // and esi, ebx
    t0 = llog<32>(esi & ebx, f);
    esi = (uint32_t)(t0);
L_0047f563:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0047f565:  // shr esi, cl
    t0 = lshr<32>(esi, (ecx & 0xffu), f);
    esi = (uint32_t)(t0);
L_0047f567:  // mov bl, byte ptr [eax - 2]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0xfffffffeu))) & 0xffu);
L_0047f56a:  // mov ecx, esi
    ecx = (uint32_t)(esi);
L_0047f56c:  // mov esi, dword ptr [esp + 0x58]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x58u)));
L_0047f570:  // sar edx, cl
    t0 = lsar<32>(edx, (ecx & 0xffu), f);
    edx = (uint32_t)(t0);
L_0047f572:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0047f576:  // lea edx, [edx + edx*2]
    edx = (uint32_t)((uint32_t)(edx + edx * 2u));
L_0047f579:  // imul ebx, dword ptr [ecx + edx*4 + 0x10d8]
    t0 = limul32(ebx, M32((uint32_t)(ecx + edx * 4u + 0x10d8u)), f);
    ebx = (uint32_t)(t0);
L_0047f581:  // lea ecx, [ecx + edx*4 + 0x10d0]
    ecx = (uint32_t)((uint32_t)(ecx + edx * 4u + 0x10d0u));
L_0047f588:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0047f58a:  // mov dl, byte ptr [eax - 3]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0xfffffffdu))) & 0xffu);
L_0047f58d:  // and ebx, 0x1f0000
    t0 = llog<32>(ebx & 0x1f0000u, f);
    ebx = (uint32_t)(t0);
L_0047f593:  // imul edx, dword ptr [ecx + 4]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x4u)), f);
    edx = (uint32_t)(t0);
L_0047f597:  // and edx, 0x7e00000
    t0 = llog<32>(edx & 0x7e00000u, f);
    edx = (uint32_t)(t0);
L_0047f59d:  // add edx, ebx
    t0 = ladd<32>(edx, ebx, f);
    edx = (uint32_t)(t0);
L_0047f59f:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0047f5a1:  // mov bl, byte ptr [eax - 4]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0xfffffffcu))) & 0xffu);
L_0047f5a4:  // imul ebx, dword ptr [ecx]
    t0 = limul32(ebx, M32((uint32_t)(ecx)), f);
    ebx = (uint32_t)(t0);
L_0047f5a7:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0047f5ab:  // and ebx, 0xf8000000
    t0 = llog<32>(ebx & 0xf8000000u, f);
    ebx = (uint32_t)(t0);
L_0047f5b1:  // add edx, ebx
    t0 = ladd<32>(edx, ebx, f);
    edx = (uint32_t)(t0);
L_0047f5b3:  // shr edx, 0x10
    t0 = lshr<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_0047f5b6:  // mov word ptr [edi - 2], dx
    M16((uint32_t)(edi + 0xfffffffeu)) = (uint16_t)((edx & 0xffffu));
L_0047f5ba:  // mov edx, dword ptr [esp + 0x88]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x88u)));
L_0047f5c1:  // add ecx, edx
    t0 = ladd<32>(ecx, edx, f);
    ecx = (uint32_t)(t0);
L_0047f5c3:  // dec esi
    t0 = ldec<32>(esi, f);
    esi = (uint32_t)(t0);
L_0047f5c4:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0047f5c8:  // mov dword ptr [esp + 0x58], esi
    M32((uint32_t)(esp + 0x58u)) = (uint32_t)(esi);
L_0047f5cc:  // jne 0x47f528
    if (!f.zf) goto L_0047f528;
L_0047f5d2:  // mov esi, dword ptr [esp + 0x40]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x40u)));
L_0047f5d6:  // mov ecx, dword ptr [esp + 0x38]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x38u)));
L_0047f5da:  // add esi, edx
    t0 = ladd<32>(esi, edx, f);
    esi = (uint32_t)(t0);
L_0047f5dc:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047f5e0:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_0047f5e2:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0047f5e3:  // mov dword ptr [esp + 0x40], esi
    M32((uint32_t)(esp + 0x40u)) = (uint32_t)(esi);
L_0047f5e7:  // mov dword ptr [esp + 0x38], ecx
    M32((uint32_t)(esp + 0x38u)) = (uint32_t)(ecx);
L_0047f5eb:  // jne 0x47f4fa
    if (!f.zf) goto L_0047f4fa;
L_0047f5f1:  // jmp 0x47f69c
    goto L_0047f69c;
L_0047f5f6:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f5fa:  // test ecx, ecx
    t0 = llog<32>(ecx & ecx, f);
L_0047f5fc:  // je 0x47f69c
    if (f.zf) goto L_0047f69c;
L_0047f602:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0047f606:  // jmp 0x47f610
    goto L_0047f610;
L_0047f608:  // mov edx, dword ptr [esp + 0x3c]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x3cu)));
L_0047f60c:  // mov ebx, dword ptr [esp + 0x34]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x34u)));
L_0047f610:  // mov ebp, dword ptr [esp + 0x18]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x18u)));
L_0047f614:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f618:  // add edx, ebp
    t0 = ladd<32>(edx, ebp, f);
    edx = (uint32_t)(t0);
L_0047f61a:  // add esi, ebx
    t0 = ladd<32>(esi, ebx, f);
    esi = (uint32_t)(t0);
L_0047f61c:  // mov dword ptr [esp + 0x3c], edx
    M32((uint32_t)(esp + 0x3cu)) = (uint32_t)(edx);
L_0047f620:  // mov ebp, edx
    ebp = (uint32_t)(edx);
L_0047f622:  // mov dword ptr [esp + 0x60], ecx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(ecx);
L_0047f626:  // add ebp, esi
    t0 = ladd<32>(ebp, esi, f);
    ebp = (uint32_t)(t0);
L_0047f628:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0047f62a:  // mov ecx, ebp
    ecx = (uint32_t)(ebp);
L_0047f62c:  // mov bl, byte ptr [eax + 2]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0x2u))) & 0xffu);
L_0047f62f:  // sar ecx, 8
    t0 = lsar<32>(ecx, 0x8u, f);
    ecx = (uint32_t)(t0);
L_0047f632:  // add edi, 2
    t0 = ladd<32>(edi, 0x2u, f);
    edi = (uint32_t)(t0);
L_0047f635:  // add eax, 4
    t0 = ladd<32>(eax, 0x4u, f);
    eax = (uint32_t)(t0);
L_0047f638:  // lea edx, [ecx + ecx*2]
    edx = (uint32_t)((uint32_t)(ecx + ecx * 2u));
L_0047f63b:  // mov ecx, dword ptr [esp + 0x1c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x1cu)));
L_0047f63f:  // imul ebx, dword ptr [ecx + edx*4 + 0x10d8]
    t0 = limul32(ebx, M32((uint32_t)(ecx + edx * 4u + 0x10d8u)), f);
    ebx = (uint32_t)(t0);
L_0047f647:  // lea ecx, [ecx + edx*4 + 0x10d0]
    ecx = (uint32_t)((uint32_t)(ecx + edx * 4u + 0x10d0u));
L_0047f64e:  // xor edx, edx
    t0 = llog<32>(edx ^ edx, f);
    edx = (uint32_t)(t0);
L_0047f650:  // mov dl, byte ptr [eax - 3]
    edx = (edx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0xfffffffdu))) & 0xffu);
L_0047f653:  // and ebx, 0x1f0000
    t0 = llog<32>(ebx & 0x1f0000u, f);
    ebx = (uint32_t)(t0);
L_0047f659:  // imul edx, dword ptr [ecx + 4]
    t0 = limul32(edx, M32((uint32_t)(ecx + 0x4u)), f);
    edx = (uint32_t)(t0);
L_0047f65d:  // and edx, 0x7e00000
    t0 = llog<32>(edx & 0x7e00000u, f);
    edx = (uint32_t)(t0);
L_0047f663:  // add edx, ebx
    t0 = ladd<32>(edx, ebx, f);
    edx = (uint32_t)(t0);
L_0047f665:  // xor ebx, ebx
    t0 = llog<32>(ebx ^ ebx, f);
    ebx = (uint32_t)(t0);
L_0047f667:  // mov bl, byte ptr [eax - 4]
    ebx = (ebx & 0xffffff00u) | ((uint32_t)(M8((uint32_t)(eax + 0xfffffffcu))) & 0xffu);
L_0047f66a:  // imul ebx, dword ptr [ecx]
    t0 = limul32(ebx, M32((uint32_t)(ecx)), f);
    ebx = (uint32_t)(t0);
L_0047f66d:  // mov ecx, dword ptr [esp + 0x60]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x60u)));
L_0047f671:  // and ebx, 0xf8000000
    t0 = llog<32>(ebx & 0xf8000000u, f);
    ebx = (uint32_t)(t0);
L_0047f677:  // add edx, ebx
    t0 = ladd<32>(edx, ebx, f);
    edx = (uint32_t)(t0);
L_0047f679:  // shr edx, 0x10
    t0 = lshr<32>(edx, 0x10u, f);
    edx = (uint32_t)(t0);
L_0047f67c:  // mov word ptr [edi - 2], dx
    M16((uint32_t)(edi + 0xfffffffeu)) = (uint16_t)((edx & 0xffffu));
L_0047f680:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0047f681:  // mov dword ptr [esp + 0x60], ecx
    M32((uint32_t)(esp + 0x60u)) = (uint32_t)(ecx);
L_0047f685:  // jne 0x47f626
    if (!f.zf) goto L_0047f626;
L_0047f687:  // mov edx, dword ptr [esp + 0x14]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x14u)));
L_0047f68b:  // mov ecx, dword ptr [esp + 0x5c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x5cu)));
L_0047f68f:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_0047f691:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0047f692:  // mov dword ptr [esp + 0x5c], ecx
    M32((uint32_t)(esp + 0x5cu)) = (uint32_t)(ecx);
L_0047f696:  // jne 0x47f608
    if (!f.zf) goto L_0047f608;
L_0047f69c:  // mov ecx, dword ptr [esp + 0x10]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f6a0:  // mov edi, dword ptr [esp + 0x28]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0047f6a4:  // mov ebx, dword ptr [esp + 0x44]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x44u)));
L_0047f6a8:  // mov edx, dword ptr [esp + 0x24]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x24u)));
L_0047f6ac:  // lea eax, [ecx + ecx]
    eax = (uint32_t)((uint32_t)(ecx + ecx));
L_0047f6af:  // add ebx, 0x10
    t0 = ladd<32>(ebx, 0x10u, f);
    ebx = (uint32_t)(t0);
L_0047f6b2:  // add edi, eax
    t0 = ladd<32>(edi, eax, f);
    edi = (uint32_t)(t0);
L_0047f6b4:  // mov eax, dword ptr [esp + 0x20]
    eax = (uint32_t)(M32((uint32_t)(esp + 0x20u)));
L_0047f6b8:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0047f6ba:  // mov ecx, dword ptr [esp + 0xb4]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0xb4u)));
L_0047f6c1:  // inc eax
    t0 = linc<32>(eax, f);
    eax = (uint32_t)(t0);
L_0047f6c2:  // mov dword ptr [esp + 0x44], ebx
    M32((uint32_t)(esp + 0x44u)) = (uint32_t)(ebx);
L_0047f6c6:  // cmp eax, ecx
    t0 = lsub<32>(eax, ecx, f);
L_0047f6c8:  // mov dword ptr [esp + 0x28], edi
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edi);
L_0047f6cc:  // mov dword ptr [esp + 0x20], eax
    M32((uint32_t)(esp + 0x20u)) = (uint32_t)(eax);
L_0047f6d0:  // mov dword ptr [esp + 0x24], edx
    M32((uint32_t)(esp + 0x24u)) = (uint32_t)(edx);
L_0047f6d4:  // jl 0x47f1ce
    if ((f.sf != f.of)) goto L_0047f1ce;
L_0047f6da:  // mov ebp, dword ptr [esp + 0x10]
    ebp = (uint32_t)(M32((uint32_t)(esp + 0x10u)));
L_0047f6de:  // mov ebx, dword ptr [esp + 0x2c]
    ebx = (uint32_t)(M32((uint32_t)(esp + 0x2cu)));
L_0047f6e2:  // mov eax, dword ptr [esp + 0xac]
    eax = (uint32_t)(M32((uint32_t)(esp + 0xacu)));
L_0047f6e9:  // mov esi, dword ptr [esp + 0x48]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x48u)));
L_0047f6ed:  // mov ecx, dword ptr [esp + 0x8c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x8cu)));
L_0047f6f4:  // mov edx, dword ptr [esp + 0x28]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x28u)));
L_0047f6f8:  // mov edi, dword ptr [esp + 0x4c]
    edi = (uint32_t)(M32((uint32_t)(esp + 0x4cu)));
L_0047f6fc:  // add esi, 0x10
    t0 = ladd<32>(esi, 0x10u, f);
    esi = (uint32_t)(t0);
L_0047f6ff:  // add edx, ecx
    t0 = ladd<32>(edx, ecx, f);
    edx = (uint32_t)(t0);
L_0047f701:  // mov ecx, dword ptr [esp + 0x6c]
    ecx = (uint32_t)(M32((uint32_t)(esp + 0x6cu)));
L_0047f705:  // mov dword ptr [esp + 0x48], esi
    M32((uint32_t)(esp + 0x48u)) = (uint32_t)(esi);
L_0047f709:  // mov esi, dword ptr [esp + 0x50]
    esi = (uint32_t)(M32((uint32_t)(esp + 0x50u)));
L_0047f70d:  // mov dword ptr [esp + 0x28], edx
    M32((uint32_t)(esp + 0x28u)) = (uint32_t)(edx);
L_0047f711:  // mov edx, dword ptr [esp + 0x68]
    edx = (uint32_t)(M32((uint32_t)(esp + 0x68u)));
L_0047f715:  // add esi, 9
    t0 = ladd<32>(esi, 0x9u, f);
    esi = (uint32_t)(t0);
L_0047f718:  // add edi, edx
    t0 = ladd<32>(edi, edx, f);
    edi = (uint32_t)(t0);
L_0047f71a:  // add ebx, 0x200
    t0 = ladd<32>(ebx, 0x200u, f);
    ebx = (uint32_t)(t0);
L_0047f720:  // dec ecx
    t0 = ldec<32>(ecx, f);
    ecx = (uint32_t)(t0);
L_0047f721:  // mov dword ptr [esp + 0x4c], edi
    M32((uint32_t)(esp + 0x4cu)) = (uint32_t)(edi);
L_0047f725:  // mov dword ptr [esp + 0x50], esi
    M32((uint32_t)(esp + 0x50u)) = (uint32_t)(esi);
L_0047f729:  // mov dword ptr [esp + 0x2c], ebx
    M32((uint32_t)(esp + 0x2cu)) = (uint32_t)(ebx);
L_0047f72d:  // mov dword ptr [esp + 0x6c], ecx
    M32((uint32_t)(esp + 0x6cu)) = (uint32_t)(ecx);
L_0047f731:  // jne 0x47f18e
    if (!f.zf) goto L_0047f18e;
L_0047f737:  // pop edi
    t0 = M32(esp); esp += 4;
    edi = (uint32_t)(t0);
L_0047f738:  // pop esi
    t0 = M32(esp); esp += 4;
    esi = (uint32_t)(t0);
L_0047f739:  // pop ebp
    t0 = M32(esp); esp += 4;
    ebp = (uint32_t)(t0);
L_0047f73a:  // pop ebx
    t0 = M32(esp); esp += 4;
    ebx = (uint32_t)(t0);
L_0047f73b:  // add esp, 0x80
    t0 = ladd<32>(esp, 0x80u, f);
    esp = (uint32_t)(t0);
L_0047f741:  // ret 0x28
    c->target = M32(esp); esp += 44u; c->r[0] = eax; c->r[1] = ecx; c->r[2] = edx; c->r[3] = ebx; c->r[4] = esp; c->r[5] = ebp; c->r[6] = esi; c->r[7] = edi; return;
}

LIFT_FUNCTION_NF(0x0047eff0, 0047eff0)
