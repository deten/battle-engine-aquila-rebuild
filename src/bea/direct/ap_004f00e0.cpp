// auto-ported from 004f00e0_FUN_004f00e0.c (FUN_004f00e0, 273 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_0083d960 GLOBAL_AT(int, 0x0083d960)
#define DAT_009c4004 GLOBAL_AT(int, 0x009c4004)
#define DAT_0083d3e8 GLOBAL_AT(int, 0x0083d3e8)
#define DAT_0083d3e4 GLOBAL_AT(int, 0x0083d3e4)
#define DAT_0083d3e0 GLOBAL_AT(int, 0x0083d3e0)
#define DAT_00662f40 GLOBAL_AT(int, 0x00662f40)
#define DAT_00889a48 GLOBAL_AT(int, 0x00889a48)
#define DAT_00896988 GLOBAL_AT(int, 0x00896988)
#define DAT_0088a0a8 GLOBAL_AT(int, 0x0088a0a8)
#define DAT_0089c9a0 GLOBAL_AT(int, 0x0089c9a0)
#define DAT_00897a98 GLOBAL_AT(int, 0x00897a98)
#define DAT_00672fc8 GLOBAL_AT(int, 0x00672fc8)
#define DAT_008aa9f0 GLOBAL_AT(int, 0x008aa9f0)
typedef uint32_t (BEA_THISCALL* FUN_0042ae70_t)(uint32_t);
static const bea_guard<FUN_0042ae70_t> FUN_0042ae70 = {(FUN_0042ae70_t)0x0042ae70};
typedef uint32_t (BEA_THISCALL* FUN_0042bbc0_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042bbc0_t> FUN_0042bbc0 = {(FUN_0042bbc0_t)0x0042bbc0};
typedef undefined4 (BEA_THISCALL* FUN_00440c00_t)(uint32_t);
static const bea_guard<FUN_00440c00_t> FUN_00440c00 = {(FUN_00440c00_t)0x00440c00};
typedef uint32_t (BEA_THISCALL* FUN_0044b1f0_t)(uint32_t);
static const bea_guard<FUN_0044b1f0_t> FUN_0044b1f0 = {(FUN_0044b1f0_t)0x0044b1f0};
typedef uint32_t (BEA_THISCALL* FUN_004a1ea0_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004a1ea0_t> FUN_004a1ea0 = {(FUN_004a1ea0_t)0x004a1ea0};
typedef uint32_t (BEA_CDECL* FUN_004a52b0_t)(void);
static const bea_guard<FUN_004a52b0_t> FUN_004a52b0 = {(FUN_004a52b0_t)0x004a52b0};
typedef uint32_t (BEA_CDECL* FUN_004a52d0_t)(void);
static const bea_guard<FUN_004a52d0_t> FUN_004a52d0 = {(FUN_004a52d0_t)0x004a52d0};
typedef uint32_t (BEA_THISCALL* FUN_004bb400_t)(uint32_t);
static const bea_guard<FUN_004bb400_t> FUN_004bb400 = {(FUN_004bb400_t)0x004bb400};
typedef uint32_t (BEA_THISCALL* FUN_004e06e0_t)(uint32_t);
static const bea_guard<FUN_004e06e0_t> FUN_004e06e0 = {(FUN_004e06e0_t)0x004e06e0};
typedef uint32_t (BEA_CDECL* FUN_004e5910_t)(void);
static const bea_guard<FUN_004e5910_t> FUN_004e5910 = {(FUN_004e5910_t)0x004e5910};
typedef uint32_t (BEA_THISCALL* FUN_004f2170_t)(uint32_t);
static const bea_guard<FUN_004f2170_t> FUN_004f2170 = {(FUN_004f2170_t)0x004f2170};
typedef uint32_t (BEA_THISCALL* FUN_004f27e0_t)(uint32_t);
static const bea_guard<FUN_004f27e0_t> FUN_004f27e0 = {(FUN_004f27e0_t)0x004f27e0};
typedef uint32_t (BEA_CDECL* FUN_004f2a30_t)(void);
static const bea_guard<FUN_004f2a30_t> FUN_004f2a30 = {(FUN_004f2a30_t)0x004f2a30};
typedef uint32_t (BEA_CDECL* FUN_00501450_t)(void);
static const bea_guard<FUN_00501450_t> FUN_00501450 = {(FUN_00501450_t)0x00501450};
typedef uint32_t (BEA_CDECL* FUN_00501730_t)(void);
static const bea_guard<FUN_00501730_t> FUN_00501730 = {(FUN_00501730_t)0x00501730};
typedef uint32_t (BEA_CDECL* FUN_00510a90_t)(void);
static const bea_guard<FUN_00510a90_t> FUN_00510a90 = {(FUN_00510a90_t)0x00510a90};
typedef uint32_t (BEA_THISCALL* FUN_005157b0_t)(uint32_t);
static const bea_guard<FUN_005157b0_t> FUN_005157b0 = {(FUN_005157b0_t)0x005157b0};
typedef uint32_t (BEA_CDECL* FUN_00516450_t)(void);
static const bea_guard<FUN_00516450_t> FUN_00516450 = {(FUN_00516450_t)0x00516450};
typedef uint32_t (BEA_THISCALL* FUN_0051a340_t)(uint32_t);
static const bea_guard<FUN_0051a340_t> FUN_0051a340 = {(FUN_0051a340_t)0x0051a340};
typedef uint32_t (BEA_CDECL* FUN_00523b30_t)(void);
static const bea_guard<FUN_00523b30_t> FUN_00523b30 = {(FUN_00523b30_t)0x00523b30};
typedef uint32_t (BEA_THISCALL* FUN_0053d3a0_t)(uint32_t);
static const bea_guard<FUN_0053d3a0_t> FUN_0053d3a0 = {(FUN_0053d3a0_t)0x0053d3a0};

static void BEA_CDECL ap_004f00e0(void)
{
  FUN_00510a90();
  FUN_0042bbc0(bea_arg(&DAT_00663498), bea_arg(0), bea_arg(1), bea_arg(0));
  FUN_004f2170(bea_arg(&DAT_0083d960));
  FUN_004a1ea0(bea_arg(&DAT_009c4004), bea_arg(0));
  FUN_00516450();
  if (DAT_0083d3e8 != 0) {
    *(int *)(DAT_0083d3e8 + 0x170) = *(int *)(DAT_0083d3e8 + 0x170) + -1;
    DAT_0083d3e8 = 0;
  }
  if (DAT_0083d3e4 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_0083d3e4 + 8)));
    DAT_0083d3e4 = 0;
  }
  if (DAT_0083d3e0 != 0) {
    FUN_004f27e0(bea_arg((void *)(DAT_0083d3e0 + 8)));
    DAT_0083d3e0 = 0;
  }
  FUN_004a52d0();
  if (DAT_00662f40 != 0) {
    FUN_004bb400(bea_arg(&DAT_00889a48));
    FUN_004e06e0(bea_arg(&DAT_00896988));
  }
  FUN_005157b0(bea_arg(&DAT_0088a0a8));
  FUN_0042ae70(bea_arg(&DAT_00663498));
  FUN_00523b30();
  FUN_0053d3a0(bea_arg(&DAT_0089c9a0));
  FUN_00501730();
  FUN_00501450();
  FUN_004a52d0();
  FUN_004a52b0();
  FUN_004f2a30();
  FUN_0051a340(bea_arg(&DAT_00897a98));
  FUN_0044b1f0(bea_arg(&DAT_00672fc8));
  FUN_00440c00(bea_arg(&DAT_008aa9f0));
  FUN_004e5910();
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x004f00e0, ap_004f00e0));
