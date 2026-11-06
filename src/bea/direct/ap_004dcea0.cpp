// auto-ported from 004dcea0_vslot3.c (CRTMesh::vslot3, 538 bytes) by tools/autoport.py
// @hand-fixed 2026-10-29 written from the disassembly: three float results Ghidra lost (camera slot 0x10 at 004dcecd -> fstp scale; [this+8] slot 0x5c at 004dcf83 and slot 0x18 at 004dd090, both ST0) beside used EAX results; sum of squares as (dz*dz + dy*dy) + dx*dx (004dcf4a-004dcf6e), sqrt of the float-rounded sum, ((f * (sqrt/d)) * k) * scale (004dcf86-004dcfa1); fistp qword -> low dword; idiv remainder (004dd0a0)
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef uint32_t (BEA_THISCALL* FUN_00543300_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00543300_t> FUN_00543300 = {(FUN_00543300_t)0x00543300};

static void BEA_THISCALL ap_004dcea0(uint8_t *this_)
{
  alignas(16) float cam[8] = {};        // [esp+0x28] (room up to the frame end), filled by the camera's slot 0
  alignas(16) float tmp[4] = {};        // [esp+0x18], handed to [this+8]'s slot 0
  int *camobj = *(int **)(0x0089c9a4 + GLOBAL_AT(int, 0x0089ce4c) * 4);
  bea_vcall<uint32_t>(camobj, 0x0, cam);
  camobj = *(int **)(0x0089c9a4 + GLOBAL_AT(int, 0x0089ce4c) * 4);
  float scale = (float)bea_vcall<float10>(camobj, 0x10);                 // fstp [esp+0x10] (004dced5)
  if (GLOBAL_AT(char, 0x0083cd5a) != '\0') {
    scale = 1.0f;
  }
  int *mesh = *(int **)(this_ + 8);
  float *p = bea_vcall<float *>(mesh, 0x0, tmp);
  float p0 = p[0], p1 = p[1], p2 = p[2];
  float dx = (float)((float10)cam[0] - (float10)p0);                     // 004dcef3
  float dy = (float)((float10)cam[1] - (float10)p1);
  float dz = (float)((float10)cam[2] - (float10)p2);
  float sumsq = (float)(((float10)dz * (float10)dz + (float10)dy * (float10)dy) + (float10)dx * (float10)dx);
  uint8_t *r = bea_vcall<uint8_t *>(this_, 0x10);                        // 004dcf74
  float d = *(float *)(r + 0x24);
  mesh = *(int **)(this_ + 8);
  float10 f = bea_vcall<float10>(mesh, 0x5c);                           // 004dcf83, ST0
  int *lod = *(int **)(this_ + 0x18);                                    // ebp (004dcf8c)
  float10 q = __builtin_sqrtl((float10)sumsq) / (float10)d;
  float val = (float)(((f * q) * (float10)GLOBAL_AT(float, 0x00631e88)) * (float10)scale);
  if (lod == 0) return;
  float lo = GLOBAL_AT(float, 0x00631e94);
  int above = (val > lo) ? 1 : 0;                                       // test ah, 0x41 (004dcfbb)
  int forced = (GLOBAL_AT(int, 0x00704e48) == 4 ? 1 : 0) | (int)(GLOBAL_AT(uint32_t, 0x0083cd58) & 0xff);
  if ((forced | above) == 0) return;
  float10 t = (((float10)val - (float10)GLOBAL_AT(float, 0x00631e94)) * (float10)255.0f) /
              ((float10)GLOBAL_AT(float, 0x00631e98) - (float10)GLOBAL_AT(float, 0x00631e94));
  int alpha = (int)(uint32_t)__builtin_llrintl(t);                      // fistp qword (004dd00f)
  if (forced != 0 || alpha > 0xff) {
    alpha = 0xff;
  }
  int fade = GLOBAL_AT(int, 0x0063012c);
  if (fade != 0xff) {
    alpha = (fade * alpha) / 0xff;
  }
  if (alpha > 0xff) {
    alpha = 0xff;
  } else if (alpha <= 0) {
    return;
  }
  int frame = 0;
  if (*(int *)((uint8_t *)lod + 0x48) != 0) {
    mesh = *(int **)(this_ + 8);
    if (bea_vcall<int>(mesh, 0x58) != 0) {
      mesh = *(int **)(this_ + 8);
      if (bea_vcall<int>(mesh, 0x58) != 3) {
        int n = *(int *)(*(uint8_t **)(this_ + 0x18) + 0x44);
        mesh = *(int **)(this_ + 8);
        float10 ft = bea_vcall<float10>(mesh, 0x18);                    // 004dd090, ST0
        int k = (int)(uint32_t)__builtin_llrintl(ft * (float10)n);      // fimul; fistp qword
        frame = k % n;
      }
    }
  }
  FUN_00543300(bea_arg(*(void **)(this_ + 0x18)), bea_arg(*(void **)(this_ + 8)), bea_arg(alpha), bea_arg(frame));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004dcea0, ap_004dcea0));
