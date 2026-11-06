// auto-ported from 00412bc0_FUN_00412bc0.c (FUN_00412bc0, 301 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_006236b0 GLOBAL_AT(int, 0x006236b0)
#define DAT_006236b4 GLOBAL_AT(int, 0x006236b4)
#define DAT_006236ac GLOBAL_AT(int, 0x006236ac)
#define DAT_006236b8 GLOBAL_AT(int, 0x006236b8)
#define DAT_006236bc GLOBAL_AT(int, 0x006236bc)
#define DAT_006236c0 GLOBAL_AT(int, 0x006236c0)
#define s_g_dash_end_00623844 ((char*)0x00623844)
#define s__default_0_2__Dash_move_kicks_of_006237e0 ((char*)0x006237e0)
#define s_g_dash_start_006238a8 ((char*)0x006238a8)
#define s__default_25_0__Initial_velocity_g_006236d4 ((char*)0x006236d4)
#define s__default_0_8__When_the_dash_sepe_00623850 ((char*)0x00623850)
#define s__default_0_9__When_the_dash_sepe_006238b8 ((char*)0x006238b8)
#define s_Ag_dash_velocity_006236c3 ((char*)0x006236c3)
#define s_g_dash_length_00623774 ((char*)0x00623774)
#define s_g_dash_friction_0062370c ((char*)0x0062370c)
#define s_g_dash_time_006237d4 ((char*)0x006237d4)
#define s__default_15__Number_of_game_turn_00623784 ((char*)0x00623784)
#define s__default_5__Number_of_game_turns_0062371c ((char*)0x0062371c)
typedef uint32_t (BEA_THISCALL* FUN_004146b0_t)(uint32_t);
static const bea_guard<FUN_004146b0_t> FUN_004146b0 = {(FUN_004146b0_t)0x004146b0};
typedef uint32_t (BEA_THISCALL* FUN_0042b040_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b040_t> FUN_0042b040 = {(FUN_0042b040_t)0x0042b040};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};

static void * BEA_THISCALL ap_00412bc0(void * this_, undefined4 param_1)
{  undefined1 *puStack_8;
  undefined4 local_4;
  FUN_004e5840(bea_arg(this_));
  *(undefined4 *)((int)this_ + 0x20) = param_1;
  *(undefined4 *)((int)this_ + 0x24) = 0xc0490fdb;
  *(undefined4 *)((int)this_ + 0x28) = 0xc0490fdb;
  *(undefined4 *)((int)this_ + 0x10) = 0;
  *(undefined4 *)((int)this_ + 0x18) = 0;
  *(undefined4 *)((int)this_ + 0x1c) = 0;
  FUN_004146b0(bea_arg(this_));
  *(undefined4 *)((int)this_ + 0x14) = 1;
  *(undefined4 *)((int)this_ + 0x3c) = 0;
  *(undefined4 *)((int)this_ + 0x40) = 0;
  *(undefined4 *)((int)this_ + 0x2c) = 0xc1200000;
  *(undefined4 *)((int)this_ + 0x30) = 0xc1200000;
  *(undefined4 *)((int)this_ + 0x34) = 0xc1200000;
  *(undefined4 *)((int)this_ + 0x38) = 0xc1200000;
  *(undefined4 *)((int)this_ + 0x44) = 0;
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_g_dash_start_006238a8), bea_arg(s__default_0_9__When_the_dash_sepe_006238b8), bea_arg(4), bea_arg(&DAT_006236b0), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_g_dash_end_00623844), bea_arg(s__default_0_8__When_the_dash_sepe_00623850), bea_arg(4), bea_arg(&DAT_006236b4), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_g_dash_time_006237d4), bea_arg(s__default_0_2__Dash_move_kicks_of_006237e0), bea_arg(4), bea_arg(&DAT_006236ac), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_g_dash_length_00623774), bea_arg(s__default_15__Number_of_game_turn_00623784), bea_arg(0), bea_arg(&DAT_006236b8), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_g_dash_friction_0062370c), bea_arg(s__default_5__Number_of_game_turns_0062371c), bea_arg(0), bea_arg(&DAT_006236bc), bea_arg(0), bea_arg(0));
  FUN_0042b040(bea_arg(&DAT_00663498), bea_arg(s_Ag_dash_velocity_006236c3 + 1), bea_arg(s__default_25_0__Initial_velocity_g_006236d4), bea_arg(4), bea_arg(&DAT_006236c0), bea_arg(0), bea_arg(0));
  return this_;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00412bc0, ap_00412bc0));
