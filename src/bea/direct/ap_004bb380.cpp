// auto-ported from 004bb380_FUN_004bb380.c (FUN_004bb380, 125 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_00662ab0 GLOBAL_AT(int, 0x00662ab0)
#define DAT_0066f580 GLOBAL_AT(int, 0x0066f580)
#define s_input_vol____2_8f__master_music_v_00630a08 ((char*)0x00630a08)
typedef uint32_t (BEA_CDECL* FUN_00441740_t)(int, undefined4, ...);
static const bea_guard<FUN_00441740_t> FUN_00441740 = {(FUN_00441740_t)0x00441740};

static void BEA_THISCALL ap_004bb380(void * this_)
{
  float fVar1;
  int iStack_8;
  
  *(undefined1 *)((int)this_ + 8) = 0;
  *(undefined4 *)((int)this_ + 0xc) = 0;
  *(undefined4 *)((int)this_ + 4) = 1;
  bea_vcall<uint32_t>(this_, 0x0);
  *(undefined4 *)((int)this_ + 0x34) = 0x7f;
  *(undefined4 *)((int)this_ + 0x28) = 0x7f;
  fVar1 = bea_fcast<float>(DAT_00662ab0);
  iStack_8 = (int)(longlong)ROUND(bea_fcast<float>(DAT_00662ab0) * 127.0f);
  *(int *)((int)this_ + 0x2c) = iStack_8;
  FUN_00441740(&DAT_0066f580,s_input_vol____2_8f__master_music_v_00630a08,bea_fcast<double>(fVar1),iStack_8);
  DAT_00662ab0 = bea_piece32(fVar1);
  *(undefined4 *)((int)this_ + 0x30) = 0;
  *(undefined1 *)((int)this_ + 0x38) = 1;
  return;
}

// @autoport-registration
// superseded by src/bea/lifted/lift_004bb380.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
