// auto-ported from 00533690_FUN_00533690.c (FUN_00533690, 323 bytes) by tools/autoport.py
// @autoport-mode direct (not shadow-testable: verified by static checks and soak)
// @autoport-ehframe: VC6 exception-frame setup removed (NOTES A1-11)
// @autoport-eax unused (2 direct caller(s) overwrite EAX before reading it)
#include "bea/ghidra_compat.h"
#include "bea/hooks.h"
#define BEA_LOOP_GUARD(c) (c)

typedef char BEA_THISCALL;
#define DAT_0089c7f0 GLOBAL_AT(int, 0x0089c7f0)
#define DAT_008a9ac0 GLOBAL_AT(int, 0x008a9ac0)
#define DAT_009c3df0 GLOBAL_AT(int, 0x009c3df0)
#define DAT_0089c528 GLOBAL_AT(int, 0x0089c528)
#define _DAT_0089c528 GLOBAL_AT(int, 0x0089c528)
#define DAT_0089c5e0 GLOBAL_AT(int, 0x0089c5e0)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa40 ((char*)0x0064fa40)
#define s_C__dev_ONSLAUGHT2_MissionScript__0064fa6c ((char*)0x0064fa6c)
typedef uint32_t (BEA_THISCALL* FUN_004e5840_t)(uint32_t);
static const bea_guard<FUN_004e5840_t> FUN_004e5840 = {(FUN_004e5840_t)0x004e5840};
typedef undefined4 * (BEA_THISCALL* FUN_004e5a80_t)(uint32_t, uint32_t);
static const bea_guard<FUN_004e5a80_t> FUN_004e5a80 = {(FUN_004e5a80_t)0x004e5a80};
typedef uint32_t (BEA_THISCALL* FUN_00539980_t)(uint32_t);
static const bea_guard<FUN_00539980_t> FUN_00539980 = {(FUN_00539980_t)0x00539980};
typedef uint32_t (BEA_THISCALL* FUN_00539990_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_00539990_t> FUN_00539990 = {(FUN_00539990_t)0x00539990};
typedef int (BEA_THISCALL* FUN_005490e0_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
static const bea_guard<FUN_005490e0_t> FUN_005490e0 = {(FUN_005490e0_t)0x005490e0};

static void BEA_THISCALL ap_00533690(void * this_, int param_1)
{
  undefined3 uVar1;
  undefined4 *puVar2;
  void *this_00;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  if ((DAT_0089c7f0 == 0) && (DAT_008a9ac0 != 4)) {
    puVar2 = (undefined4 *)
             FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(8), bea_arg(0x5d), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa40), bea_arg(0x11e));
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = ((void*)0x005e4b4c);
      *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
      uVar1 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
      (*(uint8_t*)((char*)&local_4 + 0)) = 2;
      *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(0) & 0xffffffu) << 8);
      puVar2[1] = param_1;
      if (param_1 != 0) {
        if (*(int *)(param_1 + 4) == 0) {
          this_00 = (void *)FUN_005490e0(bea_arg(&DAT_009c3df0), bea_arg(0x10), bea_arg(0x5e), bea_arg(s_C__dev_ONSLAUGHT2_MissionScript__0064fa6c), bea_arg(0x18));
          (*(uint8_t*)((char*)&local_4 + 0)) = 3;
          if (this_00 == (void *)0x0) {
            this_00 = (void *)0x0;
          }
          else {
            FUN_004e5840(bea_arg(this_00));
          }
          *(void **)(param_1 + 4) = this_00;
          uVar1 = ((*(uint32_t*)((char*)&local_4) >> 8) & 0xffffffu);
        }
        *(uint32_t*)((char*)&local_4) = (*(uint32_t*)((char*)&local_4) & ~(0xffffffu << 8)) | (((uint32_t)(uVar1) & 0xffffffu) << 8);
        (*(uint8_t*)((char*)&local_4 + 0)) = 2;
        FUN_004e5a80(bea_arg(*(void **)(param_1 + 4)), bea_arg(puVar2 + 1));
      }
      *puVar2 = ((void*)0x005e4df8);
    }
    local_4 = 0xffffffff;
    _DAT_0089c528 = puVar2;
    if (DAT_008a9ac0 == 4) {
      if (puVar2 != (undefined4 *)0x0) {
        bea_vcall<uint32_t>(puVar2, 0x0, 1);
      }
      FUN_00539980(bea_arg(&DAT_0089c5e0));
      return;
    }
    FUN_00539990(bea_arg(&DAT_0089c5e0), bea_arg(*(undefined4 *)((int)this_ + 0xc)), bea_arg(4), bea_arg(&DAT_0089c528), bea_arg(1));
  }
  return;
}

// @autoport-registration
BEA_HOOKS(BEA_HOOK(0x00533690, ap_00533690));
