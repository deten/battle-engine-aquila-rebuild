// auto-ported from 0050d580_FUN_0050d580.c (FUN_0050d580, 252 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac ((char*)0x0063d2ac)
typedef void * (BEA_THISCALL* FUN_004bc260_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004bc260_t> FUN_004bc260 = {(FUN_004bc260_t)0x004bc260};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 BEA_THISCALL ap_0050d580(void * this_)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined1 *puStack_8;
  undefined4 local_4;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2004), bea_arg(0x25), bea_arg(s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac), bea_arg(0x536));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004bc260(bea_arg(pvVar1), bea_arg(0x420c0000));
  }
  *(undefined4 *)((int)this_ + 0x200) = uVar2;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2004), bea_arg(0x25), bea_arg(s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac), bea_arg(0x537));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004bc260(bea_arg(pvVar1), bea_arg(0x42340000));
  }
  *(undefined4 *)((int)this_ + 0x204) = uVar2;
  pvVar1 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x2004), bea_arg(0x25), bea_arg(s_C__dev_ONSLAUGHT2_world_cpp_0063d2ac), bea_arg(0x538));
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_004bc260(bea_arg(pvVar1), bea_arg(0x42700000));
  }
  *(undefined4 *)((int)this_ + 0x208) = uVar2;
  return uVar2;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0050d580, ap_0050d580));
