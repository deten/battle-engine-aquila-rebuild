// auto-ported from 0042a5f0_FUN_0042a5f0.c (FUN_0042a5f0, 376 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_CDECL;
#define DAT_006245cc GLOBAL_AT(int, 0x006245cc)
#define DAT_006245d8 GLOBAL_AT(char, 0x006245d8)
#define DAT_00625098 GLOBAL_AT(int, 0x00625098)
#define DAT_00625068 GLOBAL_AT(int, 0x00625068)
#define s_False_00625060 ((char*)0x00625060)
#define s__f__f__f__f__f__f__f__f__f_00625070 ((char*)0x00625070)
#define s__f__f__f_0062508c ((char*)0x0062508c)
#define s_Unknown_type__00625050 ((char*)0x00625050)
typedef int (BEA_CDECL* FUN_0055de9b_t)(void *, void *, ...);
static const bea_guard<FUN_0055de9b_t> FUN_0055de9b = {(FUN_0055de9b_t)0x0055de9b};

static uint32_t BEA_STDCALL ap_0042a5f0(int param_1, undefined4 param_2)
{
  int iVar1;
  float *pfVar2;
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((iVar1 == 0) || (iVar1 == 1)) {
    return FUN_0055de9b(param_2,&DAT_006245cc,**(int **)(param_1 + 0xa4));
  }
  if (iVar1 == 2) {
    return FUN_0055de9b(param_2,&DAT_006245d8,(char *)(int)**(char **)(param_1 + 0xa4));
  }
  if (iVar1 == 4) {
    return FUN_0055de9b(param_2,&DAT_00625098,(double)**(float **)(param_1 + 0xa4));
  }
  if (iVar1 == 5) {
    pfVar2 = *(float **)(param_1 + 0xa4);
    return FUN_0055de9b(param_2,s__f__f__f_0062508c,(double)*pfVar2,(double)pfVar2[1],(double)pfVar2[2]);
  }
  if (iVar1 == 6) {
    pfVar2 = *(float **)(param_1 + 0xa4);
    return FUN_0055de9b(param_2,s__f__f__f__f__f__f__f__f__f_00625070,(double)*pfVar2,(double)pfVar2[1],
                 (double)pfVar2[2],(double)pfVar2[4],(double)pfVar2[5],(double)pfVar2[6],
                 (double)pfVar2[8],(double)pfVar2[9],(double)pfVar2[10]);
  }
  if (iVar1 != 3) {
    return FUN_0055de9b(param_2,s_Unknown_type__00625050);
  }
  if (**(char **)(param_1 + 0xa4) != '\0') {
    return FUN_0055de9b(param_2,&DAT_00625068);
  }
  return FUN_0055de9b(param_2,s_False_00625060);
}

// @autoport-registration
// superseded by src/bea/lifted/lift_0042a5f0.cpp (2026-11-05): tools/fuzz_check.py found this port
// apart from the original on made-up states while the lift matched it; the function runs in no
// test. Kept, unregistered, as the readable version.
