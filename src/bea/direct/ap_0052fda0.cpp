// auto-ported from 0052fda0_FUN_0052fda0.c (FUN_0052fda0, 144 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-frame 0x30: a stack local's address escapes; locals keep the original frame layout
// @autoport-eax unused (EAX is the last callee's EAX on every path: passed through)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089c5e0 GLOBAL_AT(int, 0x0089c5e0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064cce0 ((char*)0x0064cce0)
typedef uint32_t (BEA_THISCALL* FUN_00539a60_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00539a60_t> FUN_00539a60 = {(FUN_00539a60_t)0x00539a60};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static uint32_t BEA_THISCALL ap_0052fda0(void * this_)
{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  alignas(16) uint8_t bea_frame_[0x30] = {};   // the original stack frame (emulate_frame)
  undefined4 (&local_28)[10] = *reinterpret_cast<undefined4 (*)[10]>(bea_frame_ + 0x30 - 0x28);
  piVar6 = *(int **)((int)this_ + 0xc);
  iVar5 = 0;
  if (piVar6 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar6;
  }
  if (iVar3 != 0) {
    puVar4 = local_28;
    do {
      puVar2 = (undefined4 *)
               FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x18), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064cce0), bea_arg(0x96));
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined1 *)(*(int *)(iVar3 + 4) + 0x14);
        *puVar2 = ((void*)0x005e4d50);
        *(undefined1 *)(puVar2 + 1) = uVar1;
      }
      *puVar4 = puVar2;
      piVar6 = (int *)piVar6[1];
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
      if (piVar6 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar6;
      }
    } while (BEA_LOOP_GUARD((iVar3 != 0)));
  }
  return FUN_00539a60(bea_arg(&DAT_0089c5e0), bea_arg(*(undefined4 *)((int)this_ + 0x1c)), bea_arg(*(undefined4 *)((int)this_ + 8)), bea_arg(local_28), bea_arg(iVar5));
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052fda0, ap_0052fda0));
