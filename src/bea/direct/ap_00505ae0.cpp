// auto-ported from 00505ae0_FUN_00505ae0.c (FUN_00505ae0, 198 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-frame 0x10: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_00854fc0 GLOBAL_AT(int, 0x00854fc0)
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define s_C__dev_ONSLAUGHT2_WaypointManage_0063d1f8 ((char*)0x0063d1f8)
#define s_Loading_waypoints_0063d23c ((char*)0x0063d23c)
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5b20_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5b20_t> FUN_004e5b20 = {(FUN_004e5b20_t)0x004e5b20};
typedef uint32_t (BEA_THISCALL* FUN_00505960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00505960_t> FUN_00505960 = {(FUN_00505960_t)0x00505960};
typedef int (BEA_THISCALL* FUN_00548570_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00548570_t> FUN_00548570 = {(FUN_00548570_t)0x00548570};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_CDECL ap_00505ae0(void *param_1, undefined4 param_2, undefined4 param_3)
{
  undefined4 *this_local;
  alignas(16) uint8_t bea_frame_[0x10] = {};   // the original stack frame (emulate_frame)
  int &local_10 = *reinterpret_cast<int *>(bea_frame_ + 0x10 - 0x10);
  undefined1 * &puStack_8 = *reinterpret_cast<undefined1 * *>(bea_frame_ + 0x10 - 0x8);
  undefined4 &local_4 = *reinterpret_cast<undefined4 *>(bea_frame_ + 0x10 - 0x4);
  FUN_00548570(bea_arg(param_1), bea_arg(&local_10), bea_arg(2));
  while (BEA_LOOP_GUARD(((short)local_10 != 0))) {
    this_local = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x18), bea_arg(0x25), bea_arg(s_C__dev_ONSLAUGHT2_WaypointManage_0063d1f8), bea_arg(0x72));
    if (this_local == (undefined4 *)0x0) {
      this_local = (undefined4 *)0x0;
    }
    else {
      FUN_004e5840(bea_arg(this_local + 2));
      *this_local = ((void*)0x005dfc8c);
      this_local[1] = 0;
    }
    FUN_00505960(bea_arg(this_local), bea_arg(param_1), bea_arg(param_2), bea_arg(param_3));
    FUN_004e5b20(bea_arg(&DAT_00854fc0), bea_arg(this_local));
    local_10 = local_10 + -1;
  }
  return FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(s_Loading_waypoints_0063d23c), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00505ae0, ap_00505ae0));
