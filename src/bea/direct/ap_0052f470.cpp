// auto-ported from 0052f470_vslot18.c (CThingPtrDataType::vslot18, 193 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax ok
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
typedef char CThingPtrDataType;
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064c628 ((char*)0x0064c628)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064ccb0 ((char*)0x0064ccb0)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static undefined4 * BEA_THISCALL ap_0052f470(CThingPtrDataType * this_)
{
  int iVar1;
  undefined3 uVar2;
  undefined4 *puVar3;
  void *this_00;
  undefined4 *puVar4;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puVar3 = (undefined4 *)
           FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x76), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064c628), bea_arg(0xe5));
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this_ + 4);
    *puVar3 = ((void*)0x005e4b4c);
    *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
    uVar2 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
    (*(uint8_t*)((char*)&local_4 + 0)) = 2;
    *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
    puVar3[1] = iVar1;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 4) == 0) {
        this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064ccb0), bea_arg(0x18));
        (*(uint8_t*)((char*)&local_4 + 0)) = 3;
        if (this_00 == (void *)0x0) {
          this_00 = (void *)0x0;
        }
        else {
          FUN_004e5840(bea_arg(this_00));
        }
        *(void **)(iVar1 + 4) = this_00;
        uVar2 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
      }
      *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(uVar2) & 0xffffffu) << 8);
      (*(uint8_t*)((char*)&local_4 + 0)) = 2;
      FUN_004e5a80(bea_arg(*(void **)(iVar1 + 4)), bea_arg(puVar3 + 1));
    }
    *puVar3 = ((void*)0x005e4df8);
    puVar4 = puVar3;
  }
  return (undefined4 *)(puVar4);
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x0052f470, ap_0052f470));
