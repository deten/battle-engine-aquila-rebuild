// auto-ported from 004ff710_vslot11.c (CUnitAI::vslot11, 1096 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 written from the disassembly (Ghidra merged the stack slots: best target, best score and best weight): returns *(this+0xc) in EAX on every path; slot 0x16c results are ST0 (004ff727, 004ff888); the range test uses the list entry's position (ebx+0x1c, 004ff854), d2 < ((1 - t*0.01) * P[0x158])^2 or NaN (test ah, 1 at 004ff8ac); weight from the random generator (fild; fmul 1/8192, 004ff8ef) or the P table with the 0x80000 max (004ff9b2); weight ties keep scoring (test ah, 0x40 at 004ff9fc); score (1000 - |d|) + 1e6/1e4 bonus as in 0x477cb0; 0x4fd5b0 is stdcall (does not read ECX)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_00401000_t)(uint32_t, uint32_t);
static const bea_guard<FUN_00401000_t> FUN_00401000 = {(FUN_00401000_t)0x00401000};
typedef uint32_t (BEA_THISCALL* FUN_004de8d0_t)(uint32_t);
static const bea_guard<FUN_004de8d0_t> FUN_004de8d0 = {(FUN_004de8d0_t)0x004de8d0};
typedef uint32_t (BEA_THISCALL* FUN_004fb3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb3d0_t> FUN_004fb3d0 = {(FUN_004fb3d0_t)0x004fb3d0};
typedef uint32_t (BEA_THISCALL* FUN_004fb500_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb500_t> FUN_004fb500 = {(FUN_004fb500_t)0x004fb500};
typedef uint32_t (BEA_THISCALL* FUN_004fb5a0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb5a0_t> FUN_004fb5a0 = {(FUN_004fb5a0_t)0x004fb5a0};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};
typedef uint32_t (BEA_THISCALL* FUN_004fd3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fd3d0_t> FUN_004fd3d0 = {(FUN_004fd3d0_t)0x004fd3d0};
typedef uint32_t (BEA_STDCALL* FUN_004fd5b0_t)(uint32_t);
static const bea_guard<FUN_004fd5b0_t> FUN_004fd5b0 = {(FUN_004fd5b0_t)0x004fd5b0};
typedef float10 (BEA_THISCALL* FUN_004fb780_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb780_t> FUN_004fb780 = {(FUN_004fb780_t)0x004fb780};
typedef float10 (BEA_THISCALL* FUN_004fb7e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb7e0_t> FUN_004fb7e0 = {(FUN_004fb7e0_t)0x004fb7e0};

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))
#define F32(p, k) (*reinterpret_cast<float *>((uint8_t *)(p) + (k)))
#define OWNER U32(this_, 8)
#define PTAB (*(uint8_t **)((uint8_t *)(uintptr_t)OWNER + 0x164))

static uint32_t BEA_THISCALL ap_004ff710(uint8_t *this_)
{
  uint32_t *cur = reinterpret_cast<uint32_t *>(this_ + 0xc);          // ebp
  uint8_t *tgt0 = (uint8_t *)(uintptr_t)*cur;
  if (tgt0 != 0) {
    float10 r = bea_vcall<float10>(tgt0, 0x16c);                       // 004ff727
    if ((r == (float10)0.0f || r != r) && U32(this_, 0x14) != 0 && FUN_004fd5b0(*cur) != 0) {
      FUN_004fb840(OWNER, *cur);
      uint32_t v = FUN_004fb5a0(OWNER, *cur);
      U32(this_, 0x1c) = v;
      if (v != 0) {
        U32(this_, 0x18) = FUN_004fb500(OWNER, *cur, bea_arg(0));
        return *cur;
      }
      U32(this_, 0x18) = 0;
      return *cur;
    }
  }
  U32(this_, 0x18) = 0;
  U32(this_, 0x1c) = 0;
  int **head = (int **)0x00855090;
  if (U32((uintptr_t)OWNER, 0x138) == 1) {
    head = (int **)0x008550b0;
  } else if (U32((uintptr_t)OWNER, 0x138) == 0) {
    head = (int **)0x008550c0;
  }
  int *node = *head;                                                   // [esp+0x28]
  uint8_t *best = 0;                                                   // [esp+0x20]
  float best_score = 0.0f;                                             // [esp+0x1c]
  float best_w = bea_fcast<float>(0xc97423f0u);                        // [esp+0x10] (-999999.0)
  uint8_t *item = node ? (uint8_t *)*node : 0;
  if (item != 0) {
    do {
      uint8_t *tgt;
      uint32_t flags = U32(item, 0x34);
      if ((flags & 0x20000000) != 0) {
        tgt = bea_vcall<uint8_t *>(item, 0x128);                       // 004ff7fa
      } else if ((flags & 0x10) != 0) {
        tgt = item;
      } else {
        goto next;
      }
      if (tgt == 0) goto next;
      if (FUN_004fd5b0(bea_arg(tgt)) == 0) goto next;
      if (FUN_004fd3d0(OWNER, U32(tgt, 0x138)) == 0) goto next;
      if (FUN_004fb3d0(OWNER, bea_arg(tgt)) == 0) goto next;
      {
        uint8_t *own = (uint8_t *)(uintptr_t)OWNER;
        float10 dx = (float10)F32(item, 0x1c) - (float10)F32(own, 0x1c);
        float10 dy = (float10)F32(item, 0x20) - (float10)F32(own, 0x20);
        float10 dz = (float10)F32(item, 0x24) - (float10)F32(own, 0x24);
        float d2 = (float)((dz * dz + dy * dy) + dx * dx);              // 004ff866-004ff87e
        uint8_t *P = *(uint8_t **)(own + 0x164);                       // ebx (004ff86e)
        float10 t = bea_vcall<float10>(tgt, 0x16c);
        float10 v = ((float10)1.0f - t * (float10)0.01f) * (float10)F32(P, 0x158);
        float10 v2 = v * v;
        if (!((float10)d2 < v2 || (float10)d2 != (float10)d2 || v2 != v2)) goto next;   // test ah, 1 (004ff8ac)
        float10 w;
        if (U32(PTAB, 0x128) != 0) {
          uint32_t e = FUN_004de8d0(GLOBAL_AT(uint32_t, 0x008a9d9c));  // 004ff8d8
          e = e & 0x8000ffff;
          if ((int)e < 0) {
            e = ((e - 1) | 0xffff0000) + 1;
          }
          w = (float10)(int)e * (float10)0.00012207031f;               // fild; fmul (004ff8ef)
        } else if (bea_vcall<int>(tgt, 0x164) == 0 && U32(PTAB, 0x138) == 0) {
          w = (float10)0.0f;                                           // [esp+0x24]
        } else {
          uint32_t f = U32(tgt, 0x34);
          if ((f & 0x20000) != 0) w = F32(PTAB, 0x168);
          else if ((f & 0x4000) != 0) w = F32(PTAB, 0x174);
          else if ((f & 0x400) != 0) w = F32(PTAB, 0x178);
          else if ((f & 0x40000) != 0) w = F32(PTAB, 0x164);
          else if ((f & 0x100) != 0) w = F32(PTAB, 0x16c);
          else if ((f & 0x8000) != 0) w = F32(PTAB, 0x170);
          else w = (float10)0.0f;
          if ((f & 0x80000) != 0) {
            float m = F32(PTAB, 0x17c);
            if (w < (float10)m || w != w || m != m) {                  // fcom; test ah, 1 (004ff9ca)
              w = (float10)m;
            }
          }
        }
        if (w > (float10)best_w) {                                     // test ah, 0x41 (004ff9e3)
          best_w = (float)w;
          best_score = 0.0f;
        } else if (!(w == (float10)best_w || w != w || best_w != best_w)) {   // test ah, 0x40 (004ff9fc)
          goto next;
        }
        float d = (float)__builtin_sqrtl((float10)d2);                  // [esp+0x14]
        float s = (float)((float10)1000.0f - (float10)d);               // [esp+0x18]
        FUN_004fb840(OWNER, bea_arg(tgt));
        uint8_t *at = tgt + 0x1c;                                      // ebx (004ffa26)
        float10 val;
        float10 r1 = FUN_004fb780(OWNER, U32(at, 0), U32(at, 4), U32(at, 8), U32(at, 0xc));
        if (r1 > (float10)d) {                                         // test ah, 0x41; je (004ffa54)
          val = (float10)s;
        } else {
          float10 r2 = FUN_004fb7e0(OWNER, U32(at, 0), U32(at, 4), U32(at, 8), U32(at, 0xc));
          if (r2 < (float10)d || r2 != r2) {                           // test ah, 1 (004ffa86)
            val = (float10)s + (float10)10000.0f;
          } else {
            val = (float10)s + (float10)1000000.0f;
          }
        }
        if (val > (float10)best_score) {                               // test ah, 0x41 (004ffaa5)
          best_score = (float)val;
          best = tgt;
        }
      }
    next:
      node = (int *)node[1];
      item = node ? (uint8_t *)*node : 0;
    } while (item != 0);
    if (best != 0) {
      FUN_00401000(bea_arg(cur), bea_arg(best));                       // 004ffae0
      FUN_004fb840(OWNER, bea_arg(best));
      U32(this_, 0x10) = 0;
      FUN_004fb840(OWNER, *cur);
      if (FUN_004fd5b0(*cur) != 0) {
        uint32_t v = FUN_004fb5a0(OWNER, *cur);
        U32(this_, 0x1c) = v;
        if (v != 0) {
          U32(this_, 0x18) = FUN_004fb500(OWNER, *cur, bea_arg(0));
          U32(this_, 0x10) = 0;
          return *cur;
        }
      }
      U32(this_, 0x10) = 0;
      return *cur;
    }
  }
  FUN_00401000(bea_arg(cur), bea_arg(0));                              // 004ffb45
  U32(this_, 0x10) = 0;
  return *cur;
}

#undef OWNER
#undef PTAB
#undef U32
#undef F32

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004ff710, ap_004ff710));
