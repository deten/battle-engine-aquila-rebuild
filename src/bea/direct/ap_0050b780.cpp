// auto-ported from 0050b780_FUN_0050b780.c (FUN_0050b780, 423 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_00663498 GLOBAL_AT(int, 0x00663498)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0067a748 GLOBAL_AT(int, 0x0067a748)
#define DAT_0067a07c GLOBAL_AT(int, 0x0067a07c)
#define DAT_0067a078 GLOBAL_AT(int, 0x0067a078)
#define s_Deserializing_world_0063d404 ((char*)0x0063d404)
#define s_Deserializing_base_world_0063d3c4 ((char*)0x0063d3c4)
#define s_Deserializing_real_world_positio_0063d384 ((char*)0x0063d384)
#define s_Deserializing_real_world_0063d3a8 ((char*)0x0063d3a8)
#define s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac ((char*)0x0063d2ac)
#define s_Deserializing_base_world_positio_0063d3e0 ((char*)0x0063d3e0)
typedef uint (BEA_THISCALL* FUN_00423910_t)(uint32_t);
static const bea_guard<FUN_00423910_t> FUN_00423910 = {(FUN_00423910_t)0x00423910};
typedef bool (BEA_THISCALL* FUN_00423960_t)(uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00423960_t> FUN_00423960 = {(FUN_00423960_t)0x00423960};
typedef uint32_t (BEA_THISCALL* FUN_00423990_t)(uint32_t);
static const bea_guard<FUN_00423990_t> FUN_00423990 = {(FUN_00423990_t)0x00423990};
typedef undefined4 (BEA_THISCALL* FUN_004239b0_t)(uint32_t);
static const bea_guard<FUN_004239b0_t> FUN_004239b0 = {(FUN_004239b0_t)0x004239b0};
typedef uint32_t (BEA_THISCALL* FUN_0042b500_t)(uint32_t, uint32_t);
static const bea_guard<FUN_0042b500_t> FUN_0042b500 = {(FUN_0042b500_t)0x0042b500};
typedef undefined4 (BEA_THISCALL* FUN_0042b800_t)(uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_0042b800_t> FUN_0042b800 = {(FUN_0042b800_t)0x0042b800};
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_0050b780(void * this_, void *param_1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  local_4 = 0xffffffff;
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Deserializing_world_0063d404));
  FUN_00423910(bea_arg(param_1));
  FUN_00423910(bea_arg(param_1));
  FUN_00423960(bea_arg(param_1), bea_arg((int *)((int)this_ + 0x270)), bea_arg(4), bea_arg(1));
  FUN_00423960(bea_arg(param_1), bea_arg((int)this_ + 0x26c), bea_arg(4), bea_arg(1));
  puVar1 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x28), bea_arg(0x20), bea_arg(s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac), bea_arg(0x284));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    *puVar1 = ((void*)0x005d92d4);
    (*(uint8_t*)((char*)&local_4 + 0)) = 1;
    *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
    FUN_004e5840(bea_arg(puVar1 + 2));
    local_4 = CONCAT31(((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu),2);
    FUN_004e5840(bea_arg(puVar1 + 6));
    *puVar1 = ((void*)0x005dfcb4);
  }
  local_4 = 0xffffffff;
  DAT_0067a748 = puVar1;
  DAT_0067a07c = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac), bea_arg(0x285));
  DAT_0067a078 = FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(1), bea_arg(0x80), bea_arg(s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac), bea_arg(0x286));
  if (*(int *)((int)this_ + 0x270) != -1) {
    FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Deserializing_base_world_positio_0063d3e0));
    FUN_00423910(bea_arg(param_1));
    uVar2 = FUN_004239b0(bea_arg(param_1));
    *(undefined4 *)((int)this_ + 0x278) = uVar2;
    FUN_00423990(bea_arg(param_1));
    FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(s_Deserializing_base_world_0063d3c4), bea_arg(1));
  }
  FUN_0042b500(bea_arg(&DAT_00663498), bea_arg(s_Deserializing_real_world_0063d3a8));
  FUN_00423910(bea_arg(param_1));
  uVar2 = FUN_004239b0(bea_arg(param_1));
  *(undefined4 *)((int)this_ + 0x274) = uVar2;
  FUN_00423990(bea_arg(param_1));
  FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(s_Deserializing_real_world_positio_0063d384), bea_arg(1));
  return FUN_0042b800(bea_arg(&DAT_00663498), bea_arg(s_Deserializing_world_0063d404), bea_arg(1));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050b780, ap_0050b780));
