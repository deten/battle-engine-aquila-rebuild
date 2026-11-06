// auto-ported from 004dcba0_vslot2.c (CRTMesh::vslot2, 761 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: thiscall, 1 stack arg (ret 4), void; device slot 0x10 and mesh slots 0x5c/0x60 and this slot 0x10 take no args (Ghidra's unaff_ESI); device slot 0 writes the camera to a local, mesh slot 0 returns a vector pointer (out buffer 0x4dcc3e); dx/dy/dz and the squared distance are rounded through float slots (0x4dcc66-0x4dccc6), grouped (dz*dz+dy*dy)+dx*dx (class 19); size = the bits of [slot10()+0x24] used as a float divisor; v = r5c*(sqrt/size)*[0x631e88]*k stays unrounded in ST0 (0x4dccdc-0x4dccf9) through every compare (test ah,1 / 0x41 as the asm, NaN included) and both fistp qword (0x4dcd81, 0x4dcde4); k = slot 0x10's float rounded (fstp [esp+8]) or 1.0; the [esp+0x40] 16-dword block passed to 0x4b6260 (cdecl 8) is the 0x83cd48 vector + the 0x83cd18 matrix (rep movsd); the alpha value only decides the final store to 0x63012c, as in the asm
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

#define G_head   GLOBAL_AT(int, 0x0083cd5c)
#define G_tail   GLOBAL_AT(int, 0x0083cd60)
#define C_88     GLOBAL_AT(float, 0x00631e88)
#define C_8c     GLOBAL_AT(float, 0x00631e8c)
#define C_90     GLOBAL_AT(float, 0x00631e90)
#define C_94     GLOBAL_AT(float, 0x00631e94)
#define C_98     GLOBAL_AT(float, 0x00631e98)
#define C_a0     GLOBAL_AT(float, 0x00631ea0)
#define C_255    GLOBAL_AT(float, 0x005d8c70)
#define C_10     GLOBAL_AT(float, 0x005d85cc)
#define C_100    GLOBAL_AT(float, 0x005db020)
typedef uint32_t (BEA_CDECL* FUN_004b6260_t)(void *, void *, int, undefined4, int, undefined4, undefined4, undefined4, ...);
static const bea_guard<FUN_004b6260_t> FUN_004b6260 = {(FUN_004b6260_t)0x004b6260};

static void BEA_THISCALL ap_004dcba0(void * this_, uint32_t param_1)
{
  char *s = (char *)this_;
  const int self = (int)(uintptr_t)this_;
  int e = *(int *)(s + 0x48);
  if (e != 0) {
    *(int *)(e + 0x44) = *(int *)(s + 0x44);
  }
  e = *(int *)(s + 0x44);
  if (e != 0) {
    *(int *)(e + 0x48) = *(int *)(s + 0x48);
  }
  if (G_head == self) {
    G_head = *(int *)(s + 0x48);
  }
  e = G_tail;
  if (e == self) {
    e = *(int *)(s + 0x48);
    G_tail = e;
  }
  *(int *)(s + 0x48) = e;
  *(int *)(s + 0x44) = 0;
  e = G_tail;
  if (e != 0) {
    *(int *)(e + 0x44) = self;
  }
  G_tail = self;

  float cam[4];                                                    // [esp+0x20]
  int dev = GLOBAL_AT(int, 0x0089c9a4 + GLOBAL_AT(int, 0x0089ce4c) * 4);
  bea_vcall<uint32_t>(dev, 0, (uint32_t)(uintptr_t)cam);
  dev = GLOBAL_AT(int, 0x0089c9a4 + GLOBAL_AT(int, 0x0089ce4c) * 4);
  volatile float k = (float)bea_vcall<float10>(dev, 0x10);          // fstp [esp+8]
  if (GLOBAL_AT(uint8_t, 0x0083cd5a) != 0) {
    k = 1.0f;
  }
  uint32_t obuf[4];                                                 // [esp+0x10]
  uint32_t *p = (uint32_t *)(uintptr_t)bea_vcall<uint32_t>(*(int *)(s + 8), 0, (uint32_t)(uintptr_t)obuf);
  uint32_t m[16];                                                   // [esp+0x30] .. [esp+0x6c]
  m[0] = p[0];
  m[1] = p[1];
  m[2] = p[2];
  m[3] = p[3];
  float *mf = (float *)m;
  volatile float dx = (float)((float10)cam[0] - (float10)mf[0]);
  volatile float dy = (float)((float10)cam[1] - (float10)mf[1]);
  volatile float dz = (float)((float10)cam[2] - (float10)mf[2]);
  float10 z2 = (float10)dz * (float10)dz;
  float10 y2 = (float10)dy * (float10)dy;
  float10 acc = z2 + y2;
  float10 x2 = (float10)dx * (float10)dx;
  volatile float d2 = (float)(acc + x2);                           // fstp [esp+0xc]
  int o = bea_vcall<int>(this_, 0x10);
  uint32_t szbits = *(uint32_t *)(o + 0x24);                        // [esp+0x10]
  float10 r5c = bea_vcall<float10>(*(int *)(s + 8), 0x5c);
  float10 q = SQRT((float10)d2) / bea_fcast<float10>(szbits);
  float10 v = r5c * q;
  v = v * (float10)C_88;
  v = v * (float10)k;
  int low;
  if (GLOBAL_AT(uint8_t, 0x0083cd58) != 0) {
    low = 0;
  }
  else {
    low = !(v >= (float10)C_98);                                    // C0: below or unordered
  }
  int h18 = *(int *)(s + 0x18);
  if ((h18 != 0) == 0 || low != 0) {
    float10 num = (v - (float10)C_94) * (float10)C_255;
    float10 den = (float10)C_98 - (float10)C_94;
    m[1] = GLOBAL_AT(uint32_t, 0x0083cd4c);
    m[3] = GLOBAL_AT(uint32_t, 0x0083cd54);
    m[0] = GLOBAL_AT(uint32_t, 0x0083cd48);
    m[2] = GLOBAL_AT(uint32_t, 0x0083cd50);
    __builtin_memcpy(&m[4], (const void *)(uintptr_t)0x0083cd18, 0x30);
    int fa = (int)__builtin_llrintl(num / den);
    int alpha = 0xff - fa;
    if ((alpha > 0xff) || (h18 == 0)) {
      alpha = 0xff;
    }
    int lod = *(int *)(s + 0x14);
    if (*(int *)(lod + 8) != 0) {
      if (v > (float10)C_8c) {                                      // test ah,0x41 / jne
        lod = *(int *)(lod + 8);
      }
      if ((v > (float10)C_90) && (*(int *)(lod + 8) != 0)) {
        lod = *(int *)(lod + 8);
      }
    }
    float10 w = (float10)C_a0 / ((float10)k * (float10)C_10);
    w = (float10)C_100 - w * v;
    int pct = (int)__builtin_llrintl(w);
    if (pct < 0) {
      pct = 0;
    }
    else if (pct > 100) {
      pct = 100;
    }
    GLOBAL_AT(int, 0x00630130) = pct;
    FUN_004b6260((void *)m, (void *)&m[4], lod, *(undefined4 *)(s + 8), self, *(undefined4 *)(s + 0x24), 0u, param_1);
    GLOBAL_AT(int, 0x00630130) = 100;
    if ((GLOBAL_AT(uint8_t, 0x0083cd5b) != 0) && (bea_vcall<int>(*(int *)(s + 8), 0x60) != 0)) {
      GLOBAL_AT(int, 0x009c68d0) = bea_vcall<int>(*(int *)(s + 8), 0x60);
      FUN_004b6260((void *)m, (void *)&m[4], lod, *(undefined4 *)(s + 8), self, *(undefined4 *)(s + 0x24), 0u, 0x10u);
    }
    if (alpha != 0xff) {
      GLOBAL_AT(int, 0x0063012c) = 0xff;
    }
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dcba0, ap_004dcba0));
