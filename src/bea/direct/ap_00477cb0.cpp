// auto-ported from 00477cb0_FUN_00477cb0.c (FUN_00477cb0, 842 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 written from the disassembly (Ghidra lost the stack slots and returned 0): stdcall(unit), picks the best-scoring target from the team list and returns it in EAX (or its +0x148 owner, 00477fe0-00477fee); the range test compares the squared distance with ((1 - slot16c*0.01) * P[0x158])^2 (00477dc7-00477df6, skipped when slot16c == 0 or NaN: test ah, 0x40); score = (1000 - |d|) + w*10 (00477eb1-00477ec3); bonus 100000/10000 from 0x4fb780 / 0x4fb7e0 (16-byte struct by value: tgt+0x1c) against |d| as stored (float); x87 results of slots 0x16c, 0x4fb780, 0x4fb7e0 taken as float10
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_004e6680_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e6680_t> FUN_004e6680 = {(FUN_004e6680_t)0x004e6680};
typedef uint32_t (BEA_THISCALL* FUN_004fb3d0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb3d0_t> FUN_004fb3d0 = {(FUN_004fb3d0_t)0x004fb3d0};
typedef uint32_t (BEA_THISCALL* FUN_004fb840_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004fb840_t> FUN_004fb840 = {(FUN_004fb840_t)0x004fb840};
typedef float10 (BEA_THISCALL* FUN_004fb780_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb780_t> FUN_004fb780 = {(FUN_004fb780_t)0x004fb780};
typedef float10 (BEA_THISCALL* FUN_004fb7e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004fb7e0_t> FUN_004fb7e0 = {(FUN_004fb7e0_t)0x004fb7e0};

#define U32(p, k) (*reinterpret_cast<uint32_t *>((uint8_t *)(p) + (k)))
#define F32(p, k) (*reinterpret_cast<float *>((uint8_t *)(p) + (k)))

static uint32_t BEA_STDCALL ap_00477cb0(uint8_t *unit)
{
  alignas(16) uint32_t pos[4] = {};                                     // [esp+0x2c], filled by slot 0x120
  int **head = (int **)0x00855090;
  if (U32(unit, 0x7c) == 1) {
    head = (int **)0x008550b0;
  } else if (U32(unit, 0x7c) == 0) {
    head = (int **)0x008550c0;
  }
  uint8_t *best = 0;                                                    // [esp+0x20]
  float best_score = -1.0f;                                             // [esp+0x1c]
  bea_vcall<uint32_t>(unit, 0x120, pos);                                 // 00477cf0
  uint32_t team = bea_vcall<uint32_t>(unit, 0x124);                     // [esp+0x18]
  if (team == 0) return 0;
  int *node = *head;
  uint8_t *item = node ? (uint8_t *)*node : 0;
  while (item != 0) {
    uint8_t *tgt;
    uint32_t flags = U32(item, 0x34);
    if ((flags & 0x20000000) != 0) {
      tgt = bea_vcall<uint8_t *>(item, 0x12c, pos[0], pos[1], pos[2], pos[3]);   // 00477d57
    } else if ((flags & 0x10) != 0) {
      tgt = item;
    } else {
      goto next;
    }
    if (tgt == 0) goto next;
    {
      float10 dx = (float10)F32(tgt, 0x1c) - (float10)bea_fcast<float>(pos[0]);
      float10 dy = (float10)F32(tgt, 0x20) - (float10)bea_fcast<float>(pos[1]);
      float10 dz = (float10)F32(tgt, 0x24) - (float10)bea_fcast<float>(pos[2]);
      float d2 = (float)((dz * dz + dy * dy) + dx * dx);               // 00477d8d-00477daa
      uint8_t *P = *(uint8_t **)(unit + 0xa0);                          // ebp (00477d95)
      int ok = 1;
      float10 t1 = bea_vcall<float10>(tgt, 0x16c);
      if (!(t1 == (float10)0.0f || t1 != t1)) {                         // test ah, 0x40 (00477dc2)
        float10 t2 = bea_vcall<float10>(tgt, 0x16c);
        float10 v = ((float10)1.0f - t2 * (float10)0.01f) * (float10)F32(P, 0x158);
        if ((float10)d2 > v * v) {                                      // fcompp; test ah, 0x41 (00477deb)
          ok = 0;
        }
      }
      if (FUN_004e6680(bea_arg(unit), U32(tgt, 0x138)) == 0) goto next;
      if (FUN_004fb3d0(team, bea_arg(tgt)) == 0) goto next;
      if (ok == 0) goto next;
      uint32_t f = U32(tgt, 0x34);
      float10 w = (float10)0.0f;
      if ((f & 0x20000) != 0) w = F32(P, 0x168);
      else if ((f & 0x4000) != 0) w = F32(P, 0x174);
      else if ((f & 0x400) != 0) w = F32(P, 0x178);
      else if ((f & 0x80000) != 0) w = F32(P, 0x17c);
      else if ((f & 0x40000) != 0) w = F32(P, 0x164);
      else if ((f & 0x100) != 0) w = F32(P, 0x16c);
      else if ((f & 0x8000) != 0) w = F32(P, 0x170);
      float d = (float)__builtin_sqrtl((float10)d2);                     // fstp [esp+0x14] (00477ead)
      float score = (float)(((float10)1000.0f - (float10)d) + w * (float10)10.0f);   // 00477eb1-00477ec5
      FUN_004fb840(team, bea_arg(tgt));
      uint8_t *at = tgt + 0x1c;                                          // edi
      float10 r1 = FUN_004fb780(team, U32(at, 0), U32(at, 4), U32(at, 8), U32(at, 0xc));
      if (!(r1 > (float10)d)) {                                         // test ah, 0x41; je (00477ef8)
        float10 r2 = FUN_004fb7e0(team, U32(at, 0), U32(at, 4), U32(at, 8), U32(at, 0xc));
        if (r2 < (float10)d || r2 != r2) {                              // test ah, 1 (00477f2b)
          score = (float)((float10)score + (float10)10000.0f);
        } else {
          score = (float)((float10)score + (float10)100000.0f);
        }
      }
      float10 val;
      if (bea_vcall<int>(tgt, 0x164) == 0 && bea_vcall<int>(tgt, 0x68) == 0) {
        val = (float10)0.0f;
      } else {
        val = (float10)score;
      }
      if (U32(unit, 0x9c) == 1) {
        float10 ex = (float10)F32(at, 0) - (float10)F32(unit, 0x8c);
        float10 ey = (float10)F32(at, 4) - (float10)F32(unit, 0x90);
        if (ey * ey + ex * ex > (float10)5625.0f) {                      // 00477f85-00477f9e
          val = (float10)-1.0f;
        }
      }
      if (val > (float10)best_score) {                                  // fcom; test ah, 0x41 (00477fa8)
        best_score = (float)val;
        best = tgt;
      }
    }
  next:
    node = (int *)node[1];
    item = node ? (uint8_t *)*node : 0;
  }
  if (best != 0 && U32(best, 0x148) != 0) {
    return U32(best, 0x148);
  }
  return (uint32_t)(uintptr_t)best;
}

#undef U32
#undef F32

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00477cb0, ap_00477cb0));
