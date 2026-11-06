// auto-ported from 004be1d0_FUN_004be1d0.c (FUN_004be1d0, 590 bytes) by hand
// @hand-fixed 2026-10-29 from the asm: cdecl, 11 stack args; the original reuses its float argument slots for ints (Ghidra's float params used as int): here plain locals: x/y/gx/gy = low dword of fistp qword (0x4be1d7, 0x4be1f3, 0x4be209, 0x4be21f), halved with sar; out[0..1] = the unhalved goal; 0x4bc510 thiscall(this=arg9; x>>1, y>>1, [0x809db4], [0x809db0]); 0x4bc6d0 gets &local_c (x>>1) and &(arg1 slot = y>>1) (0x4be2f3); walk loop with cx/cy in the arg9/arg11 slots handed to 0x4bed30 (0x4be3c6); bytes are (2v+1)>>1; EAX returned as the original leaves it (0x4bc2e0 returns it): count after the direct store, 0 from a failed 0x4bc6d0, cx on a stuck walk, 0x4beea0's result at the end
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

#define DAT_00809db8 GLOBAL_AT(uint32_t, 0x00809db8)
#define DAT_00809db4 GLOBAL_AT(int, 0x00809db4)
#define DAT_00809db0 GLOBAL_AT(int, 0x00809db0)
#define DAT_00809dbc GLOBAL_AT(int, 0x00809dbc)
#define DAT_00829dc4 GLOBAL_AT(int, 0x00829dc4)
#define DAT_00829dc0 GLOBAL_AT(int, 0x00829dc0)
#define DAT_00829dc8 GLOBAL_AT(int, 0x00829dc8)
#define DAT_00630ab4 GLOBAL_AT(int, 0x00630ab4)
#define DAT_00630ab8 GLOBAL_AT(int, 0x00630ab8)
typedef int (BEA_THISCALL* FUN_004bc510_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bc510_t> FUN_004bc510 = {(FUN_004bc510_t)0x004bc510};
typedef int (BEA_THISCALL* FUN_004bc6d0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_004bc6d0_t> FUN_004bc6d0 = {(FUN_004bc6d0_t)0x004bc6d0};
typedef int (BEA_THISCALL* FUN_005491b0_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005491b0_t> FUN_005491b0 = {(FUN_005491b0_t)0x005491b0};
typedef int (BEA_CDECL* FUN_004be420_t)(void);
static const bea_guard<FUN_004be420_t> FUN_004be420 = {(FUN_004be420_t)0x004be420};
typedef void (BEA_CDECL* FUN_004beb30_t)(void);
static const bea_guard<FUN_004beb30_t> FUN_004beb30 = {(FUN_004beb30_t)0x004beb30};
typedef void (BEA_CDECL* FUN_004bed30_t)(int *, int *);
static const bea_guard<FUN_004bed30_t> FUN_004bed30 = {(FUN_004bed30_t)0x004bed30};
typedef uint32_t (BEA_THISCALL* FUN_004beea0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004beea0_t> FUN_004beea0 = {(FUN_004beea0_t)0x004beea0};

static inline void ap_grow(int *o)
{
  if (o[5] <= o[3]) {
    int n = o[5] * 2;
    o[4] = FUN_005491b0(0x009c3df0, (uint32_t)o[4], (uint32_t)n);
    o[5] = n;
    n = o[7] << 1;
    o[6] = FUN_005491b0(0x009c3df0, (uint32_t)o[6], (uint32_t)n);
    o[7] = n;
  }
}

static uint32_t BEA_CDECL ap_004be1d0(float param_1, float param_2, uint32_t param_3, uint32_t param_4, float param_5,
                                      float param_6, uint32_t param_7, uint32_t param_8, void *param_9, uint32_t param_10,
                                      int *param_11)
{
  int *o = param_11;
  int lx = (int)__builtin_llrintl((float10)param_1);
  DAT_00809db8 = (uint32_t)(uintptr_t)param_9;
  lx = lx >> 1;                                                   // [esp+0x10] local_c
  int ly = (int)__builtin_llrintl((float10)param_2) >> 1;         // arg1 slot
  int gx = (int)__builtin_llrintl((float10)param_5);
  DAT_00809db4 = gx >> 1;
  int gy = (int)__builtin_llrintl((float10)param_6);
  DAT_00809db0 = gy >> 1;
  o[0] = gx;
  o[1] = gy;
  o[2] = 0;
  o[3] = 0;
  int r = FUN_004bc510((uint32_t)(uintptr_t)param_9, (uint32_t)lx, (uint32_t)ly, (uint32_t)DAT_00809db4, (uint32_t)DAT_00809db0);
  if (r == 0) {
    int by = (int)((uint32_t)DAT_00809db0 * 2u + 1u);
    int bx = (int)((uint32_t)DAT_00809db4 * 2u + 1u);
    ap_grow(o);
    *(char *)(o[4] + o[3]) = (char)(bx >> 1);
    *(char *)(o[6] + o[3]) = (char)(by >> 1);
    int n = o[3] + 1;
    o[2] = 1;
    o[3] = n;
    return (uint32_t)n;
  }
  r = FUN_004bc6d0((uint32_t)(uintptr_t)param_9, 0x00809db4, 0x00809db0);
  if (r == 0) {
    return 0;
  }
  r = FUN_004bc6d0((uint32_t)(uintptr_t)param_9, (uint32_t)(uintptr_t)&lx, (uint32_t)(uintptr_t)&ly);
  if (r == 0) {
    return 0;
  }
  DAT_00809dbc = ly;
  DAT_00829dc4 = ly;
  DAT_00829dc0 = lx;
  DAT_00829dc8 = lx;
  DAT_00630ab4 = ly + 1;
  DAT_00630ab8 = lx + 1;
  if (FUN_004be420() == 0) {
    FUN_004beb30();
  }
  int cx = DAT_00809db4;                                          // arg9 slot
  int cy = DAT_00809db0;                                          // arg11 slot
  do {
    int px = cx, py = cy;
    int by = (int)((uint32_t)cy * 2u + 1u);
    int bx = (int)((uint32_t)cx * 2u + 1u);
    ap_grow(o);
    *(char *)(o[4] + o[3]) = (char)(bx >> 1);
    *(char *)(o[6] + o[3]) = (char)(by >> 1);
    o[3] = o[3] + 1;
    FUN_004bed30(&cx, &cy);
    if ((cx == px) && (cy == py)) {
      return (uint32_t)cx;
    }
  } while (BEA_LOOP_GUARD((cx != lx) || (cy != ly)));
  uint32_t res = FUN_004beea0((uint32_t)(uintptr_t)o, DAT_00809db8);
  o[2] = 1;
  return res;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004be1d0, ap_004be1d0));
