// auto-ported from 00505d00_FUN_00505d00.c (FUN_00505d00, 12 bytes) by tools/autoport.py
// @autoport-mode verified
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"

typedef char BEA_THISCALL;
typedef void (BEA_THISCALL* FUN_004e5840_t)(void *);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};

static void * BEA_THISCALL ap_00505d00(void * this_)
{
  FUN_004e5840(this_);
  return this_;
}

// @autoport-registration (verified: 1818 shadow calls, 0 mismatches)
BEA_HOOKS(BEA_HOOK(0x00505d00, ap_00505d00));
