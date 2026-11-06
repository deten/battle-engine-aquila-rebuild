// hand-ported from 00406560_FUN_00406560.c (FUN_00406560, 1971 bytes)
// @hand-fixed 2026-10-29 written from the asm: Ghidra lost the receivers of 0x506620/0x506710/0x506440 in the 0x4c8 branch (ECX = the weapon object [esp+0x10] at 00406ae0, 00406bc2, 00406ce2) and slot 0x16c's ST0 result (00406bb2, no argument; K = (float)(1 - r*0.01) at 00406bca). Each transform is M^T*d of the 3x4 matrix at this+0x3c (copied with rep movsd and transposed in place on the stack) with the asm's grouping: purge loop x=(M0dx+M8dz)+M4dy, y=(M1dx+M9dz)+M5dy, z=(M2dx+M6dy)+M10dz with unrounded dx,dy,dz (0040662a-004066bd); case 2 x=(M8Vz+M4Vy)+M0Vx, y=(M5Vy+M9Vz)+M1Vx, z=(M10Vz+M2Vx)+M6Vy (00406997-00406a12); case 0 x=(M0Vx+M8Vz)+M4Vy, y=(M9Vz+M5Vy)+M1Vx, z=(M6Vy+M10Vz)+M2Vx (00406c0a-00406c85). Lengths: (y*y+z*z)+x*x for the normalise steps (004066cb, 00406c8d), (y*y+z*z)+x*x vs R*R in case 2 (00406964) and (x*x+y*y)+z*z vs (R*K)^2 in case 0 (00406bd7). Branches per status-word tests (C3 skip at 004066f5/00406cb7, `test ah,0x41; je` = cos > y removes at 00406731, `test ah,1` = below or unordered goes on at 00406a32/00406cf1, range tests need R*R strictly greater). The 4th lane of the 401ec0 vector is never read (0x406d50 uses 3 lanes)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* tc0_t)(uint32_t);
typedef float10 (BEA_THISCALL* tc0f_t)(uint32_t);
typedef uint32_t (BEA_THISCALL* tc1_t)(uint32_t, uint32_t);
static const bea_guard<tc0_t> FUN_00414b30 = {(tc0_t)0x00414b30};
static const bea_guard<tc0_t> FUN_00412610 = {(tc0_t)0x00412610};
static const bea_guard<tc0_t> FUN_00412570 = {(tc0_t)0x00412570};
static const bea_guard<tc0_t> FUN_00414030 = {(tc0_t)0x00414030};
static const bea_guard<tc0_t> FUN_00414630 = {(tc0_t)0x00414630};
static const bea_guard<tc1_t> FUN_004e5bd0 = {(tc1_t)0x004e5bd0};
static const bea_guard<tc0_t> FUN_0044b1d0 = {(tc0_t)0x0044b1d0};
static const bea_guard<tc1_t> FUN_00549220 = {(tc1_t)0x00549220};
static const bea_guard<tc0_t> FUN_00406d20 = {(tc0_t)0x00406d20};
static const bea_guard<tc0_t> FUN_00406d30 = {(tc0_t)0x00406d30};
static const bea_guard<tc0_t> FUN_00506350 = {(tc0_t)0x00506350};
static const bea_guard<tc0_t> FUN_00509f70 = {(tc0_t)0x00509f70};
static const bea_guard<tc0_t> FUN_00506530 = {(tc0_t)0x00506530};
static const bea_guard<tc0f_t> FUN_00506800 = {(tc0f_t)0x00506800};
static const bea_guard<tc0f_t> FUN_00506440 = {(tc0f_t)0x00506440};
static const bea_guard<tc0f_t> FUN_00506710 = {(tc0f_t)0x00506710};
static const bea_guard<tc0f_t> FUN_00506620 = {(tc0f_t)0x00506620};
static const bea_guard<tc1_t> FUN_004fd3d0 = {(tc1_t)0x004fd3d0};
static const bea_guard<tc1_t> FUN_005061f0 = {(tc1_t)0x005061f0};
static const bea_guard<tc0_t> FUN_00406d50 = {(tc0_t)0x00406d50};
typedef uint32_t (BEA_THISCALL* FUN_00406da0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, float);
static const bea_guard<FUN_00406da0_t> FUN_00406da0 = {(FUN_00406da0_t)0x00406da0};
typedef uint32_t (BEA_THISCALL* FUN_00406fc0_t)(uint32_t, uint32_t, float, uint32_t);
static const bea_guard<FUN_00406fc0_t> FUN_00406fc0 = {(FUN_00406fc0_t)0x00406fc0};
typedef uint32_t (BEA_THISCALL* FUN_0040acc0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0040acc0_t> FUN_0040acc0 = {(FUN_0040acc0_t)0x0040acc0};
typedef uint32_t (BEA_THISCALL* FUN_00401ec0_t)(uint32_t, float, float, float);
static const bea_guard<FUN_00401ec0_t> FUN_00401ec0 = {(FUN_00401ec0_t)0x00401ec0};

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(uintptr_t)(p) + (k)))
#define F32(p, k) (*reinterpret_cast<float *>((uint8_t *)(uintptr_t)(p) + (k)))
#define FX(p, k) ((float10)F32(p, k))

// the matrix at this+0x3c, element i
#define M(i) FX(self, 0x3c + 4 * (i))

static inline int count_live(uint32_t lst)
{
  int n = 0;
  uint32_t r = FUN_00406d20(lst);
  while (r != 0) {
    if (U32(r, 0) != 0) {
      n++;
    }
    r = FUN_00406d30(lst);
  }
  return n;
}

// 004066cb / 00406c8d: |V| = (y*y + z*z) + x*x; scale by 1/|V| unless |V| == 0 or unordered
static inline void normalise(float *v)
{
  float10 z = v[2], y = v[1];
  float10 s = __builtin_sqrtl((y * y + z * z) + (float10)v[0] * (float10)v[0]);
  if (!(s == 0.0L) && !__builtin_isunordered(s, 0.0L)) {
    float10 inv = (float10)1.0f / s;
    v[0] = (float)(inv * (float10)v[0]);
    v[1] = (float)(inv * (float10)v[1]);
    v[2] = (float)((float10)v[2] * inv);
  }
}

static void BEA_THISCALL ap_00406560(uint8_t *this_)
{
  uint32_t self = (uint32_t)(uintptr_t)this_;
  uint32_t lst = self + 0x294;
  uint32_t ok = (U32(self, 0x260) == 3) ? FUN_00414b30(U32(self, 0x57c)) : FUN_00414b30(U32(self, 0x578));
  if (ok != 0) {
    return;
  }
  uint32_t flag = 0;                                                            // [esp+0x14]
  uint32_t wpn;                                                                 // [esp+0x10]
  if (U32(self, 0x260) == 3) {
    wpn = FUN_00412610(U32(self, 0x57c));
    if (FUN_00412570(U32(self, 0x57c)) == 0) {
      flag = 1;
    }
  } else {
    wpn = FUN_00414030(U32(self, 0x578));
    if (FUN_00414630(U32(self, 0x578)) == 0) {
      flag = 1;
    }
  }
  if (wpn == 0) {
    return;
  }
  float V[4];                                                                   // [esp+0x1c]

  // purge the target list (0040661b-004067cc)
  uint32_t node = U32(self, 0x294);
  U32(self, 0x29c) = node;
  uint32_t rec = node ? U32(node, 0) : 0;
  while (rec != 0) {
    uint32_t a = U32(rec, 0);
    bool remove;
    if (a == 0) {
      remove = true;
    } else {
      float10 dx = FX(a, 0x1c) - FX(self, 0x1c);
      float10 dy = FX(a, 0x20) - FX(self, 0x20);
      float10 dz = FX(a, 0x24) - FX(self, 0x24);
      float vz = (float)((M(2) * dx + M(6) * dy) + M(10) * dz);
      float vy = (float)((M(1) * dx + M(9) * dz) + M(5) * dy);
      float vx = (float)((M(0) * dx + M(8) * dz) + M(4) * dy);
      FUN_00401ec0((uint32_t)(uintptr_t)V, vx, vy, vz);                         // 004066c6
      normalise(V);
      float10 c = fcos(FUN_00506620(wpn));                                      // 00406724
      if (c > (float10)V[1]) {                                                  // test ah, 0x41; je
        remove = true;
      } else {
        remove = (flag != 0) || ((((uint8_t *)(uintptr_t)a)[0x2c] & 4) != 0);
      }
    }
    if (remove) {
      FUN_004e5bd0(lst, rec);                                                   // 00406751
      if (rec != 0) {
        FUN_0044b1d0(rec);
        FUN_00549220(0x009c3df0u, rec);
      }
      node = U32(self, 0x294);
      U32(self, 0x29c) = node;
      rec = node ? U32(node, 0) : 0;
    }
    if (rec == 0) {
      break;
    }
    node = U32(U32(self, 0x29c), 4);                                            // 004067b8
    U32(self, 0x29c) = node;
    rec = node ? U32(node, 0) : 0;
  }

  int live = count_live(lst);                                                   // 004067d2
  if (live >= (int)FUN_00506350(wpn)) {
    return;
  }
  if (flag != 0) {
    return;
  }
  if (FUN_00509f70(wpn) == 0) {
    return;
  }
  uint32_t mode = FUN_00506530(wpn);                                            // 00406826
  if (mode == 2) {
    float clk = GLOBAL_AT(float, 0x00672fd0);                                   // [esp+0x18]
    for (uint32_t r = FUN_00406d20(lst); r != 0; r = FUN_00406d30(lst)) {
      if (U32(r, 0) != 0 && FX(r, 8) > (float10)clk) {                         // test ah, 0x41; je ret
        return;
      }
    }
    bool done = false;                                                          // ebp
    uint32_t r = FUN_00406d20(lst);
    if (r != 0 && U32(r, 0x10) != 0) {
      uint32_t a = U32(r, 0);
      if (a != 0) {
        float range = (float)FUN_00506800(wpn);                                 // 00406895
        uint32_t t = FUN_00406da0(self, wpn, U32(a, 0x1c), U32(a, 0x20), U32(a, 0x24), U32(a, 0x28), range);
        if (t != 0) {
          float d = (float)FUN_00506440(wpn);
          FUN_00406fc0(self, t, d, 0u);                                         // 004068d9
          done = true;
        }
      }
    }
    uint32_t tgt = U32(self, 0x4c8);
    if (tgt == 0 || done) {
      return;
    }
    if (FUN_004fd3d0(self, U32(tgt, 0x138)) == 0) {
      return;
    }
    if (FUN_005061f0(wpn, U32(self, 0x4c8)) == 0) {
      return;
    }
    tgt = U32(self, 0x4c8);
    V[0] = (float)(FX(tgt, 0x1c) - FX(self, 0x1c));                             // 00406941
    V[1] = (float)(FX(tgt, 0x20) - FX(self, 0x20));
    V[2] = (float)(FX(tgt, 0x24) - FX(self, 0x24));
    float10 R = FUN_00506710(wpn);                                              // 0040695f
    {
      float10 z = V[2], y = V[1];
      float10 s = (y * y + z * z) + (float10)V[0] * (float10)V[0];
      if (!(R * R > s)) {                                                       // fcompp; test ah, 0x41; jne ret
        return;
      }
    }
    {
      float10 vx = V[0], vy = V[1], vz = V[2];
      float z = (float)((M(10) * vz + M(2) * vx) + vy * M(6));
      float y = (float)((M(5) * vy + M(9) * vz) + M(1) * vx);
      float x = (float)((M(8) * vz + M(4) * vy) + M(0) * vx);
      FUN_00401ec0((uint32_t)(uintptr_t)V, x, y, z);                            // 00406a15
    }
    FUN_00406d50((uint32_t)(uintptr_t)V);
    float10 c = fcos(FUN_00506620(wpn));                                        // 00406a25
    if (!(c >= (float10)V[1])) {                                                // test ah, 1: below or unordered
      uint32_t who = U32(self, 0x4c8);
      float d = (float)FUN_00506440(wpn);
      FUN_00406fc0(self, who, d, 1u);                                           // 00406a51
    }
    return;
  }
  if (mode == 1) {
    float range = (float)FUN_00506710(wpn);                                     // 00406a63
    uint32_t t = FUN_00406da0(self, wpn, U32(self, 0x1c), U32(self, 0x20), U32(self, 0x24), U32(self, 0x28), range);
    while (t != 0) {
      float d = (float)FUN_00506440(wpn);
      FUN_00406fc0(self, t, d, 0u);                                             // 00406aae
      if (count_live(lst) >= (int)FUN_00506350(wpn)) {
        return;
      }
      range = (float)FUN_00506710(wpn);                                         // 00406ae2
      t = FUN_00406da0(self, wpn, U32(self, 0x1c), U32(self, 0x20), U32(self, 0x24), U32(self, 0x28), range);
    }
    return;
  }
  if (mode != 0) {
    return;
  }
  // mode 0 (00406b1f)
  uint32_t tgt = U32(self, 0x4c8);
  if (tgt == 0) {
    tgt = FUN_0040acc0(self, 0u, 0u, 0u);
    if (tgt == 0) {
      return;
    }
  }
  for (uint32_t r = FUN_00406d20(lst); r != 0; r = FUN_00406d30(lst)) {
    if (U32(r, 0) == tgt) {
      return;
    }
  }
  if (FUN_004fd3d0(self, U32(tgt, 0x138)) == 0) {
    return;
  }
  if (FUN_005061f0(wpn, tgt) == 0) {
    return;
  }
  void **vt = *(void ***)(uintptr_t)tgt;                                        // mov edx, [ebp]
  V[0] = (float)(FX(tgt, 0x1c) - FX(self, 0x1c));
  V[1] = (float)(FX(tgt, 0x20) - FX(self, 0x20));
  V[2] = (float)(FX(tgt, 0x24) - FX(self, 0x24));
  float10 q = ((tc0f_t)vt[0x16c / 4])(tgt);                                     // 00406bb2
  volatile float K = (float)((float10)1.0f - q * (float10)0.01f);   // [esp+0x18]
  float10 RK = FUN_00506710(wpn) * (float10)K;                                  // 00406bd3
  {
    float10 vx = V[0], vy = V[1], vz = V[2];
    float10 s = (vx * vx + vy * vy) + vz * vz;
    if (!(RK * RK > s)) {                                                       // test ah, 0x41; jne ret
      return;
    }
  }
  {
    float10 vx = V[0], vy = V[1], vz = V[2];
    float z = (float)((vy * M(6) + M(10) * vz) + M(2) * vx);
    float y = (float)((M(9) * vz + M(5) * vy) + M(1) * vx);
    float x = (float)((M(0) * vx + M(8) * vz) + M(4) * vy);
    FUN_00401ec0((uint32_t)(uintptr_t)V, x, y, z);                              // 00406c88
  }
  normalise(V);
  float10 c = fcos(FUN_00506620(wpn));                                          // 00406ce4
  if (!(c >= (float10)V[1])) {                                                  // test ah, 1
    float d = (float)FUN_00506440(wpn);
    FUN_00406fc0(self, tgt, d, 1u);                                             // 00406d06
  }
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00406560, ap_00406560));
